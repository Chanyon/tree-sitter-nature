const PREC = {
  lowest: 0,
  logical: 1,
  comparison: 2,
  add_sub: 3,
  bitwise: 4,
  mul_div: 5,
  prefix: 6,
  index_expr: 7,
  call: 8,
};

//todo
/**
// map
// set
// arr
// as expr | is expr
// type Foo = struct {} Foo.A.B.C()
*/

module.exports = grammar({
  name: "nature",
  extras: $ => [/\s/, $.lineComment],
  // externals: $ => [],
  // conflicts: $ => [],
  inline: $ => [$.keyWord],
  word: $ => $.identifier,
  rules: {
    source_file: $ => repeat($.declaration),
    declaration: $ => seq($.statements),
    statements: $ => choice($.funDecl, $.assignmentStmt, $.continueStmt, $.breakStmt, $.blockStmt, $.returnStmt, $.fnCallStmt, $.varDecl, $.typeDecl),
    funDecl: $ => seq('fn', optional(field("name", $.identifier)), '(', repeat($.parameterList), ')', optional(field("result",seq(':', $.type))), field("body",$.blockStmt)),
    varDecl: $ => seq(choice('var', $.type), $.identifier, seq('=', choice($.expression, $.arrayLiteral, $.funDecl))),
    typeDecl: $ => seq('type', field("name", $.identifier), '=', choice(seq('gen', $.unionType), $.baseType, $.tupleType, $.unionType)),
    // exprStmt: $ => seq($.expression, ';'),
    // ifStmt: $ => seq('if', '(', $.expression, ')', $.statements, optional(seq('else', $.statements))),
    // forStmt: $ => seq('for', '(', choice($.varDecl, $.exprStmt, ';'), optional($.expression), ';', optional($.expression), ')', $.statements),
    // whileStmt: $ => seq('while', '(', $.expression, ')', $.statements),
    blockStmt: $ => seq('{', optional($.statements), '}'),
    returnStmt: $ => prec.right(PREC.lowest, seq('return', optional($.expression))),
    breakStmt: _ => seq('break'),
    continueStmt: _ => seq('continue'),
    fnCallStmt: $ => $.callExpr,
    assignmentStmt: $ => seq(choice(field("left", $.identifier), /*a.b.c*/), $.assignOp, field("right", $.expression)),
    expression: $ => choice($.primary, $.unaryExpr, $.binaryExpr, $.groupExpr, $.tupleExpr),
    binaryExpr: $ => {
      const table = [
        [PREC.logical, "||"],
        [PREC.logical, "&&"],
        [PREC.comparison, $.comparison],
        [PREC.add_sub, $.ADD_SUB],
        [PREC.bitwise, $.bitwise_l_r],
        [PREC.mul_div, $.MUL_DIV],
      ];
      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.expression),
              field("operator", operator),
              field("right", $.expression)
            )
          )
        )
      )
    },
    comparison: _ => choice("==", "!=", "<", ">", "<=", ">="),
    ADD_SUB: _ => choice("+", "-"),
    bitwise_l_r: _ => choice('<<', '>>'), //bitwise (left | right)
    MUL_DIV: _ => choice("*", "/", "%"),
    prefixOp: _ => choice("-", "!", '~'),
    assignOp: _ => choice('=', '+=', '-=', '/=', '*=', '%=', '<<=', '>>='),
    unaryExpr: $ => prec.left(PREC.prefix, seq(field("operator", $.prefixOp), field("left", $.expression))),
    primary: $ => choice($.boolLiteral, 'nil', 'null', $.intLiteral, $.floatLiteral, $.stringLiteral,
      $.identifier, $.indexExpr, $.callExpr),
    indexExpr: $ => prec.left(PREC.index_expr, seq($.identifier, '[', $.intLiteral, ']')),
    callExpr: $ => prec.left(PREC.call, seq(field("function", $.identifier), '(', field("arguments",repeat($.argumentsList)), ')')),
    groupExpr: $ => prec.left(PREC.call, seq('(', $.expression, ')')),
    tupleExpr: $ => seq('(', repeat1(seq(choice($.expression, $.arrayLiteral), optional(','))), ')'),
    argumentsList: $ => seq($.expression, optional(',')),
    parameterList: $ => $.parameterDecl,
    parameterDecl: $ => seq(field("type", $.type), field("name",$.identifier), optional(',')),
    keyWord: _ =>
      choice(
        'fn',
        'self',
        'for',
        'while',
        'if',
        'else',
        'return',
        'continue',
        'break',
        'var',
        'catch',
        'throw',
        'try',
        'is',
        'as',
        'in',
        'nil',
        'null',
        'type',
        'gen',
        'struct',
        'has',
        'any',
        'arr'
      ),
    type: $ => choice($.baseType, $.arrayType, $.tupleType, $.unionType),
    baseType: $ => choice(
      'i8', 'i16', 'i32', 'int', 'i64',
      'u8', 'u16', 'u32', 'uint', 'u64',
      'f32', 'f64', 'f80', 'float',
      'cptr', 'null', 'bool', 'any',
      'string', field("type", $.identifier)
    ),
    arrayType: $ => seq('[', $.baseType, optional(seq(',',$.intLiteral)),']'),
    tupleType: $ => prec.left(PREC.lowest,seq('(', repeat1(seq($.baseType, optional(','))), ')')),
    unionType: $ => seq($.baseType, repeat1(seq('|', $.baseType))), //i8|u8|null foo = null  
    intLiteral: $ => /(\d\d*|0[0-7]*|0[xX][\da-fA-F]*)/,
    floatLiteral: $ => choice(/\d\.\d*([eE][+-]\d*)?/, /\d*[eE][+-]\d*/, /\.\d*[eE][+-]\d*/),
    boolLiteral: $ => /(true|false)/,
    stringLiteral: $ => choice(
      seq('"', /\w+/, '"'),
      seq("'", /\w+/, "'")
    ),
    arrayLiteral: $ => seq('[', repeat1(seq($.expression, optional(','))), ']'),
    identifier: $ => /[a-zA-Z_]\w*/,
    lineComment: _ => seq('//', /.*/),
  }
})

function sepBy1(sep, rule) {
	return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
	return optional(sepBy1(sep, rule))
}