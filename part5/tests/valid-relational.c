int lt(int x, int y) {
	int a1 = 1 < 2;
	int a2 = 1 < 1;
	int a3 = 2 < 1;
	asm("	// 1 < 2"); return a1;
	asm("	// 1 < 1"); return a2;
	asm("	// 2 < 1"); return a3;
	asm("	// x < 2"); return x < 2;
	asm("	// 1 < y"); return 1 < y;
	asm("	// x < y"); return x < y;
}

int le(int x, int y) {
	int a1 = 1 <= 2;
	int a2 = 1 <= 1;
	int a3 = 2 <= 1;
	asm("	// 1 <= 2"); return a1;
	asm("	// 1 <= 1"); return a2;
	asm("	// 2 <= 1"); return a3;
	asm("	// x <= 2"); return x <= 2;
	asm("	// 1 <= y"); return 1 <= y;
	asm("	// x <= y"); return x <= y;
}

int eq(int x, int y) {
	int a1 = 1 == 2;
	int a2 = 1 == 1;
	int a3 = 2 == 1;
	asm("	// 1 == 2"); return a1;
	asm("	// 1 == 1"); return a2;
	asm("	// 2 == 1"); return a3;
	asm("	// x == 2"); return x == 2;
	asm("	// 1 == y"); return 1 == y;
	asm("	// x == y"); return x == y;
}

int ne(int x, int y) {
	int a1 = 1 != 2;
	int a2 = 1 != 1;
	int a3 = 2 != 1;
	asm("	// 1 != 2"); return a1;
	asm("	// 1 != 1"); return a2;
	asm("	// 2 != 1"); return a3;
	asm("	// x != 2"); return x != 2;
	asm("	// 1 != y"); return 1 != y;
	asm("	// x != y"); return x != y;
}

int ge(int x, int y) {
	int a1 = 1 >= 2;
	int a2 = 1 >= 1;
	int a3 = 2 >= 1;
	asm("	// 1 >= 2"); return a1;
	asm("	// 1 >= 1"); return a2;
	asm("	// 2 >= 1"); return a3;
	asm("	// x >= 2"); return x >= 2;
	asm("	// 1 >= y"); return 1 >= y;
	asm("	// x >= y"); return x >= y;
}

int gt(int x, int y) {
	int a1 = 1 > 2;
	int a2 = 1 > 1;
	int a3 = 2 > 1;
	asm("	// 1 > 2"); return a1;
	asm("	// 1 > 1"); return a2;
	asm("	// 2 > 1"); return a3;
	asm("	// x > 2"); return x > 2;
	asm("	// 1 > y"); return 1 > y;
	asm("	// x > y"); return x > y;
}


