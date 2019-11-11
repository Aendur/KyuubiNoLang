%defines "src/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""
%require "3.4.0"

%define parse.error verbose
%define lr.type canonical-lr

%union {
	struct node * node;
}

%token <node> VOID INT FLOAT CHAR
%token <node> IF ELSE WHILE DO RETURN
%token <node> OP_INC OP_DEC OP_GE OP_LE OP_EQ OP_NE OP_AND OP_OR
%token <node> IDENTIFIER STRING_LITERAL
%token <node> CONSTANT
%token UNRECOGNIZED_TOKEN
%token INVALID_IDENTIFIER
%token INVALID_CHAR_CONST

%token TYPE
%token LIST
%token FUN_DEF
%token FUN_CALL
%token DECL_VAR
%token DECL_VEC
%token VEC_INDEX

%type <node> declaration_list declaration init_declarator declarator initializer
%type <node> initializer_list function_declarator parameter_list compound_statement statement_list
%type <node> statement conditional_statement iteration_statement return_statement assignment_expression
%type <node> logical_or_expression logical_and_expression equality_expression relational_expression additive_expression
%type <node> multiplicative_expression postfix_expression primary_expression argument_list type
%type <node> unary_expression
%type <node> parameter

%start start

%code provides {
	void yyerror (char const *);	
}

%{
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
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
	: declaration_list            { root = $1; }
	;

declaration_list
	: declaration                   
	| declaration_list declaration  { $$ = nl_push(node_list, node_init(LIST, "declaration-list", $1, $2, NULL)); assign($$); }
	;

declaration
	: function_declarator ';'                
	| function_declarator compound_statement { $$ = nl_push(node_list, node_init(FUN_DEF, "function-definition", $1, $2, NULL)); assign($$); enclose($2, add_symbol_fun($$)); }
	| init_declarator ';'                    
	| error ';'                              { }
	| error compound_statement               { }
	;

init_declarator
	: declarator                 
	| declarator '=' initializer { $$ = nl_push(node_list, node_init('=', "'='", $1, $3, NULL)); assign($$); }
	;

declarator
	: type IDENTIFIER                                { $$ = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", $1, $2    , NULL)); assign($$); add_symbol_var($$); }
	| type IDENTIFIER '[' ']'                        { $$ = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , $1, $2    , NULL)); assign($$); add_symbol_arr($$); }
	| type IDENTIFIER '[' assignment_expression ']'  { $$ = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , $1, $2, $4, NULL)); assign($$); add_symbol_arr($$); }
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'     { $$ = $2; }
	| '{' initializer_list ',' '}' { $$ = $2; }
	;

initializer_list
	: initializer                      
	| initializer_list ',' initializer { $$ = nl_push(node_list, node_init(LIST, "initializer-list", $1, $3, NULL)); assign($$); }
	;

function_declarator
	: type IDENTIFIER '(' parameter_list ')' { $$ = nl_push(node_list, node_init(FUN_DEF, "function-declarator", $1, $2, $4, NULL)); assign($$); }
	| type IDENTIFIER '(' ')'                { $$ = nl_push(node_list, node_init(FUN_DEF, "function-declarator", $1, $2,     NULL)); assign($$); }
	| type IDENTIFIER '(' VOID ')'           { $$ = nl_push(node_list, node_init(FUN_DEF, "function-declarator", $1, $2,     NULL)); assign($$); }
	| type IDENTIFIER '(' error ')'          { }
	;

parameter_list
	: parameter
	| parameter_list ',' parameter  { $$ = nl_push(node_list, node_init(LIST, "parameter-list", $1, $3, NULL)); assign($$); }
	;

parameter
	: type IDENTIFIER                                { $$ = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", $1, $2    , NULL)); /*assign($$);*/ }
	| type IDENTIFIER '[' ']'                        { $$ = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , $1, $2    , NULL)); /*assign($$);*/ }
	| type IDENTIFIER '[' assignment_expression ']'  { $$ = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , $1, $2, $4, NULL)); /*assign($$);*/ }
	;

compound_statement
	: '{' '}'	{ }
	| '{'	{
				Table * t =  ts_push(context_stack, table_init(16));
				printf("enter scope (new context %p)\n", (void*) t);
			}
	statement_list '}' {
				$$ = $3;
				printf("exit scope\n");
			}
	;

statement_list
	: statement                
	| statement_list statement { $$ = nl_push(node_list, node_init(LIST, "statement-list", $1, $2, NULL)); assign($$); }
	;

statement
	: ';'                       { }
	| init_declarator ';'       
	| assignment_expression ';' 
	| conditional_statement     
	| iteration_statement       
	| compound_statement        { enclose($1,NULL); $$ = $1; }
	| return_statement ';'      
	| error ';'                 { }
	;

conditional_statement
	: IF '(' assignment_expression ')' compound_statement                                                { enclose($5,NULL); $$ = nl_push(node_list, node_init(IF  , "if"     , $3, $5,     NULL)); assign($$); }
	| IF '(' assignment_expression ')' compound_statement { enclose($5,NULL); } ELSE compound_statement  { enclose($8,NULL); $$ = nl_push(node_list, node_init(ELSE, "if-else", $3, $5, $8, NULL)); assign($$); }
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { enclose($5,NULL); $$ = nl_push(node_list, node_init(WHILE, "while"   , $3, $5, NULL)); assign($$); }
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { enclose($2,NULL); $$ = nl_push(node_list, node_init(DO   , "do-while", $2, $5, NULL)); assign($$); }
	;

return_statement
	: RETURN                       { $$ = nl_push(node_list, node_init(RETURN, "return",     NULL)); assign($$); }
	| RETURN assignment_expression { $$ = nl_push(node_list, node_init(RETURN, "return", $2, NULL)); assign($$); }
	;

assignment_expression
	: logical_or_expression
	| primary_expression '=' logical_or_expression  { $$ = nl_push(node_list, node_init('=', "'='", $1, $3, NULL)); assign($$); }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OP_OR logical_and_expression  { $$ = nl_push(node_list, node_init(OP_OR, "'||'", $1, $3, NULL)); assign($$); }
	; 

logical_and_expression
	: equality_expression
	| logical_and_expression OP_AND equality_expression  { $$ = nl_push(node_list, node_init(OP_AND, "'&&'", $1, $3, NULL)); assign($$); }
	;

equality_expression
	: relational_expression
	| equality_expression OP_EQ relational_expression  { $$ = nl_push(node_list, node_init(OP_EQ, "'=='", $1, $3, NULL)); assign($$); }
	| equality_expression OP_NE relational_expression  { $$ = nl_push(node_list, node_init(OP_NE, "'!='", $1, $3, NULL)); assign($$); }
	;

relational_expression
	: additive_expression
	| relational_expression '<'   additive_expression  { $$ = nl_push(node_list, node_init('<'  , "'<'" , $1, $3, NULL)); assign($$); }
	| relational_expression '>'   additive_expression  { $$ = nl_push(node_list, node_init('>'  , "'>'" , $1, $3, NULL)); assign($$); }
	| relational_expression OP_LE additive_expression  { $$ = nl_push(node_list, node_init(OP_LE, "'<='", $1, $3, NULL)); assign($$); }
	| relational_expression OP_GE additive_expression  { $$ = nl_push(node_list, node_init(OP_GE, "'>='", $1, $3, NULL)); assign($$); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression  { $$ = nl_push(node_list, node_init('+', "'+'", $1, $3, NULL)); assign($$); }
	| additive_expression '-' multiplicative_expression  { $$ = nl_push(node_list, node_init('-', "'-'", $1, $3, NULL)); assign($$); }
	;

multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression  { $$ = nl_push(node_list, node_init('*', "'*'", $1, $3, NULL)); assign($$); }
	| multiplicative_expression '/' unary_expression  { $$ = nl_push(node_list, node_init('/', "'/'", $1, $3, NULL)); assign($$); }
	| multiplicative_expression '%' unary_expression  { $$ = nl_push(node_list, node_init('%', "'%'", $1, $3, NULL)); assign($$); }
	;

unary_expression
	: postfix_expression
	| '!' unary_expression      { $$ = nl_push(node_list, node_init('!'   , "'!'" , $2, NULL)); assign($$); }     
	| '-' unary_expression      { $$ = nl_push(node_list, node_init('-'   , "'-'" , $2, NULL)); assign($$); }     
	| OP_INC unary_expression   { $$ = nl_push(node_list, node_init(OP_INC, "'++'", $2, NULL)); assign($$); }        
	| OP_DEC unary_expression   { $$ = nl_push(node_list, node_init(OP_DEC, "'--'", $2, NULL)); assign($$); }        
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' assignment_expression ']' { $$ = nl_push(node_list, node_init(VEC_INDEX, "vector-index" , $1, $3, NULL)); assign($$); }
	| postfix_expression '(' ')'                       { $$ = nl_push(node_list, node_init(FUN_CALL , "function-call", $1    , NULL)); assign($$); }
	| postfix_expression '(' argument_list ')'         { $$ = nl_push(node_list, node_init(FUN_CALL , "function-call", $1, $3, NULL)); assign($$); }
	;

primary_expression
	: IDENTIFIER                      
	| CONSTANT                        
	| STRING_LITERAL                  
	| '(' assignment_expression ')'   { $$ = $2; }
	//| error                           { }
	;

argument_list
	: assignment_expression
	| argument_list ',' assignment_expression  { $$ = nl_push(node_list, node_init(LIST, "argument-list", $1, $3, NULL)); assign($$); }
	;

type
	: VOID   
	| INT    
	| FLOAT  
	| CHAR   
	;

%%
void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

