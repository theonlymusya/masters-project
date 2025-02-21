grammar small_c_grammar;

program 
    : function* EOF
    ;

function 
    : 'int' 'main' '(' ')' block
    ;

statement
    : ifStatement
    | forStatement
    | whileStatement
    | returnStatement
    | varDeclaration
    | expression ';'
    | block
    ;

block 
    : '{' statement* '}'
    ;

ifStatement 
    : 'if' '(' expression ')' statement ('else' statement)?
    ;

forStatement 
    : 'for' '(' forInit ';' expression ';' expression1 ')' statement
    ;

forInit
    : varDeclarationNoSemi
    | expression
    ;

whileStatement 
    : 'while' '(' expression ')' statement
    ;

returnStatement 
    : 'return' expression ';'
    ;

varDeclaration 
    : 'int' ID arrayDecl? ('=' expression)? ';'
    ;

varDeclarationNoSemi 
    : 'int' ID arrayDecl? ('=' expression)?
    ;

arrayDecl 
    : '[' INT ']'
    ;

// Выражения с поддержкой префиксных операторов

expression 
    : assignmentExpression
    ;

expression1
    : assignmentExpression
    ;

assignmentExpression 
    : conditionalExpression ( '=' assignmentExpression )?
    ;

conditionalExpression 
    : relationalExpression
    ;

relationalExpression 
    : additiveExpression (( '<' | '>' | '<=' | '>=' | '==' | '!=' ) additiveExpression)*
    ;

additiveExpression 
    : additiveExpression ('+' | '-') multiplicativeExpression
    | multiplicativeExpression
    ;

multiplicativeExpression 
    : multiplicativeExpression ('*' | '/') unaryExpression
    | unaryExpression
    ;

unaryExpression
    : prefixOperator unaryExpression
    | postfixExpression
    ;

prefixOperator
    : '++'
    | '--'
    | '+'
    | '-'
    ;

postfixExpression 
    : primaryExpression postfixPart*
    ;

postfixPart 
    : '[' expression ']'
    | ('++' | '--')
    ;

primaryExpression 
    : ID
    | INT
    | '(' expression ')'
    ;

ID  : [a-zA-Z_][a-zA-Z0-9_]*;
INT : [0-9]+;
WS  : [ \t\r\n]+ -> skip;


