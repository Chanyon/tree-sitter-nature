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
// fn
// struct
// arr
// as expr | is expr
// type T = i32
// type Foo = struct {} Foo.A.B.C()
*/

module.exports = grammar({
  name: "nature",
  rules: {
    program: $ => repeat($.declaration),
    declaration: $ => seq($.statements),
    // funDecl: $ => seq('fun', $.function),
    varDecl: $ => seq(choice('var', $.type), $.ident, seq('=', choice($.expression, $.arrayLiteral))),
    statements: $ => choice($.assignmentStmt, $.continueStmt, $.breakStmt, $.blockStmt, $.returnStmt, $.fnCallStmt, $.varDecl),
    // exprStmt: $ => seq($.expression, ';'),
    // ifStmt: $ => seq('if', '(', $.expression, ')', $.statements, optional(seq('else', $.statements))),
    // forStmt: $ => seq('for', '(', choice($.varDecl, $.exprStmt, ';'), optional($.expression), ';', optional($.expression), ')', $.statements),
    // whileStmt: $ => seq('while', '(', $.expression, ')', $.statements),
    blockStmt: $ => seq('{', $.statements, '}'),
    returnStmt: $ => prec.right(PREC.lowest, seq('return', optional($.expression))),
    breakStmt: _ => seq('break'),
    continueStmt: _ => seq('continue'),
    fnCallStmt: $ => $.callExpr,
    // printStmt: $ => seq('print', $.expression, ';'),
    assignmentStmt: $ => seq(choice($.ident, /*a.b.c*/), $.assignOp, $.expression),
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
      $.ident, $.indexExpr, $.callExpr),
    indexExpr: $ => prec.left(PREC.index_expr, seq($.ident, '[', $.intLiteral, ']')),
    callExpr: $ => prec.left(PREC.call, seq($.ident, '(', repeat($.parameterList), ')')),
    groupExpr: $ => prec.left(PREC.call, seq('(', $.expression, ')')),
    tupleExpr: $ => seq('(', repeat1(seq(choice($.expression, $.arrayLiteral), optional(','))), ')'),
    parameterList: $ => seq($.expression, optional(',')),
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
    baseType: _ => choice(
      'i8', 'i16,', 'i32', 'int', 'i64',
      'u8', 'u16,', 'u32', 'uint', 'u64',
      'f32', 'f64', 'f80', 'float',
      'cptr', 'null', 'bool', 'any',
      'string'
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
    ident: $ => /[a-zA-Z_]\w*/,
  }
})