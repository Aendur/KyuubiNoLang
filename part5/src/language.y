%defines "src/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""
%require "3.4.0"

%define parse.error verbose
%define lr.type canonical-lr

%token <ival> VOID INT FLOAT CHAR STRING UNDEFINED
%token <sval> IDENTIFIER STRING_LITERAL CONSTANT_FLOAT CONSTANT_INT CONSTANT_HEX CONSTANT_CHAR

%token IF ELSE WHILE DO RETURN ASM

%token OP_ASSIGN "="
%token OP_OR "||"
%token OP_AND "&&"
%token OP_EQ "=="
%token OP_NE "!="
%token OP_LT "<" 
%token OP_LE "<="
%token OP_GE ">="
%token OP_GT ">" 
%token OP_ADD "+"
%token OP_SUB "-"
%token OP_MUL "*"
%token OP_DIV "/"
%token OP_MOD "%"
%token OP_POS
%token OP_NEG
%token OP_NOT "!"
%token OP_INC "++"
%token OP_DEC "--"

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
%token VAR_DECL
%token VAR_INIT
%token ARR_DECL
%token ARR_INIT

%token GENERIC_NODE

%type <node> declaration_list declaration init_declarator
%type <node> initializer_list compound_statement statement_list
%type <node> statement conditional_statement iteration_statement return_statement assignment_expression
%type <node> logical_or_expression logical_and_expression equality_expression relational_expression additive_expression
%type <node> multiplicative_expression postfix_expression primary_expression argument_call_list
%type <node> unary_expression
%type <node> function_definition
%type <sval> function_declarator
%type <node> var_declarator
%type <node> arr_declarator

%type <al> argument_list argument
%type <ival> type

%destructor { root = $$; } declaration_list
%destructor { node_free_recursive(&$$); } <node>
%destructor { free_label($$); } <sval>
%destructor { al_free(&$$); } <al>

 // %start start
%start declaration_list

%union {
	struct node     *node;
	int              ival;
	const  char     *sval;
	struct arg_list *al;
}

%code provides {
	void yyerror (char const *);
	struct table * add_symbol(int symbol_type, int data_type, const char * key);
}


%{
#include "actions.h"
#include "node-list.h"
#include "arg-list.h"
#include "misc.h"
#include "typechecker.h"

#include <stdlib.h>
#include <stdio.h>

int yylex (void);
void free_label(const char * str);
extern Node * root;
%}

%%
declaration_list
	: declaration                   { $$ = $1; }
	| declaration_list declaration  { $$ = node_init(LIST, "declaration-list" , $1, $2, ENDARG); assign_context($$); }
	;

declaration
	: function_definition                    { $$ = $1; }
	| init_declarator ';'                    { $$ = $1; }
	| error ';'                              { $$ = NULL; }
	| error compound_statement               { $$ = NULL; node_free_recursive(&$2); }
	;

init_declarator
	: var_declarator                                    { $$ = $1; }
	| arr_declarator                                    { $$ = $1; }
	| var_declarator '=' assignment_expression          { $$ = node_init(VAR_INIT, "var-init", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| arr_declarator '=' '{' initializer_list '}'       { $$ = node_init(ARR_INIT, "arr-init", $1, $4, ENDARG); assign_context($$); }
	| arr_declarator '=' '{' initializer_list ',' '}'   { $$ = node_init(ARR_INIT, "arr-init", $1, $4, ENDARG); assign_context($$); }
	| arr_declarator '=' STRING_LITERAL                 { $$ = node_init(ARR_INIT, "arr-init", $1,     ENDARG); assign_context($$); free_label($3); }
	;

var_declarator
	: type IDENTIFIER                               { $$ = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context($$); $$->symbol=add_symbol_var($1,$2); free_label($2); }
	;

arr_declarator
	: type IDENTIFIER '[' assignment_expression ']' { $$ = node_init(ARR_DECL, "arr-decl", $4, ENDARG); assign_context($$); $$->symbol=add_symbol_arr($1,$2,-1); free_label($2); tc_arr_decl($$); }
	| type IDENTIFIER '[' ']'                       { $$ = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context($$); $$->symbol=add_symbol_arr($1,$2,-1); free_label($2); }
	;

initializer_list
	: assignment_expression                      { $$ = $1; }
	| initializer_list ',' assignment_expression { $$ = node_init(LIST, "initializer-list" , $1, $3, ENDARG); assign_context($$); /*typecheck_lazy($$);*/ }
	;

function_definition
	: function_declarator '{' statement_list '}' { $$ = node_init(FUNCTION, "function-body" , $3  , ENDARG); assign_body($$); finish_fun($1); assign_context($$); free_label($1); }
	| function_declarator '{'                '}' { $$ = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body($$); finish_fun($1); assign_context($$); free_label($1); }
	;

function_declarator
	: type IDENTIFIER '(' argument_list ')'    { $$ = $2; begin_fun($1, $2, $4);   }
	| type IDENTIFIER '(' VOID ')'             { $$ = $2; begin_fun($1, $2, NULL); }
	| type IDENTIFIER '(' error ')'            { $$ = NULL; free_label($2); }
	;

argument_list
	: argument                   { $$ = $1; }
	| argument_list ',' argument { $$ = al_link($1, &$3); }
	;

argument
	: type IDENTIFIER          { $$ = al_init($1, VARIABLE, $2); free_label($2); }
	| type IDENTIFIER '[' ']'  { $$ = al_init($1, ARRAY   , $2); free_label($2); }
	;

compound_statement
	: '{' '}'	                              { $$ = NULL; }
	| '{' { begin(NULL); } statement_list '}' { $$ = $3  ; finish(); }
	;

statement_list
	: statement                { $$ = $1; }
	| statement_list statement { $$ = node_init(LIST, "statement-list" , $1, $2, ENDARG); assign_context($$); }
	;

statement
	: ';'                       { $$ = NULL; }
	| init_declarator ';'       { $$ = $1; }
	| assignment_expression ';' { $$ = $1; }
	| conditional_statement     { $$ = $1; }
	| iteration_statement       { $$ = $1; }
	| compound_statement        { $$ = $1; }
	| return_statement ';'      { $$ = $1; }
	| inline_asm ';'            { $$ = NULL; } 
	| error ';'                 { $$ = NULL; } 
	;

inline_asm
	: ASM '(' STRING_LITERAL ')'   { printf("%s\n", $3); free_label($3); }

conditional_statement
	: IF '(' assignment_expression ')' compound_statement                          { $$ = node_init(IF  , "if-statement"      , $3, $5,     ENDARG); assign_context($$); } 
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement  { $$ = node_init(ELSE, "if-else-statement" , $3, $5, $7, ENDARG); assign_context($$); } 
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { $$ = node_init(WHILE, "while-statement" , $3, $5, ENDARG); assign_context($$); } 
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { $$ = node_init(DO   , "do-statement"    , $2, $5, ENDARG); assign_context($$); } 
	;

return_statement
	: RETURN                        { $$ = node_init(RETURN, "return-statement",     ENDARG); assign_context($$); tc_return($$); }
	| RETURN assignment_expression  { $$ = node_init(RETURN, "return-statement", $2, ENDARG); assign_context($$); tc_return($$); }
	;

assignment_expression
	: logical_or_expression                         { $$ = $1; }
	| postfix_expression '=' logical_or_expression  { $$ = node_init(OP_ASSIGN, "=", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	;

logical_or_expression
	: logical_and_expression                              { $$ = $1; }
	| logical_or_expression OP_OR logical_and_expression  { $$ = node_init(OP_OR, "||", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	; 

logical_and_expression
	: equality_expression                                 { $$ = $1; }
	| logical_and_expression OP_AND equality_expression   { $$ = node_init(OP_AND, "&&", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	;

equality_expression
	: relational_expression                             { $$ = $1; }
	| equality_expression OP_EQ relational_expression   { $$ = node_init(OP_EQ, "==", $1, $3, ENDARG); assign_context($$);  tc_evaluate($$); }
	| equality_expression OP_NE relational_expression   { $$ = node_init(OP_NE, "!=", $1, $3, ENDARG); assign_context($$);  tc_evaluate($$); }
	;

relational_expression
	: additive_expression                               { $$ = $1; }
	| relational_expression '<'   additive_expression   { $$ = node_init(OP_LT, "<" , $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| relational_expression '>'   additive_expression   { $$ = node_init(OP_GT, ">" , $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| relational_expression OP_LE additive_expression   { $$ = node_init(OP_LE, "<=", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| relational_expression OP_GE additive_expression   { $$ = node_init(OP_GE, ">=", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	;

additive_expression
	: multiplicative_expression                           { $$ = $1; }
	| additive_expression '+' multiplicative_expression   { $$ = node_init(OP_ADD, "+", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| additive_expression '-' multiplicative_expression   { $$ = node_init(OP_SUB, "-", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	;

multiplicative_expression
	: unary_expression                                  { $$ = $1; }
	| multiplicative_expression '*' unary_expression    { $$ = node_init(OP_MUL, "*", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| multiplicative_expression '/' unary_expression    { $$ = node_init(OP_DIV, "/", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| multiplicative_expression '%' unary_expression    { $$ = node_init(OP_MOD, "%", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	;

unary_expression
	: postfix_expression         { $$ = $1; }
	| '+' unary_expression       { $$ = node_init(OP_POS, "+",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| '-' unary_expression       { $$ = node_init(OP_NEG, "-",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| '!' unary_expression       { $$ = node_init(OP_NOT, "!",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| OP_INC unary_expression    { $$ = node_init(OP_INC, "++", $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| OP_DEC unary_expression    { $$ = node_init(OP_DEC, "--", $2, ENDARG); assign_context($$); tc_evaluate($$); }
	;

postfix_expression
	: primary_expression                          { $$ = $1; }
	| IDENTIFIER '[' assignment_expression ']'    { $$ = node_init(ARRAY_INDEX  , "array-index"  , $3, ENDARG); assign_context($$); retrieve($$, $1, ARRAY)   ; free_label($1); }
	| IDENTIFIER '(' ')'                          { $$ = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context($$); retrieve($$, $1, FUNCTION); free_label($1); tc_fcall($$); }
	| IDENTIFIER '(' argument_call_list ')'       { $$ = node_init(FUNCTION_CALL, "function-call", $3, ENDARG); assign_context($$); retrieve($$, $1, FUNCTION); free_label($1); tc_fcall($$); }
	;

primary_expression
	: IDENTIFIER 						{ $$ = node_init(IDENTIFIER    , $1, ENDARG); assign_context($$); retrieve($$, $$->name, VARIABLE); free_label($1); } // use var
	| STRING_LITERAL					{ $$ = node_init(STRING_LITERAL, $1, ENDARG); assign_context($$); $$->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval($$->symbol, $1); free_label($1); } // rvalue
	| CONSTANT_FLOAT					{ $$ = node_init(CONSTANT_FLOAT, $1, ENDARG); assign_context($$); $$->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval($$->symbol, $1); free_label($1); } // rvalue
	| CONSTANT_INT  					{ $$ = node_init(CONSTANT_INT  , $1, ENDARG); assign_context($$); $$->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival($$->symbol, $1); free_label($1); } // rvalue
	| CONSTANT_HEX  					{ $$ = node_init(CONSTANT_HEX  , $1, ENDARG); assign_context($$); $$->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval($$->symbol, $1); free_label($1); } // rvalue
	| CONSTANT_CHAR 					{ $$ = node_init(CONSTANT_CHAR , $1, ENDARG); assign_context($$); $$->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval($$->symbol, $1); free_label($1); } // rvalue
	| '(' assignment_expression ')' 	{ $$ = $2; }
	;

argument_call_list
	: assignment_expression                         { $$ = $1; tc_fcall_args(NULL, $1); } 
	| argument_call_list ',' assignment_expression  { $$ = node_init(LIST, "argument-list", $1, $3, ENDARG); assign_context($$); tc_fcall_args($1, $3); } 
	;

type
	: VOID   { $$ = $1; }
	| INT    { $$ = $1; }
	| FLOAT  { $$ = $1; }
	| CHAR   { $$ = $1; }
	;

%%

void free_label(const char * str) {
	free((void*) str);
}
