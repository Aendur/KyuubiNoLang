%defines "src/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""

 //%define api.pure
%locations

%define parse.error verbose
%define lr.type canonical-lr

%union {
	char   cval;
	char * sval;
	int    ival;
	float  fval;
}

%token VOID INT FLOAT CHAR
%token IF ELSE WHILE DO RETURN
%token OP_INC OP_DEC OP_GE OP_LE OP_EQ OP_NE OP_AND OP_OR
%token IDENTIFIER CONSTANT STRING_LITERAL
%token UNRECOGNIZED_TOKEN
%token INVALID_IDENTIFIER
%token INVALID_CHAR_CONST
%start declaration_list

%code requires {
	int yylex (void);
}

%code provides {
	void yyerror (char const *);	
}

%{
#include <stdio.h>
%}

%%

declaration_list
	: declaration
	| declaration_list declaration
	;

declaration
	: function_declarator ';'
	| function_declarator compound_statement
	| init_declarator ';'
	| error ';'                { fprintf(stderr, "HANDLE DECL1 ERROR\n"); }
	| error compound_statement { fprintf(stderr, "HANDLE DECL2 ERROR\n"); }
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

declarator
	: type IDENTIFIER
	| type IDENTIFIER '[' ']'
	| type IDENTIFIER '[' assignment_expression ']'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

function_declarator
	: type IDENTIFIER '(' parameter_list ')'
	| type IDENTIFIER '(' ')'
	| type IDENTIFIER '(' VOID ')'
	| type IDENTIFIER '(' error ')' { fprintf(stderr, "HANDLE ARG LIST ERROR\n"); }
	;

parameter_list
	: declarator
	| parameter_list ',' declarator
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	;

statement_list
	: statement
	| statement_list statement
	;

statement
	: ';'
	| init_declarator ';'
	| assignment_expression ';'
	| selection_statement
	| iteration_statement
	| return_statement ';'
	;

selection_statement
	: IF '(' assignment_expression ')' compound_statement
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement
	| DO compound_statement WHILE '(' assignment_expression ')' ';'
	;

return_statement
	: RETURN
	| RETURN assignment_expression
	;

assignment_expression
	: logical_or_expression
	| postfix_expression '=' logical_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OP_OR logical_and_expression
	; 

logical_and_expression
	: equality_expression
	| logical_and_expression OP_AND equality_expression
	;

equality_expression
	: relational_expression
	| equality_expression OP_EQ relational_expression
	| equality_expression OP_NE relational_expression
	;

relational_expression
	: additive_expression
	| relational_expression '<'   additive_expression
	| relational_expression '>'   additive_expression
	| relational_expression OP_LE additive_expression
	| relational_expression OP_GE additive_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

multiplicative_expression
	: postfix_expression
	| multiplicative_expression '*' postfix_expression
	| multiplicative_expression '/' postfix_expression
	| multiplicative_expression '%' postfix_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' assignment_expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_list ')'
	| postfix_expression OP_INC
	| postfix_expression OP_DEC
	;

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' assignment_expression ')'
	| error { fprintf(stderr, "HANDLE EXPR ERROR\n"); }
	;

argument_list
	: assignment_expression
	| argument_list ',' assignment_expression
	;

type
	: VOID
	| INT
	| FLOAT
	| CHAR
	;

%%
void yyerror (char const * msg) {
	fprintf(stderr, "%d %d: %s\n", yylloc.last_line, yylloc.first_column, msg);
}