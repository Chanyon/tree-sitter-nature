#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_var = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_return = 5,
  anon_sym_break = 6,
  anon_sym_continue = 7,
  anon_sym_PIPE_PIPE = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_LT_LT = 18,
  anon_sym_GT_GT = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_BANG = 23,
  anon_sym_TILDE = 24,
  anon_sym_PLUS_EQ = 25,
  anon_sym_DASH_EQ = 26,
  anon_sym_SLASH_EQ = 27,
  anon_sym_STAR_EQ = 28,
  anon_sym_PERCENT_EQ = 29,
  anon_sym_LT_LT_EQ = 30,
  anon_sym_GT_GT_EQ = 31,
  anon_sym_nil = 32,
  anon_sym_null = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_COMMA = 38,
  anon_sym_fn = 39,
  anon_sym_self = 40,
  anon_sym_for = 41,
  anon_sym_while = 42,
  anon_sym_if = 43,
  anon_sym_else = 44,
  anon_sym_catch = 45,
  anon_sym_throw = 46,
  anon_sym_try = 47,
  anon_sym_is = 48,
  anon_sym_as = 49,
  anon_sym_in = 50,
  anon_sym_type = 51,
  anon_sym_gen = 52,
  anon_sym_struct = 53,
  anon_sym_has = 54,
  anon_sym_any = 55,
  anon_sym_arr = 56,
  anon_sym_i8 = 57,
  anon_sym_i16_COMMA = 58,
  anon_sym_i32 = 59,
  anon_sym_int = 60,
  anon_sym_i64 = 61,
  anon_sym_u8 = 62,
  anon_sym_u16_COMMA = 63,
  anon_sym_u32 = 64,
  anon_sym_uint = 65,
  anon_sym_u64 = 66,
  anon_sym_f32 = 67,
  anon_sym_f64 = 68,
  anon_sym_f80 = 69,
  anon_sym_float = 70,
  anon_sym_cptr = 71,
  anon_sym_bool = 72,
  anon_sym_string = 73,
  anon_sym_PIPE = 74,
  sym_intLiteral = 75,
  aux_sym_floatLiteral_token1 = 76,
  aux_sym_floatLiteral_token2 = 77,
  aux_sym_floatLiteral_token3 = 78,
  sym_boolLiteral = 79,
  anon_sym_DQUOTE = 80,
  aux_sym_stringLiteral_token1 = 81,
  anon_sym_SQUOTE = 82,
  sym_ident = 83,
  sym_program = 84,
  sym_declaration = 85,
  sym_varDecl = 86,
  sym_statements = 87,
  sym_blockStmt = 88,
  sym_returnStmt = 89,
  sym_breakStmt = 90,
  sym_continueStmt = 91,
  sym_fnCallStmt = 92,
  sym_assignmentStmt = 93,
  sym_expression = 94,
  sym_binaryExpr = 95,
  sym_comparison = 96,
  sym_ADD_SUB = 97,
  sym_bitwise_l_r = 98,
  sym_MUL_DIV = 99,
  sym_prefixOp = 100,
  sym_assignOp = 101,
  sym_unaryExpr = 102,
  sym_primary = 103,
  sym_indexExpr = 104,
  sym_callExpr = 105,
  sym_groupExpr = 106,
  sym_tupleExpr = 107,
  sym_parameterList = 108,
  sym_type = 109,
  sym_baseType = 110,
  sym_arrayType = 111,
  sym_tupleType = 112,
  sym_unionType = 113,
  sym_floatLiteral = 114,
  sym_stringLiteral = 115,
  sym_arrayLiteral = 116,
  aux_sym_program_repeat1 = 117,
  aux_sym_callExpr_repeat1 = 118,
  aux_sym_tupleExpr_repeat1 = 119,
  aux_sym_tupleType_repeat1 = 120,
  aux_sym_unionType_repeat1 = 121,
  aux_sym_arrayLiteral_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_nil] = "nil",
  [anon_sym_null] = "null",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_fn] = "fn",
  [anon_sym_self] = "self",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_catch] = "catch",
  [anon_sym_throw] = "throw",
  [anon_sym_try] = "try",
  [anon_sym_is] = "is",
  [anon_sym_as] = "as",
  [anon_sym_in] = "in",
  [anon_sym_type] = "type",
  [anon_sym_gen] = "gen",
  [anon_sym_struct] = "struct",
  [anon_sym_has] = "has",
  [anon_sym_any] = "any",
  [anon_sym_arr] = "arr",
  [anon_sym_i8] = "i8",
  [anon_sym_i16_COMMA] = "i16,",
  [anon_sym_i32] = "i32",
  [anon_sym_int] = "int",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16_COMMA] = "u16,",
  [anon_sym_u32] = "u32",
  [anon_sym_uint] = "uint",
  [anon_sym_u64] = "u64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_f80] = "f80",
  [anon_sym_float] = "float",
  [anon_sym_cptr] = "cptr",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_PIPE] = "|",
  [sym_intLiteral] = "intLiteral",
  [aux_sym_floatLiteral_token1] = "floatLiteral_token1",
  [aux_sym_floatLiteral_token2] = "floatLiteral_token2",
  [aux_sym_floatLiteral_token3] = "floatLiteral_token3",
  [sym_boolLiteral] = "boolLiteral",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_stringLiteral_token1] = "stringLiteral_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_ident] = "ident",
  [sym_program] = "program",
  [sym_declaration] = "declaration",
  [sym_varDecl] = "varDecl",
  [sym_statements] = "statements",
  [sym_blockStmt] = "blockStmt",
  [sym_returnStmt] = "returnStmt",
  [sym_breakStmt] = "breakStmt",
  [sym_continueStmt] = "continueStmt",
  [sym_fnCallStmt] = "fnCallStmt",
  [sym_assignmentStmt] = "assignmentStmt",
  [sym_expression] = "expression",
  [sym_binaryExpr] = "binaryExpr",
  [sym_comparison] = "comparison",
  [sym_ADD_SUB] = "ADD_SUB",
  [sym_bitwise_l_r] = "bitwise_l_r",
  [sym_MUL_DIV] = "MUL_DIV",
  [sym_prefixOp] = "prefixOp",
  [sym_assignOp] = "assignOp",
  [sym_unaryExpr] = "unaryExpr",
  [sym_primary] = "primary",
  [sym_indexExpr] = "indexExpr",
  [sym_callExpr] = "callExpr",
  [sym_groupExpr] = "groupExpr",
  [sym_tupleExpr] = "tupleExpr",
  [sym_parameterList] = "parameterList",
  [sym_type] = "type",
  [sym_baseType] = "baseType",
  [sym_arrayType] = "arrayType",
  [sym_tupleType] = "tupleType",
  [sym_unionType] = "unionType",
  [sym_floatLiteral] = "floatLiteral",
  [sym_stringLiteral] = "stringLiteral",
  [sym_arrayLiteral] = "arrayLiteral",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_callExpr_repeat1] = "callExpr_repeat1",
  [aux_sym_tupleExpr_repeat1] = "tupleExpr_repeat1",
  [aux_sym_tupleType_repeat1] = "tupleType_repeat1",
  [aux_sym_unionType_repeat1] = "unionType_repeat1",
  [aux_sym_arrayLiteral_repeat1] = "arrayLiteral_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_gen] = anon_sym_gen,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_arr] = anon_sym_arr,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16_COMMA] = anon_sym_i16_COMMA,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16_COMMA] = anon_sym_u16_COMMA,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_f80] = anon_sym_f80,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_cptr] = anon_sym_cptr,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_intLiteral] = sym_intLiteral,
  [aux_sym_floatLiteral_token1] = aux_sym_floatLiteral_token1,
  [aux_sym_floatLiteral_token2] = aux_sym_floatLiteral_token2,
  [aux_sym_floatLiteral_token3] = aux_sym_floatLiteral_token3,
  [sym_boolLiteral] = sym_boolLiteral,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_stringLiteral_token1] = aux_sym_stringLiteral_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_ident] = sym_ident,
  [sym_program] = sym_program,
  [sym_declaration] = sym_declaration,
  [sym_varDecl] = sym_varDecl,
  [sym_statements] = sym_statements,
  [sym_blockStmt] = sym_blockStmt,
  [sym_returnStmt] = sym_returnStmt,
  [sym_breakStmt] = sym_breakStmt,
  [sym_continueStmt] = sym_continueStmt,
  [sym_fnCallStmt] = sym_fnCallStmt,
  [sym_assignmentStmt] = sym_assignmentStmt,
  [sym_expression] = sym_expression,
  [sym_binaryExpr] = sym_binaryExpr,
  [sym_comparison] = sym_comparison,
  [sym_ADD_SUB] = sym_ADD_SUB,
  [sym_bitwise_l_r] = sym_bitwise_l_r,
  [sym_MUL_DIV] = sym_MUL_DIV,
  [sym_prefixOp] = sym_prefixOp,
  [sym_assignOp] = sym_assignOp,
  [sym_unaryExpr] = sym_unaryExpr,
  [sym_primary] = sym_primary,
  [sym_indexExpr] = sym_indexExpr,
  [sym_callExpr] = sym_callExpr,
  [sym_groupExpr] = sym_groupExpr,
  [sym_tupleExpr] = sym_tupleExpr,
  [sym_parameterList] = sym_parameterList,
  [sym_type] = sym_type,
  [sym_baseType] = sym_baseType,
  [sym_arrayType] = sym_arrayType,
  [sym_tupleType] = sym_tupleType,
  [sym_unionType] = sym_unionType,
  [sym_floatLiteral] = sym_floatLiteral,
  [sym_stringLiteral] = sym_stringLiteral,
  [sym_arrayLiteral] = sym_arrayLiteral,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_callExpr_repeat1] = aux_sym_callExpr_repeat1,
  [aux_sym_tupleExpr_repeat1] = aux_sym_tupleExpr_repeat1,
  [aux_sym_tupleType_repeat1] = aux_sym_tupleType_repeat1,
  [aux_sym_unionType_repeat1] = aux_sym_unionType_repeat1,
  [aux_sym_arrayLiteral_repeat1] = aux_sym_arrayLiteral_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
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
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
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
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_intLiteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_floatLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floatLiteral_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_boolLiteral] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stringLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_varDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_blockStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_returnStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_breakStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continueStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_fnCallStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assignmentStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binaryExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_ADD_SUB] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_l_r] = {
    .visible = true,
    .named = true,
  },
  [sym_MUL_DIV] = {
    .visible = true,
    .named = true,
  },
  [sym_prefixOp] = {
    .visible = true,
    .named = true,
  },
  [sym_assignOp] = {
    .visible = true,
    .named = true,
  },
  [sym_unaryExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_indexExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_callExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_groupExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterList] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_baseType] = {
    .visible = true,
    .named = true,
  },
  [sym_arrayType] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleType] = {
    .visible = true,
    .named = true,
  },
  [sym_unionType] = {
    .visible = true,
    .named = true,
  },
  [sym_floatLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_stringLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_arrayLiteral] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_callExpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tupleExpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tupleType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unionType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrayLiteral_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 8,
  [27] = 6,
  [28] = 7,
  [29] = 9,
  [30] = 10,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 21,
  [37] = 13,
  [38] = 19,
  [39] = 20,
  [40] = 18,
  [41] = 16,
  [42] = 23,
  [43] = 22,
  [44] = 15,
  [45] = 14,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 65,
  [69] = 69,
  [70] = 2,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 73,
  [79] = 76,
  [80] = 80,
  [81] = 74,
  [82] = 80,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 63,
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
  [105] = 88,
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
  [119] = 112,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 118,
  [127] = 127,
  [128] = 121,
  [129] = 117,
  [130] = 130,
  [131] = 111,
  [132] = 132,
  [133] = 124,
  [134] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'g') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(216);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(133);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '~') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_catch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_throw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_gen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_has);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_arr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_i16_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u16_COMMA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_f80);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_f80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_cptr);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_cptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_intLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_intLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_boolLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ',') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ',') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(153);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '3') ADVANCE(187);
      if (lookahead == '6') ADVANCE(193);
      if (lookahead == '8') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '3') ADVANCE(187);
      if (lookahead == '6') ADVANCE(193);
      if (lookahead == '8') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(196);
      if (lookahead == '3') ADVANCE(188);
      if (lookahead == '6') ADVANCE(194);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead == '6') ADVANCE(192);
      if (lookahead == '8') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead == '6') ADVANCE(192);
      if (lookahead == '8') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(186);
      if (lookahead == '6') ADVANCE(192);
      if (lookahead == '8') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 58},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 58},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 57},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 59},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 58},
  [132] = {.lex_state = 58},
  [133] = {.lex_state = 59},
  [134] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_arr] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16_COMMA] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16_COMMA] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_f80] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_cptr] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_intLiteral] = ACTIONS(1),
    [aux_sym_floatLiteral_token1] = ACTIONS(1),
    [aux_sym_floatLiteral_token2] = ACTIONS(1),
    [aux_sym_floatLiteral_token3] = ACTIONS(1),
    [sym_boolLiteral] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(115),
    [sym_declaration] = STATE(17),
    [sym_varDecl] = STATE(47),
    [sym_statements] = STATE(60),
    [sym_blockStmt] = STATE(47),
    [sym_returnStmt] = STATE(47),
    [sym_breakStmt] = STATE(47),
    [sym_continueStmt] = STATE(47),
    [sym_fnCallStmt] = STATE(47),
    [sym_assignmentStmt] = STATE(47),
    [sym_callExpr] = STATE(54),
    [sym_type] = STATE(127),
    [sym_baseType] = STATE(106),
    [sym_arrayType] = STATE(122),
    [sym_tupleType] = STATE(122),
    [sym_unionType] = STATE(122),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_null] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(15),
    [anon_sym_i16_COMMA] = ACTIONS(21),
    [anon_sym_i32] = ACTIONS(15),
    [anon_sym_int] = ACTIONS(15),
    [anon_sym_i64] = ACTIONS(15),
    [anon_sym_u8] = ACTIONS(15),
    [anon_sym_u16_COMMA] = ACTIONS(21),
    [anon_sym_u32] = ACTIONS(15),
    [anon_sym_uint] = ACTIONS(15),
    [anon_sym_u64] = ACTIONS(15),
    [anon_sym_f32] = ACTIONS(15),
    [anon_sym_f64] = ACTIONS(15),
    [anon_sym_f80] = ACTIONS(15),
    [anon_sym_float] = ACTIONS(15),
    [anon_sym_cptr] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(15),
    [anon_sym_string] = ACTIONS(15),
    [sym_ident] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(3), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
    ACTIONS(27), 20,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [77] = 12,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(47), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(45), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [150] = 12,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(47), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(61), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [223] = 12,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(47), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(65), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [296] = 11,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(69), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [367] = 6,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(71), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(73), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [428] = 9,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(69), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [495] = 8,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(69), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [560] = 7,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 17,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(69), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [623] = 6,
    STATE(72), 1,
      sym_bitwise_l_r,
    STATE(73), 1,
      sym_comparison,
    STATE(81), 1,
      sym_MUL_DIV,
    STATE(84), 1,
      sym_ADD_SUB,
    ACTIONS(67), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(69), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [684] = 18,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_var,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_return,
    ACTIONS(86), 1,
      anon_sym_break,
    ACTIONS(89), 1,
      anon_sym_continue,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_ident,
    STATE(54), 1,
      sym_callExpr,
    STATE(60), 1,
      sym_statements,
    STATE(106), 1,
      sym_baseType,
    STATE(127), 1,
      sym_type,
    ACTIONS(101), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(12), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(122), 3,
      sym_arrayType,
      sym_tupleType,
      sym_unionType,
    STATE(47), 7,
      sym_varDecl,
      sym_blockStmt,
      sym_returnStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
      sym_assignmentStmt,
    ACTIONS(92), 17,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [765] = 2,
    ACTIONS(107), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(109), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [814] = 2,
    ACTIONS(111), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(113), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [863] = 2,
    ACTIONS(115), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(117), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [912] = 2,
    ACTIONS(119), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(121), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [961] = 18,
    ACTIONS(5), 1,
      anon_sym_var,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_break,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_ident,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_callExpr,
    STATE(60), 1,
      sym_statements,
    STATE(106), 1,
      sym_baseType,
    STATE(127), 1,
      sym_type,
    ACTIONS(21), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(12), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(122), 3,
      sym_arrayType,
      sym_tupleType,
      sym_unionType,
    STATE(47), 7,
      sym_varDecl,
      sym_blockStmt,
      sym_returnStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
      sym_assignmentStmt,
    ACTIONS(15), 17,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [1042] = 2,
    ACTIONS(125), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(127), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1091] = 2,
    ACTIONS(129), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(131), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1140] = 2,
    ACTIONS(133), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(135), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1189] = 2,
    ACTIONS(137), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(139), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1238] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 18,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(139), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1291] = 2,
    ACTIONS(145), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(147), 24,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [1340] = 16,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_break,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_ident,
    ACTIONS(149), 1,
      anon_sym_var,
    ACTIONS(151), 1,
      anon_sym_return,
    STATE(54), 1,
      sym_callExpr,
    STATE(106), 1,
      sym_baseType,
    STATE(125), 1,
      sym_statements,
    STATE(134), 1,
      sym_type,
    ACTIONS(21), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(122), 3,
      sym_arrayType,
      sym_tupleType,
      sym_unionType,
    STATE(47), 7,
      sym_varDecl,
      sym_blockStmt,
      sym_returnStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
      sym_assignmentStmt,
    ACTIONS(15), 17,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [1414] = 6,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(67), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1463] = 9,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(67), 17,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1518] = 11,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(67), 13,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1577] = 6,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(73), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(71), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1626] = 8,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(67), 19,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1679] = 7,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(67), 21,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1730] = 13,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(155), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(157), 9,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1792] = 14,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(155), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(157), 8,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1856] = 14,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(155), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(157), 8,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1920] = 13,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(167), 8,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1981] = 13,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      sym_MUL_DIV,
    STATE(75), 1,
      sym_bitwise_l_r,
    STATE(77), 1,
      sym_ADD_SUB,
    STATE(78), 1,
      sym_comparison,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(171), 6,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(173), 8,
      anon_sym_TILDE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2042] = 2,
    ACTIONS(139), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(137), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2079] = 2,
    ACTIONS(109), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(107), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2116] = 2,
    ACTIONS(131), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(129), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2153] = 2,
    ACTIONS(135), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(133), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2190] = 2,
    ACTIONS(127), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(125), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2227] = 2,
    ACTIONS(121), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(119), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2264] = 2,
    ACTIONS(147), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(145), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2301] = 4,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(137), 22,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2342] = 2,
    ACTIONS(117), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(115), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2379] = 2,
    ACTIONS(113), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(111), 24,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2416] = 2,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(183), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2450] = 2,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(187), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2484] = 15,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      sym_ident,
    STATE(31), 1,
      sym_expression,
    STATE(48), 1,
      aux_sym_tupleExpr_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    STATE(94), 1,
      sym_arrayLiteral,
    ACTIONS(189), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(203), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(192), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2544] = 15,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(31), 1,
      sym_expression,
    STATE(48), 1,
      aux_sym_tupleExpr_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    STATE(94), 1,
      sym_arrayLiteral,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2604] = 2,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(65), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2638] = 2,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(233), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2672] = 2,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(237), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2706] = 15,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_expression,
    STATE(48), 1,
      aux_sym_tupleExpr_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    STATE(94), 1,
      sym_arrayLiteral,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2766] = 2,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(243), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [2800] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    STATE(58), 2,
      sym_parameterList,
      aux_sym_callExpr_repeat1,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2855] = 14,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(32), 1,
      sym_expression,
    STATE(49), 1,
      aux_sym_tupleExpr_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    STATE(94), 1,
      sym_arrayLiteral,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2912] = 14,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(33), 1,
      sym_expression,
    STATE(53), 1,
      aux_sym_tupleExpr_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    STATE(94), 1,
      sym_arrayLiteral,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [2969] = 13,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      sym_ident,
    STATE(34), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    STATE(58), 2,
      sym_parameterList,
      aux_sym_callExpr_repeat1,
    ACTIONS(247), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(258), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(250), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3024] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    STATE(55), 2,
      sym_parameterList,
      aux_sym_callExpr_repeat1,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3079] = 2,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(274), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [3112] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    STATE(58), 2,
      sym_parameterList,
      aux_sym_callExpr_repeat1,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3167] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    STATE(61), 2,
      sym_parameterList,
      aux_sym_callExpr_repeat1,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3222] = 2,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(282), 22,
      anon_sym_var,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
      sym_ident,
  [3255] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_expression,
    STATE(66), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3309] = 13,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_expression,
    STATE(50), 1,
      sym_arrayLiteral,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3363] = 13,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      sym_ident,
    STATE(35), 1,
      sym_expression,
    STATE(66), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(286), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(297), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(289), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3417] = 13,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_expression,
    STATE(66), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3471] = 13,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_expression,
    STATE(50), 1,
      sym_arrayLiteral,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3525] = 12,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(35), 1,
      sym_expression,
    STATE(67), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3576] = 12,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(3), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3627] = 12,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(35), 1,
      sym_expression,
    STATE(64), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3678] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(10), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3726] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(8), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3774] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(25), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3822] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(30), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3870] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(6), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3918] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(29), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [3966] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(26), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4014] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(27), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4062] = 11,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      sym_ident,
    STATE(28), 1,
      sym_expression,
    STATE(80), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(223), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(215), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(36), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(39), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4110] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(11), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4158] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(7), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4206] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(4), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4254] = 11,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_ident,
    STATE(9), 1,
      sym_expression,
    STATE(82), 1,
      sym_prefixOp,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(35), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(31), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(21), 4,
      sym_indexExpr,
      sym_callExpr,
      sym_floatLiteral,
      sym_stringLiteral,
    STATE(20), 5,
      sym_binaryExpr,
      sym_unaryExpr,
      sym_primary,
      sym_groupExpr,
      sym_tupleExpr,
  [4302] = 4,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_tupleType_repeat1,
    STATE(87), 1,
      sym_baseType,
    ACTIONS(313), 19,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4333] = 4,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_tupleType_repeat1,
    STATE(87), 1,
      sym_baseType,
    ACTIONS(317), 19,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4364] = 2,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(322), 20,
      anon_sym_null,
      anon_sym_RPAREN,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4390] = 1,
    ACTIONS(326), 21,
      anon_sym_null,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4414] = 3,
    STATE(85), 1,
      aux_sym_tupleType_repeat1,
    STATE(87), 1,
      sym_baseType,
    ACTIONS(313), 19,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4442] = 2,
    STATE(110), 1,
      sym_baseType,
    ACTIONS(21), 19,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4467] = 2,
    STATE(109), 1,
      sym_baseType,
    ACTIONS(21), 19,
      anon_sym_null,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4492] = 1,
    ACTIONS(320), 20,
      anon_sym_null,
      anon_sym_RPAREN,
      anon_sym_any,
      anon_sym_i8,
      anon_sym_i16_COMMA,
      anon_sym_i32,
      anon_sym_int,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16_COMMA,
      anon_sym_u32,
      anon_sym_uint,
      anon_sym_u64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_f80,
      anon_sym_float,
      anon_sym_cptr,
      anon_sym_bool,
      anon_sym_string,
  [4515] = 2,
    ACTIONS(282), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(280), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4538] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(155), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(157), 11,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4562] = 2,
    ACTIONS(328), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(201), 11,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4583] = 2,
    ACTIONS(330), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(292), 10,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4603] = 2,
    ACTIONS(334), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(332), 10,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4623] = 2,
    ACTIONS(338), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(336), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4642] = 2,
    ACTIONS(342), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(340), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4661] = 2,
    ACTIONS(346), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(344), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4680] = 2,
    ACTIONS(350), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(348), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4699] = 2,
    ACTIONS(354), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(352), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4718] = 2,
    ACTIONS(358), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(356), 9,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4737] = 3,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_assignOp,
    ACTIONS(360), 8,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [4754] = 1,
    ACTIONS(326), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_ident,
  [4761] = 3,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      sym_ident,
    STATE(107), 1,
      aux_sym_unionType_repeat1,
  [4771] = 3,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      sym_ident,
    STATE(108), 1,
      aux_sym_unionType_repeat1,
  [4781] = 3,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    ACTIONS(371), 1,
      sym_ident,
    STATE(108), 1,
      aux_sym_unionType_repeat1,
  [4791] = 2,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    ACTIONS(375), 1,
      anon_sym_COMMA,
  [4798] = 1,
    ACTIONS(371), 2,
      anon_sym_PIPE,
      sym_ident,
  [4803] = 1,
    ACTIONS(377), 1,
      sym_intLiteral,
  [4807] = 1,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
  [4811] = 1,
    ACTIONS(381), 1,
      sym_ident,
  [4815] = 1,
    ACTIONS(383), 1,
      sym_ident,
  [4819] = 1,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [4823] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
  [4827] = 1,
    ACTIONS(389), 1,
      aux_sym_stringLiteral_token1,
  [4831] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
  [4835] = 1,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
  [4839] = 1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
  [4843] = 1,
    ACTIONS(395), 1,
      aux_sym_stringLiteral_token1,
  [4847] = 1,
    ACTIONS(364), 1,
      sym_ident,
  [4851] = 1,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
  [4855] = 1,
    ACTIONS(397), 1,
      anon_sym_EQ,
  [4859] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [4863] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
  [4867] = 1,
    ACTIONS(403), 1,
      sym_ident,
  [4871] = 1,
    ACTIONS(405), 1,
      aux_sym_stringLiteral_token1,
  [4875] = 1,
    ACTIONS(407), 1,
      aux_sym_stringLiteral_token1,
  [4879] = 1,
    ACTIONS(409), 1,
      sym_ident,
  [4883] = 1,
    ACTIONS(411), 1,
      sym_intLiteral,
  [4887] = 1,
    ACTIONS(413), 1,
      sym_intLiteral,
  [4891] = 1,
    ACTIONS(415), 1,
      anon_sym_EQ,
  [4895] = 1,
    ACTIONS(417), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 223,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 367,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 495,
  [SMALL_STATE(10)] = 560,
  [SMALL_STATE(11)] = 623,
  [SMALL_STATE(12)] = 684,
  [SMALL_STATE(13)] = 765,
  [SMALL_STATE(14)] = 814,
  [SMALL_STATE(15)] = 863,
  [SMALL_STATE(16)] = 912,
  [SMALL_STATE(17)] = 961,
  [SMALL_STATE(18)] = 1042,
  [SMALL_STATE(19)] = 1091,
  [SMALL_STATE(20)] = 1140,
  [SMALL_STATE(21)] = 1189,
  [SMALL_STATE(22)] = 1238,
  [SMALL_STATE(23)] = 1291,
  [SMALL_STATE(24)] = 1340,
  [SMALL_STATE(25)] = 1414,
  [SMALL_STATE(26)] = 1463,
  [SMALL_STATE(27)] = 1518,
  [SMALL_STATE(28)] = 1577,
  [SMALL_STATE(29)] = 1626,
  [SMALL_STATE(30)] = 1679,
  [SMALL_STATE(31)] = 1730,
  [SMALL_STATE(32)] = 1792,
  [SMALL_STATE(33)] = 1856,
  [SMALL_STATE(34)] = 1920,
  [SMALL_STATE(35)] = 1981,
  [SMALL_STATE(36)] = 2042,
  [SMALL_STATE(37)] = 2079,
  [SMALL_STATE(38)] = 2116,
  [SMALL_STATE(39)] = 2153,
  [SMALL_STATE(40)] = 2190,
  [SMALL_STATE(41)] = 2227,
  [SMALL_STATE(42)] = 2264,
  [SMALL_STATE(43)] = 2301,
  [SMALL_STATE(44)] = 2342,
  [SMALL_STATE(45)] = 2379,
  [SMALL_STATE(46)] = 2416,
  [SMALL_STATE(47)] = 2450,
  [SMALL_STATE(48)] = 2484,
  [SMALL_STATE(49)] = 2544,
  [SMALL_STATE(50)] = 2604,
  [SMALL_STATE(51)] = 2638,
  [SMALL_STATE(52)] = 2672,
  [SMALL_STATE(53)] = 2706,
  [SMALL_STATE(54)] = 2766,
  [SMALL_STATE(55)] = 2800,
  [SMALL_STATE(56)] = 2855,
  [SMALL_STATE(57)] = 2912,
  [SMALL_STATE(58)] = 2969,
  [SMALL_STATE(59)] = 3024,
  [SMALL_STATE(60)] = 3079,
  [SMALL_STATE(61)] = 3112,
  [SMALL_STATE(62)] = 3167,
  [SMALL_STATE(63)] = 3222,
  [SMALL_STATE(64)] = 3255,
  [SMALL_STATE(65)] = 3309,
  [SMALL_STATE(66)] = 3363,
  [SMALL_STATE(67)] = 3417,
  [SMALL_STATE(68)] = 3471,
  [SMALL_STATE(69)] = 3525,
  [SMALL_STATE(70)] = 3576,
  [SMALL_STATE(71)] = 3627,
  [SMALL_STATE(72)] = 3678,
  [SMALL_STATE(73)] = 3726,
  [SMALL_STATE(74)] = 3774,
  [SMALL_STATE(75)] = 3822,
  [SMALL_STATE(76)] = 3870,
  [SMALL_STATE(77)] = 3918,
  [SMALL_STATE(78)] = 3966,
  [SMALL_STATE(79)] = 4014,
  [SMALL_STATE(80)] = 4062,
  [SMALL_STATE(81)] = 4110,
  [SMALL_STATE(82)] = 4158,
  [SMALL_STATE(83)] = 4206,
  [SMALL_STATE(84)] = 4254,
  [SMALL_STATE(85)] = 4302,
  [SMALL_STATE(86)] = 4333,
  [SMALL_STATE(87)] = 4364,
  [SMALL_STATE(88)] = 4390,
  [SMALL_STATE(89)] = 4414,
  [SMALL_STATE(90)] = 4442,
  [SMALL_STATE(91)] = 4467,
  [SMALL_STATE(92)] = 4492,
  [SMALL_STATE(93)] = 4515,
  [SMALL_STATE(94)] = 4538,
  [SMALL_STATE(95)] = 4562,
  [SMALL_STATE(96)] = 4583,
  [SMALL_STATE(97)] = 4603,
  [SMALL_STATE(98)] = 4623,
  [SMALL_STATE(99)] = 4642,
  [SMALL_STATE(100)] = 4661,
  [SMALL_STATE(101)] = 4680,
  [SMALL_STATE(102)] = 4699,
  [SMALL_STATE(103)] = 4718,
  [SMALL_STATE(104)] = 4737,
  [SMALL_STATE(105)] = 4754,
  [SMALL_STATE(106)] = 4761,
  [SMALL_STATE(107)] = 4771,
  [SMALL_STATE(108)] = 4781,
  [SMALL_STATE(109)] = 4791,
  [SMALL_STATE(110)] = 4798,
  [SMALL_STATE(111)] = 4803,
  [SMALL_STATE(112)] = 4807,
  [SMALL_STATE(113)] = 4811,
  [SMALL_STATE(114)] = 4815,
  [SMALL_STATE(115)] = 4819,
  [SMALL_STATE(116)] = 4823,
  [SMALL_STATE(117)] = 4827,
  [SMALL_STATE(118)] = 4831,
  [SMALL_STATE(119)] = 4835,
  [SMALL_STATE(120)] = 4839,
  [SMALL_STATE(121)] = 4843,
  [SMALL_STATE(122)] = 4847,
  [SMALL_STATE(123)] = 4851,
  [SMALL_STATE(124)] = 4855,
  [SMALL_STATE(125)] = 4859,
  [SMALL_STATE(126)] = 4863,
  [SMALL_STATE(127)] = 4867,
  [SMALL_STATE(128)] = 4871,
  [SMALL_STATE(129)] = 4875,
  [SMALL_STATE(130)] = 4879,
  [SMALL_STATE(131)] = 4883,
  [SMALL_STATE(132)] = 4887,
  [SMALL_STATE(133)] = 4891,
  [SMALL_STATE(134)] = 4895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnStmt, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnStmt, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnStmt, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignmentStmt, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignmentStmt, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDecl, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varDecl, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binaryExpr, 3, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binaryExpr, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unaryExpr, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unaryExpr, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(91),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callExpr, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callExpr, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callExpr, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callExpr, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_groupExpr, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_groupExpr, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleExpr, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tupleExpr, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexExpr, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexExpr, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatLiteral, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatLiteral, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tupleExpr_repeat1, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameterList, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockStmt, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockStmt, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(101),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(36),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(71),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(57),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(42),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(128),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(129),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tupleExpr_repeat1, 2), SHIFT_REPEAT(43),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueStmt, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continueStmt, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakStmt, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakStmt, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnCallStmt, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnCallStmt, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(101),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(36),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(57),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(42),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(128),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(129),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(43),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayLiteral, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrayLiteral, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(101),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(36),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(57),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(42),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(128),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(129),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(43),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2), SHIFT_REPEAT(88),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tupleExpr_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameterList, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameterList, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MUL_DIV, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MUL_DIV, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ADD_SUB, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ADD_SUB, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignOp, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignOp, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixOp, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixOp, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_l_r, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitwise_l_r, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unionType, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unionType_repeat1, 2), SHIFT_REPEAT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unionType_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 5),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nature(void) {
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
