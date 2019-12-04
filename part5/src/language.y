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

%token COMPOUND_STATEMENT
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
%type <node> statement_list
%type <node> compound_statement 
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

%type <ival> else_statement

%destructor { root = $$; } declaration_list
%destructor { node_free_recursive(&$$); } <node>
%destructor { free_label(&$$); } <sval>
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
#include <string.h>

int yylex (void);
void free_label(const char ** str);
extern Node * root;
%}

%%
declaration_list
	: declaration                   { $$ = $1; }
	| declaration_list declaration  { $$ = node_init(LIST, "declaration-list" , $1, $2, ENDARG); assign_context($$); }
	;

declaration
	: function_definition                      { $$ = $1; }
	| var_declarator ';'                       { $$ = $1; }
	| error ';'                                { $$ = NULL; }
	;

init_declarator
	: var_declarator                                    { $$ = $1; }
	| var_declarator '=' assignment_expression          { $$ = node_init(VAR_INIT, "var-init", $1, $3, ENDARG); assign_context($$); tc_evaluate($$); }
	| arr_declarator '=' STRING_LITERAL                 {
															$$ = node_init(ARR_INIT, "arr-init", $1, ENDARG);
															assign_context($$);
															tc_arr_init($$, add_symbol_arr(CHAR, NULL, (void*) $3));
															free_label(&$3);
														}
	;

var_declarator
	: type IDENTIFIER               {
										$$ = node_init(VAR_DECL, "var-decl", ENDARG);
										assign_context($$);
										$$->symbol=add_symbol_var($1,$2,false);
										free_label(&$2);
									}
	;

arr_declarator
	: type IDENTIFIER '[' ']'       {
										$$ = node_init(ARR_DECL, "arr-decl", ENDARG);
										$$->symbol=add_symbol_var($1,$2,false);
										$$->symbol->attr->symbol_type=ARRAY;
										assign_context($$);
										free_label(&$2);
									}
	;

function_definition
	: function_declarator '{' statement_list '}' { $$ = node_init(FUNCTION, "function-body" , $3  , ENDARG); assign_body($$); finish_fun($1); assign_context($$); free_label(&$1); }
	| function_declarator '{'                '}' { $$ = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body($$); finish_fun($1); assign_context($$); free_label(&$1); }
	;

function_declarator
	: type IDENTIFIER '(' argument_list ')'    { $$ = $2; begin_fun($1, $2, $4);   }
	| type IDENTIFIER '(' VOID ')'             { $$ = $2; begin_fun($1, $2, NULL); }
	| type IDENTIFIER '(' error ')'            { $$ = NULL; free_label(&$2); }
	;

argument_list
	: argument                   { $$ = $1; }
	| argument_list ',' argument { $$ = al_link($1, &$3); }
	;

argument
	: type IDENTIFIER          { $$ = al_init($1, VARIABLE, $2); free_label(&$2); }
	| type IDENTIFIER '[' ']'  { $$ = al_init($1, ARRAY   , $2); free_label(&$2); }
	;

compound_statement
	: '{' '}'	                          { $$ = NULL; }
	| '{' { begin(); } statement_list '}' { $$ = $3; finish(); } 
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
	: ASM '(' STRING_LITERAL ')'   { tc_asm($3); free_label(&$3); }

conditional_statement
	: if_statement else_statement        { $$ = NULL; tc_free_if($2); }
	;

if_statement
	: IF '(' assignment_expression ')' { tc_init_if($3, "if_", NULL); } compound_statement { node_free_recursive(&$3); node_free_recursive(&$6); }
	;

else_statement
	: ELSE { tc_init_else(); } compound_statement    { $$ = true; node_free_recursive(&$3); }
	| %empty                                         { $$ = false; }
	;

iteration_statement
	: WHILE { tc_init_while("while_", NULL); } '(' assignment_expression ')' { tc_jump_while($4); } compound_statement  { $$ = NULL; tc_free_while(); node_free_recursive(&$4); node_free_recursive(&$7); }
	| DO    { tc_init_while("do_", NULL)   ; } compound_statement WHILE '(' assignment_expression ')' ';'               { $$ = NULL; tc_free_do($6) ; node_free_recursive(&$3); node_free_recursive(&$6); }
	;

return_statement
	: RETURN                        { $$ = node_init(RETURN, "return-statement",     ENDARG); assign_context($$); tc_evaluate($$); }
	| RETURN assignment_expression  { $$ = node_init(RETURN, "return-statement", $2, ENDARG); assign_context($$); tc_evaluate($$); }
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
	| '+' unary_expression       { $$ = $2; } //$$ = node_init(OP_POS, "+",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| '-' unary_expression       { $$ = node_init(OP_NEG, "-",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| '!' unary_expression       { $$ = node_init(OP_NOT, "!",  $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| OP_INC unary_expression    { $$ = node_init(OP_INC, "++", $2, ENDARG); assign_context($$); tc_evaluate($$); }
	| OP_DEC unary_expression    { $$ = node_init(OP_DEC, "--", $2, ENDARG); assign_context($$); tc_evaluate($$); }
	;

postfix_expression
	: primary_expression                          { $$ = $1; }
	//| IDENTIFIER '[' assignment_expression ']'    { $$ = node_init(ARRAY_INDEX  , "array-index"  , $3, ENDARG); assign_context($$); retrieve($$, $1, ARRAY)       ; free_label(&$1); tc_evaluate($$); }
	| IDENTIFIER '(' ')'                          { $$ = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context($$); retrieve_fun($$, $1, FUNCTION); free_label(&$1); tc_fcall($$, NULL); }
	| IDENTIFIER '(' argument_call_list ')'       { $$ = node_init(FUNCTION_CALL, "function-call", $3, ENDARG); assign_context($$); retrieve_fun($$, $1, FUNCTION); free_label(&$1); tc_fcall($$, $3); }
	;

primary_expression
	: IDENTIFIER                          { $$ = node_init(IDENTIFIER    , $1, ENDARG); assign_context($$); retrieve($$, $$->name, VARIABLE); free_label(&$1); } // use var
	| STRING_LITERAL                      { $$ = node_init(STRING_LITERAL, $1, ENDARG); assign_context($$); $$->symbol = add_symbol_arr(CHAR, NULL, (void*) $1); free_label(&$1); } // rvalue
	| CONSTANT_FLOAT                      { $$ = node_init(CONSTANT_FLOAT, $1, ENDARG); assign_context($$); $$->symbol = add_symbol_cte(CONSTANT_FLOAT, $1); free_label(&$1); } // rvalue
	| CONSTANT_INT                        { $$ = node_init(CONSTANT_INT  , $1, ENDARG); assign_context($$); $$->symbol = add_symbol_cte(CONSTANT_INT  , $1); free_label(&$1); } // rvalue
	| CONSTANT_HEX                        { $$ = node_init(CONSTANT_HEX  , $1, ENDARG); assign_context($$); $$->symbol = add_symbol_cte(CONSTANT_HEX  , $1); free_label(&$1); } // rvalue
	| CONSTANT_CHAR                       { $$ = node_init(CONSTANT_CHAR , $1, ENDARG); assign_context($$); $$->symbol = add_symbol_cte(CONSTANT_CHAR , $1); free_label(&$1); } // rvalue
	| '(' assignment_expression ')'       { $$ = $2; }
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
void free_label(const char ** str) {
	free((void*) (*str));
	(*str) = NULL;
}
