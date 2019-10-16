LOWERCASE [a-z]
UPPERCASE [A-Z]
LETTER    [a-zA-Z]
DIGIT     [0-9]
NUMBER    [0-9]{1,}

%{
int row = 0;
int col = 0;
int board[3][3];

void announce_winner(void);
%}

%%
"_"  { board[row][col++] = 0; }
"O"  { board[row][col++] = 1; }
"X"  { board[row][col++] = 4; }
\n   { ++row; col = 0; }
.    {}
%%

int main(int argc, char** argv) {
	if (argc > 1) { yyin = fopen(argv[1], "r"); }
	else          { yyin = stdin; }
	yyout = fopen("out.dat", "w");

	yylex();
	announce_winner();

	if (argc > 1) { fclose(yyin); }
	fclose(yyout);

	return 0;
}

void announce_winner(void) {
	for(int i = 0; i < 3; ++i) {
		int S = 0;
		for (int j = 0; j < 3; ++j) {
			S += board[i][j];
		}
		if (S == 3 ) { fprintf(yyout, "O venceu.\n"); return; }
		if (S == 12) { fprintf(yyout, "X venceu.\n"); return; }
		S = 0;
	}

	for(int i = 0; i < 3; ++i) {
		int S = 0;
		for (int j = 0; j < 3; ++j) {
			S += board[j][i];
		}
		if (S == 3 ) { fprintf(yyout, "O venceu.\n"); return; }
		if (S == 12) { fprintf(yyout, "X venceu.\n"); return; }
		S = 0;
	}

	switch(board[0][0] + board[1][1] + board[2][2]) {
		case  3: fprintf(yyout, "O venceu.\n"); return;
		case 12: fprintf(yyout, "X venceu.\n"); return;
	}

	switch(board[0][2] + board[1][1] + board[2][0]) {
		case  3: fprintf(yyout, "O venceu.\n"); return;
		case 12: fprintf(yyout, "X venceu.\n"); return;
	}
	
	fprintf(yyout, "Sem vencedor.\n");
}

