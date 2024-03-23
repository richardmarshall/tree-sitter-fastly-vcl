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
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 175
#define ALIAS_COUNT 1
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_comment = 2,
  anon_sym_acl = 3,
  anon_sym_LBRACE = 4,
  anon_sym_BANG = 5,
  anon_sym_SLASH = 6,
  anon_sym_RBRACE = 7,
  anon_sym_backend = 8,
  anon_sym_director = 9,
  anon_sym_DOT = 10,
  anon_sym_EQ = 11,
  anon_sym_penaltybox = 12,
  anon_sym_ratecounter = 13,
  anon_sym_table = 14,
  anon_sym_COLON = 15,
  anon_sym_sub = 16,
  anon_sym_add = 17,
  anon_sym_call = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_declare = 21,
  anon_sym_local = 22,
  anon_sym_error = 23,
  anon_sym_esi = 24,
  anon_sym_include = 25,
  anon_sym_log = 26,
  anon_sym_remove = 27,
  anon_sym_restart = 28,
  anon_sym_return = 29,
  anon_sym_deliver = 30,
  anon_sym_deliver_stale = 31,
  anon_sym_fetch = 32,
  anon_sym_hash = 33,
  anon_sym_lookup = 34,
  anon_sym_pass = 35,
  anon_sym_upgrade = 36,
  anon_sym_set = 37,
  anon_sym_PLUS_EQ = 38,
  anon_sym_DASH_EQ = 39,
  anon_sym_STAR_EQ = 40,
  anon_sym_SLASH_EQ = 41,
  anon_sym_PERCENT_EQ = 42,
  anon_sym_PIPE_EQ = 43,
  anon_sym_AMP_EQ = 44,
  anon_sym_CARET_EQ = 45,
  anon_sym_LT_LT_EQ = 46,
  anon_sym_GT_GT_EQ = 47,
  anon_sym_rol_EQ = 48,
  anon_sym_ror_EQ = 49,
  anon_sym_AMP_AMP_EQ = 50,
  anon_sym_PIPE_PIPE_EQ = 51,
  anon_sym_synthetic = 52,
  anon_sym_synthetic_DOTbase64 = 53,
  anon_sym_unset = 54,
  anon_sym_break = 55,
  anon_sym_fallthrough = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_elsif = 59,
  anon_sym_elseif = 60,
  anon_sym_switch = 61,
  anon_sym_case = 62,
  anon_sym_TILDE = 63,
  anon_sym_default = 64,
  anon_sym_goto = 65,
  anon_sym_COMMA = 66,
  anon_sym_ACL = 67,
  anon_sym_BACKEND = 68,
  anon_sym_BOOL = 69,
  anon_sym_FLOAT = 70,
  anon_sym_INTEGER = 71,
  anon_sym_IP = 72,
  anon_sym_RTIME = 73,
  anon_sym_STRING = 74,
  anon_sym_TIME = 75,
  anon_sym_PLUS = 76,
  sym_ident = 77,
  sym_dot_ident = 78,
  aux_sym_number_token1 = 79,
  anon_sym_0x = 80,
  aux_sym_number_token2 = 81,
  anon_sym_true = 82,
  anon_sym_false = 83,
  anon_sym_DQUOTE = 84,
  aux_sym_string_token1 = 85,
  aux_sym_string_token2 = 86,
  anon_sym_ms = 87,
  anon_sym_s = 88,
  anon_sym_m = 89,
  anon_sym_h = 90,
  anon_sym_d = 91,
  anon_sym_y = 92,
  anon_sym_PERCENT = 93,
  aux_sym_escape_sequence_token1 = 94,
  anon_sym_u = 95,
  aux_sym_escape_sequence_token2 = 96,
  aux_sym_escape_sequence_token3 = 97,
  anon_sym_DASH = 98,
  anon_sym_EQ_EQ = 99,
  anon_sym_BANG_EQ = 100,
  anon_sym_BANG_TILDE = 101,
  anon_sym_GT = 102,
  anon_sym_LT = 103,
  anon_sym_GT_EQ = 104,
  anon_sym_LT_EQ = 105,
  anon_sym_PIPE_PIPE = 106,
  anon_sym_AMP_AMP = 107,
  sym_source_file = 108,
  sym__declaration = 109,
  sym_acl_declaration = 110,
  sym_backend_declaration = 111,
  sym_director_declaration = 112,
  sym_dot_property = 113,
  sym_penaltybox_declaration = 114,
  sym_ratecounter_declaration = 115,
  sym_sub_declaration = 116,
  sym_table_declaration = 117,
  sym_void_sub_declaration = 118,
  sym_typed_sub_declaration = 119,
  sym_add_statement = 120,
  sym_call_statement = 121,
  sym_declare_statement = 122,
  sym_error_statement = 123,
  sym_esi_statement = 124,
  sym_include_statement = 125,
  sym_log_statement = 126,
  sym_remove_statement = 127,
  sym_restart_statement = 128,
  sym_return_statement = 129,
  sym_states = 130,
  sym_set_statement = 131,
  sym_synthetic_statement = 132,
  sym_synthetic_base64_statement = 133,
  sym_unset_statement = 134,
  sym_break_statement = 135,
  sym_fallthrough_statement = 136,
  sym_if_statement = 137,
  sym_elsif_keyword = 138,
  sym_else_if_statement = 139,
  sym_else_statement = 140,
  sym_switch_statement = 141,
  sym_case_statement = 142,
  sym_default_case_statement = 143,
  sym_statement_label = 144,
  sym_goto_statement = 145,
  sym__line_statement = 146,
  sym__block_statement = 147,
  sym__statement = 148,
  sym_conditional_expression = 149,
  sym_function_call_expression = 150,
  sym_function_call_statement = 151,
  sym_argument_list = 152,
  sym_type = 153,
  sym_block = 154,
  sym__statement_list = 155,
  sym__expression = 156,
  sym_concat = 157,
  sym_number = 158,
  sym_bool = 159,
  sym_string = 160,
  sym_rtime = 161,
  sym_literal = 162,
  sym_escape_sequence = 163,
  sym_unary_expression = 164,
  sym_binary_expression = 165,
  aux_sym_source_file_repeat1 = 166,
  aux_sym_backend_declaration_repeat1 = 167,
  aux_sym_table_declaration_repeat1 = 168,
  aux_sym_if_statement_repeat1 = 169,
  aux_sym_switch_statement_repeat1 = 170,
  aux_sym_argument_list_repeat1 = 171,
  aux_sym__statement_list_repeat1 = 172,
  aux_sym_concat_repeat1 = 173,
  aux_sym_string_repeat1 = 174,
  alias_sym_label_name = 175,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_acl] = "acl",
  [anon_sym_LBRACE] = "{",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_RBRACE] = "}",
  [anon_sym_backend] = "backend",
  [anon_sym_director] = "director",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_penaltybox] = "penaltybox",
  [anon_sym_ratecounter] = "ratecounter",
  [anon_sym_table] = "table",
  [anon_sym_COLON] = ":",
  [anon_sym_sub] = "sub",
  [anon_sym_add] = "add",
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
  [anon_sym_deliver] = "deliver",
  [anon_sym_deliver_stale] = "deliver_stale",
  [anon_sym_fetch] = "fetch",
  [anon_sym_hash] = "hash",
  [anon_sym_lookup] = "lookup",
  [anon_sym_pass] = "pass",
  [anon_sym_upgrade] = "upgrade",
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
  [anon_sym_default] = "default",
  [anon_sym_goto] = "goto",
  [anon_sym_COMMA] = ",",
  [anon_sym_ACL] = "ACL",
  [anon_sym_BACKEND] = "BACKEND",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_IP] = "IP",
  [anon_sym_RTIME] = "RTIME",
  [anon_sym_STRING] = "STRING",
  [anon_sym_TIME] = "TIME",
  [anon_sym_PLUS] = "+",
  [sym_ident] = "ident",
  [sym_dot_ident] = "dot_ident",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
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
  [sym_dot_property] = "dot_property",
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
  [sym_states] = "states",
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
  [sym_statement_label] = "statement_label",
  [sym_goto_statement] = "goto_statement",
  [sym__line_statement] = "_line_statement",
  [sym__block_statement] = "_block_statement",
  [sym__statement] = "_statement",
  [sym_conditional_expression] = "conditional_expression",
  [sym_function_call_expression] = "function_call_expression",
  [sym_function_call_statement] = "function_call_statement",
  [sym_argument_list] = "argument_list",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__expression] = "_expression",
  [sym_concat] = "concat",
  [sym_number] = "number",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_rtime] = "rtime",
  [sym_literal] = "literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_backend_declaration_repeat1] = "backend_declaration_repeat1",
  [aux_sym_table_declaration_repeat1] = "table_declaration_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_concat_repeat1] = "concat_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_label_name] = "label_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_acl] = anon_sym_acl,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_backend] = anon_sym_backend,
  [anon_sym_director] = anon_sym_director,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_penaltybox] = anon_sym_penaltybox,
  [anon_sym_ratecounter] = anon_sym_ratecounter,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_add] = anon_sym_add,
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
  [anon_sym_deliver] = anon_sym_deliver,
  [anon_sym_deliver_stale] = anon_sym_deliver_stale,
  [anon_sym_fetch] = anon_sym_fetch,
  [anon_sym_hash] = anon_sym_hash,
  [anon_sym_lookup] = anon_sym_lookup,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_upgrade] = anon_sym_upgrade,
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
  [anon_sym_default] = anon_sym_default,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ACL] = anon_sym_ACL,
  [anon_sym_BACKEND] = anon_sym_BACKEND,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_IP] = anon_sym_IP,
  [anon_sym_RTIME] = anon_sym_RTIME,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_TIME] = anon_sym_TIME,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_ident] = sym_ident,
  [sym_dot_ident] = sym_dot_ident,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [sym_dot_property] = sym_dot_property,
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
  [sym_states] = sym_states,
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
  [sym_statement_label] = sym_statement_label,
  [sym_goto_statement] = sym_goto_statement,
  [sym__line_statement] = sym__line_statement,
  [sym__block_statement] = sym__block_statement,
  [sym__statement] = sym__statement,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_function_call_expression] = sym_function_call_expression,
  [sym_function_call_statement] = sym_function_call_statement,
  [sym_argument_list] = sym_argument_list,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__expression] = sym__expression,
  [sym_concat] = sym_concat,
  [sym_number] = sym_number,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_rtime] = sym_rtime,
  [sym_literal] = sym_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_backend_declaration_repeat1] = aux_sym_backend_declaration_repeat1,
  [aux_sym_table_declaration_repeat1] = aux_sym_table_declaration_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_concat_repeat1] = aux_sym_concat_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_label_name] = alias_sym_label_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_deliver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deliver_stale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fetch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upgrade] = {
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
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BACKEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
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
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
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
  [sym_dot_property] = {
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
  [sym_states] = {
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
  [sym_statement_label] = {
    .visible = true,
    .named = true,
  },
  [sym_goto_statement] = {
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
  [sym_function_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
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
  [sym_concat] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_literal] = {
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
  [aux_sym_backend_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_declaration_repeat1] = {
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concat_repeat1] = {
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
  field_args = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_control = 5,
  field_ident = 6,
  field_keyword = 7,
  field_label = 8,
  field_left = 9,
  field_name = 10,
  field_operand = 11,
  field_operator = 12,
  field_right = 13,
  field_test = 14,
  field_type = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 4},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 5},
  [11] = {.index = 24, .length = 3},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 3},
  [14] = {.index = 32, .length = 6},
  [15] = {.index = 38, .length = 1},
  [16] = {.index = 39, .length = 3},
  [17] = {.index = 42, .length = 1},
  [18] = {.index = 43, .length = 1},
  [19] = {.index = 44, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_body, 3},
  [2] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [5] =
    {field_ident, 1},
  [6] =
    {field_label, 0},
  [7] =
    {field_args, 1},
    {field_ident, 0},
  [9] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
  [13] =
    {field_operand, 1},
    {field_operator, 0},
  [15] =
    {field_operand, 0},
    {field_operator, 1},
  [17] =
    {field_condition, 1},
    {field_consequence, 2},
  [19] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_body, 6},
  [24] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [27] =
    {field_name, 2},
    {field_type, 3},
  [29] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [32] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_body, 6},
    {field_body, 7},
  [38] =
    {field_consequence, 1},
  [39] =
    {field_condition, 1},
    {field_consequence, 2},
    {field_keyword, 0},
  [42] =
    {field_control, 2},
  [43] =
    {field_test, 1},
  [44] =
    {field_test, 1},
    {field_test, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 6,
  [10] = 6,
  [11] = 3,
  [12] = 2,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 18,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 25,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 25,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 32,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 29,
  [50] = 37,
  [51] = 51,
  [52] = 52,
  [53] = 36,
  [54] = 54,
  [55] = 24,
  [56] = 25,
  [57] = 30,
  [58] = 58,
  [59] = 59,
  [60] = 31,
  [61] = 35,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 24,
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
  [114] = 25,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 117,
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
  [156] = 149,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 151,
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
  [176] = 165,
  [177] = 177,
  [178] = 178,
  [179] = 174,
  [180] = 172,
  [181] = 173,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 193,
  [239] = 190,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 190,
  [247] = 247,
  [248] = 190,
  [249] = 249,
  [250] = 190,
  [251] = 251,
  [252] = 252,
  [253] = 188,
  [254] = 240,
  [255] = 221,
  [256] = 195,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(259);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(364);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(551);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'B') ADVANCE(47);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '^') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(189);
      if (lookahead == 'h') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead == 'y') ADVANCE(532);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '~') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead == '/') ADVANCE(519);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(552);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'h') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(527);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(532);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '~') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(552);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(549);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '~') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(552);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(549);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '~') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '{') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '+') ADVANCE(363);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(258);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '}') ADVANCE(523);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(266);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '^') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '|') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == '}') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'b') ADVANCE(455);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == '}') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(535);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 21:
      if (lookahead == '&') ADVANCE(558);
      if (lookahead == '=') ADVANCE(318);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(557);
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '=') ADVANCE(318);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(328);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '<') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(547);
      if (lookahead == '~') ADVANCE(548);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(546);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(319);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '|') ADVANCE(556);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(317);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(322);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(355);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(362);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(360);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(361);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'K') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'K') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(354);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(356);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(359);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(358);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(357);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 106:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(340);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(342);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(332);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 240:
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 241:
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 243:
      if (lookahead == '|') ADVANCE(555);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 250:
      if (eof) ADVANCE(251);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ';') ADVANCE(252);
      if (lookahead == '<') ADVANCE(552);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(549);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '~') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(250)
      END_STATE();
    case 251:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_acl);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(547);
      if (lookahead == '~') ADVANCE(548);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(254);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == '=') ADVANCE(315);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_backend);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_director);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(546);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_penaltybox);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ratecounter);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_esi);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_restart);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_restart);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '_') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_deliver);
      if (lookahead == '_') ADVANCE(213);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_deliver_stale);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_deliver_stale);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_fetch);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_fetch);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_hash);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_lookup);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_lookup);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_upgrade);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_upgrade);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_rol_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_ror_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_synthetic);
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_synthetic_DOTbase64);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_ACL);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_BACKEND);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_IP);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_RTIME);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(421);
      if (lookahead == 'y') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'v') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'v') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '4') ADVANCE(329);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '6') ADVANCE(500);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_dot_ident);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'x') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(521);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(553);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(554);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 250},
  [64] = {.lex_state = 250},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 250},
  [73] = {.lex_state = 250},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 250},
  [77] = {.lex_state = 250},
  [78] = {.lex_state = 250},
  [79] = {.lex_state = 250},
  [80] = {.lex_state = 250},
  [81] = {.lex_state = 250},
  [82] = {.lex_state = 250},
  [83] = {.lex_state = 250},
  [84] = {.lex_state = 250},
  [85] = {.lex_state = 250},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 250},
  [89] = {.lex_state = 250},
  [90] = {.lex_state = 250},
  [91] = {.lex_state = 250},
  [92] = {.lex_state = 250},
  [93] = {.lex_state = 250},
  [94] = {.lex_state = 250},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 250},
  [98] = {.lex_state = 250},
  [99] = {.lex_state = 250},
  [100] = {.lex_state = 250},
  [101] = {.lex_state = 250},
  [102] = {.lex_state = 250},
  [103] = {.lex_state = 250},
  [104] = {.lex_state = 250},
  [105] = {.lex_state = 250},
  [106] = {.lex_state = 250},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 250},
  [109] = {.lex_state = 250},
  [110] = {.lex_state = 250},
  [111] = {.lex_state = 250},
  [112] = {.lex_state = 250},
  [113] = {.lex_state = 250},
  [114] = {.lex_state = 250},
  [115] = {.lex_state = 250},
  [116] = {.lex_state = 250},
  [117] = {.lex_state = 250},
  [118] = {.lex_state = 250},
  [119] = {.lex_state = 250},
  [120] = {.lex_state = 250},
  [121] = {.lex_state = 250},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 250},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 250},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 250},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 250},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 250},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 19},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_acl] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_backend] = ACTIONS(1),
    [anon_sym_director] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_penaltybox] = ACTIONS(1),
    [anon_sym_ratecounter] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
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
    [anon_sym_deliver] = ACTIONS(1),
    [anon_sym_deliver_stale] = ACTIONS(1),
    [anon_sym_fetch] = ACTIONS(1),
    [anon_sym_hash] = ACTIONS(1),
    [anon_sym_lookup] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_upgrade] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
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
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ACL] = ACTIONS(1),
    [anon_sym_BACKEND] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_IP] = ACTIONS(1),
    [anon_sym_RTIME] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(234),
    [sym__declaration] = STATE(63),
    [sym_acl_declaration] = STATE(63),
    [sym_backend_declaration] = STATE(63),
    [sym_director_declaration] = STATE(63),
    [sym_penaltybox_declaration] = STATE(63),
    [sym_ratecounter_declaration] = STATE(63),
    [sym_sub_declaration] = STATE(63),
    [sym_table_declaration] = STATE(63),
    [sym_void_sub_declaration] = STATE(99),
    [sym_typed_sub_declaration] = STATE(99),
    [sym_include_statement] = STATE(233),
    [aux_sym_source_file_repeat1] = STATE(63),
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
  [0] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(28), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_declare,
    ACTIONS(34), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_esi,
    ACTIONS(40), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_log,
    ACTIONS(46), 1,
      anon_sym_remove,
    ACTIONS(49), 1,
      anon_sym_restart,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(55), 1,
      anon_sym_set,
    ACTIONS(58), 1,
      anon_sym_synthetic,
    ACTIONS(61), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(64), 1,
      anon_sym_unset,
    ACTIONS(67), 1,
      anon_sym_break,
    ACTIONS(70), 1,
      anon_sym_fallthrough,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(76), 1,
      anon_sym_switch,
    ACTIONS(81), 1,
      anon_sym_goto,
    ACTIONS(84), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_dot_ident,
    STATE(192), 1,
      sym_function_call_expression,
    ACTIONS(79), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(2), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [106] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_switch,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      sym_dot_ident,
    STATE(192), 1,
      sym_function_call_expression,
    ACTIONS(128), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(2), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [212] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_switch,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_function_call_expression,
    ACTIONS(138), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(3), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [318] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(11), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [420] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(250), 1,
      sym__statement_list,
    STATE(5), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [524] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(248), 1,
      sym__statement_list,
    STATE(5), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [628] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(246), 1,
      sym__statement_list,
    STATE(5), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [732] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym__statement_list,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(5), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [836] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(239), 1,
      sym__statement_list,
    STATE(5), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [940] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(134), 1,
      sym_dot_ident,
    ACTIONS(140), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      anon_sym_switch,
    ACTIONS(144), 1,
      sym_ident,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(12), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [1042] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_add,
    ACTIONS(28), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_declare,
    ACTIONS(34), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_esi,
    ACTIONS(40), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_log,
    ACTIONS(46), 1,
      anon_sym_remove,
    ACTIONS(49), 1,
      anon_sym_restart,
    ACTIONS(52), 1,
      anon_sym_return,
    ACTIONS(55), 1,
      anon_sym_set,
    ACTIONS(58), 1,
      anon_sym_synthetic,
    ACTIONS(61), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(64), 1,
      anon_sym_unset,
    ACTIONS(67), 1,
      anon_sym_break,
    ACTIONS(70), 1,
      anon_sym_fallthrough,
    ACTIONS(81), 1,
      anon_sym_goto,
    ACTIONS(87), 1,
      sym_dot_ident,
    ACTIONS(156), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_switch,
    ACTIONS(162), 1,
      sym_ident,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(12), 7,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
      aux_sym__statement_list_repeat1,
    STATE(193), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [1144] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_switch,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      sym_dot_ident,
    STATE(160), 1,
      sym__statement_list,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [1245] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_switch,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      sym_dot_ident,
    STATE(143), 1,
      sym__statement_list,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [1346] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_add,
    ACTIONS(94), 1,
      anon_sym_call,
    ACTIONS(96), 1,
      anon_sym_declare,
    ACTIONS(98), 1,
      anon_sym_error,
    ACTIONS(100), 1,
      anon_sym_esi,
    ACTIONS(102), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_log,
    ACTIONS(106), 1,
      anon_sym_remove,
    ACTIONS(108), 1,
      anon_sym_restart,
    ACTIONS(110), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_set,
    ACTIONS(114), 1,
      anon_sym_synthetic,
    ACTIONS(116), 1,
      anon_sym_synthetic_DOTbase64,
    ACTIONS(118), 1,
      anon_sym_unset,
    ACTIONS(120), 1,
      anon_sym_break,
    ACTIONS(122), 1,
      anon_sym_fallthrough,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_switch,
    ACTIONS(130), 1,
      anon_sym_goto,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      sym_dot_ident,
    STATE(162), 1,
      sym__statement_list,
    STATE(192), 1,
      sym_function_call_expression,
    STATE(4), 6,
      sym_if_statement,
      sym_switch_statement,
      sym_statement_label,
      sym__line_statement,
      sym__block_statement,
      sym__statement,
    STATE(238), 18,
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
      sym_goto_statement,
      sym_function_call_statement,
  [1447] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    STATE(251), 1,
      sym_states,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(94), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
    ACTIONS(169), 9,
      anon_sym_error,
      anon_sym_restart,
      anon_sym_deliver,
      anon_sym_deliver_stale,
      anon_sym_fetch,
      anon_sym_hash,
      anon_sym_lookup,
      anon_sym_pass,
      anon_sym_upgrade,
  [1509] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_else,
    STATE(31), 1,
      sym_else_statement,
    STATE(181), 1,
      sym_elsif_keyword,
    ACTIONS(189), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(19), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_else,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_else_statement,
    STATE(181), 1,
      sym_elsif_keyword,
    ACTIONS(189), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(17), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(193), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1607] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_else,
    STATE(181), 1,
      sym_elsif_keyword,
    ACTIONS(202), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(19), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(197), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_else,
    STATE(60), 1,
      sym_else_statement,
    STATE(173), 1,
      sym_elsif_keyword,
    ACTIONS(189), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(22), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1700] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_else,
    STATE(49), 1,
      sym_else_statement,
    STATE(173), 1,
      sym_elsif_keyword,
    ACTIONS(189), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(20), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(193), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1747] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_else,
    STATE(173), 1,
      sym_elsif_keyword,
    ACTIONS(202), 2,
      anon_sym_elsif,
      anon_sym_elseif,
    STATE(22), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(197), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 26,
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
      anon_sym_synthetic_DOTbase64,
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
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 26,
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
      anon_sym_synthetic_DOTbase64,
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
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 26,
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
      anon_sym_synthetic_DOTbase64,
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
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 24,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 24,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 24,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elsif,
      anon_sym_elseif,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [1995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 23,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2283] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(79), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2334] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(93), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2385] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(90), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_m,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_m,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 20,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2528] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(89), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2576] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(92), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2624] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    STATE(76), 1,
      sym_argument_list,
    ACTIONS(265), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(70), 2,
      sym_string,
      aux_sym_concat_repeat1,
    ACTIONS(259), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2668] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(94), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2716] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(81), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2824] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2872] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(88), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [2950] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(83), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [3058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [3088] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(85), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [3136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(67), 1,
      sym_string,
    STATE(68), 1,
      sym_number,
    ACTIONS(171), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(91), 8,
      sym_conditional_expression,
      sym_function_call_expression,
      sym__expression,
      sym_concat,
      sym_bool,
      sym_rtime,
      sym_unary_expression,
      sym_binary_expression,
  [3184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [3214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 21,
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
      anon_sym_synthetic_DOTbase64,
      anon_sym_unset,
      anon_sym_break,
      anon_sym_fallthrough,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_goto,
      sym_ident,
      sym_dot_ident,
  [3244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_SLASH,
      sym_ident,
      sym_dot_ident,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3273] = 13,
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
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(233), 1,
      sym_include_statement,
    STATE(99), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(64), 9,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      aux_sym_source_file_repeat1,
  [3322] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_acl,
    ACTIONS(280), 1,
      anon_sym_backend,
    ACTIONS(283), 1,
      anon_sym_director,
    ACTIONS(286), 1,
      anon_sym_penaltybox,
    ACTIONS(289), 1,
      anon_sym_ratecounter,
    ACTIONS(292), 1,
      anon_sym_table,
    ACTIONS(295), 1,
      anon_sym_sub,
    ACTIONS(298), 1,
      anon_sym_include,
    STATE(233), 1,
      sym_include_statement,
    STATE(99), 2,
      sym_void_sub_declaration,
      sym_typed_sub_declaration,
    STATE(64), 9,
      sym__declaration,
      sym_acl_declaration,
      sym_backend_declaration,
      sym_director_declaration,
      sym_penaltybox_declaration,
      sym_ratecounter_declaration,
      sym_sub_declaration,
      sym_table_declaration,
      aux_sym_source_file_repeat1,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_SLASH,
      sym_ident,
      sym_dot_ident,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_SLASH,
      sym_ident,
      sym_dot_ident,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 16,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3429] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(70), 2,
      sym_string,
      aux_sym_concat_repeat1,
    ACTIONS(259), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_m,
    ACTIONS(313), 1,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
    ACTIONS(259), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_PLUS,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_token2,
    ACTIONS(320), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(329), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(69), 2,
      sym_string,
      aux_sym_concat_repeat1,
    ACTIONS(315), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3539] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(333), 2,
      sym_ident,
      sym_dot_ident,
    ACTIONS(335), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(69), 2,
      sym_string,
      aux_sym_concat_repeat1,
    ACTIONS(331), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 4,
      sym_ident,
      sym_dot_ident,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 14,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 14,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 15,
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
  [3672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 12,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3757] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    STATE(148), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block,
    STATE(171), 1,
      sym_type,
    ACTIONS(393), 9,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
  [3938] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(395), 1,
      sym_ident,
    STATE(107), 1,
      sym_number,
    STATE(146), 1,
      sym_literal,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 3,
      sym_bool,
      sym_string,
      sym_rtime,
  [3972] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(373), 1,
      anon_sym_AMP_AMP,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 6,
      anon_sym_TILDE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_BANG_TILDE,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_type,
    ACTIONS(393), 9,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
  [4169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(215), 1,
      sym_type,
    ACTIONS(393), 9,
      anon_sym_ACL,
      anon_sym_BACKEND,
      anon_sym_BOOL,
      anon_sym_FLOAT,
      anon_sym_INTEGER,
      anon_sym_IP,
      anon_sym_RTIME,
      anon_sym_STRING,
      anon_sym_TIME,
  [4187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_m,
    ACTIONS(431), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
    ACTIONS(309), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_h,
      anon_sym_d,
      anon_sym_y,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 9,
      ts_builtin_sym_end,
      anon_sym_acl,
      anon_sym_backend,
      anon_sym_director,
      anon_sym_penaltybox,
      anon_sym_ratecounter,
      anon_sym_table,
      anon_sym_sub,
      anon_sym_include,
  [4491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_case,
    ACTIONS(451), 1,
      anon_sym_default,
    STATE(119), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [4509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_case,
    ACTIONS(451), 1,
      anon_sym_default,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(121), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [4527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_case,
    ACTIONS(451), 1,
      anon_sym_default,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(121), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [4545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_case,
    ACTIONS(451), 1,
      anon_sym_default,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(118), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [4563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_case,
    ACTIONS(464), 1,
      anon_sym_default,
    STATE(121), 3,
      sym_case_statement,
      sym_default_case_statement,
      aux_sym_switch_statement_repeat1,
  [4581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(71), 1,
      sym_string,
    ACTIONS(467), 2,
      sym_ident,
      sym_dot_ident,
  [4598] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_string_token1,
    ACTIONS(476), 1,
      anon_sym_PERCENT,
    STATE(123), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_table_declaration_repeat1,
    STATE(217), 1,
      sym_string,
  [4634] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      aux_sym_string_token1,
    ACTIONS(485), 1,
      anon_sym_PERCENT,
    STATE(127), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_table_declaration_repeat1,
    STATE(217), 1,
      sym_string,
  [4670] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_PERCENT,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    STATE(123), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [4687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_table_declaration_repeat1,
    STATE(217), 1,
      sym_string,
  [4706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_string_token2,
    STATE(129), 1,
      aux_sym_table_declaration_repeat1,
    STATE(217), 1,
      sym_string,
  [4725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_table_declaration_repeat1,
    STATE(217), 1,
      sym_string,
  [4744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_DOT,
    STATE(138), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(507), 1,
      anon_sym_BANG,
    STATE(164), 1,
      sym_string,
  [4774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(509), 1,
      anon_sym_TILDE,
    STATE(204), 1,
      sym_string,
  [4790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_DOT,
    STATE(134), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(134), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(134), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      sym_string,
  [4848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(134), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_number,
  [4878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(135), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(136), 2,
      sym_dot_property,
      aux_sym_backend_declaration_repeat1,
  [4906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(213), 1,
      sym_string,
  [4919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4928] = 3,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_string_token1,
    ACTIONS(532), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [4939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      aux_sym_string_token2,
  [4957] = 3,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_string_token1,
    ACTIONS(538), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [4968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_argument_list_repeat1,
  [4981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      anon_sym_if,
    STATE(32), 1,
      sym_block,
  [4994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_argument_list_repeat1,
  [5007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
  [5020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    STATE(224), 1,
      sym_number,
  [5033] = 3,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_string_token1,
    ACTIONS(553), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [5044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(227), 1,
      sym_string,
  [5057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_number_token1,
    ACTIONS(175), 1,
      anon_sym_0x,
    STATE(199), 1,
      sym_number,
  [5070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_if,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [5083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(208), 1,
      sym_string,
  [5096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(177), 1,
      sym_string,
  [5109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    STATE(212), 1,
      sym_string,
  [5122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_argument_list,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      sym_ident,
      sym_dot_ident,
  [5161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [5181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(575), 1,
      anon_sym_u,
  [5191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [5225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
  [5235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_conditional_expression,
  [5245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_conditional_expression,
  [5255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [5273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [5283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SLASH,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [5293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      aux_sym_escape_sequence_token2,
  [5303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [5313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_conditional_expression,
  [5323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_conditional_expression,
  [5333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_argument_list,
  [5343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [5350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [5357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_EQ,
  [5364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [5371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [5378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
  [5385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [5392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
  [5399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
  [5406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [5413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [5420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_ident,
  [5427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
  [5434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [5441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_if,
  [5448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
  [5455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [5462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON,
  [5469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_dot_ident,
  [5476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [5483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_dot_ident,
  [5490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COLON,
  [5497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym_number_token2,
  [5504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_dot_ident,
  [5511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
  [5518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COLON,
  [5525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_dot_ident,
  [5532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
  [5539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
  [5546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
  [5553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SEMI,
  [5560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_local,
  [5567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [5574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_dot_ident,
  [5581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_COLON,
  [5588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_ident,
  [5595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [5602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [5609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_dot_ident,
  [5616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [5623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
  [5630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [5637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [5644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
  [5651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SEMI,
  [5658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
  [5672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
  [5679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
  [5686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
  [5693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_SEMI,
  [5700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
  [5707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
  [5714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_ident,
  [5721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      aux_sym_escape_sequence_token3,
  [5728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [5735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [5742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [5749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_ident,
  [5756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [5763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_ident,
  [5770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_ident,
  [5777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_ident,
  [5784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [5791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_ident,
  [5798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
  [5805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_ident,
  [5812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
  [5819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
  [5826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [5833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
  [5840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [5847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_dot_ident,
  [5854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 106,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 524,
  [SMALL_STATE(8)] = 628,
  [SMALL_STATE(9)] = 732,
  [SMALL_STATE(10)] = 836,
  [SMALL_STATE(11)] = 940,
  [SMALL_STATE(12)] = 1042,
  [SMALL_STATE(13)] = 1144,
  [SMALL_STATE(14)] = 1245,
  [SMALL_STATE(15)] = 1346,
  [SMALL_STATE(16)] = 1447,
  [SMALL_STATE(17)] = 1509,
  [SMALL_STATE(18)] = 1558,
  [SMALL_STATE(19)] = 1607,
  [SMALL_STATE(20)] = 1653,
  [SMALL_STATE(21)] = 1700,
  [SMALL_STATE(22)] = 1747,
  [SMALL_STATE(23)] = 1791,
  [SMALL_STATE(24)] = 1826,
  [SMALL_STATE(25)] = 1861,
  [SMALL_STATE(26)] = 1896,
  [SMALL_STATE(27)] = 1929,
  [SMALL_STATE(28)] = 1962,
  [SMALL_STATE(29)] = 1995,
  [SMALL_STATE(30)] = 2027,
  [SMALL_STATE(31)] = 2059,
  [SMALL_STATE(32)] = 2091,
  [SMALL_STATE(33)] = 2123,
  [SMALL_STATE(34)] = 2155,
  [SMALL_STATE(35)] = 2187,
  [SMALL_STATE(36)] = 2219,
  [SMALL_STATE(37)] = 2251,
  [SMALL_STATE(38)] = 2283,
  [SMALL_STATE(39)] = 2334,
  [SMALL_STATE(40)] = 2385,
  [SMALL_STATE(41)] = 2436,
  [SMALL_STATE(42)] = 2467,
  [SMALL_STATE(43)] = 2498,
  [SMALL_STATE(44)] = 2528,
  [SMALL_STATE(45)] = 2576,
  [SMALL_STATE(46)] = 2624,
  [SMALL_STATE(47)] = 2668,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2764,
  [SMALL_STATE(50)] = 2794,
  [SMALL_STATE(51)] = 2824,
  [SMALL_STATE(52)] = 2872,
  [SMALL_STATE(53)] = 2920,
  [SMALL_STATE(54)] = 2950,
  [SMALL_STATE(55)] = 2998,
  [SMALL_STATE(56)] = 3028,
  [SMALL_STATE(57)] = 3058,
  [SMALL_STATE(58)] = 3088,
  [SMALL_STATE(59)] = 3136,
  [SMALL_STATE(60)] = 3184,
  [SMALL_STATE(61)] = 3214,
  [SMALL_STATE(62)] = 3244,
  [SMALL_STATE(63)] = 3273,
  [SMALL_STATE(64)] = 3322,
  [SMALL_STATE(65)] = 3371,
  [SMALL_STATE(66)] = 3400,
  [SMALL_STATE(67)] = 3429,
  [SMALL_STATE(68)] = 3467,
  [SMALL_STATE(69)] = 3501,
  [SMALL_STATE(70)] = 3539,
  [SMALL_STATE(71)] = 3577,
  [SMALL_STATE(72)] = 3603,
  [SMALL_STATE(73)] = 3627,
  [SMALL_STATE(74)] = 3651,
  [SMALL_STATE(75)] = 3672,
  [SMALL_STATE(76)] = 3694,
  [SMALL_STATE(77)] = 3715,
  [SMALL_STATE(78)] = 3736,
  [SMALL_STATE(79)] = 3757,
  [SMALL_STATE(80)] = 3788,
  [SMALL_STATE(81)] = 3809,
  [SMALL_STATE(82)] = 3830,
  [SMALL_STATE(83)] = 3851,
  [SMALL_STATE(84)] = 3872,
  [SMALL_STATE(85)] = 3893,
  [SMALL_STATE(86)] = 3914,
  [SMALL_STATE(87)] = 3938,
  [SMALL_STATE(88)] = 3972,
  [SMALL_STATE(89)] = 3998,
  [SMALL_STATE(90)] = 4023,
  [SMALL_STATE(91)] = 4048,
  [SMALL_STATE(92)] = 4073,
  [SMALL_STATE(93)] = 4098,
  [SMALL_STATE(94)] = 4123,
  [SMALL_STATE(95)] = 4148,
  [SMALL_STATE(96)] = 4169,
  [SMALL_STATE(97)] = 4187,
  [SMALL_STATE(98)] = 4202,
  [SMALL_STATE(99)] = 4217,
  [SMALL_STATE(100)] = 4232,
  [SMALL_STATE(101)] = 4247,
  [SMALL_STATE(102)] = 4262,
  [SMALL_STATE(103)] = 4277,
  [SMALL_STATE(104)] = 4292,
  [SMALL_STATE(105)] = 4307,
  [SMALL_STATE(106)] = 4322,
  [SMALL_STATE(107)] = 4337,
  [SMALL_STATE(108)] = 4356,
  [SMALL_STATE(109)] = 4371,
  [SMALL_STATE(110)] = 4386,
  [SMALL_STATE(111)] = 4401,
  [SMALL_STATE(112)] = 4416,
  [SMALL_STATE(113)] = 4431,
  [SMALL_STATE(114)] = 4446,
  [SMALL_STATE(115)] = 4461,
  [SMALL_STATE(116)] = 4476,
  [SMALL_STATE(117)] = 4491,
  [SMALL_STATE(118)] = 4509,
  [SMALL_STATE(119)] = 4527,
  [SMALL_STATE(120)] = 4545,
  [SMALL_STATE(121)] = 4563,
  [SMALL_STATE(122)] = 4581,
  [SMALL_STATE(123)] = 4598,
  [SMALL_STATE(124)] = 4615,
  [SMALL_STATE(125)] = 4634,
  [SMALL_STATE(126)] = 4651,
  [SMALL_STATE(127)] = 4670,
  [SMALL_STATE(128)] = 4687,
  [SMALL_STATE(129)] = 4706,
  [SMALL_STATE(130)] = 4725,
  [SMALL_STATE(131)] = 4744,
  [SMALL_STATE(132)] = 4758,
  [SMALL_STATE(133)] = 4774,
  [SMALL_STATE(134)] = 4790,
  [SMALL_STATE(135)] = 4804,
  [SMALL_STATE(136)] = 4818,
  [SMALL_STATE(137)] = 4832,
  [SMALL_STATE(138)] = 4848,
  [SMALL_STATE(139)] = 4862,
  [SMALL_STATE(140)] = 4878,
  [SMALL_STATE(141)] = 4892,
  [SMALL_STATE(142)] = 4906,
  [SMALL_STATE(143)] = 4919,
  [SMALL_STATE(144)] = 4928,
  [SMALL_STATE(145)] = 4939,
  [SMALL_STATE(146)] = 4948,
  [SMALL_STATE(147)] = 4957,
  [SMALL_STATE(148)] = 4968,
  [SMALL_STATE(149)] = 4981,
  [SMALL_STATE(150)] = 4994,
  [SMALL_STATE(151)] = 5007,
  [SMALL_STATE(152)] = 5020,
  [SMALL_STATE(153)] = 5033,
  [SMALL_STATE(154)] = 5044,
  [SMALL_STATE(155)] = 5057,
  [SMALL_STATE(156)] = 5070,
  [SMALL_STATE(157)] = 5083,
  [SMALL_STATE(158)] = 5096,
  [SMALL_STATE(159)] = 5109,
  [SMALL_STATE(160)] = 5122,
  [SMALL_STATE(161)] = 5131,
  [SMALL_STATE(162)] = 5144,
  [SMALL_STATE(163)] = 5153,
  [SMALL_STATE(164)] = 5161,
  [SMALL_STATE(165)] = 5171,
  [SMALL_STATE(166)] = 5181,
  [SMALL_STATE(167)] = 5191,
  [SMALL_STATE(168)] = 5199,
  [SMALL_STATE(169)] = 5209,
  [SMALL_STATE(170)] = 5217,
  [SMALL_STATE(171)] = 5225,
  [SMALL_STATE(172)] = 5235,
  [SMALL_STATE(173)] = 5245,
  [SMALL_STATE(174)] = 5255,
  [SMALL_STATE(175)] = 5265,
  [SMALL_STATE(176)] = 5273,
  [SMALL_STATE(177)] = 5283,
  [SMALL_STATE(178)] = 5293,
  [SMALL_STATE(179)] = 5303,
  [SMALL_STATE(180)] = 5313,
  [SMALL_STATE(181)] = 5323,
  [SMALL_STATE(182)] = 5333,
  [SMALL_STATE(183)] = 5343,
  [SMALL_STATE(184)] = 5350,
  [SMALL_STATE(185)] = 5357,
  [SMALL_STATE(186)] = 5364,
  [SMALL_STATE(187)] = 5371,
  [SMALL_STATE(188)] = 5378,
  [SMALL_STATE(189)] = 5385,
  [SMALL_STATE(190)] = 5392,
  [SMALL_STATE(191)] = 5399,
  [SMALL_STATE(192)] = 5406,
  [SMALL_STATE(193)] = 5413,
  [SMALL_STATE(194)] = 5420,
  [SMALL_STATE(195)] = 5427,
  [SMALL_STATE(196)] = 5434,
  [SMALL_STATE(197)] = 5441,
  [SMALL_STATE(198)] = 5448,
  [SMALL_STATE(199)] = 5455,
  [SMALL_STATE(200)] = 5462,
  [SMALL_STATE(201)] = 5469,
  [SMALL_STATE(202)] = 5476,
  [SMALL_STATE(203)] = 5483,
  [SMALL_STATE(204)] = 5490,
  [SMALL_STATE(205)] = 5497,
  [SMALL_STATE(206)] = 5504,
  [SMALL_STATE(207)] = 5511,
  [SMALL_STATE(208)] = 5518,
  [SMALL_STATE(209)] = 5525,
  [SMALL_STATE(210)] = 5532,
  [SMALL_STATE(211)] = 5539,
  [SMALL_STATE(212)] = 5546,
  [SMALL_STATE(213)] = 5553,
  [SMALL_STATE(214)] = 5560,
  [SMALL_STATE(215)] = 5567,
  [SMALL_STATE(216)] = 5574,
  [SMALL_STATE(217)] = 5581,
  [SMALL_STATE(218)] = 5588,
  [SMALL_STATE(219)] = 5595,
  [SMALL_STATE(220)] = 5602,
  [SMALL_STATE(221)] = 5609,
  [SMALL_STATE(222)] = 5616,
  [SMALL_STATE(223)] = 5623,
  [SMALL_STATE(224)] = 5630,
  [SMALL_STATE(225)] = 5637,
  [SMALL_STATE(226)] = 5644,
  [SMALL_STATE(227)] = 5651,
  [SMALL_STATE(228)] = 5658,
  [SMALL_STATE(229)] = 5665,
  [SMALL_STATE(230)] = 5672,
  [SMALL_STATE(231)] = 5679,
  [SMALL_STATE(232)] = 5686,
  [SMALL_STATE(233)] = 5693,
  [SMALL_STATE(234)] = 5700,
  [SMALL_STATE(235)] = 5707,
  [SMALL_STATE(236)] = 5714,
  [SMALL_STATE(237)] = 5721,
  [SMALL_STATE(238)] = 5728,
  [SMALL_STATE(239)] = 5735,
  [SMALL_STATE(240)] = 5742,
  [SMALL_STATE(241)] = 5749,
  [SMALL_STATE(242)] = 5756,
  [SMALL_STATE(243)] = 5763,
  [SMALL_STATE(244)] = 5770,
  [SMALL_STATE(245)] = 5777,
  [SMALL_STATE(246)] = 5784,
  [SMALL_STATE(247)] = 5791,
  [SMALL_STATE(248)] = 5798,
  [SMALL_STATE(249)] = 5805,
  [SMALL_STATE(250)] = 5812,
  [SMALL_STATE(251)] = 5819,
  [SMALL_STATE(252)] = 5826,
  [SMALL_STATE(253)] = 5833,
  [SMALL_STATE(254)] = 5840,
  [SMALL_STATE(255)] = 5847,
  [SMALL_STATE(256)] = 5854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(216),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(163),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(214),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(139),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(211),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(154),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(209),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(207),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(206),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(159),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(142),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(201),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(183),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(198),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(180),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(256),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(194),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(151),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(172),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(195),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(161),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(197),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(186),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, .production_id = 16),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, .production_id = 16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_statement, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_statement, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 9),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 15),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 15),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, .production_id = 17),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, .production_id = 17),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 6, .production_id = 17),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 6, .production_id = 17),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_label, 2, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_label, 2, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(122),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(69),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(125),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_repeat1, 2), SHIFT_REPEAT(65),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concat_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rtime, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rtime, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expression, 2, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expression, 2, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 7),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 7),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 8),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 8),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_statement, 4, .production_id = 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, .production_id = 11),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 5, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_declaration, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 8, .production_id = 14),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratecounter_declaration, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_sub_declaration, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penaltybox_declaration, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 4, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 4, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_director_declaration, 5, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backend_declaration, 5, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 6, .production_id = 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acl_declaration, 7, .production_id = 10),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_sub_declaration, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(133),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(200),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(166),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2), SHIFT_REPEAT(125),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 2), SHIFT_REPEAT(65),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backend_declaration_repeat1, 2), SHIFT_REPEAT(218),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 18),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_declaration_repeat1, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(52),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case_statement, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 19),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_property, 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_property, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_property, 6),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset_statement, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_keyword, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_statement, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restart_statement, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_statement, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esi_statement, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_statement, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synthetic_base64_statement, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare_statement, 4, .production_id = 12),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 4, .production_id = 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [699] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
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
