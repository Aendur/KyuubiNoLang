int and(int x, int y) {
	int a1 = 0 && 0;
	int a2 = 0 && 1;
	int a3 = 1 && 0;
	int a4 = 1 && 1;
	asm("	// 0 && 0"); return a1;
	asm("	// 0 && 1"); return a2;
	asm("	// 1 && 0"); return a3;
	asm("	// 1 && 1"); return a4;
	asm("	// x && y"); return x && y;
}

int or(int x, int y) {
	int a1 = 0 || 0;
	int a2 = 0 || 1;
	int a3 = 1 || 0;
	int a4 = 1 || 1;
	asm("	// 0 || 0"); return a1;
	asm("	// 0 || 1"); return a2;
	asm("	// 1 || 0"); return a3;
	asm("	// 1 || 1"); return a4;
	asm("	// x || y"); return x || y;
}

int main(void) { return 0; }

