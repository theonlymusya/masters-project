grammar small_c_grammar;

program 
    : (function | statement)* EOF
    ;

function 
    : INT MAIN '(' ')' block
    ;

statement
    : ifStatement
    | forStatement
    | varDeclaration ';'
    | block
    ;

block 
    : '{' statement* '}'
    ;

ifStatement 
    : IF '(' math_expr ')' statement ( ELSE ifStatement | ELSE statement )?
    ;

forStatement 
    : FOR '(' forStart? ';' forStop? ';' forStep? ')' statement
    ;

forStart 
    : varDeclaration
    ;

forStop 
    : ID ( '<' | '>' | '<=' | '>=' ) math_expr
    ;

forStep 
    : ID ( '-=' | '+=' ) math_expr 
    | ID ( '++' | '--' )
    ;

varDeclaration 
    : (INT | DOUBLE) ID arrayDecl? ('=' math_expr)?
    ;

arrayDecl 
    : '[' math_expr ']'
    ;

math_expr 
    : EXPRESSION_TEXT
    ;

//
// Лексические правила – порядок имеет значение!
// Сначала более специфичные (ключевые слова), потом общее правило
//
INT      : 'int';
DOUBLE   : 'double';
MAIN     : 'main';
IF       : 'if';
ELSE     : 'else';
FOR      : 'for';

EXPRESSION_TEXT : ~[;\r\n]+ ;

ID      : [a-zA-Z_][a-zA-Z0-9_]*;
NUMBER  : [0-9]+;
WS      : [ \t\r\n]+ -> skip;
