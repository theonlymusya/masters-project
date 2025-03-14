grammar small_c_grammar;

program 
    : (function | statement)* EOF
    ;

function 
    : 'int' 'main' '(' ')' block
    ;

statement
    : ifStatement
    | forStatement
    | assignmentOp ';'
    | incDecOp ';'
    | block
    ;

block 
    : '{' statement* '}'
    ;

ifStatement 
    : 'if' '(' mathExpr ')' statement ( 'else' ifStatement | 'else' statement )?
    ;

forStatement 
    : 'for' '(' forStart? ';' forStop? ';' forStep? ')' statement
    ;

forStart 
    : assignmentOp
    ;

forStop 
    : ID ( '<' | '>' | '<=' | '>=' ) mathExpr
    ;

forStep 
    : ID ( '-=' | '+=' | '/=' | '%=') mathExpr 
    | incDecOp
    ;

assignmentOp
    : declaration? varName ('=' mathExpr)?
    ;

declaration
    : ('int' | 'double')
    ;

varName
    : ID arrayDecl?
    ;

arrayDecl 
    : '[' mathExpr ']' ('[' mathExpr ']' )? ('[' mathExpr ']' )?
    ;

incDecOp
    : ID ( '++' | '--' )
    ;

mathExpr
    : logicalOrExpr
    ;

logicalOrExpr
    : logicalAndExpr ( '||' logicalAndExpr )*
    ;

logicalAndExpr
    : equalityExpr ( '&&' equalityExpr )*
    ;

equalityExpr
    : relationalExpr ( ( '==' | '!=' ) relationalExpr )*
    ;

relationalExpr
    : additiveExpr ( ( '<' | '>' | '<=' | '>=' ) additiveExpr )*
    ;

additiveExpr
    : multiplicativeExpr ( ( '+' | '-' ) multiplicativeExpr )*
    ;

multiplicativeExpr
    : unaryExpr ( ( '*' | '/' | '%' ) unaryExpr )*
    ;

unaryExpr
    : ( '!' | '+' | '-' ) unaryExpr
    | primaryExpr
    ;

primaryExpr
    : funcCall
    | '(' mathExpr ')'
    | varName
    | NUMBER
    ;

funcCall
    : funcName '(' ( mathExpr (',' mathExpr)* )? ')'
    ;

funcName
    : ID ( '::' ID )*
    ;

ID : [a-zA-Z_][a-zA-Z0-9_]* ;
NUMBER : [0-9]+ ('.' [0-9]+)? ;
WS : [ \t\r\n]+ -> skip ;
