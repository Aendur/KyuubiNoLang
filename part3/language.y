%token VOID INT FLOAT CHAR
%token IF WHILE DO
%token OP_INC OP_DEC OP_GE OP_LE OP_EQ OP_NEQ OP_AND OP_OR
%token IDENTIFIER CONSTANT STRING_LITERAL
%start declaration_list

%%

declaration_list
	: declaration
	| declaration_list declaration
	;

declaration
	: function_definition
	| init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

declarator
	: type IDENTIFIER
	| type IDENTIFIER '[' ']'
	| type IDENTIFIER '[' expression ']'
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

function_definition
	: type IDENTIFIER '(' parameter_list ')' compound_statement
	| type IDENTIFIER '(' ')' compound_statement
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: type declarator
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	;

statement_list
	: declarator
	| statement_list statement
	| statement
	| statement_list declarator
	;

statement
	: ';'
	| expression ';'
	| selection_statement
	| iteration_statement
	| return_statement
	;

selection_statement
	: IF '(' expression ')' compound_statement
	| IF '(' expression ')' compound_statement ELSE compound_statement
	;

iteration_statement
	: WHILE '(' expression ')' compound_statement
	| DO compound_statement WHILE '(' expression ')' ';'
	;

return_statement
	: RETURN ';'
	| RETURN expression ';'
	;

expression
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
	| equality_expression OP_EQ  relational_expression
	| equality_expression OP_NEQ relational_expression
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
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_list ')'
	| postfix_expression OP_INC
	| postfix_expression OP_DEC
	;

postfix_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

argument_list
	: expression
	| argument_list ',' expression
	;

type
	: VOID
	| INT
	| FLOAT
	| CHAR
	;
