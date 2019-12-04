int add (int x) { return x; }
int add (int x, int y) { return x + y; }
int add (int x, int y, int z) { return x + y + z; }
int add (int x, int y, int z, int w) { return x + y + z + w; }

int adds (void) {
	int a = add(1);
	int b = add(1, 2);
	int c = add(1, 2 ,3);
	int d = add(1, 2 ,3, 4);
	return add(add(a,b),add(c,d));
}

int main(void) {
	// result = 20
	write(adds());
	write();
	return 0;
}

