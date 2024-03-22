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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 1
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_true = 64,
  anon_sym_false = 65,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 66,
  aux_sym_string_token1 = 67,
  anon_sym_DQUOTE = 68,
  aux_sym_string_token2 = 69,
  anon_sym_LBRACE_DQUOTE = 70,
  aux_sym_string_token3 = 71,
  anon_sym_ms = 72,
  anon_sym_s = 73,
  anon_sym_m = 74,
  anon_sym_h = 75,
  anon_sym_d = 76,
  anon_sym_y = 77,
  anon_sym_PERCENT = 78,
  anon_sym_u = 79,
  anon_sym_PLUS = 80,
  anon_sym_DASH = 81,
  anon_sym_AMP_AMP = 82,
  anon_sym_PIPE_PIPE = 83,
  sym_source_file = 84,
  sym__declaration = 85,
  sym_acl_declaration = 86,
  sym_backend_declaration = 87,
  sym_director_declaration = 88,
  sym_penaltybox_declaration = 89,
  sym_ratecounter_declaration = 90,
  sym_sub_declaration = 91,
  sym_table_declaration = 92,
  sym_void_sub_declaration = 93,
  sym_typed_sub_declaration = 94,
  sym_add_statement = 95,
  sym_call_statement = 96,
  sym_declare_statement = 97,
  sym_error_statement = 98,
  sym_esi_statement = 99,
  sym_include_statement = 100,
  sym_log_statement = 101,
  sym_remove_statement = 102,
  sym_restart_statement = 103,
  sym_return_statement = 104,
  sym_set_statement = 105,
  sym_synthetic_statement = 106,
  sym_synthetic_base64_statement = 107,
  sym_unset_statement = 108,
  sym_break_statement = 109,
  sym_fallthrough_statement = 110,
  sym_if_statement = 111,
  sym_elsif_keyword = 112,
  sym_else_if_statement = 113,
  sym_else_statement = 114,
  sym_switch_statement = 115,
  sym_case_statement = 116,
  sym_default_case_statement = 117,
  sym_empty_labeled_statement = 118,
  sym__line_statement = 119,
  sym__block_statement = 120,
  sym__statement = 121,
  sym_conditional_expression = 122,
  sym_type = 123,
  sym_block = 124,
  sym__statement_list = 125,
  sym__expression = 126,
  sym_bool = 127,
  sym_string = 128,
  sym_rtime = 129,
  sym_unary_expression = 130,
  sym_binary_expression = 131,
  aux_sym_source_file_repeat1 = 132,
  aux_sym_if_statement_repeat1 = 133,
  aux_sym_switch_statement_repeat1 = 134,
  aux_sym__statement_list_repeat1 = 135,
  alias_sym_label_name = 136,
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_LBRACE_DQUOTE] = "{\"",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_y] = "y",
  [anon_sym_PERCENT] = "%",
  [anon_sym_u] = "u",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
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
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_rtime] = "rtime",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_LBRACE_DQUOTE] = anon_sym_LBRACE_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
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
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_rtime] = sym_rtime,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
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
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rtime] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
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
  field_operand = 9,
  field_operator = 10,
  field_right = 11,
  field_test = 12,
  field_type = 13,
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
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_test] = "test",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ident, 1},
  [1] =
    {field_label, 0},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_condition, 1},
    {field_consequence, 2},
  [6] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [9] =
    {field_name, 2},
    {field_type, 3},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_consequence, 1},
  [15] =
    {field_condition, 1},
    {field_consequence, 2},
    {field_keyword, 0},
  [18] =
    {field_control, 2},
  [19] =
    {field_test, 1},
  [20] =
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
  [9] = 5,
  [10] = 3,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 22,
  [27] = 23,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 29,
  [39] = 33,
  [40] = 32,
  [41] = 24,
  [42] = 31,
  [43] = 23,
  [44] = 35,
  [45] = 30,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 23,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 24,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 77,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 104,
  [112] = 112,
  [113] = 113,
  [114] = 108,
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
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 164,
  [169] = 162,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 162,
  [177] = 177,
  [178] = 162,
  [179] = 179,
  [180] = 162,
  [181] = 181,
  [182] = 182,
  [183] = 115,
  [184] = 150,
  [185] = 138,
  [186] = 171,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(205);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(418);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(421);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'B') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(417);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '~') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '|') ADVANCE(200);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '~') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '+') ADVANCE(420);
      if (lookahead == '-') ADVANCE(422);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '{') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(407);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(395);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(396);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(415);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == 'y') ADVANCE(417);
      if (lookahead == '|') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '}') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '}') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == '}') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 29:
      if (lookahead == '&') ADVANCE(425);
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 30:
      if (lookahead == '&') ADVANCE(424);
      END_STATE();
    case 31:
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '=') ADVANCE(260);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(261);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '|') ADVANCE(427);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(297);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(298);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'L') ADVANCE(294);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(296);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 198:
      if (lookahead == 'x') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 200:
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 203:
      if (eof) ADVANCE(205);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(31);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'B') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '^') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203)
      END_STATE();
    case 204:
      if (eof) ADVANCE(205);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '|') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(204)
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(217);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(406);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\r' ||
          lookahead == '"') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_acl);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(407);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_penaltybox);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_ratecounter);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_esi);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_restart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rol_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_ror_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(406);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(406);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(406);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(35);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(401);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"') ADVANCE(35);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\\') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACE_DQUOTE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 203},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 203},
  [37] = {.lex_state = 203},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 204},
  [56] = {.lex_state = 204},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 203},
  [60] = {.lex_state = 203},
  [61] = {.lex_state = 203},
  [62] = {.lex_state = 203},
  [63] = {.lex_state = 203},
  [64] = {.lex_state = 203},
  [65] = {.lex_state = 203},
  [66] = {.lex_state = 203},
  [67] = {.lex_state = 203},
  [68] = {.lex_state = 203},
  [69] = {.lex_state = 203},
  [70] = {.lex_state = 203},
  [71] = {.lex_state = 203},
  [72] = {.lex_state = 203},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 203},
  [75] = {.lex_state = 203},
  [76] = {.lex_state = 203},
  [77] = {.lex_state = 203},
  [78] = {.lex_state = 203},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 203},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 203},
  [94] = {.lex_state = 203},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 203},
  [97] = {.lex_state = 203},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 203},
  [100] = {.lex_state = 203},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 203},
  [103] = {.lex_state = 203},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 203},
  [106] = {.lex_state = 203},
  [107] = {.lex_state = 203},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 203},
  [110] = {.lex_state = 203},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 203},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 203},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 28},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 203},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 402},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 203},
  [158] = {.lex_state = 203},
  [159] = {.lex_state = 203},
  [160] = {.lex_state = 203},
  [161] = {.lex_state = 203},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 203},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 0},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_DQUOTE] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(163),
    [sym__declaration] = STATE(37),
    [sym_acl_declaration] = STATE(37),
    [sym_backend_declaration] = STATE(37),
    [sym_director_declaration] = STATE(37),
    [sym_penaltybox_declaration] = STATE(37),
    [sym_ratecounter_declaration] = STATE(37),
    [sym_sub_declaration] = STATE(37),
    [sym_table_declaration] = STATE(37),
    [sym_void_sub_declaration] = STATE(70),
    [sym_typed_sub_declaration] = STATE(70),
    [sym_include_statement] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_acl] = ACTIONS(7),
    [anon_sym_backend] = ACTIONS(9),
    [anon_sym_director] = ACTIONS(11),
    [anon_sym_penaltybox] = ACTIONS(13),
    [anon_sym_ratecounter] = ACTIONS(15),
    [anon_sym_table] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      sym_ident,
    STATE(94), 1,
      sym_empty_labeled_statement,
    ACTIONS(61), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(3), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(168), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_empty_labeled_statement,
    ACTIONS(67), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(168), 16,
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
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_add,
    ACTIONS(74), 1,
      anon_sym_call,
    ACTIONS(77), 1,
      anon_sym_declare,
    ACTIONS(80), 1,
      anon_sym_error,
    ACTIONS(83), 1,
      anon_sym_esi,
    ACTIONS(86), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_log,
    ACTIONS(92), 1,
      anon_sym_remove,
    ACTIONS(95), 1,
      anon_sym_restart,
    ACTIONS(98), 1,
      anon_sym_return,
    ACTIONS(101), 1,
      anon_sym_set,
    ACTIONS(104), 1,
      anon_sym_synthetic,
    ACTIONS(107), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(110), 1,
      anon_sym_unset,
    ACTIONS(113), 1,
      anon_sym_break,
    ACTIONS(116), 1,
      anon_sym_fallthrough,
    ACTIONS(119), 1,
      anon_sym_if,
    ACTIONS(122), 1,
      anon_sym_switch,
    ACTIONS(125), 3,
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
    STATE(168), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    STATE(162), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(11), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(180), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(11), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(178), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(11), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(176), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(11), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(169), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(11), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    STATE(100), 1,
      sym_empty_labeled_statement,
    STATE(15), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(164), 16,
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
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(63), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_switch,
    STATE(94), 1,
      sym_empty_labeled_statement,
    STATE(10), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(164), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      sym_ident,
    STATE(93), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(168), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      sym_ident,
    STATE(97), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(168), 16,
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
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(27), 1,
      anon_sym_call,
    ACTIONS(29), 1,
      anon_sym_declare,
    ACTIONS(31), 1,
      anon_sym_error,
    ACTIONS(33), 1,
      anon_sym_esi,
    ACTIONS(35), 1,
      anon_sym_include,
    ACTIONS(37), 1,
      anon_sym_log,
    ACTIONS(39), 1,
      anon_sym_remove,
    ACTIONS(41), 1,
      anon_sym_restart,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_synthetic,
    ACTIONS(49), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(51), 1,
      anon_sym_unset,
    ACTIONS(53), 1,
      anon_sym_break,
    ACTIONS(55), 1,
      anon_sym_fallthrough,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      sym_ident,
    STATE(96), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(168), 16,
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
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_add,
    ACTIONS(74), 1,
      anon_sym_call,
    ACTIONS(77), 1,
      anon_sym_declare,
    ACTIONS(80), 1,
      anon_sym_error,
    ACTIONS(83), 1,
      anon_sym_esi,
    ACTIONS(86), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_log,
    ACTIONS(92), 1,
      anon_sym_remove,
    ACTIONS(95), 1,
      anon_sym_restart,
    ACTIONS(98), 1,
      anon_sym_return,
    ACTIONS(101), 1,
      anon_sym_set,
    ACTIONS(104), 1,
      anon_sym_synthetic,
    ACTIONS(107), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(110), 1,
      anon_sym_unset,
    ACTIONS(113), 1,
      anon_sym_break,
    ACTIONS(116), 1,
      anon_sym_fallthrough,
    ACTIONS(125), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_switch,
    STATE(15), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(164), 16,
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
    ACTIONS(151), 1,
      anon_sym_else,
    STATE(33), 1,
      sym_else_statement,
    STATE(108), 1,
      sym_elsif_keyword,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(18), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 20,
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
    ACTIONS(151), 1,
      anon_sym_else,
    STATE(31), 1,
      sym_else_statement,
    STATE(108), 1,
      sym_elsif_keyword,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(16), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(157), 20,
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
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(108), 1,
      sym_elsif_keyword,
    ACTIONS(159), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(166), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(18), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(161), 20,
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
    ACTIONS(169), 1,
      anon_sym_else,
    STATE(39), 1,
      sym_else_statement,
    STATE(114), 1,
      sym_elsif_keyword,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(21), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 18,
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
    ACTIONS(169), 1,
      anon_sym_else,
    STATE(42), 1,
      sym_else_statement,
    STATE(114), 1,
      sym_elsif_keyword,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(19), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(157), 18,
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
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(114), 1,
      sym_elsif_keyword,
    ACTIONS(159), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(166), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(21), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(161), 18,
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
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(173), 23,
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
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(177), 23,
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
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(181), 23,
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
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(181), 21,
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
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(173), 21,
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
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(177), 21,
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
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(181), 20,
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
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(185), 20,
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
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(189), 20,
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
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(149), 20,
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
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(193), 20,
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
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(197), 20,
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
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(177), 20,
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
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(201), 20,
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
  [1999] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_acl,
    ACTIONS(208), 1,
      anon_sym_backend,
    ACTIONS(211), 1,
      anon_sym_director,
    ACTIONS(214), 1,
      anon_sym_penaltybox,
    ACTIONS(217), 1,
      anon_sym_ratecounter,
    ACTIONS(220), 1,
      anon_sym_table,
    ACTIONS(223), 1,
      anon_sym_sub,
    ACTIONS(226), 1,
      anon_sym_include,
    STATE(70), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(36), 10,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      sym_include_statement,
      aux_sym_source_file_repeat1,
  [2046] = 12,
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
    ACTIONS(21), 1,
      anon_sym_include,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(70), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(36), 10,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      sym_include_statement,
      aux_sym_source_file_repeat1,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(185), 18,
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
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(197), 18,
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
  [2149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(193), 18,
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
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(181), 18,
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
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(149), 18,
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
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(177), 18,
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
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(201), 18,
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
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(189), 18,
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
  [2317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      sym_ident,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(95), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2358] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(249), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(83), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2393] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(251), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(98), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2428] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(253), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2463] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(255), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(91), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2498] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(257), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(101), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2533] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(259), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(92), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 15,
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
  [2589] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_number,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(263), 1,
      sym_ident,
    ACTIONS(239), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 6,
      sym__expression,
      sym_bool,
      sym_string,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 14,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_RPAREN,
      anon_sym_include,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 14,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_RPAREN,
      anon_sym_include,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
      anon_sym_SEMI,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_m,
    ACTIONS(271), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
  [2700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [2880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block,
    STATE(106), 1,
      sym_type,
    ACTIONS(299), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_type,
    ACTIONS(299), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(118), 1,
      sym_type,
    ACTIONS(299), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [2931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      anon_sym_case,
    ACTIONS(307), 1,
      anon_sym_default,
    STATE(77), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_case,
    ACTIONS(307), 1,
      anon_sym_default,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(78), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_case,
    ACTIONS(316), 1,
      anon_sym_default,
    STATE(76), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [2985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_case,
    ACTIONS(307), 1,
      anon_sym_default,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_case,
    ACTIONS(307), 1,
      anon_sym_default,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(76), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    STATE(136), 1,
      sym_string,
  [3040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_string,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(57), 1,
      sym_string,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(329), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(143), 1,
      sym_string,
  [3123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(142), 1,
      sym_string,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(140), 1,
      sym_string,
  [3175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_PIPE_PIPE,
  [3197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(341), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(341), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(341), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(353), 1,
      anon_sym_SEMI,
  [3272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_if,
    STATE(40), 1,
      sym_block,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AMP_AMP,
    ACTIONS(341), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_if,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [3320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [3330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_conditional_expression,
  [3340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [3350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [3370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_conditional_expression,
  [3380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_conditional_expression,
  [3408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [3418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(379), 1,
      sym_number,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_conditional_expression,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [3452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [3459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SEMI,
  [3473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SEMI,
  [3494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_dot_ident,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_dot_ident,
  [3529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_ident,
  [3536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
  [3543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_if,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [3571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [3578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_local,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_ident,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym_dot_ident,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_ident,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
  [3669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
  [3697] = 2,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_string_token3,
  [3704] = 2,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_string_token2,
  [3711] = 2,
    ACTIONS(451), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_string_token1,
  [3718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_dot_ident,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_EQ,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
  [3753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
  [3760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [3781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_ident,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_ident,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_ident,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SEMI,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_dot_ident,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_ident,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_ident,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_ident,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [3900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_dot_ident,
  [3907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SEMI,
  [3914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
  [3921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_dot_ident,
  [3935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
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
  [SMALL_STATE(37)] = 2046,
  [SMALL_STATE(38)] = 2093,
  [SMALL_STATE(39)] = 2121,
  [SMALL_STATE(40)] = 2149,
  [SMALL_STATE(41)] = 2177,
  [SMALL_STATE(42)] = 2205,
  [SMALL_STATE(43)] = 2233,
  [SMALL_STATE(44)] = 2261,
  [SMALL_STATE(45)] = 2289,
  [SMALL_STATE(46)] = 2317,
  [SMALL_STATE(47)] = 2358,
  [SMALL_STATE(48)] = 2393,
  [SMALL_STATE(49)] = 2428,
  [SMALL_STATE(50)] = 2463,
  [SMALL_STATE(51)] = 2498,
  [SMALL_STATE(52)] = 2533,
  [SMALL_STATE(53)] = 2568,
  [SMALL_STATE(54)] = 2589,
  [SMALL_STATE(55)] = 2624,
  [SMALL_STATE(56)] = 2644,
  [SMALL_STATE(57)] = 2664,
  [SMALL_STATE(58)] = 2680,
  [SMALL_STATE(59)] = 2700,
  [SMALL_STATE(60)] = 2715,
  [SMALL_STATE(61)] = 2730,
  [SMALL_STATE(62)] = 2745,
  [SMALL_STATE(63)] = 2760,
  [SMALL_STATE(64)] = 2775,
  [SMALL_STATE(65)] = 2790,
  [SMALL_STATE(66)] = 2805,
  [SMALL_STATE(67)] = 2820,
  [SMALL_STATE(68)] = 2835,
  [SMALL_STATE(69)] = 2850,
  [SMALL_STATE(70)] = 2865,
  [SMALL_STATE(71)] = 2880,
  [SMALL_STATE(72)] = 2900,
  [SMALL_STATE(73)] = 2917,
  [SMALL_STATE(74)] = 2931,
  [SMALL_STATE(75)] = 2949,
  [SMALL_STATE(76)] = 2967,
  [SMALL_STATE(77)] = 2985,
  [SMALL_STATE(78)] = 3003,
  [SMALL_STATE(79)] = 3021,
  [SMALL_STATE(80)] = 3040,
  [SMALL_STATE(81)] = 3059,
  [SMALL_STATE(82)] = 3069,
  [SMALL_STATE(83)] = 3085,
  [SMALL_STATE(84)] = 3097,
  [SMALL_STATE(85)] = 3107,
  [SMALL_STATE(86)] = 3123,
  [SMALL_STATE(87)] = 3139,
  [SMALL_STATE(88)] = 3149,
  [SMALL_STATE(89)] = 3159,
  [SMALL_STATE(90)] = 3175,
  [SMALL_STATE(91)] = 3184,
  [SMALL_STATE(92)] = 3197,
  [SMALL_STATE(93)] = 3210,
  [SMALL_STATE(94)] = 3219,
  [SMALL_STATE(95)] = 3228,
  [SMALL_STATE(96)] = 3241,
  [SMALL_STATE(97)] = 3250,
  [SMALL_STATE(98)] = 3259,
  [SMALL_STATE(99)] = 3272,
  [SMALL_STATE(100)] = 3285,
  [SMALL_STATE(101)] = 3294,
  [SMALL_STATE(102)] = 3307,
  [SMALL_STATE(103)] = 3320,
  [SMALL_STATE(104)] = 3330,
  [SMALL_STATE(105)] = 3340,
  [SMALL_STATE(106)] = 3350,
  [SMALL_STATE(107)] = 3360,
  [SMALL_STATE(108)] = 3370,
  [SMALL_STATE(109)] = 3380,
  [SMALL_STATE(110)] = 3390,
  [SMALL_STATE(111)] = 3398,
  [SMALL_STATE(112)] = 3408,
  [SMALL_STATE(113)] = 3418,
  [SMALL_STATE(114)] = 3428,
  [SMALL_STATE(115)] = 3438,
  [SMALL_STATE(116)] = 3445,
  [SMALL_STATE(117)] = 3452,
  [SMALL_STATE(118)] = 3459,
  [SMALL_STATE(119)] = 3466,
  [SMALL_STATE(120)] = 3473,
  [SMALL_STATE(121)] = 3480,
  [SMALL_STATE(122)] = 3487,
  [SMALL_STATE(123)] = 3494,
  [SMALL_STATE(124)] = 3501,
  [SMALL_STATE(125)] = 3508,
  [SMALL_STATE(126)] = 3515,
  [SMALL_STATE(127)] = 3522,
  [SMALL_STATE(128)] = 3529,
  [SMALL_STATE(129)] = 3536,
  [SMALL_STATE(130)] = 3543,
  [SMALL_STATE(131)] = 3550,
  [SMALL_STATE(132)] = 3557,
  [SMALL_STATE(133)] = 3564,
  [SMALL_STATE(134)] = 3571,
  [SMALL_STATE(135)] = 3578,
  [SMALL_STATE(136)] = 3585,
  [SMALL_STATE(137)] = 3592,
  [SMALL_STATE(138)] = 3599,
  [SMALL_STATE(139)] = 3606,
  [SMALL_STATE(140)] = 3613,
  [SMALL_STATE(141)] = 3620,
  [SMALL_STATE(142)] = 3627,
  [SMALL_STATE(143)] = 3634,
  [SMALL_STATE(144)] = 3641,
  [SMALL_STATE(145)] = 3648,
  [SMALL_STATE(146)] = 3655,
  [SMALL_STATE(147)] = 3662,
  [SMALL_STATE(148)] = 3669,
  [SMALL_STATE(149)] = 3676,
  [SMALL_STATE(150)] = 3683,
  [SMALL_STATE(151)] = 3690,
  [SMALL_STATE(152)] = 3697,
  [SMALL_STATE(153)] = 3704,
  [SMALL_STATE(154)] = 3711,
  [SMALL_STATE(155)] = 3718,
  [SMALL_STATE(156)] = 3725,
  [SMALL_STATE(157)] = 3732,
  [SMALL_STATE(158)] = 3739,
  [SMALL_STATE(159)] = 3746,
  [SMALL_STATE(160)] = 3753,
  [SMALL_STATE(161)] = 3760,
  [SMALL_STATE(162)] = 3767,
  [SMALL_STATE(163)] = 3774,
  [SMALL_STATE(164)] = 3781,
  [SMALL_STATE(165)] = 3788,
  [SMALL_STATE(166)] = 3795,
  [SMALL_STATE(167)] = 3802,
  [SMALL_STATE(168)] = 3809,
  [SMALL_STATE(169)] = 3816,
  [SMALL_STATE(170)] = 3823,
  [SMALL_STATE(171)] = 3830,
  [SMALL_STATE(172)] = 3837,
  [SMALL_STATE(173)] = 3844,
  [SMALL_STATE(174)] = 3851,
  [SMALL_STATE(175)] = 3858,
  [SMALL_STATE(176)] = 3865,
  [SMALL_STATE(177)] = 3872,
  [SMALL_STATE(178)] = 3879,
  [SMALL_STATE(179)] = 3886,
  [SMALL_STATE(180)] = 3893,
  [SMALL_STATE(181)] = 3900,
  [SMALL_STATE(182)] = 3907,
  [SMALL_STATE(183)] = 3914,
  [SMALL_STATE(184)] = 3921,
  [SMALL_STATE(185)] = 3928,
  [SMALL_STATE(186)] = 3935,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(127),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(128),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(135),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(113),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(122),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(82),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(52),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(124),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(182),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(46),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(181),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(85),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(86),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(174),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(173),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(172),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(111),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(186),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(104),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(171),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(130),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(121),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 6, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 6, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_statement, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_statement, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, .production_id = 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penaltybox_declaration, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_sub_declaration, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratecounter_declaration, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_sub_declaration, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_declaration, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(79),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(133),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtime, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_labeled_statement, 2, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, .production_id = 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 12),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case_statement, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 4, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_statement, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
