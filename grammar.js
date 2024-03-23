const
  PREC = {
    call: 5,
    unary: 4,
    conditional: 3,
    and: 2,
    or: 1,
  },
  assignment_operators = ['=', '+=', '-=', '*=', '/=', '%=', '|=', '&=', '^=', '<<=', '>>=', 'rol=', 'ror=', '&&=', '||='],
  conditional_operators = ['==', '!=', '~', '!~', '>', '<', '>=', '<=', '||', '&&'],
  terminator = ';';

module.exports = grammar({
  name: 'fastly_vcl',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(choice($._declaration, seq($.include_statement, ';'))),

    comment: () => token(
      choice(
        seq('#', /[^\n]*/),
        seq('//', /[^\n]*/),
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
      field('body', seq(
        '{',
        seq(
          optional('!'),
          $.string,
          optional(seq('/', $.number)),
        ),
        '}',
      )),
    ),

    backend_declaration: $ => seq(
      'backend',
      $.ident,
      field('body', seq(
        '{',
        repeat($.dot_property),
        '}',
      )),
    ),

    director_declaration: $ => seq(
      'director',
      $.ident,
      field('body', seq(
        '{',
        repeat($.dot_property),
        '}',
      )),
    ),

    dot_property: $ => seq(
      '.',
      $.ident,
      '=',
      choice(
        $._expression,
        seq(
          '{',
          repeat($.dot_property),
          '}',
        ),
      ),
      ';',
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
      repeat(
        seq(
          $.string,
          ':',
          choice($.literal, $.ident),
        ),
      ),

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
      field('ident', choice($.ident, $.dot_ident)),
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
            $.string,
          ),
        ),
      ),
    ),

    esi_statement: $ => seq(
      'esi',
    ),

    include_statement: $ => seq(
      'include',
      $.string,
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
        seq('(', $.states, ')'),
        $._expression,
      )),
    ),

    states: $ => choice(
      'deliver',
      'deliver_stale',
      'error',
      'fetch',
      'hash',
      'lookup',
      'pass',
      'restart',
      'upgrade',
    ),

    set_statement: $ => seq(
      'set',
      field('left', $.dot_ident),
      field('operator', choice(...assignment_operators)),
      field('right', $._expression),
    ),

    synthetic_statement: $ => seq(
      'synthetic',
      $.string,
    ),

    synthetic_base64_statement: $ => seq(
      'synthetic.base64',
      $.string,
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
        $.string,
      )),
      ':',
      $._statement_list,
    ),

    default_case_statement: $ => seq(
      'default',
      ':',
      $._statement_list,
    ),

    statement_label: $ => seq(
      field('label', alias($.ident, $.label_name)),
      ':'
    ),

    goto_statement: $ => seq(
      'goto',
      $.ident,
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
        $.function_call_statement,
        $.goto_statement,
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
      $.statement_label,
    ),

    conditional_expression: $ => seq(
      '(', $._expression, ')',
    ),

    function_call_expression: $ => prec(
      PREC.call,
      seq(
        field('ident', choice($.dot_ident, $.ident)),
        field('args', $.argument_list),
      ),
    ),
    function_call_statement: $ => $.function_call_expression,

    argument_list: $ => seq(
      '(',
      optional(seq(
        $._expression,
        repeat(seq(',', $._expression)),
      )),
      ')',
    ),

    type: $ => choice(
      'ACL',
      'BACKEND',
      'BOOL',
      'FLOAT',
      'INTEGER',
      'IP',
      'RTIME',
      'STRING',
      'TIME',
    ),

    block: $ => seq(
      '{',
      optional($._statement_list),
      '}',
    ),

    _statement_list: $ => seq(
      $._statement,
      repeat($._statement),
    ),

    _expression: $ => choice(
      $.ident,
      $.dot_ident,
      $.number,
      $.concat,
      $.string,
      $.bool,
      $.rtime,
      $.unary_expression,
      $.binary_expression,
      $.conditional_expression,
      $.function_call_expression,
    ),

    concat: $ => seq(
      choice($.string, $.ident, $.dot_ident),
      repeat1(
        seq(
        optional('+'),
        choice($.string, $.ident, $.dot_ident),
        ),
      ),
    ),

    ident: $ => /[a-zA-Z][\W-]*/,
    dot_ident: $ => token(
      seq(
        /[a-zA-Z][\W-]*/,
        token.immediate(
          seq(
            repeat(
              seq(
                token.immediate('.'),
                token.immediate(/\w[\w-]*/),
              ),
            ),
            optional(
              field('field',
                seq(
                  token.immediate(':'),
                  token.immediate(/\w[\w-]*/),
                ),
              ),
            ),
          ),
        ),
      ),
    ),

    number: $ => choice(/\d+/, seq('0x', /[\da-fA-F]+/)),
    bool: $ => choice('true', 'false'),
    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\n%]+/)),
          $.escape_sequence,
        )),
        '"'
      ),
      token(seq('{"', token.immediate(/[^"]*"+([^}"][^"]*"+)*/), token.immediate('}'))),
    ),
    rtime: $ => seq(
      $.number,
      choice(
        'ms', 's', 'm', 'h', 'd', 'y',
      ),
    ),

    literal: $ => choice(
      $.number,
      $.bool,
      $.string,
      $.rtime,
    ),

    escape_sequence: $ => seq(
      '%',
      choice(
        /[0-9a-fA-F]{2}/,
        seq(
          'u',
          choice(
            /[0-9a-fA-F]{4}/,
            seq(
              '{',
              /[0-9a-fA-F]{1,6}/,
              '}',
            ),
          )
        ),
      ),
    ),

    unary_expression: $ => prec(PREC.unary, choice(
      seq(
        field('operator', choice('+', '-', '!')),
        field('operand', $._expression),
      ),
      seq(
        field('operand', $.number),
        field('operator', '%'),
      ),
    )),

    binary_expression: $ => {
      const table = [
        [PREC.conditional, choice(...conditional_operators)],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ];

      return choice(...table.map(([precedence, operator]) =>
        // @ts-ignore
        prec.left(precedence, seq(
          field('left', $._expression),
          // @ts-ignore
          field('operator', operator),
          field('right', $._expression),
        )),
      ));
    },
  }
});
