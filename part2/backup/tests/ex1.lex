LOWERCASE [a-z]

%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int nlines = 2;
%}

%%
 /*{LOWERCASE}     { printf("%d\n", sizeof(yytext)); }*/

{LOWERCASE}     { fprintf(yyout, "%c", yytext[0] - 0x20); }
\n              { fprintf(yyout, "\n"); ++nlines; }



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



