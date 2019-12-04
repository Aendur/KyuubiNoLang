

int main(int x) {
	asm("// a");
	int a = 1 + 2 + 3 + 4 + 5;
	asm("// b");
	int b = 1 + 2 + 3 + 4 + a;
	asm("// c");
	int c = 1 + 2 + a + 4 + 5;
	asm("// d");
	int d = a + 2 + 3 + 4 + 5;
	asm("// e");
	int e = a + 2 + a + 4 + a;
	asm("// f");
	int f = 1 + a + 3 + a + 5;
	asm("// ret");
	//int b = a;
	//int c = argc;
	//argc = 5;
	//argc = a;
	//argc = argc;
	return f;

	//1+1;
	//1+argc;
	//argc+1;
	//a+1;
	//1+a;
	//a+a;
	//argc+argc;
}
