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
    | varDeclaration
    | expression ';'
    | block
    ;

block 
    : '{' statement* '}'
    ;

ifStatement 
    : 'if' '(' expression ')' statement ( 'else' ifStatement | 'else' statement )?
    ;

forStatement 
    : 'for' '(' forInit ';' expression ';' expression1 ')' statement
    ;

forInit
    : varDeclarationNoSemi
    | expression
    ;

varDeclaration 
    : ('int' | 'double') ID arrayDecl? ('=' expression)? ';'
    ;

varDeclarationNoSemi 
    : ('int' | 'double') ID arrayDecl? ('=' expression)?
    ;

arrayDecl 
    : '[' expression ']'
    ;

// Выражения теперь представлены как строки для последующей проверки

expression 
    : EXPRESSION_TEXT
    ;

expression1
    : EXPRESSION_TEXT
    ;

EXPRESSION_TEXT : ~[;\n]+ ;

ID  : [a-zA-Z_][a-zA-Z0-9_]*;
INT : [0-9]+;
WS  : [ \t\r\n]+ -> skip;

