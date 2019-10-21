%defines "src/parser.h"
%output  "src/parser.c"
%define api.header.include "\"parser.h\""

 //%define api.pure
 //%locations

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

%type <node> declaration_list declaration init_declarator declarator initializer
%type <node> initializer_list function_declarator parameter_list compound_statement statement_list
%type <node> statement conditional_statement iteration_statement return_statement assignment_expression
%type <node> logical_or_expression logical_and_expression equality_expression relational_expression additive_expression
%type <node> multiplicative_expression postfix_expression primary_expression argument_list type

%start start

%code provides {
	void yyerror (char const *);	
}

%{
#include <stdio.h>
#include "node.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
%}

%%
start : declaration_list            { root = $1; }

declaration_list
	: declaration                   
	| declaration_list declaration  { $$ = node_init('L', "decl-list", $1, $2, NULL); }
	;

declaration
	: function_declarator ';'                { $$ = $1; }
	| function_declarator compound_statement { $$ = node_init('F', "fdefn", $1, $2, NULL); }
	| init_declarator ';'                    { $$ = $1; }
	| error ';'                              { fprintf(stderr, "HANDLE DECL1 ERROR\n"); }
	| error compound_statement               { fprintf(stderr, "HANDLE DECL2 ERROR\n"); }
	;

init_declarator
	: declarator                 
	| declarator '=' initializer { $$ = node_init('=', "=", $1, $3, NULL); }
	;

declarator
	: type IDENTIFIER                                { $$ = node_init('D', "decl-var", $1, $2    , NULL); }
	| type IDENTIFIER '[' ']'                        { $$ = node_init('D', "decl-arr", $1, $2    , NULL); }
	| type IDENTIFIER '[' assignment_expression ']'  { $$ = node_init('D', "decl-arr", $1, $2, $4, NULL); }
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'     { $$ = $2; }
	| '{' initializer_list ',' '}' { $$ = $2; }
	;

initializer_list
	: initializer                      
	| initializer_list ',' initializer { $$ = node_init('L', "init-list", $1, $3, NULL); }
	;

function_declarator
	: type IDENTIFIER '(' parameter_list ')' { $$ = node_init('F', "fdecl", $1, $2, $4, NULL); }
	| type IDENTIFIER '(' ')'                { $$ = node_init('F', "fdecl", $1, $2,     NULL); }
	| type IDENTIFIER '(' VOID ')'           { $$ = node_init('F', "fdecl", $1, $2,     NULL); }
	| type IDENTIFIER '(' error ')'          { fprintf(stderr, "HANDLE ARG LIST ERROR\n"); }
	;

parameter_list
	: declarator
	| parameter_list ',' declarator  { $$ = node_init('L', "par-list", $1, $3, NULL); }
	;

compound_statement
	: '{' '}'                { }
	| '{' statement_list '}' { $$ = $2; }
	;

statement_list
	: statement                //
	| statement_list statement { $$ = node_init('L', "stm-list", $1, $2, NULL); }
	;

statement
	: ';'                       { }
	| init_declarator ';'       //
	| assignment_expression ';' //
	| conditional_statement     //
	| iteration_statement       //
	| return_statement ';'      //
	;

conditional_statement
	: IF '(' assignment_expression ')' compound_statement                          { $$ = node_init(IF  , "if"     , $3, $5,     NULL); }
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement  { $$ = node_init(ELSE, "if-else", $3, $5, $7, NULL); }
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { $$ = node_init(WHILE, "while"   , $3, $5, NULL); }
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { $$ = node_init(DO   , "do-while", $2, $5, NULL); }
	;

return_statement
	: RETURN                       { $$ = node_init(RETURN, "return",     NULL); }
	| RETURN assignment_expression { $$ = node_init(RETURN, "return", $2, NULL); }
	;

assignment_expression
	: logical_or_expression
	| postfix_expression '=' logical_or_expression  { $$ = node_init('=', "=", $1, $3, NULL); }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OP_OR logical_and_expression  { $$ = node_init(OP_OR, "||", $1, $3, NULL); }
	; 

logical_and_expression
	: equality_expression
	| logical_and_expression OP_AND equality_expression  { $$ = node_init(OP_AND, "&&", $1, $3, NULL); }
	;

equality_expression
	: relational_expression
	| equality_expression OP_EQ relational_expression  { $$ = node_init(OP_EQ, "==", $1, $3, NULL); }
	| equality_expression OP_NE relational_expression  { $$ = node_init(OP_NE, "!=", $1, $3, NULL); }
	;

relational_expression
	: additive_expression
	| relational_expression '<'   additive_expression  { $$ = node_init('<'  , "<" , $1, $3, NULL); }
	| relational_expression '>'   additive_expression  { $$ = node_init('>'  , ">" , $1, $3, NULL); }
	| relational_expression OP_LE additive_expression  { $$ = node_init(OP_LE, "<=", $1, $3, NULL); }
	| relational_expression OP_GE additive_expression  { $$ = node_init(OP_GE, ">=", $1, $3, NULL); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression  { $$ = node_init('+', "+", $1, $3, NULL); }
	| additive_expression '-' multiplicative_expression  { $$ = node_init('-', "-", $1, $3, NULL); }
	;

multiplicative_expression
	: postfix_expression
	| multiplicative_expression '*' postfix_expression  { $$ = node_init('*', "*", $1, $3, NULL); }
	| multiplicative_expression '/' postfix_expression  { $$ = node_init('/', "/", $1, $3, NULL); }
	| multiplicative_expression '%' postfix_expression  { $$ = node_init('%', "%", $1, $3, NULL); }
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' assignment_expression ']' { $$ = node_init('V'   , "vec"  , $1, $3, NULL); }
	| postfix_expression '(' ')'                       { $$ = node_init('C'   , "fcall", $1    , NULL); }
	| postfix_expression '(' argument_list ')'         { $$ = node_init('C'   , "fcall", $1, $3, NULL); }
	| postfix_expression OP_INC                        { $$ = node_init(OP_INC, "++"   , $1    , NULL); }
	| postfix_expression OP_DEC                        { $$ = node_init(OP_DEC, "--"   , $1    , NULL); }
	;

primary_expression
	: IDENTIFIER                      
	| CONSTANT                        
	| STRING_LITERAL                  
	| '(' assignment_expression ')'   { $$ = $2; }
	| error                           { fprintf(stderr, "HANDLE EXPR ERROR\n"); }
	;

argument_list
	: assignment_expression
	| argument_list ',' assignment_expression  { $$ = node_init('L', "arg-list", $1, $3, NULL); }
	;

type
	: VOID   
	| INT    
	| FLOAT  
	| CHAR   
	;

%%
void yyerror (char const * msg) {
	fprintf(stderr, "%d %d: %s\n", nline, ncol0, msg);
}