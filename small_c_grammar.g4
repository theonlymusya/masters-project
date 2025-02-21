grammar small_c_grammar;
program : function* EOF;
function : 'int' 'main' '(' ')' block;
statement : ifStatement | forStatement | whileStatement | returnStatement | varDeclaration | assignment ';' | expression ';' | block;

block : '{' statement* '}';

ifStatement : 'if' '(' condition ')' statement ('else' statement)?;

forStatement : 'for' '(' varDeclaration condition ';' assignment ')' statement;

whileStatement : 'while' '(' condition ')' statement;

returnStatement : 'return' expression ';';

varDeclaration : 'int' ID ('=' expression)? ';';

assignment : ID '=' expression;

condition : expression ('<' | '>' | '==' | '!=') expression;

expression : ID | INT | expression ('+'|'-'|'*'|'/') expression;

ID : [a-zA-Z_][a-zA-Z0-9_]*;
INT : [0-9]+;
WS : [ \t\r\n]+ -> skip;

