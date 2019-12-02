int add(void) {
	int a1 = 1 + 2 + 3;
	int a2 = a1 + 2 + 3;
	int a3 = 1 + a2 + 3;
	int a4 = 1 + 2 + a3;
	return a1 + a2 + a3 + a4;
}

int add(int x) {
	int a1 = 1 + 2 + x;
	int a2 = 1 + x + 3;
	int a3 = x + 2 + 3;
	return x;
	return a1 + a2 + a3;
}


int example_CTE(void) {
	int a; // só adiciona na symbol table
	a = 1 + 2; // avalio o 1+2, e sei q é 3, entao a = 3 na symbol table e gg, sem código
	return a; // se eu for usar o a, já sei o valor dele mesmo, entao só colocar direto
}

int example_NO_CTE(int x) {
	int a;     // só adiciona na symbol table
	a = x + 5; // n sei o valor de x, só sei que ele é "#0", entao gerar código
	return a;  // n sei o valor de a, só sei q ele corresponde ao temporário gerado na expr anterior
}

int example69(int x, int y) {
	int lmao0 = x + 1;  int lmao20 = x + 1; int lmao40 = x + 1; int lmao60 = x + 1;
	int lmao1 = x + 1;  int lmao21 = x + 1; int lmao41 = x + 1; int lmao61 = x + 1;
	int lmao2 = x + 1;  int lmao22 = x + 1; int lmao42 = x + 1; int lmao62 = x + 1;
	int lmao3 = x + 1;  int lmao23 = x + 1; int lmao43 = x + 1; int lmao63 = x + 1;
	int lmao4 = x + 1;  int lmao24 = x + 1; int lmao44 = x + 1; int lmao64 = x + 1;
	int lmao5 = x + 1;  int lmao25 = x + 1; int lmao45 = x + 1; int lmao65 = x + 1;
	int lmao6 = x + 1;  int lmao26 = x + 1; int lmao46 = x + 1; int lmao66 = x + 1;
	int lmao7 = x + 1;  int lmao27 = x + 1; int lmao47 = x + 1; int lmao67 = x + 1;
	int lmao8 = x + 1;  int lmao28 = x + 1; int lmao48 = x + 1; int lmao68 = x + 1;
	int lmao9 = x + 1;  int lmao29 = x + 1; int lmao49 = x + 1; int lmao69 = x + 1;
	int lmao10 = x + 1; int lmao30 = x + 1; int lmao50 = x + 1;
	int lmao11 = x + 1; int lmao31 = x + 1; int lmao51 = x + 1;
	int lmao12 = x + 1; int lmao32 = x + 1; int lmao52 = x + 1;
	int lmao13 = x + 1; int lmao33 = x + 1; int lmao53 = x + 1;
	int lmao14 = x + 1; int lmao34 = x + 1; int lmao54 = x + 1;
	int lmao15 = x + 1; int lmao35 = x + 1; int lmao55 = x + 1;
	int lmao16 = x + 1; int lmao36 = x + 1; int lmao56 = x + 1;
	int lmao17 = x + 1; int lmao37 = x + 1; int lmao57 = x + 1;
	int lmao18 = x + 1; int lmao38 = x + 1; int lmao58 = x + 1;
	int lmao19 = x + 1; int lmao39 = x + 1; int lmao59 = x + 1;

	return lmao59;
}