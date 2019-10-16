LOWERCASE [a-z]
UPPERCASE [A-Z]
LETTER    [a-zA-Z]
DIGIT     [0-9]
NUMBER    [0-9]{1,}

%{
#include <stdio.h>
#include <stdlib.h>

int run_length = 1;
void print_run(char);
%}

%%
{NUMBER}     { run_length = atoi(yytext); }
{LETTER}     { print_run(yytext[0]);}



%%
int main(int argc, char** argv) {
	if (argc > 1) { yyin = fopen(argv[1], "r"); }
	else          { yyin = stdin; }
	yyout = fopen("out.dat", "w");

	//printf("FOX EARS: %d\n", nlines);
	yylex();
	//printf("FOX TAILS: %d %f\n", nlines, log(nlines));q

	if (argc > 1) { fclose(yyin); }
	fclose(yyout);

	return 0;
}

void print_run(char value) {
	for (int i = 0; i < run_length; ++i) {
		fprintf(yyout, "%c", value);
	}
	run_length = 1;
}

