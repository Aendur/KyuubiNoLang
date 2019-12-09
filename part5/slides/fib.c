int fib(int x) {
	//if (x < 0) { return -1; } // bug
	//if (x == 0) { return 0; } // bug
	//if (x == 1) { return 1; } // bug
	int ret;
	if (x < 2) {
		if (x < 0) { ret = -1; }
		else { ret = x; }
	} else {
		ret = fib(x-1);
		ret = fib(x-2) + ret;
	}

	return ret;
}


int main(void) {
	char str[] = "digite um inteiro: ";
	write(str);
	int x = read(x);
	write(x);
	write(' ');
	write(fib(x));
	write();
	return 0;
}

