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

 //%type <node> error
 //%destructor { node_free_recursive(&$$); } <node>

%start start

%code provides {
	void yyerror (char const *);	
}

%{
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "table.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Table * symbol_table;
void add_symbol_var(Node* node);
void add_symbol_fun(Node* node);
%}

%%
start
	: declaration_list            { root = $1; }
	;

declaration_list
	: declaration                   
	| declaration_list declaration  { $$ = node_init(node_list, 'L', "declaration-list", $1, $2, NULL); }
	;

declaration
	: function_declarator ';'                
	| function_declarator compound_statement { $$ = node_init(node_list, 'F', "function-definition", $1, $2, NULL); }
	| init_declarator ';'                    
	| error ';'                              { }
	| error compound_statement               { } 
	;

init_declarator
	: declarator                 
	| declarator '=' initializer { $$ = node_init(node_list, '=', "'='", $1, $3, NULL); }
	;

declarator
	: type IDENTIFIER                                { $$ = node_init(node_list, 'D', "declarator-variable", $1, $2    , NULL); add_symbol_var($$); }
	| type IDENTIFIER '[' ']'                        { $$ = node_init(node_list, 'E', "declarator-array"   , $1, $2    , NULL); add_symbol_var($$); }
	| type IDENTIFIER '[' assignment_expression ']'  { $$ = node_init(node_list, 'E', "declarator-array"   , $1, $2, $4, NULL); add_symbol_var($$); }
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'     { $$ = $2; }
	| '{' initializer_list ',' '}' { $$ = $2; }
	;

initializer_list
	: initializer                      
	| initializer_list ',' initializer { $$ = node_init(node_list, 'L', "initializer-list", $1, $3, NULL); }
	;

function_declarator
	: type IDENTIFIER '(' parameter_list ')' { $$ = node_init(node_list, 'F', "function-declarator", $1, $2, $4, NULL); add_symbol_fun($$); }
	| type IDENTIFIER '(' ')'                { $$ = node_init(node_list, 'F', "function-declarator", $1, $2,     NULL); add_symbol_fun($$); }
	| type IDENTIFIER '(' VOID ')'           { $$ = node_init(node_list, 'F', "function-declarator", $1, $2,     NULL); add_symbol_fun($$); }
	| type IDENTIFIER '(' error ')'          { }
	;

parameter_list
	: declarator
	| parameter_list ',' declarator  { $$ = node_init(node_list, 'L', "parameter-list", $1, $3, NULL); }
	;

compound_statement
	: '{' '}'                { }
	| '{' statement_list '}' { $$ = $2; }
	;

statement_list
	: statement                //
	| statement_list statement { $$ = node_init(node_list, 'L', "statement-list", $1, $2, NULL); }
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
	: IF '(' assignment_expression ')' compound_statement                          { $$ = node_init(node_list, IF  , "if"     , $3, $5,     NULL); }
	| IF '(' assignment_expression ')' compound_statement ELSE compound_statement  { $$ = node_init(node_list, ELSE, "if-else", $3, $5, $7, NULL); }
	;

iteration_statement
	: WHILE '(' assignment_expression ')' compound_statement          { $$ = node_init(node_list, WHILE, "while"   , $3, $5, NULL); }
	| DO compound_statement WHILE '(' assignment_expression ')' ';'   { $$ = node_init(node_list, DO   , "do-while", $2, $5, NULL); }
	;

return_statement
	: RETURN                       { $$ = node_init(node_list, RETURN, "return",     NULL); }
	| RETURN assignment_expression { $$ = node_init(node_list, RETURN, "return", $2, NULL); }
	;

assignment_expression
	: logical_or_expression
	| postfix_expression '=' logical_or_expression  { $$ = node_init(node_list, '=', "'='", $1, $3, NULL); }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OP_OR logical_and_expression  { $$ = node_init(node_list, OP_OR, "'||'", $1, $3, NULL); }
	; 

logical_and_expression
	: equality_expression
	| logical_and_expression OP_AND equality_expression  { $$ = node_init(node_list, OP_AND, "'&&'", $1, $3, NULL); }
	;

equality_expression
	: relational_expression
	| equality_expression OP_EQ relational_expression  { $$ = node_init(node_list, OP_EQ, "'=='", $1, $3, NULL); }
	| equality_expression OP_NE relational_expression  { $$ = node_init(node_list, OP_NE, "'!='", $1, $3, NULL); }
	;

relational_expression
	: additive_expression
	| relational_expression '<'   additive_expression  { $$ = node_init(node_list, '<'  , "'<'" , $1, $3, NULL); }
	| relational_expression '>'   additive_expression  { $$ = node_init(node_list, '>'  , "'>'" , $1, $3, NULL); }
	| relational_expression OP_LE additive_expression  { $$ = node_init(node_list, OP_LE, "'<='", $1, $3, NULL); }
	| relational_expression OP_GE additive_expression  { $$ = node_init(node_list, OP_GE, "'>='", $1, $3, NULL); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression  { $$ = node_init(node_list, '+', "'+'", $1, $3, NULL); }
	| additive_expression '-' multiplicative_expression  { $$ = node_init(node_list, '-', "'-'", $1, $3, NULL); }
	;

multiplicative_expression
	: postfix_expression
	| multiplicative_expression '*' postfix_expression  { $$ = node_init(node_list, '*', "'*'", $1, $3, NULL); }
	| multiplicative_expression '/' postfix_expression  { $$ = node_init(node_list, '/', "'/'", $1, $3, NULL); }
	| multiplicative_expression '%' postfix_expression  { $$ = node_init(node_list, '%', "'%'", $1, $3, NULL); }
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' assignment_expression ']' { $$ = node_init(node_list, 'V'   , "vector-index" , $1, $3, NULL); }
	| postfix_expression '(' ')'                       { $$ = node_init(node_list, 'C'   , "function-call", $1    , NULL); }
	| postfix_expression '(' argument_list ')'         { $$ = node_init(node_list, 'C'   , "function-call", $1, $3, NULL); }
	| postfix_expression OP_INC                        { $$ = node_init(node_list, OP_INC, "'++'"         , $1    , NULL); }
	| postfix_expression OP_DEC                        { $$ = node_init(node_list, OP_DEC, "'--'"         , $1    , NULL); }
	;

primary_expression
	: IDENTIFIER                      
	| CONSTANT                        
	| STRING_LITERAL                  
	| '(' assignment_expression ')'   { $$ = $2; }
	| error                           { }
	;

argument_list
	: assignment_expression
	| argument_list ',' assignment_expression  { $$ = node_init(node_list, 'L', "argument-list", $1, $3, NULL); }
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

void add_symbol_var(Node* node) {
	char * name = node->leaf[1]->name;
	if(symtab_find(symbol_table, name) == NULL) {
		symtab_insert(&symbol_table, name, node);
	}
}

void recurse_types(Node * n0, char ** str) {
	if (n0 == NULL) { return; }
	if (n0->type == 'D' && n0->nleaves > 0) {
		**str = n0->leaf[0]->name[0];
		*str = (*str) + 1;
	} else if (n0->type == 'E' && n0->nleaves > 0) {
		**str = n0->leaf[0]->name[0] - 0x20;
		*str = (*str) + 1;
	} else {
		for(int i = 0; i < n0->nleaves; ++i) {
			recurse_types(n0->leaf[i], str);
		}
	}
}

void add_symbol_fun(Node* node) {
	char * name = malloc(strlen(node->leaf[1]->name) * 2);
	strcpy(name, node->leaf[1]->name);
	char * pos = &name[strlen(name)];
	*pos = '_'; ++pos;
	if (node->nleaves == 2) {
		*pos = 'v'; ++pos;
		*pos = 0;
	} else {
		recurse_types(node, &pos);
		*pos = 0;
	}
	symtab_insert(&symbol_table, name, node);
	free(name);
}
