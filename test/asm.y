%defines "src/asm.tab.h"
%define api.header.include "\"asm.tab.h\""
%define parse.error verbose
%output  "src/asm.tab.c"

%token NEWLINE
%token INSTRUCTION_A
%token INSTRUCTION_J
%token INSTRUCTION_0
%token SECTION
%token DATA
%token TEXT
%token DIR_CONST
%token DIR_SPACE
%token LABEL
%token IMM
%token REG

%start program

%{
#include "lex.yy.h"
void yyerror (char const *);
extern int line;
yydebug = 1;
%}

%%

program
	: section_list
	;

section_list
	: section_decl
	| section_decl section_list
	;

section_decl
	: SECTION TEXT NEWLINE instruction_list
	| SECTION DATA NEWLINE directive_list
	;

instruction_list
	: instruction_line
	| instruction_line instruction_list
	;

directive_list
	: directive_line
	| directive_line directive_list
	;

instruction_line
	: NEWLINE
	| instruction NEWLINE
	| LABEL ':' NEWLINE
	| LABEL ':' instruction NEWLINE
	| error NEWLINE
	;

directive_line
	: NEWLINE
	| directive NEWLINE
	| LABEL ':' NEWLINE
	| LABEL ':' directive NEWLINE
	| error NEWLINE
	;

instruction
	: instruction_arithmetic
	| instruction_jump
	| instruction_zero
	;

instruction_arithmetic
	: INSTRUCTION_A destination ',' source
	;

instruction_jump
	: INSTRUCTION_J LABEL
	;

instruction_zero
	: INSTRUCTION_0
	;

directive
	: DIR_CONST IMM
	| DIR_SPACE
	| DIR_SPACE IMM
	;

destination
	: memory
	| REG
	;

source
	: memory
	| REG
	| IMM
	;

memory
	: '[' REG ']'
	| '[' LABEL ']'
	| '[' error ']'
	;


%%

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("missing input file\n");

		for(int i = 0; i < 100; ++i) {
			for(int j = 0; j < 20; ++j) {
				printf("\033[%d;%dm%2d;%d\033[0m ", i, j, i, j);
			}
			printf("\n");
		}

		return 1;
	} else if ((yyin = fopen(argv[1], "r")) == NULL) {
		printf("failed to open file\n");
		return 2;
	}

	//yylex();
	do {
		printf("iter\n");
		yyparse();
	} while(!feof(yyin));

	fclose(yyin);
	return 0;
}

void yyerror (char const *s) {
	fprintf (stderr, "Line %d: %s\n", line, s);
}


