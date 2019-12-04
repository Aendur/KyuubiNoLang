int f(void) {
	return -1;
}

int f(int x) {
	return x;
}

void f(int x, int y) {
	
}

int f(int x, int y, int z) {
	return z * (x + y * z);
}

int main(int x) {
	asm("//f0");
	f();
	asm("//f1");
	f(3);
	asm("//f2");
	f(3, 4);
	asm("//f3");
	f(3, 4, 5);
	//f(3, 4, 5, 6);
	return 0;
}
