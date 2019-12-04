int testif(int x) {
	int a;
	asm("//if (x < 0) { a = 0; }");
	if (x < 0) { a = -1; }
	asm("//return 3 * a;");
	return 3 * a;
}

int testelse(int x) {
	int a;
	asm("//if (x == 0) { a = 1; } else { a = 2; }");
	if (x == 0) { a = 1; } else { a = 2; }
	asm("//return 3 * a;");
	return 3 * a;
}

int testwhile(int x) {
	int a;
	asm("//while (x < 0) { a = -1; }");
	while (x < 0) { a = -1; }
	asm("//return 3 * a;");
	return 3 * a;
}

int testdo(int x) {
	int a;
	asm("//do { a = 1; } while(x > 0);");
	do { a = 1; } while(x > 0);
	asm("//return 3 * a;");
	return 3 * a;
}

int main(void) { return 0; }
