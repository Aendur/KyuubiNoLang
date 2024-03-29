%defines "src/parser.h"
%output  "src/parser.c"
 //%define api.header.include "\"parser.h\""
 //%require "3.4.0"

%define parse.error verbose
%define lr.type canonical-lr

%union {
	struct node * node;
	int ival;
	const char * sval;
	struct arg_list * al;
}

%token <ival> VOID INT FLOAT CHAR STRING UNDEFINED
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
%token CONSTANT
%token ARRAY
%token ARRAY_INDEX
%token FUNCTION
%token FUNCTION_CALL
%token DECLARATION
%token GENERIC_NODE

%type <node> declaration_list declaration init_declarator
%type <node> initializer_list compound_statement statement_list
%type <node> statement conditional_statement iteration_statement return_statement assignment_expression
%type <node> logical_or_expression logical_and_expression equality_expression relational_expression additive_expression
%type <node> multiplicative_expression postfix_expression primary_expression argument_call_list
%type <node> unary_expression
%type <node> function_definition

%type <al> argument_list argument

%type <ival> type


%start start

%code provides {
	void yyerror (char const *);	
	char * build_key(struct arg_list * args);
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
	| declaration_list declaration  { $$ = nl_push(node_list, node_init(LIST, "declaration-list" , $1, $2, ENDARG)); assign_context($$); }
	;

declaration
	: function_definition                    { $$ = $1; }
	| init_declarator ';'                    { $$ = $1; }
	| error ';'                              { $$ = NULL; }
	| error compound_statement               { $$ = NULL; }
	;

init_declarator
	: type IDENTIFIER                                            { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_var($1,$2); }
	| type IDENTIFIER '=' assignment_expression                  { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_var($1,$2); }
	| type IDENTIFIER '[' assignment_expression ']'              { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_arr($1,$2); }
	| type IDENTIFIER '[' ']' '=' '{' initializer_list '}'       { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_arr($1,$2); }
	| type IDENTIFIER '[' ']' '=' '{' initializer_list ',' '}'   { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_arr($1,$2); }
	| type IDENTIFIER '[' ']' '=' STRING_LITERAL                 { $$ = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context($$); $$->symbol=add_symbol_arr($1,$2); }
	;

initializer_list
	: assignment_expression                      { $$ = $1; }
	| initializer_list ',' assignment_expression { $$ = nl_push(node_list, node_init(LIST, "initializer-list" , $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

function_definition
	: type IDENTIFIER '(' argument_list ')' '{' { begin_fun($1, $2, $4);   } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $8  , ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' VOID ')'          '{' { begin_fun($1, $2, NULL); } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $8  , ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' ')'               '{' { begin_fun($1, $2, NULL); } statement_list '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , $7  , ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' argument_list ')' '{' { begin_fun($1, $2, $4);   }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' VOID ')'          '{' { begin_fun($1, $2, NULL); }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' ')'               '{' { begin_fun($1, $2, NULL); }                '}' { $$ = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body($$); finish(); finish(); assign_context($$); }
	| type IDENTIFIER '(' error ')'                                                             { $$ = NULL; }
	//| type IDENTIFIER error ';'                                                                 { $$ = NULL; }
	;

argument_list
	: argument                   { $$ = $1; }
	| argument_list ',' argument { $$ = al_link($1, &$3); } 
	;

argument
	: type IDENTIFIER          { $$ = al_init($1, VARIABLE, $2); }
	| type IDENTIFIER '[' ']'  { $$ = al_init($1, ARRAY   , $2); }
	;

compound_statement
	: '{' '}'	                              { $$ = NULL; }
	| '{' { begin(NULL); } statement_list '}' { $$ = $3  ; finish(); }
	;

statement_list
	: statement                { $$ = $1; }
	| statement_list statement { $$ = nl_push(node_list, node_init(LIST, "statement-list" , $1, $2, ENDARG)); assign_context($$); }
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
	: IF '(' assignment_expression ')' compound_statement                          { $$ = nl_push(node_list, node_init(IF  , "if-statement"      , $3, $5,     ENDARG)); assign_context($$); } 
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement  { $$ = nl_push(node_list, node_init(ELSE, "if-else-statement" , $3, $5, $7, ENDARG)); assign_context($$); } 
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { $$ = nl_push(node_list, node_init(WHILE, "while-statement" , $3, $5, ENDARG)); assign_context($$); } 
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { $$ = nl_push(node_list, node_init(DO   , "do-statement"    , $2, $5, ENDARG)); assign_context($$); } 
	;

return_statement
	: RETURN                        { $$ = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context($$); }
	| RETURN assignment_expression  { $$ = nl_push(node_list, node_init(RETURN, "return-statement", $2, ENDARG)); assign_context($$); }
	;

assignment_expression
	: logical_or_expression                         { $$ = $1; }
	| postfix_expression '=' logical_or_expression  { $$ = nl_push(node_list, node_init(OP_ASSIGN, "=", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

logical_or_expression
	: logical_and_expression                              { $$ = $1; }
	| logical_or_expression OP_OR logical_and_expression  { $$ = nl_push(node_list, node_init(OP_OR, "||", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	; 

logical_and_expression
	: equality_expression                                 { $$ = $1; }
	| logical_and_expression OP_AND equality_expression   { $$ = nl_push(node_list, node_init(OP_AND, "&&", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$);}
	;

equality_expression
	: relational_expression                             { $$ = $1; }
	| equality_expression OP_EQ relational_expression   { $$ = nl_push(node_list, node_init(OP_EQ, "==", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| equality_expression OP_NE relational_expression   { $$ = nl_push(node_list, node_init(OP_NE, "!=", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

relational_expression
	: additive_expression                               { $$ = $1; }
	| relational_expression '<'   additive_expression   { $$ = nl_push(node_list, node_init(OP_LT, "<" , $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| relational_expression '>'   additive_expression   { $$ = nl_push(node_list, node_init(OP_GT, ">" , $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| relational_expression OP_LE additive_expression   { $$ = nl_push(node_list, node_init(OP_LE, "<=", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| relational_expression OP_GE additive_expression   { $$ = nl_push(node_list, node_init(OP_GE, ">=", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

additive_expression
	: multiplicative_expression                           { $$ = $1; }
	| additive_expression '+' multiplicative_expression   { $$ = nl_push(node_list, node_init(OP_ADD, "+", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| additive_expression '-' multiplicative_expression   { $$ = nl_push(node_list, node_init(OP_SUB, "-", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

multiplicative_expression
	: unary_expression                                  { $$ = $1; }
	| multiplicative_expression '*' unary_expression    { $$ = nl_push(node_list, node_init(OP_MUL, "*", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| multiplicative_expression '/' unary_expression    { $$ = nl_push(node_list, node_init(OP_DIV, "/", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| multiplicative_expression '%' unary_expression    { $$ = nl_push(node_list, node_init(OP_MOD, "%", $1, $3, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

unary_expression
	: postfix_expression         { $$ = $1; }
	| '!' unary_expression       { $$ = nl_push(node_list, node_init(OP_NOT, "!",  $2, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| '-' unary_expression       { $$ = nl_push(node_list, node_init(OP_NEG, "-",  $2, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| OP_INC unary_expression    { $$ = nl_push(node_list, node_init(OP_INC, "++", $2, ENDARG)); assign_context($$); typecheck_lazy($$); }
	| OP_DEC unary_expression    { $$ = nl_push(node_list, node_init(OP_DEC, "--", $2, ENDARG)); assign_context($$); typecheck_lazy($$); }
	;

postfix_expression
	: primary_expression                           { $$ = $1; }
	| IDENTIFIER '[' assignment_expression ']'     { $$ = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , $3, ENDARG)); assign_context($$); retrieve($$, $1); free((void*) $1);}
	| IDENTIFIER '(' ')'                           { $$ = nl_push(node_list, node_init(FUNCTION_CALL, "function-call",     ENDARG)); assign_context($$); retrieve($$, $1); free((void*) $1);}
	| IDENTIFIER '(' argument_call_list ')'        { $$ = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", $3, ENDARG)); assign_context($$); retrieve($$, $1); free((void*) $1);}
	;

primary_expression
	: IDENTIFIER                     { $$ = nl_push(node_list, node_init(IDENTIFIER    , $1, ENDARG)); assign_context($$); free((void*) $1); retrieve($$, $$->name); } // use var
	| STRING_LITERAL                 { $$ = nl_push(node_list, node_init(STRING_LITERAL, $1, ENDARG)); assign_context($$); free((void*) $1); char * key = str_ptr("node", $$, NULL); $$->symbol = add_symbol(CONSTANT, STRING, key); free(key); } // rvalue
	| CONSTANT_FLOAT                 { $$ = nl_push(node_list, node_init(CONSTANT_FLOAT, $1, ENDARG)); assign_context($$); free((void*) $1); char * key = str_ptr("node", $$, NULL); $$->symbol = add_symbol(CONSTANT, FLOAT , key); free(key); } // rvalue
	| CONSTANT_INT                   { $$ = nl_push(node_list, node_init(CONSTANT_INT  , $1, ENDARG)); assign_context($$); free((void*) $1); char * key = str_ptr("node", $$, NULL); $$->symbol = add_symbol(CONSTANT, INT   , key); free(key); } // rvalue
	| CONSTANT_HEX                   { $$ = nl_push(node_list, node_init(CONSTANT_HEX  , $1, ENDARG)); assign_context($$); free((void*) $1); char * key = str_ptr("node", $$, NULL); $$->symbol = add_symbol(CONSTANT, INT   , key); free(key); } // rvalue
	| CONSTANT_CHAR                  { $$ = nl_push(node_list, node_init(CONSTANT_CHAR , $1, ENDARG)); assign_context($$); free((void*) $1); char * key = str_ptr("node", $$, NULL); $$->symbol = add_symbol(CONSTANT, CHAR  , key); free(key); } // rvalue
	| '(' assignment_expression ')'  { $$ = $2; }
	;

argument_call_list
	: assignment_expression                         { $$ = $1; } 
	| argument_call_list ',' assignment_expression  { $$ = nl_push(node_list, node_init(LIST, "argument-list", $1, $3, ENDARG)); assign_context($$); } 
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
