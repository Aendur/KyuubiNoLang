int test(int x) {
	asm("//int a;");
	int a;
	asm("//if (x < 0) { a = 0; }");
	if (x < 0) { a = 0; }
	asm("//if (x == 0) { a = 1; } else { a = 2; }");
	if (x == 0) { a = 1; }
	else { a = 2; }
	asm("//return 3 * a;");
	return 3 * a;
}

