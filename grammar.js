const PREC = {
  low: 0,
  or_and: 1,
  comp: 2,
  add_sub: 3,
  mul_div: 4,
  prefix: 5,
  index_expr: 6,
  call: 7,
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
*/

module.exports = grammar({
  name: "nature",
  rules: {
    program: $ => repeat($.declaration),
    declaration: $ => seq($.statements),
    // funDecl: $ => seq('fun', $.function),
    varDecl: $ => seq(choice('var', $.type), $.ident, seq('=', $.expression)),
    statements: $ => choice($.continueStmt, $.breakStmt, $.blockStmt, $.fnCallStmt, $.varDecl),
    // exprStmt: $ => seq($.expression, ';'),
    // ifStmt: $ => seq('if', '(', $.expression, ')', $.statements, optional(seq('else', $.statements))),
    // forStmt: $ => seq('for', '(', choice($.varDecl, $.exprStmt, ';'), optional($.expression), ';', optional($.expression), ')', $.statements),
    // whileStmt: $ => seq('while', '(', $.expression, ')', $.statements),
    blockStmt: $ => seq('{', $.statements, '}'),
    // returnStmt: $ => seq('return', optional($.expression), ';'),
    breakStmt: _ => seq('break'),
    continueStmt: _ => seq('continue'),
    fnCallStmt: $ => $.callExpr,
    // printStmt: $ => seq('print', $.expression, ';'),
    // assignmentStmt: $ => seq(choice($.ident, seq("self", ".", $.ident)), "=", $.expression),
    expression: $ => choice($.primary, $.arrayLiteral, $.tupleLiteral, $.indexExpr, $.callExpr),
    // binaryExpr: $ => {
    //   const table = [
    //     [PREC.or_and, "||"],
    //     [PREC.or_and, "&&"],
    //     [PREC.comp, $.Comp],
    //     [PREC.add_sub, $.ADD_SUB],
    //     [PREC.mul, $.MUL_DIV],
    //     [PREC.ident, $.ident]
    //   ];
    //   return choice(
    //     ...table.map(([precedence, operator]) =>
    //       prec.left(
    //         precedence,
    //         seq(
    //           field("left", $.expression),
    //           field("operator", operator),
    //           field("right", $.expression)
    //         )
    //       )
    //     )
    //   )
    // },
    // unaryExpr: $ => prec.left(PREC.prefix, seq(field("operator", $.prefixOp), field("left", $.expression))),
    // Comp: _ => choice("==", "!=", "<", ">", "<=", ">="),
    // ADD_SUB: _ => choice("+", "-"),
    // MUL_DIV: _ => choice("*", "/", "%"),
    // prefixOp: _ => choice("-", "!"),
    primary: $ => choice($.boolLiteral, 'nil', 'null', $.intLiteral, $.floatLiteral, $.stringLiteral, $.ident),
    indexExpr: $ => prec.left(PREC.index_expr, seq($.ident, '[', $.intLiteral, ']')),
    callExpr: $ => prec.left(PREC.call, seq($.ident, '(', repeat(seq($.expression, optional(','))), ')')),
    pList: $ => repeat(seq($.expression, optional(','))),
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
        'nil',
        'null',
        'type',
        'gen',
        'struct',
        'has',
        'any',
        'arr'
      ),
    type: $ => choice($.baseType, $.arrayType, $.tupleType),
    baseType: _ => choice(
      'i8', 'i16,', 'i32', 'int', 'i64',
      'u8', 'u16,', 'u32', 'uint', 'u64',
      'f32', 'f64', 'f80', 'float',
      'cptr', 'null', 'bool', 'any',
      'string'
    ),
    arrayType: $ => seq('[', $.baseType, optional(seq(',',$.intLiteral)),']'),
    tupleType: $ => seq('(',repeat1(seq($.baseType, optional(','))),')'),
    intLiteral: $ => /(\d\d*|0[0-7]*|0[xX][\da-fA-F]*)/,
    floatLiteral: $ => choice(/\d\.\d*([eE][+-]\d*)?/, /\d*[eE][+-]\d*/, /\.\d*[eE][+-]\d*/),
    boolLiteral: $ => /(true|false)/,
    stringLiteral: $ => choice(
      seq('"', /\w+/, '"'),
      seq("'", /\w+/, "'")
    ),
    arrayLiteral: $ => seq('[', repeat1(seq($.primary, optional(','))), ']'),
    tupleLiteral: $ => seq('(', repeat1(seq($.primary, optional(','))), ')'),
    ident: $ => /[a-zA-Z_]\w*/,
  }
})