%defines "src/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""
%require "3.4.0"

%define parse.error verbose
%define lr.type canonical-lr

%union {
	struct node * node;
	int ival;
	const char * sval;
	struct arg_list * al;
}

%token <ival> VOID INT FLOAT CHAR
%token <sval> IDENTIFIER
%token <sval> STRING_LITERAL
%token <sval> CONSTANT_FLOAT
%token <sval> CONSTANT_INT
%token <sval> CONSTANT_HEX
%token <sval> CONSTANT_CHAR

%token IF ELSE WHILE DO RETURN
%token OP_INC "++"
%token OP_DEC "--"
%token OP_NOT "!"
%token OP_MUL "*"
%token OP_DIV "/"
%token OP_MOD "%"
%token OP_ADD "+"
%token OP_NEG
%token OP_SUB "-"
%token OP_LT "<" 
%token OP_GT ">" 
%token OP_LE "<="
%token OP_GE ">="
%token OP_EQ "=="
%token OP_NE "!="
%token OP_OR "||"
%token OP_AND "&&"
%token OP_ASSIGN "="


%token UNRECOGNIZED_TOKEN
%token INVALID_IDENTIFIER
%token INVALID_CHAR_CONST

%token LIST
%token VARIABLE
%token ARRAY
%token ARRAY_INDEX
%token FUNCTION
%token FUNCTION_CALL

%type <node> declaration_list declaration init_declarator
%type <node> initializer_list compound_statement statement_list
%type <node> statement conditional_statement iteration_statement return_statement assignment_expression
%type <node> logical_or_expression logical_and_expression equality_expression relational_expression additive_expression
%type <node> multiplicative_expression postfix_expression primary_expression argument_list
%type <node> unary_expression
%type <node> function_definition

%type <al> parameter_list parameter

%type <ival> type


%start start

%code provides {
	void yyerror (char const *);	
}

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "arg-list.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Tablestack * context_stack;
%}

%%
start
	: declaration_list             { root = $1; }
	;

declaration_list
	: declaration                   { $$ = $1; }
	| declaration_list declaration  { $$ = nl_push(node_list, node_init(LIST, "declaration-list" , $1, $2, ENDARG)); assign($$); }
	;

declaration
	: function_definition                    { $$ = $1; }
	| init_declarator ';'                    { $$ = $1; }
	| error ';'                              { $$ = NULL; }
	| error compound_statement               { $$ = NULL; }
	;

init_declarator
	: type IDENTIFIER                                            { add_symbol_var($1, $2); $$ = NULL; }
	| type IDENTIFIER '=' assignment_expression                  { add_symbol_var($1, $2); $$ = NULL; }
	| type IDENTIFIER '[' assignment_expression ']'              { add_symbol_arr($1, $2); $$ = NULL; }
	| type IDENTIFIER '[' ']' '=' '{' initializer_list '}'       { add_symbol_arr($1, $2); $$ = NULL; }
	| type IDENTIFIER '[' ']' '=' '{' initializer_list ',' '}'   { add_symbol_arr($1, $2); $$ = NULL; }
	| type IDENTIFIER '[' ']' '=' STRING_LITERAL                 { add_symbol_arr($1, $2); $$ = NULL; }
	;

initializer_list
	: assignment_expression                      { $$ = $1; }
	| initializer_list ',' assignment_expression { $$ = nl_push(node_list, node_init(LIST, "initializer-list" , $1, $3, ENDARG)); assign($$); }
	;

function_definition
	: type IDENTIFIER '(' parameter_list ')' '{' { begin_fun($1, $2, $4);   } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $8  , ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' VOID ')'           '{' { begin_fun($1, $2, NULL); } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $8  , ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' ')'                '{' { begin_fun($1, $2, NULL); } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $7  , ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' parameter_list ')' '{' { begin_fun($1, $2, $4);   }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' VOID ')'           '{' { begin_fun($1, $2, NULL); }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' ')'                '{' { begin_fun($1, $2, NULL); }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign($$); finish(); finish(); }
	| type IDENTIFIER '(' error ')'                                                              { $$ = NULL; }
	| type IDENTIFIER error ';'                                                                  { $$ = NULL; }
	;

parameter_list
	: parameter                    { $$ = $1; }
	| parameter_list ',' parameter { $$ = al_link($1, &$3); } 
	;

parameter
	: type IDENTIFIER          { $$ = al_init($1, VARIABLE, $2); }
	| type IDENTIFIER '[' ']'  { $$ = al_init($1, ARRAY   , $2); }
	;

compound_statement
	: '{' '}'	                              { $$ = NULL; }
	| '{' { begin(NULL); } statement_list '}' { finish(); $$ = $3; }
	;

statement_list
	: statement                { $$ = $1; }
	| statement_list statement { $$ = nl_push(node_list, node_init(LIST, "statement-list" , $1, $2, ENDARG)); assign($$); }
	;

statement
	: ';'                       { $$ = NULL; }
	| init_declarator ';'       { $$ = $1; }
	| assignment_expression ';' { $$ = $1; }
	| conditional_statement     { $$ = $1; }
	| iteration_statement       { $$ = $1; }
	| compound_statement        { $$ = $1; }
	| return_statement ';'      { $$ = $1; }
	| error ';'                 { $$ = NULL; } 
	;

conditional_statement
	: IF '(' assignment_expression ')' compound_statement                          { $$ = nl_push(node_list, node_init(IF  , "if-statement"      , $3, $5,     ENDARG)); assign($$); } 
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement  { $$ = nl_push(node_list, node_init(ELSE, "if-else-statement" , $3, $5, $7, ENDARG)); assign($$); } 
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { $$ = nl_push(node_list, node_init(WHILE, "while-statement" , $3, $5, ENDARG)); assign($$); } 
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { $$ = nl_push(node_list, node_init(DO   , "do-statement"    , $2, $5, ENDARG)); assign($$); } 
	;

return_statement
	: RETURN                        { $$ = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign($$); }
	| RETURN assignment_expression  { $$ = nl_push(node_list, node_init(RETURN, "return-statement", $2, ENDARG)); assign($$); }
	;

assignment_expression
	: logical_or_expression                         { $$ = $1; }
	| postfix_expression '=' logical_or_expression  { $$ = nl_push(node_list, node_init(OP_ASSIGN, "=", $1, $3, ENDARG)); assign($$); }
	;

logical_or_expression
	: logical_and_expression                              { $$ = $1; }
	| logical_or_expression OP_OR logical_and_expression  { $$ = nl_push(node_list, node_init(OP_OR, "||", $1, $3, ENDARG)); assign($$); }
	; 

logical_and_expression
	: equality_expression                                 { $$ = $1; }
	| logical_and_expression OP_AND equality_expression   { $$ = nl_push(node_list, node_init(OP_AND, "&&", $1, $3, ENDARG)); assign($$); }
	;

equality_expression
	: relational_expression                             { $$ = $1; }
	| equality_expression OP_EQ relational_expression   { $$ = nl_push(node_list, node_init(OP_EQ, "==", $1, $3, ENDARG)); assign($$); }
	| equality_expression OP_NE relational_expression   { $$ = nl_push(node_list, node_init(OP_NE, "!=", $1, $3, ENDARG)); assign($$); }
	;

relational_expression
	: additive_expression                               { $$ = $1; }
	| relational_expression '<'   additive_expression   { $$ = nl_push(node_list, node_init(OP_LT, "<" , $1, $3, ENDARG)); assign($$); }
	| relational_expression '>'   additive_expression   { $$ = nl_push(node_list, node_init(OP_GT, ">" , $1, $3, ENDARG)); assign($$); }
	| relational_expression OP_LE additive_expression   { $$ = nl_push(node_list, node_init(OP_LE, "<=", $1, $3, ENDARG)); assign($$); }
	| relational_expression OP_GE additive_expression   { $$ = nl_push(node_list, node_init(OP_GE, ">=", $1, $3, ENDARG)); assign($$); }
	;

additive_expression
	: multiplicative_expression                           { $$ = $1; }
	| additive_expression '+' multiplicative_expression   { $$ = nl_push(node_list, node_init(OP_ADD, "+", $1, $3, ENDARG)); assign($$); }
	| additive_expression '-' multiplicative_expression   { $$ = nl_push(node_list, node_init(OP_SUB, "-", $1, $3, ENDARG)); assign($$); }
	;

multiplicative_expression
	: unary_expression                                  { $$ = $1; }
	| multiplicative_expression '*' unary_expression    { $$ = nl_push(node_list, node_init(OP_MUL, "*", $1, $3, ENDARG)); assign($$); }
	| multiplicative_expression '/' unary_expression    { $$ = nl_push(node_list, node_init(OP_DIV, "/", $1, $3, ENDARG)); assign($$); }
	| multiplicative_expression '%' unary_expression    { $$ = nl_push(node_list, node_init(OP_MOD, "%", $1, $3, ENDARG)); assign($$); }
	;

unary_expression
	: postfix_expression         { $$ = $1; }
	| '!' unary_expression       { $$ = nl_push(node_list, node_init(OP_NOT, "!",  $2, ENDARG)); assign($$); }
	| '-' unary_expression       { $$ = nl_push(node_list, node_init(OP_NEG, "-",  $2, ENDARG)); assign($$); }
	| OP_INC unary_expression    { $$ = nl_push(node_list, node_init(OP_INC, "++", $2, ENDARG)); assign($$); }
	| OP_DEC unary_expression    { $$ = nl_push(node_list, node_init(OP_DEC, "--", $2, ENDARG)); assign($$); }
	;

postfix_expression
	: primary_expression                                { $$ = $1; }
	| postfix_expression '[' assignment_expression ']'  { $$ = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , $1, $3, ENDARG)); assign($$); }
	| postfix_expression '(' ')'                        { $$ = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", $1,     ENDARG)); assign($$); }
	| postfix_expression '(' argument_list ')'          { $$ = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", $1, $3, ENDARG)); assign($$); }
	;

primary_expression
	: IDENTIFIER                     { $$ = nl_push(node_list, node_init(IDENTIFIER    , $1, ENDARG)); assign($$); free((void*) $1); } // use var
	| STRING_LITERAL                 { $$ = nl_push(node_list, node_init(STRING_LITERAL, $1, ENDARG)); assign($$); free((void*) $1); } // rvalue
	| CONSTANT_FLOAT                 { $$ = nl_push(node_list, node_init(CONSTANT_FLOAT, $1, ENDARG)); assign($$); free((void*) $1); } // rvalue
	| CONSTANT_INT                   { $$ = nl_push(node_list, node_init(CONSTANT_INT  , $1, ENDARG)); assign($$); free((void*) $1); } // rvalue
	| CONSTANT_HEX                   { $$ = nl_push(node_list, node_init(CONSTANT_HEX  , $1, ENDARG)); assign($$); free((void*) $1); } // rvalue
	| CONSTANT_CHAR                  { $$ = nl_push(node_list, node_init(CONSTANT_CHAR , $1, ENDARG)); assign($$); free((void*) $1); } // rvalue
	| '(' assignment_expression ')'  { $$ = $2; }
	;

argument_list
	: assignment_expression                    { $$ = $1; } 
	| argument_list ',' assignment_expression  { $$ = nl_push(node_list, node_init(LIST, "argument-list", $1, $3, ENDARG)); assign($$); } 
	;

type
	: VOID   { $$ = $1; }
	| INT    { $$ = $1; }
	| FLOAT  { $$ = $1; }
	| CHAR   { $$ = $1; }
	;

%%
void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
