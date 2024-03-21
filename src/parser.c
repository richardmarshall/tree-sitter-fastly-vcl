#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_acl = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_backend = 5,
  anon_sym_director = 6,
  anon_sym_penaltybox = 7,
  anon_sym_ratecounter = 8,
  anon_sym_table = 9,
  anon_sym_sub = 10,
  anon_sym_add = 11,
  anon_sym_EQ = 12,
  anon_sym_call = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_declare = 16,
  anon_sym_local = 17,
  anon_sym_error = 18,
  anon_sym_esi = 19,
  anon_sym_include = 20,
  anon_sym_log = 21,
  anon_sym_remove = 22,
  anon_sym_restart = 23,
  anon_sym_return = 24,
  anon_sym_set = 25,
  anon_sym_PLUS_EQ = 26,
  anon_sym_DASH_EQ = 27,
  anon_sym_STAR_EQ = 28,
  anon_sym_SLASH_EQ = 29,
  anon_sym_PERCENT_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_AMP_EQ = 32,
  anon_sym_CARET_EQ = 33,
  anon_sym_LT_LT_EQ = 34,
  anon_sym_GT_GT_EQ = 35,
  anon_sym_rol_EQ = 36,
  anon_sym_ror_EQ = 37,
  anon_sym_AMP_AMP_EQ = 38,
  anon_sym_PIPE_PIPE_EQ = 39,
  anon_sym_synthetic = 40,
  anon_sym_synthetic_DOTbase64 = 41,
  anon_sym_unset = 42,
  anon_sym_break = 43,
  anon_sym_fallthrough = 44,
  anon_sym_if = 45,
  anon_sym_else = 46,
  anon_sym_elsif = 47,
  anon_sym_elseif = 48,
  anon_sym_switch = 49,
  anon_sym_case = 50,
  anon_sym_TILDE = 51,
  anon_sym_COLON = 52,
  anon_sym_default = 53,
  anon_sym_SEMI = 54,
  anon_sym_COMMA = 55,
  anon_sym_BOOL = 56,
  anon_sym_INTEGER = 57,
  anon_sym_FLOAT = 58,
  anon_sym_TIME = 59,
  anon_sym_RTIME = 60,
  sym_ident = 61,
  sym_dot_ident = 62,
  sym_number = 63,
  sym_short_string_literal = 64,
  sym_long_string_literal = 65,
  sym_source_file = 66,
  sym__declaration = 67,
  sym_acl_declaration = 68,
  sym_backend_declaration = 69,
  sym_director_declaration = 70,
  sym_penaltybox_declaration = 71,
  sym_ratecounter_declaration = 72,
  sym_sub_declaration = 73,
  sym_table_declaration = 74,
  sym_void_sub_declaration = 75,
  sym_typed_sub_declaration = 76,
  sym_add_statement = 77,
  sym_call_statement = 78,
  sym_declare_statement = 79,
  sym_error_statement = 80,
  sym_esi_statement = 81,
  sym_include_statement = 82,
  sym_log_statement = 83,
  sym_remove_statement = 84,
  sym_restart_statement = 85,
  sym_return_statement = 86,
  sym_set_statement = 87,
  sym_synthetic_statement = 88,
  sym_synthetic_base64_statement = 89,
  sym_unset_statement = 90,
  sym_break_statement = 91,
  sym_fallthrough_statement = 92,
  sym_if_statement = 93,
  sym_elsif_keyword = 94,
  sym_else_if_statement = 95,
  sym_else_statement = 96,
  sym_switch_statement = 97,
  sym_case_statement = 98,
  sym_default_case_statement = 99,
  sym_empty_labeled_statement = 100,
  sym__line_statement = 101,
  sym__block_statement = 102,
  sym__statement = 103,
  sym_conditional_expression = 104,
  sym_type = 105,
  sym_block = 106,
  sym__statement_list = 107,
  sym__expression = 108,
  sym__string_literal = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_if_statement_repeat1 = 111,
  aux_sym_switch_statement_repeat1 = 112,
  aux_sym__statement_list_repeat1 = 113,
  alias_sym_label_name = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_acl] = "acl",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_backend] = "backend",
  [anon_sym_director] = "director",
  [anon_sym_penaltybox] = "penaltybox",
  [anon_sym_ratecounter] = "ratecounter",
  [anon_sym_table] = "table",
  [anon_sym_sub] = "sub",
  [anon_sym_add] = "add",
  [anon_sym_EQ] = "=",
  [anon_sym_call] = "call",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_declare] = "declare",
  [anon_sym_local] = "local",
  [anon_sym_error] = "error",
  [anon_sym_esi] = "esi",
  [anon_sym_include] = "include",
  [anon_sym_log] = "log",
  [anon_sym_remove] = "remove",
  [anon_sym_restart] = "restart",
  [anon_sym_return] = "return",
  [anon_sym_set] = "set",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_rol_EQ] = "rol=",
  [anon_sym_ror_EQ] = "ror=",
  [anon_sym_AMP_AMP_EQ] = "&&=",
  [anon_sym_PIPE_PIPE_EQ] = "||=",
  [anon_sym_synthetic] = "synthetic",
  [anon_sym_synthetic_DOTbase64] = "synthetic.base64",
  [anon_sym_unset] = "unset",
  [anon_sym_break] = "break",
  [anon_sym_fallthrough] = "fallthrough",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_elsif] = "elsif",
  [anon_sym_elseif] = "elseif",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_TIME] = "TIME",
  [anon_sym_RTIME] = "RTIME",
  [sym_ident] = "ident",
  [sym_dot_ident] = "dot_ident",
  [sym_number] = "number",
  [sym_short_string_literal] = "short_string_literal",
  [sym_long_string_literal] = "long_string_literal",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_acl_declaration] = "acl_declaration",
  [sym_backend_declaration] = "backend_declaration",
  [sym_director_declaration] = "director_declaration",
  [sym_penaltybox_declaration] = "penaltybox_declaration",
  [sym_ratecounter_declaration] = "ratecounter_declaration",
  [sym_sub_declaration] = "sub_declaration",
  [sym_table_declaration] = "table_declaration",
  [sym_void_sub_declaration] = "void_sub_declaration",
  [sym_typed_sub_declaration] = "typed_sub_declaration",
  [sym_add_statement] = "add_statement",
  [sym_call_statement] = "call_statement",
  [sym_declare_statement] = "declare_statement",
  [sym_error_statement] = "error_statement",
  [sym_esi_statement] = "esi_statement",
  [sym_include_statement] = "include_statement",
  [sym_log_statement] = "log_statement",
  [sym_remove_statement] = "remove_statement",
  [sym_restart_statement] = "restart_statement",
  [sym_return_statement] = "return_statement",
  [sym_set_statement] = "set_statement",
  [sym_synthetic_statement] = "synthetic_statement",
  [sym_synthetic_base64_statement] = "synthetic_base64_statement",
  [sym_unset_statement] = "unset_statement",
  [sym_break_statement] = "break_statement",
  [sym_fallthrough_statement] = "fallthrough_statement",
  [sym_if_statement] = "if_statement",
  [sym_elsif_keyword] = "elsif_keyword",
  [sym_else_if_statement] = "else_if_statement",
  [sym_else_statement] = "else_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym_default_case_statement] = "default_case_statement",
  [sym_empty_labeled_statement] = "labeled_statement",
  [sym__line_statement] = "_line_statement",
  [sym__block_statement] = "_block_statement",
  [sym__statement] = "_statement",
  [sym_conditional_expression] = "conditional_expression",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__expression] = "_expression",
  [sym__string_literal] = "_string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [alias_sym_label_name] = "label_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_acl] = anon_sym_acl,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_backend] = anon_sym_backend,
  [anon_sym_director] = anon_sym_director,
  [anon_sym_penaltybox] = anon_sym_penaltybox,
  [anon_sym_ratecounter] = anon_sym_ratecounter,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_restart] = anon_sym_restart,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_rol_EQ] = anon_sym_rol_EQ,
  [anon_sym_ror_EQ] = anon_sym_ror_EQ,
  [anon_sym_AMP_AMP_EQ] = anon_sym_AMP_AMP_EQ,
  [anon_sym_PIPE_PIPE_EQ] = anon_sym_PIPE_PIPE_EQ,
  [anon_sym_synthetic] = anon_sym_synthetic,
  [anon_sym_synthetic_DOTbase64] = anon_sym_synthetic_DOTbase64,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_fallthrough] = anon_sym_fallthrough,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elsif] = anon_sym_elsif,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_TIME] = anon_sym_TIME,
  [anon_sym_RTIME] = anon_sym_RTIME,
  [sym_ident] = sym_ident,
  [sym_dot_ident] = sym_dot_ident,
  [sym_number] = sym_number,
  [sym_short_string_literal] = sym_short_string_literal,
  [sym_long_string_literal] = sym_long_string_literal,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_acl_declaration] = sym_acl_declaration,
  [sym_backend_declaration] = sym_backend_declaration,
  [sym_director_declaration] = sym_director_declaration,
  [sym_penaltybox_declaration] = sym_penaltybox_declaration,
  [sym_ratecounter_declaration] = sym_ratecounter_declaration,
  [sym_sub_declaration] = sym_sub_declaration,
  [sym_table_declaration] = sym_table_declaration,
  [sym_void_sub_declaration] = sym_void_sub_declaration,
  [sym_typed_sub_declaration] = sym_typed_sub_declaration,
  [sym_add_statement] = sym_add_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_declare_statement] = sym_declare_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_esi_statement] = sym_esi_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_log_statement] = sym_log_statement,
  [sym_remove_statement] = sym_remove_statement,
  [sym_restart_statement] = sym_restart_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_set_statement] = sym_set_statement,
  [sym_synthetic_statement] = sym_synthetic_statement,
  [sym_synthetic_base64_statement] = sym_synthetic_base64_statement,
  [sym_unset_statement] = sym_unset_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_fallthrough_statement] = sym_fallthrough_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elsif_keyword] = sym_elsif_keyword,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_default_case_statement] = sym_default_case_statement,
  [sym_empty_labeled_statement] = sym_empty_labeled_statement,
  [sym__line_statement] = sym__line_statement,
  [sym__block_statement] = sym__block_statement,
  [sym__statement] = sym__statement,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__expression] = sym__expression,
  [sym__string_literal] = sym__string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [alias_sym_label_name] = alias_sym_label_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_acl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_director] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_penaltybox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ratecounter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synthetic_DOTbase64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallthrough] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elsif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTIME] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_short_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_acl_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_backend_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_director_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_penaltybox_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_ratecounter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_void_sub_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_sub_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_add_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declare_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_esi_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_log_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_restart_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_synthetic_base64_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_fallthrough_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elsif_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_default_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_labeled_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__line_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__block_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_label_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_consequence = 2,
  field_control = 3,
  field_ident = 4,
  field_keyword = 5,
  field_label = 6,
  field_left = 7,
  field_name = 8,
  field_operator = 9,
  field_right = 10,
  field_test = 11,
  field_type = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_control] = "control",
  [field_ident] = "ident",
  [field_keyword] = "keyword",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_test] = "test",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ident, 1},
  [1] =
    {field_label, 0},
  [2] =
    {field_condition, 1},
    {field_consequence, 2},
  [4] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [7] =
    {field_name, 2},
    {field_type, 3},
  [9] =
    {field_consequence, 1},
  [10] =
    {field_condition, 1},
    {field_consequence, 2},
    {field_keyword, 0},
  [13] =
    {field_control, 2},
  [14] =
    {field_test, 1},
  [15] =
    {field_test, 1},
    {field_test, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_label_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 5,
  [9] = 2,
  [10] = 5,
  [11] = 3,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 16,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 24,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 22,
  [35] = 24,
  [36] = 22,
  [37] = 24,
  [38] = 28,
  [39] = 31,
  [40] = 33,
  [41] = 30,
  [42] = 32,
  [43] = 29,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 24,
  [51] = 22,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 61,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 92,
  [95] = 95,
  [96] = 95,
  [97] = 87,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 109,
  [153] = 108,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 108,
  [161] = 161,
  [162] = 108,
  [163] = 163,
  [164] = 108,
  [165] = 165,
  [166] = 166,
  [167] = 110,
  [168] = 135,
  [169] = 138,
  [170] = 113,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == 'B') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '^') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(125);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '~') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '~') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(341);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'B') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '{') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '}') ADVANCE(178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '}') ADVANCE(178);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(174);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(216);
      if (lookahead == '|') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'G') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(252);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(240);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(230);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 168:
      if (lookahead == 'x') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 170:
      if (lookahead == '}') ADVANCE(342);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_acl);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_penaltybox);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ratecounter);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_esi);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_restart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_rol_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ror_EQ);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == 'y') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(311);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_short_string_literal);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_long_string_literal);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_acl] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_backend] = ACTIONS(1),
    [anon_sym_director] = ACTIONS(1),
    [anon_sym_penaltybox] = ACTIONS(1),
    [anon_sym_ratecounter] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_restart] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_rol_EQ] = ACTIONS(1),
    [anon_sym_ror_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_synthetic] = ACTIONS(1),
    [anon_sym_synthetic_DOTbase64] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_fallthrough] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elsif] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [anon_sym_RTIME] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_short_string_literal] = ACTIONS(1),
    [sym_long_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(150),
    [sym__declaration] = STATE(45),
    [sym_acl_declaration] = STATE(45),
    [sym_backend_declaration] = STATE(45),
    [sym_director_declaration] = STATE(45),
    [sym_penaltybox_declaration] = STATE(45),
    [sym_ratecounter_declaration] = STATE(45),
    [sym_sub_declaration] = STATE(45),
    [sym_table_declaration] = STATE(45),
    [sym_void_sub_declaration] = STATE(49),
    [sym_typed_sub_declaration] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_acl] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
    [anon_sym_director] = ACTIONS(11),
    [anon_sym_penaltybox] = ACTIONS(13),
    [anon_sym_ratecounter] = ACTIONS(15),
    [anon_sym_table] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      sym_ident,
    STATE(82), 1,
      sym_empty_labeled_statement,
    ACTIONS(59), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(3), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [97] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_empty_labeled_statement,
    ACTIONS(65), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [194] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_add,
    ACTIONS(72), 1,
      anon_sym_call,
    ACTIONS(75), 1,
      anon_sym_declare,
    ACTIONS(78), 1,
      anon_sym_error,
    ACTIONS(81), 1,
      anon_sym_esi,
    ACTIONS(84), 1,
      anon_sym_include,
    ACTIONS(87), 1,
      anon_sym_log,
    ACTIONS(90), 1,
      anon_sym_remove,
    ACTIONS(93), 1,
      anon_sym_restart,
    ACTIONS(96), 1,
      anon_sym_return,
    ACTIONS(99), 1,
      anon_sym_set,
    ACTIONS(102), 1,
      anon_sym_synthetic,
    ACTIONS(105), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(108), 1,
      anon_sym_unset,
    ACTIONS(111), 1,
      anon_sym_break,
    ACTIONS(114), 1,
      anon_sym_fallthrough,
    ACTIONS(117), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_switch,
    ACTIONS(123), 3,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [286] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    STATE(164), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(9), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [379] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(162), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(9), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [472] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(160), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(9), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [565] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(153), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(9), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [658] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    STATE(82), 1,
      sym_empty_labeled_statement,
    STATE(11), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [751] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(108), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(9), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [844] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    STATE(74), 1,
      sym_empty_labeled_statement,
    STATE(15), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [937] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      sym_ident,
    STATE(83), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [1027] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      sym_ident,
    STATE(85), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [1117] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_add,
    ACTIONS(25), 1,
      anon_sym_call,
    ACTIONS(27), 1,
      anon_sym_declare,
    ACTIONS(29), 1,
      anon_sym_error,
    ACTIONS(31), 1,
      anon_sym_esi,
    ACTIONS(33), 1,
      anon_sym_include,
    ACTIONS(35), 1,
      anon_sym_log,
    ACTIONS(37), 1,
      anon_sym_remove,
    ACTIONS(39), 1,
      anon_sym_restart,
    ACTIONS(41), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_synthetic,
    ACTIONS(47), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(51), 1,
      anon_sym_break,
    ACTIONS(53), 1,
      anon_sym_fallthrough,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      sym_ident,
    STATE(84), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(152), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [1207] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_add,
    ACTIONS(72), 1,
      anon_sym_call,
    ACTIONS(75), 1,
      anon_sym_declare,
    ACTIONS(78), 1,
      anon_sym_error,
    ACTIONS(81), 1,
      anon_sym_esi,
    ACTIONS(84), 1,
      anon_sym_include,
    ACTIONS(87), 1,
      anon_sym_log,
    ACTIONS(90), 1,
      anon_sym_remove,
    ACTIONS(93), 1,
      anon_sym_restart,
    ACTIONS(96), 1,
      anon_sym_return,
    ACTIONS(99), 1,
      anon_sym_set,
    ACTIONS(102), 1,
      anon_sym_synthetic,
    ACTIONS(105), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(108), 1,
      anon_sym_unset,
    ACTIONS(111), 1,
      anon_sym_break,
    ACTIONS(114), 1,
      anon_sym_fallthrough,
    ACTIONS(123), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    STATE(15), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(109), 16,
      sym_add_statement,
      sym_call_statement,
      sym_declare_statement,
      sym_error_statement,
      sym_esi_statement,
      sym_include_statement,
      sym_log_statement,
      sym_remove_statement,
      sym_restart_statement,
      sym_return_statement,
      sym_set_statement,
      sym_synthetic_statement,
      sym_synthetic_base64_statement,
      sym_unset_statement,
      sym_break_statement,
      sym_fallthrough_statement,
  [1297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_else,
    STATE(28), 1,
      sym_else_statement,
    STATE(87), 1,
      sym_elsif_keyword,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(151), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(17), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(147), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1344] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_else,
    STATE(33), 1,
      sym_else_statement,
    STATE(87), 1,
      sym_elsif_keyword,
    ACTIONS(151), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(18), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(155), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1391] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_else,
    STATE(87), 1,
      sym_elsif_keyword,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(164), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(18), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_else,
    STATE(40), 1,
      sym_else_statement,
    STATE(97), 1,
      sym_elsif_keyword,
    ACTIONS(151), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(21), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(155), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [1480] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_else,
    STATE(38), 1,
      sym_else_statement,
    STATE(97), 1,
      sym_elsif_keyword,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(151), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(19), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(147), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [1525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_else,
    STATE(97), 1,
      sym_elsif_keyword,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(164), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(21), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [1567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(171), 23,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(175), 23,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(179), 23,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(171), 21,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      sym_ident,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(179), 21,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      sym_ident,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(175), 21,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      sym_ident,
  [1759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(155), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(183), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(187), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(191), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(195), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(199), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(171), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(179), 20,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      sym_ident,
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(171), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(179), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(155), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(191), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(199), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(187), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(195), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(183), 18,
      anon_sym_add,
      anon_sym_call,
      anon_sym_declare,
      anon_sym_error,
      anon_sym_esi,
      anon_sym_include,
      anon_sym_log,
      anon_sym_remove,
      anon_sym_restart,
      anon_sym_return,
      anon_sym_set,
      anon_sym_synthetic,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      sym_ident,
  [2223] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_acl,
    ACTIONS(206), 1,
      anon_sym_backend,
    ACTIONS(209), 1,
      anon_sym_director,
    ACTIONS(212), 1,
      anon_sym_penaltybox,
    ACTIONS(215), 1,
      anon_sym_ratecounter,
    ACTIONS(218), 1,
      anon_sym_table,
    ACTIONS(221), 1,
      anon_sym_sub,
    STATE(49), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(44), 9,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      aux_sym_source_file_repeat1,
  [2266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_acl,
    ACTIONS(9), 1,
      anon_sym_backend,
    ACTIONS(11), 1,
      anon_sym_director,
    ACTIONS(13), 1,
      anon_sym_penaltybox,
    ACTIONS(15), 1,
      anon_sym_ratecounter,
    ACTIONS(17), 1,
      anon_sym_table,
    ACTIONS(19), 1,
      anon_sym_sub,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(44), 9,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      aux_sym_source_file_repeat1,
  [2309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 15,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_rol_EQ,
      anon_sym_ror_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_PIPE_PIPE_EQ,
  [2330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    STATE(89), 1,
      sym_type,
    ACTIONS(230), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_type,
    ACTIONS(230), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      anon_sym_case,
    ACTIONS(258), 1,
      anon_sym_default,
    STATE(63), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_case,
    ACTIONS(258), 1,
      anon_sym_default,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(65), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      anon_sym_case,
    ACTIONS(267), 1,
      anon_sym_default,
    STATE(63), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(103), 1,
      sym_type,
    ACTIONS(230), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_case,
    ACTIONS(258), 1,
      anon_sym_default,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(63), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_case,
    ACTIONS(258), 1,
      anon_sym_default,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(61), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym__expression,
    ACTIONS(278), 2,
      sym_ident,
      sym_number,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      sym__string_literal,
    ACTIONS(282), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_TILDE,
    STATE(120), 1,
      sym__string_literal,
    ACTIONS(286), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 1,
      sym__expression,
    ACTIONS(288), 2,
      sym_ident,
      sym_number,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(131), 1,
      sym__string_literal,
    ACTIONS(290), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_if,
    STATE(39), 1,
      sym_block,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      sym__string_literal,
    ACTIONS(296), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_if,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [2752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym__string_literal,
    ACTIONS(302), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 1,
      sym__string_literal,
    ACTIONS(304), 2,
      sym_short_string_literal,
      sym_long_string_literal,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    ACTIONS(306), 2,
      sym_ident,
      sym_number,
  [2785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(105), 1,
      sym__expression,
    ACTIONS(308), 2,
      sym_ident,
      sym_number,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(121), 1,
      sym__expression,
    ACTIONS(310), 2,
      sym_ident,
      sym_number,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [2860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_conditional_expression,
  [2870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      sym_number,
  [2880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [2910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [2930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_conditional_expression,
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_conditional_expression,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_conditional_expression,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_dot_ident,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_EQ,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SEMI,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [3012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [3019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SEMI,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [3096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_if,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_dot_ident,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_dot_ident,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SEMI,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_dot_ident,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_local,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_ident,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_dot_ident,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_ident,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_dot_ident,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_ident,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
  [3362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SEMI,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_ident,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_ident,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_ident,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_ident,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_ident,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_ident,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_dot_ident,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 286,
  [SMALL_STATE(6)] = 379,
  [SMALL_STATE(7)] = 472,
  [SMALL_STATE(8)] = 565,
  [SMALL_STATE(9)] = 658,
  [SMALL_STATE(10)] = 751,
  [SMALL_STATE(11)] = 844,
  [SMALL_STATE(12)] = 937,
  [SMALL_STATE(13)] = 1027,
  [SMALL_STATE(14)] = 1117,
  [SMALL_STATE(15)] = 1207,
  [SMALL_STATE(16)] = 1297,
  [SMALL_STATE(17)] = 1344,
  [SMALL_STATE(18)] = 1391,
  [SMALL_STATE(19)] = 1435,
  [SMALL_STATE(20)] = 1480,
  [SMALL_STATE(21)] = 1525,
  [SMALL_STATE(22)] = 1567,
  [SMALL_STATE(23)] = 1600,
  [SMALL_STATE(24)] = 1633,
  [SMALL_STATE(25)] = 1666,
  [SMALL_STATE(26)] = 1697,
  [SMALL_STATE(27)] = 1728,
  [SMALL_STATE(28)] = 1759,
  [SMALL_STATE(29)] = 1789,
  [SMALL_STATE(30)] = 1819,
  [SMALL_STATE(31)] = 1849,
  [SMALL_STATE(32)] = 1879,
  [SMALL_STATE(33)] = 1909,
  [SMALL_STATE(34)] = 1939,
  [SMALL_STATE(35)] = 1969,
  [SMALL_STATE(36)] = 1999,
  [SMALL_STATE(37)] = 2027,
  [SMALL_STATE(38)] = 2055,
  [SMALL_STATE(39)] = 2083,
  [SMALL_STATE(40)] = 2111,
  [SMALL_STATE(41)] = 2139,
  [SMALL_STATE(42)] = 2167,
  [SMALL_STATE(43)] = 2195,
  [SMALL_STATE(44)] = 2223,
  [SMALL_STATE(45)] = 2266,
  [SMALL_STATE(46)] = 2309,
  [SMALL_STATE(47)] = 2330,
  [SMALL_STATE(48)] = 2350,
  [SMALL_STATE(49)] = 2364,
  [SMALL_STATE(50)] = 2378,
  [SMALL_STATE(51)] = 2392,
  [SMALL_STATE(52)] = 2406,
  [SMALL_STATE(53)] = 2420,
  [SMALL_STATE(54)] = 2434,
  [SMALL_STATE(55)] = 2448,
  [SMALL_STATE(56)] = 2462,
  [SMALL_STATE(57)] = 2476,
  [SMALL_STATE(58)] = 2490,
  [SMALL_STATE(59)] = 2504,
  [SMALL_STATE(60)] = 2518,
  [SMALL_STATE(61)] = 2535,
  [SMALL_STATE(62)] = 2553,
  [SMALL_STATE(63)] = 2571,
  [SMALL_STATE(64)] = 2589,
  [SMALL_STATE(65)] = 2603,
  [SMALL_STATE(66)] = 2621,
  [SMALL_STATE(67)] = 2639,
  [SMALL_STATE(68)] = 2656,
  [SMALL_STATE(69)] = 2670,
  [SMALL_STATE(70)] = 2684,
  [SMALL_STATE(71)] = 2695,
  [SMALL_STATE(72)] = 2706,
  [SMALL_STATE(73)] = 2719,
  [SMALL_STATE(74)] = 2730,
  [SMALL_STATE(75)] = 2739,
  [SMALL_STATE(76)] = 2752,
  [SMALL_STATE(77)] = 2763,
  [SMALL_STATE(78)] = 2774,
  [SMALL_STATE(79)] = 2785,
  [SMALL_STATE(80)] = 2796,
  [SMALL_STATE(81)] = 2807,
  [SMALL_STATE(82)] = 2816,
  [SMALL_STATE(83)] = 2825,
  [SMALL_STATE(84)] = 2834,
  [SMALL_STATE(85)] = 2843,
  [SMALL_STATE(86)] = 2852,
  [SMALL_STATE(87)] = 2860,
  [SMALL_STATE(88)] = 2870,
  [SMALL_STATE(89)] = 2880,
  [SMALL_STATE(90)] = 2890,
  [SMALL_STATE(91)] = 2900,
  [SMALL_STATE(92)] = 2910,
  [SMALL_STATE(93)] = 2920,
  [SMALL_STATE(94)] = 2930,
  [SMALL_STATE(95)] = 2940,
  [SMALL_STATE(96)] = 2950,
  [SMALL_STATE(97)] = 2960,
  [SMALL_STATE(98)] = 2970,
  [SMALL_STATE(99)] = 2977,
  [SMALL_STATE(100)] = 2984,
  [SMALL_STATE(101)] = 2991,
  [SMALL_STATE(102)] = 2998,
  [SMALL_STATE(103)] = 3005,
  [SMALL_STATE(104)] = 3012,
  [SMALL_STATE(105)] = 3019,
  [SMALL_STATE(106)] = 3026,
  [SMALL_STATE(107)] = 3033,
  [SMALL_STATE(108)] = 3040,
  [SMALL_STATE(109)] = 3047,
  [SMALL_STATE(110)] = 3054,
  [SMALL_STATE(111)] = 3061,
  [SMALL_STATE(112)] = 3068,
  [SMALL_STATE(113)] = 3075,
  [SMALL_STATE(114)] = 3082,
  [SMALL_STATE(115)] = 3089,
  [SMALL_STATE(116)] = 3096,
  [SMALL_STATE(117)] = 3103,
  [SMALL_STATE(118)] = 3110,
  [SMALL_STATE(119)] = 3117,
  [SMALL_STATE(120)] = 3124,
  [SMALL_STATE(121)] = 3131,
  [SMALL_STATE(122)] = 3138,
  [SMALL_STATE(123)] = 3145,
  [SMALL_STATE(124)] = 3152,
  [SMALL_STATE(125)] = 3159,
  [SMALL_STATE(126)] = 3166,
  [SMALL_STATE(127)] = 3173,
  [SMALL_STATE(128)] = 3180,
  [SMALL_STATE(129)] = 3187,
  [SMALL_STATE(130)] = 3194,
  [SMALL_STATE(131)] = 3201,
  [SMALL_STATE(132)] = 3208,
  [SMALL_STATE(133)] = 3215,
  [SMALL_STATE(134)] = 3222,
  [SMALL_STATE(135)] = 3229,
  [SMALL_STATE(136)] = 3236,
  [SMALL_STATE(137)] = 3243,
  [SMALL_STATE(138)] = 3250,
  [SMALL_STATE(139)] = 3257,
  [SMALL_STATE(140)] = 3264,
  [SMALL_STATE(141)] = 3271,
  [SMALL_STATE(142)] = 3278,
  [SMALL_STATE(143)] = 3285,
  [SMALL_STATE(144)] = 3292,
  [SMALL_STATE(145)] = 3299,
  [SMALL_STATE(146)] = 3306,
  [SMALL_STATE(147)] = 3313,
  [SMALL_STATE(148)] = 3320,
  [SMALL_STATE(149)] = 3327,
  [SMALL_STATE(150)] = 3334,
  [SMALL_STATE(151)] = 3341,
  [SMALL_STATE(152)] = 3348,
  [SMALL_STATE(153)] = 3355,
  [SMALL_STATE(154)] = 3362,
  [SMALL_STATE(155)] = 3369,
  [SMALL_STATE(156)] = 3376,
  [SMALL_STATE(157)] = 3383,
  [SMALL_STATE(158)] = 3390,
  [SMALL_STATE(159)] = 3397,
  [SMALL_STATE(160)] = 3404,
  [SMALL_STATE(161)] = 3411,
  [SMALL_STATE(162)] = 3418,
  [SMALL_STATE(163)] = 3425,
  [SMALL_STATE(164)] = 3432,
  [SMALL_STATE(165)] = 3439,
  [SMALL_STATE(166)] = 3446,
  [SMALL_STATE(167)] = 3453,
  [SMALL_STATE(168)] = 3460,
  [SMALL_STATE(169)] = 3467,
  [SMALL_STATE(170)] = 3474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(134),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(133),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(132),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(88),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(130),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(71),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(80),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(123),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(122),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(67),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(98),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(73),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(117),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(115),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(114),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(95),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(170),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(96),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(113),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(116),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(107),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 6, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 6, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_statement, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_statement, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_sub_declaration, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_declaration, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_sub_declaration, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratecounter_declaration, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penaltybox_declaration, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(69),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(118),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_labeled_statement, 2, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case_statement, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 4, .production_id = 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_statement, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fastly_vcl() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
