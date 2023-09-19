#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_var = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_break = 5,
  anon_sym_continue = 6,
  anon_sym_nil = 7,
  anon_sym_null = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_fn = 14,
  anon_sym_self = 15,
  anon_sym_for = 16,
  anon_sym_while = 17,
  anon_sym_if = 18,
  anon_sym_else = 19,
  anon_sym_return = 20,
  anon_sym_catch = 21,
  anon_sym_throw = 22,
  anon_sym_try = 23,
  anon_sym_is = 24,
  anon_sym_as = 25,
  anon_sym_type = 26,
  anon_sym_gen = 27,
  anon_sym_struct = 28,
  anon_sym_has = 29,
  anon_sym_any = 30,
  anon_sym_arr = 31,
  anon_sym_i8 = 32,
  anon_sym_i16_COMMA = 33,
  anon_sym_i32 = 34,
  anon_sym_int = 35,
  anon_sym_i64 = 36,
  anon_sym_u8 = 37,
  anon_sym_u16_COMMA = 38,
  anon_sym_u32 = 39,
  anon_sym_uint = 40,
  anon_sym_u64 = 41,
  anon_sym_f32 = 42,
  anon_sym_f64 = 43,
  anon_sym_f80 = 44,
  anon_sym_float = 45,
  anon_sym_cptr = 46,
  anon_sym_bool = 47,
  anon_sym_string = 48,
  sym_intLiteral = 49,
  aux_sym_floatLiteral_token1 = 50,
  aux_sym_floatLiteral_token2 = 51,
  aux_sym_floatLiteral_token3 = 52,
  sym_boolLiteral = 53,
  anon_sym_DQUOTE = 54,
  aux_sym_stringLiteral_token1 = 55,
  anon_sym_SQUOTE = 56,
  sym_ident = 57,
  sym_program = 58,
  sym_declaration = 59,
  sym_varDecl = 60,
  sym_statements = 61,
  sym_blockStmt = 62,
  sym_breakStmt = 63,
  sym_continueStmt = 64,
  sym_fnCallStmt = 65,
  sym_expression = 66,
  sym_primary = 67,
  sym_indexExpr = 68,
  sym_callExpr = 69,
  sym_type = 70,
  sym_baseType = 71,
  sym_arrayType = 72,
  sym_tupleType = 73,
  sym_floatLiteral = 74,
  sym_stringLiteral = 75,
  sym_arrayLiteral = 76,
  sym_tupleLiteral = 77,
  aux_sym_program_repeat1 = 78,
  aux_sym_callExpr_repeat1 = 79,
  aux_sym_tupleType_repeat1 = 80,
  aux_sym_arrayLiteral_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_nil] = "nil",
  [anon_sym_null] = "null",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fn] = "fn",
  [anon_sym_self] = "self",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_return] = "return",
  [anon_sym_catch] = "catch",
  [anon_sym_throw] = "throw",
  [anon_sym_try] = "try",
  [anon_sym_is] = "is",
  [anon_sym_as] = "as",
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
  [sym_breakStmt] = "breakStmt",
  [sym_continueStmt] = "continueStmt",
  [sym_fnCallStmt] = "fnCallStmt",
  [sym_expression] = "expression",
  [sym_primary] = "primary",
  [sym_indexExpr] = "indexExpr",
  [sym_callExpr] = "callExpr",
  [sym_type] = "type",
  [sym_baseType] = "baseType",
  [sym_arrayType] = "arrayType",
  [sym_tupleType] = "tupleType",
  [sym_floatLiteral] = "floatLiteral",
  [sym_stringLiteral] = "stringLiteral",
  [sym_arrayLiteral] = "arrayLiteral",
  [sym_tupleLiteral] = "tupleLiteral",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_callExpr_repeat1] = "callExpr_repeat1",
  [aux_sym_tupleType_repeat1] = "tupleType_repeat1",
  [aux_sym_arrayLiteral_repeat1] = "arrayLiteral_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_as] = anon_sym_as,
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
  [sym_breakStmt] = sym_breakStmt,
  [sym_continueStmt] = sym_continueStmt,
  [sym_fnCallStmt] = sym_fnCallStmt,
  [sym_expression] = sym_expression,
  [sym_primary] = sym_primary,
  [sym_indexExpr] = sym_indexExpr,
  [sym_callExpr] = sym_callExpr,
  [sym_type] = sym_type,
  [sym_baseType] = sym_baseType,
  [sym_arrayType] = sym_arrayType,
  [sym_tupleType] = sym_tupleType,
  [sym_floatLiteral] = sym_floatLiteral,
  [sym_stringLiteral] = sym_stringLiteral,
  [sym_arrayLiteral] = sym_arrayLiteral,
  [sym_tupleLiteral] = sym_tupleLiteral,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_callExpr_repeat1] = aux_sym_callExpr_repeat1,
  [aux_sym_tupleType_repeat1] = aux_sym_tupleType_repeat1,
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
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_return] = {
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
  [sym_expression] = {
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
  [sym_tupleLiteral] = {
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
  [aux_sym_tupleType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrayLiteral_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 21,
  [37] = 19,
  [38] = 13,
  [39] = 39,
  [40] = 16,
  [41] = 41,
  [42] = 20,
  [43] = 14,
  [44] = 41,
  [45] = 45,
  [46] = 15,
  [47] = 45,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 10,
  [53] = 17,
  [54] = 50,
  [55] = 8,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 17,
  [60] = 30,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 71,
  [80] = 62,
  [81] = 78,
  [82] = 77,
  [83] = 68,
  [84] = 70,
  [85] = 76,
  [86] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == 'w') ADVANCE(163);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(122);
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(148);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_catch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_throw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_gen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_has);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_arr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_i16_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_u16_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_f80);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_f80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cptr);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_cptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(119);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_intLiteral);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_intLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_intLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_floatLiteral_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_boolLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_stringLiteral_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ',') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ',') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '6') ADVANCE(140);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '6') ADVANCE(140);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == '3') ADVANCE(136);
      if (lookahead == '6') ADVANCE(141);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '2') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(134);
      if (lookahead == '6') ADVANCE(139);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '3') ADVANCE(134);
      if (lookahead == '6') ADVANCE(139);
      if (lookahead == '8') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '4') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '6') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 'y') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
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
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
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
    [sym_program] = STATE(65),
    [sym_declaration] = STATE(3),
    [sym_varDecl] = STATE(6),
    [sym_statements] = STATE(18),
    [sym_blockStmt] = STATE(6),
    [sym_breakStmt] = STATE(6),
    [sym_continueStmt] = STATE(6),
    [sym_fnCallStmt] = STATE(6),
    [sym_callExpr] = STATE(7),
    [sym_type] = STATE(75),
    [sym_baseType] = STATE(64),
    [sym_arrayType] = STATE(64),
    [sym_tupleType] = STATE(64),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_any] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_i16_COMMA] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_u16_COMMA] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_uint] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_f80] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_cptr] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [sym_ident] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_break,
    ACTIONS(34), 1,
      anon_sym_continue,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_ident,
    STATE(7), 1,
      sym_callExpr,
    STATE(18), 1,
      sym_statements,
    STATE(75), 1,
      sym_type,
    ACTIONS(46), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(2), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(64), 3,
      sym_baseType,
      sym_arrayType,
      sym_tupleType,
    STATE(6), 5,
      sym_varDecl,
      sym_blockStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
    ACTIONS(37), 17,
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
  [73] = 16,
    ACTIONS(5), 1,
      anon_sym_var,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_callExpr,
    STATE(18), 1,
      sym_statements,
    STATE(75), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(2), 2,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(64), 3,
      sym_baseType,
      sym_arrayType,
      sym_tupleType,
    STATE(6), 5,
      sym_varDecl,
      sym_blockStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
    ACTIONS(13), 17,
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
  [146] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_ident,
    ACTIONS(54), 1,
      anon_sym_var,
    STATE(7), 1,
      sym_callExpr,
    STATE(69), 1,
      sym_statements,
    STATE(86), 1,
      sym_type,
    ACTIONS(19), 2,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    STATE(64), 3,
      sym_baseType,
      sym_arrayType,
      sym_tupleType,
    STATE(6), 5,
      sym_varDecl,
      sym_blockStmt,
      sym_breakStmt,
      sym_continueStmt,
      sym_fnCallStmt,
    ACTIONS(13), 17,
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
  [212] = 2,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(58), 21,
      anon_sym_var,
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
  [245] = 2,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(62), 21,
      anon_sym_var,
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
  [278] = 2,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(66), 21,
      anon_sym_var,
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
  [311] = 2,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(70), 21,
      anon_sym_var,
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
  [344] = 2,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(74), 21,
      anon_sym_var,
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
  [377] = 2,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(78), 21,
      anon_sym_var,
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
  [410] = 2,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(82), 21,
      anon_sym_var,
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
  [443] = 2,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(86), 21,
      anon_sym_var,
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
  [476] = 2,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(90), 21,
      anon_sym_var,
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
  [508] = 2,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(94), 21,
      anon_sym_var,
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
  [540] = 2,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(98), 21,
      anon_sym_var,
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
  [572] = 2,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(102), 21,
      anon_sym_var,
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
  [604] = 4,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(106), 21,
      anon_sym_var,
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
  [640] = 2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(114), 21,
      anon_sym_var,
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
  [672] = 2,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(118), 21,
      anon_sym_var,
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
  [704] = 2,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(122), 21,
      anon_sym_var,
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
  [736] = 2,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_i16_COMMA,
      anon_sym_u16_COMMA,
    ACTIONS(106), 21,
      anon_sym_var,
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
  [768] = 4,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_tupleType_repeat1,
    STATE(31), 1,
      sym_baseType,
    ACTIONS(124), 19,
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
  [799] = 12,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_ident,
    STATE(28), 1,
      aux_sym_callExpr_repeat1,
    STATE(51), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [846] = 12,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_ident,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_callExpr_repeat1,
    STATE(51), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [893] = 12,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_ident,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_callExpr_repeat1,
    STATE(51), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [940] = 12,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      sym_ident,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_callExpr_repeat1,
    STATE(51), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [987] = 4,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_tupleType_repeat1,
    STATE(31), 1,
      sym_baseType,
    ACTIONS(150), 19,
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
  [1018] = 12,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_ident,
    STATE(28), 1,
      aux_sym_callExpr_repeat1,
    STATE(51), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(166), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(155), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [1065] = 3,
    STATE(22), 1,
      aux_sym_tupleType_repeat1,
    STATE(31), 1,
      sym_baseType,
    ACTIONS(124), 19,
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
  [1093] = 1,
    ACTIONS(178), 21,
      anon_sym_null,
      anon_sym_COMMA,
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
  [1117] = 2,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(180), 20,
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
  [1143] = 10,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      sym_ident,
    STATE(9), 1,
      sym_expression,
    STATE(21), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(190), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(184), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(16), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [1184] = 10,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_ident,
    STATE(9), 1,
      sym_expression,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 4,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
    STATE(40), 5,
      sym_primary,
      sym_indexExpr,
      sym_callExpr,
      sym_arrayLiteral,
      sym_tupleLiteral,
  [1225] = 1,
    ACTIONS(153), 20,
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
  [1248] = 2,
    STATE(61), 1,
      sym_baseType,
    ACTIONS(19), 19,
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
  [1273] = 2,
    ACTIONS(106), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(104), 11,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1294] = 2,
    ACTIONS(118), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(116), 11,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1315] = 2,
    ACTIONS(90), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(88), 11,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1336] = 8,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    ACTIONS(203), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(205), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(200), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1369] = 2,
    ACTIONS(102), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(100), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1389] = 8,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1421] = 2,
    ACTIONS(122), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(120), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1441] = 2,
    ACTIONS(94), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(92), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1461] = 8,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1493] = 8,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1525] = 2,
    ACTIONS(98), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(96), 10,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1545] = 8,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1577] = 7,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1606] = 7,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1635] = 7,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1664] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(222), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(224), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1685] = 2,
    ACTIONS(78), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(76), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1704] = 4,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(104), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1727] = 7,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      aux_sym_arrayLiteral_repeat1,
    STATE(57), 1,
      sym_primary,
    STATE(36), 2,
      sym_floatLiteral,
      sym_stringLiteral,
    ACTIONS(136), 3,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
    ACTIONS(128), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
  [1756] = 2,
    ACTIONS(70), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(68), 9,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1775] = 2,
    ACTIONS(232), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(164), 8,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1793] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(234), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(236), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1813] = 2,
    ACTIONS(240), 5,
      anon_sym_nil,
      anon_sym_null,
      sym_intLiteral,
      sym_boolLiteral,
      sym_ident,
    ACTIONS(203), 7,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      aux_sym_floatLiteral_token1,
      aux_sym_floatLiteral_token2,
      aux_sym_floatLiteral_token3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1830] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
  [1840] = 1,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_ident,
  [1846] = 2,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      anon_sym_COMMA,
  [1853] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ,
  [1857] = 1,
    ACTIONS(248), 1,
      sym_ident,
  [1861] = 1,
    ACTIONS(250), 1,
      sym_ident,
  [1865] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1869] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
  [1873] = 1,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
  [1877] = 1,
    ACTIONS(256), 1,
      aux_sym_stringLiteral_token1,
  [1881] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
  [1885] = 1,
    ACTIONS(260), 1,
      aux_sym_stringLiteral_token1,
  [1889] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [1893] = 1,
    ACTIONS(264), 1,
      sym_ident,
  [1897] = 1,
    ACTIONS(266), 1,
      sym_ident,
  [1901] = 1,
    ACTIONS(268), 1,
      sym_intLiteral,
  [1905] = 1,
    ACTIONS(270), 1,
      sym_ident,
  [1909] = 1,
    ACTIONS(272), 1,
      sym_intLiteral,
  [1913] = 1,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
  [1917] = 1,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
  [1921] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
  [1925] = 1,
    ACTIONS(278), 1,
      anon_sym_EQ,
  [1929] = 1,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
  [1933] = 1,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
  [1937] = 1,
    ACTIONS(282), 1,
      aux_sym_stringLiteral_token1,
  [1941] = 1,
    ACTIONS(284), 1,
      aux_sym_stringLiteral_token1,
  [1945] = 1,
    ACTIONS(286), 1,
      sym_intLiteral,
  [1949] = 1,
    ACTIONS(288), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 212,
  [SMALL_STATE(6)] = 245,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 311,
  [SMALL_STATE(9)] = 344,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 604,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 799,
  [SMALL_STATE(24)] = 846,
  [SMALL_STATE(25)] = 893,
  [SMALL_STATE(26)] = 940,
  [SMALL_STATE(27)] = 987,
  [SMALL_STATE(28)] = 1018,
  [SMALL_STATE(29)] = 1065,
  [SMALL_STATE(30)] = 1093,
  [SMALL_STATE(31)] = 1117,
  [SMALL_STATE(32)] = 1143,
  [SMALL_STATE(33)] = 1184,
  [SMALL_STATE(34)] = 1225,
  [SMALL_STATE(35)] = 1248,
  [SMALL_STATE(36)] = 1273,
  [SMALL_STATE(37)] = 1294,
  [SMALL_STATE(38)] = 1315,
  [SMALL_STATE(39)] = 1336,
  [SMALL_STATE(40)] = 1369,
  [SMALL_STATE(41)] = 1389,
  [SMALL_STATE(42)] = 1421,
  [SMALL_STATE(43)] = 1441,
  [SMALL_STATE(44)] = 1461,
  [SMALL_STATE(45)] = 1493,
  [SMALL_STATE(46)] = 1525,
  [SMALL_STATE(47)] = 1545,
  [SMALL_STATE(48)] = 1577,
  [SMALL_STATE(49)] = 1606,
  [SMALL_STATE(50)] = 1635,
  [SMALL_STATE(51)] = 1664,
  [SMALL_STATE(52)] = 1685,
  [SMALL_STATE(53)] = 1704,
  [SMALL_STATE(54)] = 1727,
  [SMALL_STATE(55)] = 1756,
  [SMALL_STATE(56)] = 1775,
  [SMALL_STATE(57)] = 1793,
  [SMALL_STATE(58)] = 1813,
  [SMALL_STATE(59)] = 1830,
  [SMALL_STATE(60)] = 1840,
  [SMALL_STATE(61)] = 1846,
  [SMALL_STATE(62)] = 1853,
  [SMALL_STATE(63)] = 1857,
  [SMALL_STATE(64)] = 1861,
  [SMALL_STATE(65)] = 1865,
  [SMALL_STATE(66)] = 1869,
  [SMALL_STATE(67)] = 1873,
  [SMALL_STATE(68)] = 1877,
  [SMALL_STATE(69)] = 1881,
  [SMALL_STATE(70)] = 1885,
  [SMALL_STATE(71)] = 1889,
  [SMALL_STATE(72)] = 1893,
  [SMALL_STATE(73)] = 1897,
  [SMALL_STATE(74)] = 1901,
  [SMALL_STATE(75)] = 1905,
  [SMALL_STATE(76)] = 1909,
  [SMALL_STATE(77)] = 1913,
  [SMALL_STATE(78)] = 1917,
  [SMALL_STATE(79)] = 1921,
  [SMALL_STATE(80)] = 1925,
  [SMALL_STATE(81)] = 1929,
  [SMALL_STATE(82)] = 1933,
  [SMALL_STATE(83)] = 1937,
  [SMALL_STATE(84)] = 1941,
  [SMALL_STATE(85)] = 1945,
  [SMALL_STATE(86)] = 1949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueStmt, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continueStmt, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statements, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnCallStmt, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnCallStmt, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callExpr, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callExpr, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varDecl, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varDecl, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callExpr, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callExpr, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakStmt, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakStmt, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockStmt, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockStmt, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringLiteral, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringLiteral, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleLiteral, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tupleLiteral, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayLiteral, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrayLiteral, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatLiteral, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatLiteral, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexExpr, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexExpr, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2), SHIFT_REPEAT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(36),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(49),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(54),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(37),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(68),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(70),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 2), SHIFT_REPEAT(53),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baseType, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(36),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(37),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(68),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2), SHIFT_REPEAT(70),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callExpr_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_callExpr_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayLiteral_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayLiteral_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayType, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
