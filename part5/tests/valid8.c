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
	return x + a1 + a2 + a3;
}

int sub(void) {
	int a1 = 1 - 2 - 3;
	int a2 = a1 - 2 - 3;
	int a3 = 1 - a2 - 3;
	int a4 = 1 - 2 - a3;
	return a1 - a2 - a3 - a4;
}

int sub(int x) {
	int a1 = 1 - 2 - x;
	int a2 = 1 - x - 3;
	int a3 = x - 2 - 3;
	return x - a1 - a2 - a3;
}

int mul(void) {
	int a1 = 1 * 2 * 3;
	int a2 = a1 * 2 * 3;
	int a3 = 1 * a2 * 3;
	int a4 = 1 * 2 * a3;
	return a1 * a2 * a3 * a4;
}

// a1 = 6
// a2 = 36
// a3 = 108
// a4 = 216
// ret = 5 038 848

int mul(int x) {
	int a1 = 1 * 2 * x;
	int a2 = 1 * x * 3;
	int a3 = x * 2 * 3;
	return x * a1 * a2 * a3;
}

int div(void) {
	int a1 = 1024 / 2 / 2;
	int a2 = a1 / 2 / 2;
	int a3 = 1024 / a2 / 2;
	int a4 = 1024 / 2 / a3;
	return a1 / a2 / a3 / a4;
}

int div(int x) {
	int a1 = 1024 / 2 / x;
	int a2 = 1024 / x / 2;
	int a3 = x / 2 / 2;
	return x / a1 / a2 / a3;
}

int mod(void) {
	int a1 = 1 % 2 % 3;
	int a2 = a1 % 2 % 3;
	int a3 = 1 % a2 % 3 + 1;
	int a4 = 1 % 2 % a3 + 1;
	return a1 % a2 % a3 % a4;
}

int mod(int x) {
	int a1 = 1 % 2 % x;
	int a2 = 1 % x % 3;
	int a3 = x % 2 % 3;
	return x % a1 % a2 % a3;
}

