const PREC = {
  lowest: 0,
  logical: 1,
  comparison: 2,
  add_sub: 3,
  bitwise: 4,
  mul_div: 5,
  prefix: 6,
  call: 7,
  index_expr: 8,
  dot: 9
};

//todo
/**
// map
// set
// arr
// as expr | is expr
*/

module.exports = grammar({
  name: "nature",
  extras: $ => [/\s/, $.lineComment],
  // externals: $ => [],
  conflicts: $ => [
    [$.expression, $.baseType],
    [$.fnCallStmt, $.expression],
  ],
  inline: $ => [$.keyWord],
  word: $ => $.identifier,
  rules: {
    source_file: $ => repeat($.declaration),
    declaration: $ => seq($.statements),
    statements: $ => choice($.funDecl, $.assignmentStmt, $.continueStmt, $.breakStmt, $.blockStmt, $.returnStmt, $.varDecl, $.typeDecl, $.fnCallStmt),
    funDecl: $ => seq('fn', optional(field("name", $.identifier)), '(', optional($.parameterList), ')', optional(field("result",seq(':', $.type))), field("body",$.blockStmt)),
    varDecl: $ => seq(choice('var', $.type), field("name", $.identifier), seq('=', choice($.expression, $.arrayLiteral, $.funDecl))),
    typeDecl: $ => seq('type', field("name", $.identifier), '=', choice(seq('gen', $.unionType), $.baseType, $.tupleType, $.unionType, $.structDecl)),
    // exprStmt: $ => seq($.expression, ';'),
    // ifStmt: $ => seq('if', '(', $.expression, ')', $.statements, optional(seq('else', $.statements))),
    // forStmt: $ => seq('for', '(', choice($.varDecl, $.exprStmt, ';'), optional($.expression), ';', optional($.expression), ')', $.statements),
    // whileStmt: $ => seq('while', '(', $.expression, ')', $.statements),
    blockStmt: $ => seq('{', optional($.statements), '}'),
    returnStmt: $ => prec.right(PREC.lowest, seq('return', optional($.expression))),
    breakStmt: _ => seq('break'),
    continueStmt: _ => seq('continue'),
    fnCallStmt: $ => $.callExpr,
    assignmentStmt: $ => seq(choice(field("left", choice($.identifier, $.selectorExpr))), $.assignOp, field("right", $.expression)),
    expression: $ => choice($.identifier, $.indexExpr, $.callExpr, $.unaryExpr, $.binaryExpr,
      $.tupleExpr, $.selectorExpr, $.boolLiteral, $.intLiteral, $.floatLiteral, $.stringLiteral, $._nil, $._null),
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
    indexExpr: $ => prec.left(PREC.index_expr, seq(field("operand", $.expression), "[",field("index", $.expression), "]") ),
    selectorExpr: $ => prec.left(PREC.dot, seq(field("operand", $.expression), seq(".", field("field",$.expression)))),
    callExpr: $ => prec.left(PREC.call, seq(field("function", $.identifier), '(', field("arguments",repeat($.argumentsList)), ')')),
    groupExpr: $ => seq('(', $.expression, ')'),
    tupleExpr: $ => seq('(', repeat1(seq(choice($.expression, $.arrayLiteral), optional(','))), ')'),
    argumentsList: $ => seq($.expression, optional(',')),
    parameterList: $ => repeat1($.parameterDecl),
    parameterDecl: $ => seq(choice(seq("self", field("self", $.identifier)), seq(field("type", $.type), field("name",$.identifier))), optional(',')),
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
      'cptr', 'bool', 'any', $._null,  field("type_literal", $.identifier),
      'string', 
    ),
    structDecl: $ => seq('struct', '{', seq(optional($.fieldDeclList), optional($.methodDeclList)), '}'),
    fieldDeclList: $ => repeat1($.filedDecl),
    filedDecl: $ => seq(field("type", $.type), field("name", $.identifier)),
    methodDeclList: $ => repeat1($.methodDecl),
    methodDecl: $ => seq('var', field("method_name", $.identifier), '=', seq('fn','(', optional($.parameterList), ')', optional(field("result",seq(':', $.type))), field("body",$.blockStmt))),
    arrayType: $ => prec.left(PREC.lowest,seq('[', $.baseType, optional(seq(',',$.intLiteral)),']')),
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
    _nil: _ => seq(field("nil_literal", 'nil')),
    _null: _ => seq(field("null_literal",'null')),
  }
})

function sepBy1(sep, rule) {
	return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
	return optional(sepBy1(sep, rule))
}