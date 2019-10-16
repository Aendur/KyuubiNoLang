%{
int nline = 1;
%}

%x COMMENT_BLOCK
%x COMMENT_LINE

%%
\n   { ++nline; ECHO; }

"/*"                 { printf("<lines %d-", nline); BEGIN(COMMENT_BLOCK); }
<COMMENT_BLOCK>"*/"  { printf("%d: removed block comment>", nline); BEGIN(INITIAL); }
<COMMENT_BLOCK>\n    { ++nline; }
<COMMENT_BLOCK>.     { }

"//"              { printf("<line %d: removed comment>\n", nline); BEGIN(COMMENT_LINE); }
<COMMENT_LINE>\n  { ++nline; BEGIN(INITIAL); }
<COMMENT_LINE>.   { }

%%

int main(int argc, char** argv) {
	if (argc > 1) { yyin = fopen(argv[1], "r"); }
	else          { yyin = stdin; }
	//yyout = fopen("out.dat", "w");

	yylex();

	if (argc > 1) { fclose(yyin); }
	fclose(yyout);

	return 0;
}


