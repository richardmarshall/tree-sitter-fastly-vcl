const
  assignment_operators = ['=', '+=', '-=', '*=', '/=', '%=', '|=', '&=', '^=', '<<=', '>>=', 'rol=', 'ror=', '&&=', '||='],
  conditional_operators = ['==', '!=', '~', '!~', '>', '<', '>=', '<='],
  terminator = ';';

module.exports = grammar({
  name: 'fastly_vcl',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat($._declaration),

    comment: () => token(
      choice(
        seq('#', /.*/),
        seq('//', /.*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
    ),

    // declarations

    _declaration: $ => choice(
      $.acl_declaration,
      $.backend_declaration,
      $.director_declaration,
      $.penaltybox_declaration,
      $.ratecounter_declaration,
      $.sub_declaration,
      $.table_declaration,
    ),

    acl_declaration: $ => seq(
      'acl',
      $.ident,
      '{',
      '}',
    ),

    backend_declaration: $ => seq(
      'backend',
      $.ident,
      '{',
      '}',
    ),

    director_declaration: $ => seq(
      'director',
      $.ident,
      '{',
      '}',
    ),

    penaltybox_declaration: $ => seq(
      'penaltybox',
      $.ident,
      '{',
      '}',
    ),

    ratecounter_declaration: $ => seq(
      'ratecounter',
      $.ident,
      '{',
      '}',
    ),

    sub_declaration: $ => choice(
      $.void_sub_declaration,
      $.typed_sub_declaration,
    ),

    table_declaration: $ => seq(
      'table',
      $.ident,
      optional($.type),
      '{',
      '}',
    ),

    void_sub_declaration: $ => seq(
      'sub',
      $.ident,
      $.block
    ),

    typed_sub_declaration: $ => seq(
      'sub',
      $.ident,
      $.type,
      $.block
    ),

    // statements
    add_statement: $ => seq(
      'add',
      field('left', $.dot_ident),
      field('operator', '='),
      field('right', $._expression),
    ),

    call_statement: $ => seq(
      'call',
      field('ident', $.ident),
      optional(seq('(', ')')),
    ),

    declare_statement: $ => seq(
      'declare',
      'local',
      field('name', $.dot_ident),
      field('type', $.type),
    ),

    error_statement: $ => seq(
      'error',
      optional(
        seq(
          $.number,
          optional(
            $._string_literal,
          ),
        ),
      ),
    ),

    esi_statement: $ => seq(
      'esi',
    ),

    include_statement: $ => seq(
      'include',
      $._string_literal,
    ),

    log_statement: $ => seq(
      'log',
      $._expression,
    ),

    remove_statement: $ => seq(
      'remove',
      $.dot_ident,
    ),

    restart_statement: $ => seq(
      'restart',
    ),

    return_statement: $ => seq(
      'return',
      optional(choice(
        seq('(', $.ident, ')'),
      $._expression,
      )),
    ),

    set_statement: $ => seq(
      'set',
      field('left', $.dot_ident),
      field('operator', choice(...assignment_operators)),
      field('right', $._expression),
    ),

    synthetic_statement: $ => seq(
      'synthetic',
      $._string_literal,
    ),

    synthetic_base64_statement: $ => seq(
      'synthetic.base64',
      $._string_literal,
    ),

    unset_statement: $ => seq(
      'unset',
      $.dot_ident,
    ),

    break_statement: $ => seq(
      'break',
    ),

    fallthrough_statement: $ => seq(
      'fallthrough',
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $.conditional_expression),
      field('consequence', $.block),
      repeat($.else_if_statement),
      optional($.else_statement),
    ),

    elsif_keyword: $ => choice(seq('else', 'if'), 'elsif', 'elseif'),

    else_if_statement: $ => seq(
      field('keyword', $.elsif_keyword),
      field('condition', $.conditional_expression),
      field('consequence', $.block),
    ),

    else_statement: $ => seq(
      'else',
      field('consequence', $.block),
    ),

    switch_statement: $ => seq(
      'switch',
      '(',
      field('control', $.dot_ident),
      ')',
      '{',
      repeat(choice($.case_statement, $.default_case_statement)),
      '}',
    ),

    case_statement: $ => seq(
      'case',
      field('test', seq(
        optional('~'),
        $._string_literal,
      )),
      ':',
      $._statement_list,
    ),

    default_case_statement: $ => seq(
      'default',
      ':',
      $._statement_list,
    ),

    labeled_statement: $ => seq(
      field('label', alias($.ident, $.label_name)),
      ':',
      $._statement,
    ),

    empty_labeled_statement: $ => seq(
      field('label', alias($.ident, $.label_name)),
      ':',
    ),


    _line_statement: $ => seq(
      choice(
        $.add_statement,
        $.call_statement,
        $.declare_statement,
        $.error_statement,
        $.esi_statement,
        $.include_statement,
        $.log_statement,
        $.remove_statement,
        $.restart_statement,
        $.return_statement,
        $.set_statement,
        $.synthetic_statement,
        $.synthetic_base64_statement,
        $.unset_statement,
        $.break_statement,
        $.fallthrough_statement,
      ),
      terminator,
    ),

    _block_statement: $=> choice(
      $.if_statement,
      $.switch_statement,
    ),

    _statement: $ => choice(
      $._line_statement,
      $._block_statement,
    ),

    conditional_expression: $ => seq(
      '(', $._expression, ')',
    ),

    argument_list: $ => seq(
      '(',
      optional(seq(
        $._expression,
        repeat(seq(',', $._expression)),
      )),
      ')',
    ),

    type: $ => choice(
      'BOOL',
      'INTEGER',
      'FLOAT',
      'TIME',
      'RTIME',
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}',
    ),

    _statement_list: $ => choice(
      seq(
        $._statement,
        repeat($._statement),
        optional(seq(
          optional(alias($.empty_labeled_statement, $.labeled_statement)),
        )),
      ),
      alias($.empty_labeled_statement, $.labeled_statement),
    ),

    _expression: $ => choice(
      $.ident,
      $.number
    ),

    ident: $ => /[a-zA-Z][\W-]*/,
    dot_ident: $ => token(
      seq(
        /[a-zA-Z][\W-]*/,
        token.immediate(
          repeat(
            seq(
              token.immediate('.'),
              token.immediate(/\w[\w-]*/),
            ),
          ),
        ),
      ),
    ),

    number: $ => /\d+/,

    _string_literal: $ => choice(
      $.short_string_literal,
      $.long_string_literal,
    ),

    short_string_literal: _ => token(seq(
      '"',
      repeat(/[^"]/),
      '"',
    )),

    long_string_literal: _ => token(seq(
      '{"',
      repeat(/[^"]/),
      '"}',
    )),
  }
});
