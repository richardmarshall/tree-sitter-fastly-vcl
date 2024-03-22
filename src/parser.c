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
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 1
#define TOKEN_COUNT 92
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
  anon_sym_PLUS = 61,
  sym_ident = 62,
  sym_dot_ident = 63,
  sym_number = 64,
  anon_sym_true = 65,
  anon_sym_false = 66,
  anon_sym_DQUOTE = 67,
  aux_sym_string_token1 = 68,
  anon_sym_LBRACE_DQUOTE = 69,
  aux_sym_string_token2 = 70,
  anon_sym_ms = 71,
  anon_sym_s = 72,
  anon_sym_m = 73,
  anon_sym_h = 74,
  anon_sym_d = 75,
  anon_sym_y = 76,
  anon_sym_PERCENT = 77,
  aux_sym_escape_sequence_token1 = 78,
  anon_sym_u = 79,
  aux_sym_escape_sequence_token2 = 80,
  aux_sym_escape_sequence_token3 = 81,
  anon_sym_DASH = 82,
  anon_sym_EQ_EQ = 83,
  anon_sym_BANG_EQ = 84,
  anon_sym_BANG_TILDE = 85,
  anon_sym_GT = 86,
  anon_sym_LT = 87,
  anon_sym_GT_EQ = 88,
  anon_sym_LT_EQ = 89,
  anon_sym_PIPE_PIPE = 90,
  anon_sym_AMP_AMP = 91,
  sym_source_file = 92,
  sym__declaration = 93,
  sym_acl_declaration = 94,
  sym_backend_declaration = 95,
  sym_director_declaration = 96,
  sym_penaltybox_declaration = 97,
  sym_ratecounter_declaration = 98,
  sym_sub_declaration = 99,
  sym_table_declaration = 100,
  sym_void_sub_declaration = 101,
  sym_typed_sub_declaration = 102,
  sym_add_statement = 103,
  sym_call_statement = 104,
  sym_declare_statement = 105,
  sym_error_statement = 106,
  sym_esi_statement = 107,
  sym_include_statement = 108,
  sym_log_statement = 109,
  sym_remove_statement = 110,
  sym_restart_statement = 111,
  sym_return_statement = 112,
  sym_set_statement = 113,
  sym_synthetic_statement = 114,
  sym_synthetic_base64_statement = 115,
  sym_unset_statement = 116,
  sym_break_statement = 117,
  sym_fallthrough_statement = 118,
  sym_if_statement = 119,
  sym_elsif_keyword = 120,
  sym_else_if_statement = 121,
  sym_else_statement = 122,
  sym_switch_statement = 123,
  sym_case_statement = 124,
  sym_default_case_statement = 125,
  sym_empty_labeled_statement = 126,
  sym__line_statement = 127,
  sym__block_statement = 128,
  sym__statement = 129,
  sym_conditional_expression = 130,
  sym_type = 131,
  sym_block = 132,
  sym__statement_list = 133,
  sym__expression = 134,
  sym_string_concat = 135,
  sym_bool = 136,
  sym_string = 137,
  sym_rtime = 138,
  sym_escape_sequence = 139,
  sym_unary_expression = 140,
  sym_binary_expression = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_if_statement_repeat1 = 143,
  aux_sym_switch_statement_repeat1 = 144,
  aux_sym__statement_list_repeat1 = 145,
  aux_sym_string_concat_repeat1 = 146,
  aux_sym_string_repeat1 = 147,
  alias_sym_label_name = 148,
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
  [anon_sym_PLUS] = "+",
  [sym_ident] = "ident",
  [sym_dot_ident] = "dot_ident",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACE_DQUOTE] = "{\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [anon_sym_d] = "d",
  [anon_sym_y] = "y",
  [anon_sym_PERCENT] = "%",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [anon_sym_u] = "u",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
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
  [sym_string_concat] = "string_concat",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_rtime] = "rtime",
  [sym_escape_sequence] = "escape_sequence",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_string_concat_repeat1] = "string_concat_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_ident] = sym_ident,
  [sym_dot_ident] = sym_dot_ident,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACE_DQUOTE] = anon_sym_LBRACE_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_u] = anon_sym_u,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
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
  [sym_string_concat] = sym_string_concat,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_rtime] = sym_rtime,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_string_concat_repeat1] = aux_sym_string_concat_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_PLUS] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
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
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
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
  [sym_string_concat] = {
    .visible = true,
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
  [sym_escape_sequence] = {
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
  [aux_sym_string_concat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 7,
  [9] = 7,
  [10] = 7,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 4,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 22,
  [29] = 25,
  [30] = 22,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 25,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 32,
  [42] = 36,
  [43] = 31,
  [44] = 33,
  [45] = 25,
  [46] = 34,
  [47] = 22,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 25,
  [77] = 77,
  [78] = 78,
  [79] = 22,
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
  [92] = 91,
  [93] = 90,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [115] = 108,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 128,
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
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 138,
  [183] = 135,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 135,
  [191] = 191,
  [192] = 135,
  [193] = 193,
  [194] = 135,
  [195] = 195,
  [196] = 196,
  [197] = 140,
  [198] = 164,
  [199] = 186,
  [200] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(203);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(408);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(292);
      if (lookahead == ',') ADVANCE(285);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '=') ADVANCE(222);
      if (lookahead == '>') ADVANCE(425);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '^') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '~') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '%') ADVANCE(407);
      if (lookahead == '/') ADVANCE(392);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(424);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(407);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '{') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(396);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '^') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '=') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == '}') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == '}') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == '}') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(411);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 20:
      if (lookahead == '&') ADVANCE(433);
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 21:
      if (lookahead == '&') ADVANCE(432);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(262);
      END_STATE();
    case 28:
      if (lookahead == '6') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '<') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(422);
      if (lookahead == '~') ADVANCE(423);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '|') ADVANCE(431);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(290);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'G') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(286);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(288);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 193:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 195:
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '~') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202)
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_acl);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(396);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_penaltybox);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ratecounter);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_esi);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_restart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_rol_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ror_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'w') ADVANCE(339);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'v') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE_DQUOTE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_u);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(428);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 202},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 202},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 202},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 202},
  [39] = {.lex_state = 202},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 202},
  [51] = {.lex_state = 202},
  [52] = {.lex_state = 202},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 202},
  [63] = {.lex_state = 202},
  [64] = {.lex_state = 202},
  [65] = {.lex_state = 202},
  [66] = {.lex_state = 202},
  [67] = {.lex_state = 202},
  [68] = {.lex_state = 202},
  [69] = {.lex_state = 202},
  [70] = {.lex_state = 202},
  [71] = {.lex_state = 202},
  [72] = {.lex_state = 202},
  [73] = {.lex_state = 202},
  [74] = {.lex_state = 202},
  [75] = {.lex_state = 202},
  [76] = {.lex_state = 202},
  [77] = {.lex_state = 202},
  [78] = {.lex_state = 202},
  [79] = {.lex_state = 202},
  [80] = {.lex_state = 202},
  [81] = {.lex_state = 202},
  [82] = {.lex_state = 202},
  [83] = {.lex_state = 202},
  [84] = {.lex_state = 202},
  [85] = {.lex_state = 202},
  [86] = {.lex_state = 202},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 202},
  [90] = {.lex_state = 202},
  [91] = {.lex_state = 202},
  [92] = {.lex_state = 202},
  [93] = {.lex_state = 202},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 202},
  [99] = {.lex_state = 202},
  [100] = {.lex_state = 202},
  [101] = {.lex_state = 202},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 202},
  [106] = {.lex_state = 202},
  [107] = {.lex_state = 202},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 202},
  [110] = {.lex_state = 202},
  [111] = {.lex_state = 202},
  [112] = {.lex_state = 202},
  [113] = {.lex_state = 202},
  [114] = {.lex_state = 202},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 19},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 0},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(179),
    [sym__declaration] = STATE(39),
    [sym_acl_declaration] = STATE(39),
    [sym_backend_declaration] = STATE(39),
    [sym_director_declaration] = STATE(39),
    [sym_penaltybox_declaration] = STATE(39),
    [sym_ratecounter_declaration] = STATE(39),
    [sym_sub_declaration] = STATE(39),
    [sym_table_declaration] = STATE(39),
    [sym_void_sub_declaration] = STATE(83),
    [sym_typed_sub_declaration] = STATE(83),
    [sym_include_statement] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
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
    STATE(106), 1,
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
    STATE(182), 16,
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
    STATE(101), 1,
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
    STATE(182), 16,
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
    STATE(182), 16,
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
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    STATE(106), 1,
      sym_empty_labeled_statement,
    STATE(6), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(138), 16,
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
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    STATE(101), 1,
      sym_empty_labeled_statement,
    STATE(14), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(138), 16,
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
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(183), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(5), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(138), 16,
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
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(194), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(5), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(138), 16,
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
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(135), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(5), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(138), 16,
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
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(190), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(5), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(138), 16,
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
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_switch,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(192), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(5), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(138), 16,
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
    STATE(114), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(182), 16,
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
    STATE(113), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(182), 16,
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
    STATE(14), 6,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(138), 16,
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
    STATE(111), 2,
      sym_empty_labeled_statement,
      sym__statement_list,
    STATE(2), 5,
      sym_if_statement,
      sym_switch_statement,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(182), 16,
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
    STATE(117), 1,
      sym_elsif_keyword,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(17), 2,
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
    STATE(117), 1,
      sym_elsif_keyword,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(18), 2,
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
    STATE(117), 1,
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
    STATE(44), 1,
      sym_else_statement,
    STATE(122), 1,
      sym_elsif_keyword,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(20), 2,
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
    STATE(43), 1,
      sym_else_statement,
    STATE(122), 1,
      sym_elsif_keyword,
    ACTIONS(153), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    STATE(21), 2,
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
    STATE(122), 1,
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
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 23,
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
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_DQUOTE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(185), 23,
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
  [1699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 23,
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
      anon_sym_TILDE,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_DQUOTE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1732] = 3,
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
  [1763] = 3,
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
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(185), 21,
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
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(173), 20,
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
  [1855] = 3,
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
  [1885] = 3,
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
  [1915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
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
  [1945] = 3,
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
  [1975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(205), 20,
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
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(209), 20,
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
  [2035] = 3,
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
  [2065] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_acl,
    ACTIONS(216), 1,
      anon_sym_backend,
    ACTIONS(219), 1,
      anon_sym_director,
    ACTIONS(222), 1,
      anon_sym_penaltybox,
    ACTIONS(225), 1,
      anon_sym_ratecounter,
    ACTIONS(228), 1,
      anon_sym_table,
    ACTIONS(231), 1,
      anon_sym_sub,
    ACTIONS(234), 1,
      anon_sym_include,
    STATE(83), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(38), 10,
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
  [2112] = 12,
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
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(83), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(38), 10,
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
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(205), 18,
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
  [2187] = 3,
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
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(209), 18,
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
  [2243] = 3,
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
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
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
  [2299] = 3,
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
  [2327] = 3,
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
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(173), 18,
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
  [2383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_m,
    ACTIONS(245), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
    ACTIONS(239), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(71), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_PLUS,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(274), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(50), 2,
      sym_string,
      aux_sym_string_concat_repeat1,
    ACTIONS(263), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2488] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(50), 2,
      sym_string,
      aux_sym_string_concat_repeat1,
    ACTIONS(276), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2521] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(278), 1,
      anon_sym_PLUS,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(51), 2,
      sym_string,
      aux_sym_string_concat_repeat1,
    ACTIONS(282), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2554] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(286), 2,
      sym_ident,
      sym_dot_ident,
    STATE(63), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2590] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(288), 2,
      sym_ident,
      sym_dot_ident,
    STATE(72), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2626] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(290), 2,
      sym_ident,
      sym_dot_ident,
    STATE(73), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2662] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(292), 2,
      sym_ident,
      sym_dot_ident,
    STATE(66), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2698] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(294), 2,
      sym_ident,
      sym_dot_ident,
    STATE(69), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2734] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(296), 2,
      sym_ident,
      sym_dot_ident,
    STATE(70), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(298), 2,
      sym_ident,
      sym_dot_ident,
    STATE(68), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2806] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_number,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(52), 1,
      sym_string,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(257), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(300), 2,
      sym_ident,
      sym_dot_ident,
    STATE(64), 6,
      sym__expression,
      sym_string_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 15,
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
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 13,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_DQUOTE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 10,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3006] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(324), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 10,
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
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [3327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_block,
    STATE(118), 1,
      sym_type,
    ACTIONS(362), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [3347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_type,
    ACTIONS(362), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [3364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      anon_sym_case,
    ACTIONS(371), 1,
      anon_sym_default,
    STATE(89), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_case,
    ACTIONS(378), 1,
      anon_sym_default,
    STATE(92), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_case,
    ACTIONS(378), 1,
      anon_sym_default,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(89), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_case,
    ACTIONS(378), 1,
      anon_sym_default,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(89), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_case,
    ACTIONS(378), 1,
      anon_sym_default,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(91), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [3454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      sym_type,
    ACTIONS(362), 5,
      anon_sym_BOOL,
      anon_sym_INTEGER,
      anon_sym_FLOAT,
      anon_sym_TIME,
      anon_sym_RTIME,
  [3468] = 5,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      aux_sym_string_token1,
    ACTIONS(393), 1,
      anon_sym_PERCENT,
    STATE(95), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [3485] = 5,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym_string_token1,
    ACTIONS(400), 1,
      anon_sym_PERCENT,
    STATE(95), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [3502] = 5,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_PERCENT,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      aux_sym_string_token1,
    STATE(96), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [3519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_string,
  [3535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    ACTIONS(408), 1,
      anon_sym_TILDE,
    STATE(150), 1,
      sym_string,
  [3551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(154), 1,
      sym_string,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3573] = 3,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_string_token1,
    ACTIONS(412), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [3584] = 3,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_string_token1,
    ACTIONS(416), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [3595] = 3,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_string_token1,
    ACTIONS(420), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(166), 1,
      sym_string,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_if,
    STATE(32), 1,
      sym_block,
  [3650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(62), 1,
      sym_string,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(180), 1,
      sym_string,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_DQUOTE,
    STATE(74), 1,
      sym_string,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_if,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(440), 1,
      anon_sym_u,
  [3739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_conditional_expression,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
  [3759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      sym_number,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_conditional_expression,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [3817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      aux_sym_escape_sequence_token2,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [3847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_conditional_expression,
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_conditional_expression,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_dot_ident,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_dot_ident,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_EQ,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SEMI,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SEMI,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_dot_ident,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_if,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COLON,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_dot_ident,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SEMI,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SEMI,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_local,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SEMI,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_ident,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_dot_ident,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_ident,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
  [4161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [4168] = 2,
    ACTIONS(386), 1,
      sym_comment,
    ACTIONS(546), 1,
      aux_sym_string_token2,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SEMI,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_ident,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SEMI,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_dot_ident,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_ident,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_ident,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_ident,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_ident,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_ident,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_ident,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      aux_sym_escape_sequence_token3,
  [4336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [4350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_dot_ident,
  [4357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
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
  [SMALL_STATE(26)] = 1699,
  [SMALL_STATE(27)] = 1732,
  [SMALL_STATE(28)] = 1763,
  [SMALL_STATE(29)] = 1794,
  [SMALL_STATE(30)] = 1825,
  [SMALL_STATE(31)] = 1855,
  [SMALL_STATE(32)] = 1885,
  [SMALL_STATE(33)] = 1915,
  [SMALL_STATE(34)] = 1945,
  [SMALL_STATE(35)] = 1975,
  [SMALL_STATE(36)] = 2005,
  [SMALL_STATE(37)] = 2035,
  [SMALL_STATE(38)] = 2065,
  [SMALL_STATE(39)] = 2112,
  [SMALL_STATE(40)] = 2159,
  [SMALL_STATE(41)] = 2187,
  [SMALL_STATE(42)] = 2215,
  [SMALL_STATE(43)] = 2243,
  [SMALL_STATE(44)] = 2271,
  [SMALL_STATE(45)] = 2299,
  [SMALL_STATE(46)] = 2327,
  [SMALL_STATE(47)] = 2355,
  [SMALL_STATE(48)] = 2383,
  [SMALL_STATE(49)] = 2413,
  [SMALL_STATE(50)] = 2455,
  [SMALL_STATE(51)] = 2488,
  [SMALL_STATE(52)] = 2521,
  [SMALL_STATE(53)] = 2554,
  [SMALL_STATE(54)] = 2590,
  [SMALL_STATE(55)] = 2626,
  [SMALL_STATE(56)] = 2662,
  [SMALL_STATE(57)] = 2698,
  [SMALL_STATE(58)] = 2734,
  [SMALL_STATE(59)] = 2770,
  [SMALL_STATE(60)] = 2806,
  [SMALL_STATE(61)] = 2842,
  [SMALL_STATE(62)] = 2863,
  [SMALL_STATE(63)] = 2886,
  [SMALL_STATE(64)] = 2906,
  [SMALL_STATE(65)] = 2926,
  [SMALL_STATE(66)] = 2946,
  [SMALL_STATE(67)] = 2966,
  [SMALL_STATE(68)] = 2986,
  [SMALL_STATE(69)] = 3006,
  [SMALL_STATE(70)] = 3031,
  [SMALL_STATE(71)] = 3056,
  [SMALL_STATE(72)] = 3081,
  [SMALL_STATE(73)] = 3106,
  [SMALL_STATE(74)] = 3131,
  [SMALL_STATE(75)] = 3147,
  [SMALL_STATE(76)] = 3162,
  [SMALL_STATE(77)] = 3177,
  [SMALL_STATE(78)] = 3192,
  [SMALL_STATE(79)] = 3207,
  [SMALL_STATE(80)] = 3222,
  [SMALL_STATE(81)] = 3237,
  [SMALL_STATE(82)] = 3252,
  [SMALL_STATE(83)] = 3267,
  [SMALL_STATE(84)] = 3282,
  [SMALL_STATE(85)] = 3297,
  [SMALL_STATE(86)] = 3312,
  [SMALL_STATE(87)] = 3327,
  [SMALL_STATE(88)] = 3347,
  [SMALL_STATE(89)] = 3364,
  [SMALL_STATE(90)] = 3382,
  [SMALL_STATE(91)] = 3400,
  [SMALL_STATE(92)] = 3418,
  [SMALL_STATE(93)] = 3436,
  [SMALL_STATE(94)] = 3454,
  [SMALL_STATE(95)] = 3468,
  [SMALL_STATE(96)] = 3485,
  [SMALL_STATE(97)] = 3502,
  [SMALL_STATE(98)] = 3519,
  [SMALL_STATE(99)] = 3535,
  [SMALL_STATE(100)] = 3551,
  [SMALL_STATE(101)] = 3564,
  [SMALL_STATE(102)] = 3573,
  [SMALL_STATE(103)] = 3584,
  [SMALL_STATE(104)] = 3595,
  [SMALL_STATE(105)] = 3606,
  [SMALL_STATE(106)] = 3619,
  [SMALL_STATE(107)] = 3628,
  [SMALL_STATE(108)] = 3637,
  [SMALL_STATE(109)] = 3650,
  [SMALL_STATE(110)] = 3663,
  [SMALL_STATE(111)] = 3676,
  [SMALL_STATE(112)] = 3685,
  [SMALL_STATE(113)] = 3698,
  [SMALL_STATE(114)] = 3707,
  [SMALL_STATE(115)] = 3716,
  [SMALL_STATE(116)] = 3729,
  [SMALL_STATE(117)] = 3739,
  [SMALL_STATE(118)] = 3749,
  [SMALL_STATE(119)] = 3759,
  [SMALL_STATE(120)] = 3767,
  [SMALL_STATE(121)] = 3777,
  [SMALL_STATE(122)] = 3787,
  [SMALL_STATE(123)] = 3797,
  [SMALL_STATE(124)] = 3807,
  [SMALL_STATE(125)] = 3817,
  [SMALL_STATE(126)] = 3827,
  [SMALL_STATE(127)] = 3837,
  [SMALL_STATE(128)] = 3847,
  [SMALL_STATE(129)] = 3857,
  [SMALL_STATE(130)] = 3867,
  [SMALL_STATE(131)] = 3874,
  [SMALL_STATE(132)] = 3881,
  [SMALL_STATE(133)] = 3888,
  [SMALL_STATE(134)] = 3895,
  [SMALL_STATE(135)] = 3902,
  [SMALL_STATE(136)] = 3909,
  [SMALL_STATE(137)] = 3916,
  [SMALL_STATE(138)] = 3923,
  [SMALL_STATE(139)] = 3930,
  [SMALL_STATE(140)] = 3937,
  [SMALL_STATE(141)] = 3944,
  [SMALL_STATE(142)] = 3951,
  [SMALL_STATE(143)] = 3958,
  [SMALL_STATE(144)] = 3965,
  [SMALL_STATE(145)] = 3972,
  [SMALL_STATE(146)] = 3979,
  [SMALL_STATE(147)] = 3986,
  [SMALL_STATE(148)] = 3993,
  [SMALL_STATE(149)] = 4000,
  [SMALL_STATE(150)] = 4007,
  [SMALL_STATE(151)] = 4014,
  [SMALL_STATE(152)] = 4021,
  [SMALL_STATE(153)] = 4028,
  [SMALL_STATE(154)] = 4035,
  [SMALL_STATE(155)] = 4042,
  [SMALL_STATE(156)] = 4049,
  [SMALL_STATE(157)] = 4056,
  [SMALL_STATE(158)] = 4063,
  [SMALL_STATE(159)] = 4070,
  [SMALL_STATE(160)] = 4077,
  [SMALL_STATE(161)] = 4084,
  [SMALL_STATE(162)] = 4091,
  [SMALL_STATE(163)] = 4098,
  [SMALL_STATE(164)] = 4105,
  [SMALL_STATE(165)] = 4112,
  [SMALL_STATE(166)] = 4119,
  [SMALL_STATE(167)] = 4126,
  [SMALL_STATE(168)] = 4133,
  [SMALL_STATE(169)] = 4140,
  [SMALL_STATE(170)] = 4147,
  [SMALL_STATE(171)] = 4154,
  [SMALL_STATE(172)] = 4161,
  [SMALL_STATE(173)] = 4168,
  [SMALL_STATE(174)] = 4175,
  [SMALL_STATE(175)] = 4182,
  [SMALL_STATE(176)] = 4189,
  [SMALL_STATE(177)] = 4196,
  [SMALL_STATE(178)] = 4203,
  [SMALL_STATE(179)] = 4210,
  [SMALL_STATE(180)] = 4217,
  [SMALL_STATE(181)] = 4224,
  [SMALL_STATE(182)] = 4231,
  [SMALL_STATE(183)] = 4238,
  [SMALL_STATE(184)] = 4245,
  [SMALL_STATE(185)] = 4252,
  [SMALL_STATE(186)] = 4259,
  [SMALL_STATE(187)] = 4266,
  [SMALL_STATE(188)] = 4273,
  [SMALL_STATE(189)] = 4280,
  [SMALL_STATE(190)] = 4287,
  [SMALL_STATE(191)] = 4294,
  [SMALL_STATE(192)] = 4301,
  [SMALL_STATE(193)] = 4308,
  [SMALL_STATE(194)] = 4315,
  [SMALL_STATE(195)] = 4322,
  [SMALL_STATE(196)] = 4329,
  [SMALL_STATE(197)] = 4336,
  [SMALL_STATE(198)] = 4343,
  [SMALL_STATE(199)] = 4350,
  [SMALL_STATE(200)] = 4357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(160),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(157),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(155),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(120),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(152),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(112),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(54),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(130),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(149),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(49),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(148),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(105),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(110),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(145),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(144),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(143),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(129),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(200),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(128),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(142),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(146),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(137),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, .production_id = 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 6, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 6, .production_id = 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, .production_id = 10),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_statement, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_statement, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_concat_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concat_repeat1, 2), SHIFT_REPEAT(109),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concat_repeat1, 2), SHIFT_REPEAT(97),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_concat_repeat1, 2), SHIFT_REPEAT(173),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_concat_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concat, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_concat, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concat, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_concat, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtime, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rtime, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, .production_id = 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_sub_declaration, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_declaration, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penaltybox_declaration, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratecounter_declaration, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_sub_declaration, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(99),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(147),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(95),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_labeled_statement, 2, .production_id = 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 11),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 12),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_statement, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 4, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [558] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
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
