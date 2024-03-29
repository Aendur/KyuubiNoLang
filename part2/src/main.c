#include <stdio.h>
#include "token.h"
#include "lex.yy.h"

int nline = 1;
int ncolumn = 1;

void print_tokens(struct tokenlist*);
void print_errors(struct tokenlist*);
void scan(void);

int main(int argc, char** argv) {
	// handle cmd line arguments
	if (argc < 2) {
		fprintf(stderr, "Missing input file.\n");
		return 0;
	}

	// open input file
	yyin = fopen(argv[1], "r");

	// check input file validity
	if (yyin == NULL) {
		fprintf(stderr, "Failed to open file %s.\n", argv[1]);
		return 0;
	}

	// run the scanner
	scan();


	// close input file
	fclose(yyin);
	return 0;
}


void scan(void) {
	struct tokenlist list_valid = {NULL, NULL}; // list of valid tokens
	struct tokenlist list_error = {NULL, NULL}; // list of errors

	enum tokenclass tc;
	while((tc = yylex()) != 0)  {
		// printf("TOKEN: %-15s   line: %-3d column: %-3d   value: %s\n",
		// 	tok_to_str(tc),
		// 	nline,
		// 	ncolumn - yyleng,
		// 	yytext
		// );
		if (tc < 0) {
			add_token(&list_error, new_token(nline, ncolumn - yyleng, tc, yytext));
		} else {
			add_token(&list_valid, new_token(nline, ncolumn - yyleng, tc, yytext));
		}
	}
	
	if (list_error.first == NULL) {
		printf("Valid input.\n");
		print_tokens(&list_valid);
	} else {
		printf("Invalid input.\n");
		print_errors(&list_error);
	}

	clear_tokens(&list_valid);
	clear_tokens(&list_error);
}

void print_tokens(struct tokenlist * l) {
	struct token * tok = l->first;
	while(tok != NULL) {
		printf("Token: %-15s   line: %-3d column: %-3d   value: %s\n",
			tok_to_str(tok->tc),
			tok->line,
			tok->column,
			tok->text
		);
		tok = tok->next;
	}
}

void print_errors(struct tokenlist * l) {
	struct token * tok = l->first;
	while(tok != NULL) {
		printf("\033[31;1mError:\033[0m %-15s   line: %-3d column: %-3d   value: %s\n",
			tok_to_str(tok->tc),
			tok->line,
			tok->column,
			tok->text
		);
		tok = tok->next;
	}
}
