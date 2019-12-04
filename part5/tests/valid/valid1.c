int gvar1;

int func3(int x) {
	int y = x;
	if(!x) {
		int z = 1;
		return z;
	} else {
		return x + y;
	}
	return 0;
}

int main(void) {
	int a = 0;
	func3(a);
	{
		int a = 1;
		func3(a);
	}
	return 0;
}