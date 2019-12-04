int gvar1;
int gvar2;
int gvar3;

int func1(int x) {
	return x;
}

int func2(int x, int y) {
	int z = x + y;
	return z;
}

int func3(int x, int y, int z) {
	int w = -z *(x + y);
	return w;
}

int main(void) {
	int outervar1;
	int outervar2;
	int outervar3;
	if (1) {
		int ifvar1;
		int ifvar2;
		int ifvar3;
	}

	if (1) {
		int ifelsevar1if;
		int ifelsevar2if;
		int ifelsevar3if;
	} else {
		int ifelsevar1else;
		int ifelsevar2else;
		int ifelsevar3else;
	}

	{
		int innervar1;
		{
			int innervar2;
			{
				int innervar3;
			}
			int innervar4;
		}
		int innervar5;
	}
	int outervar4;
	int outervar5;
	int outervar6;

	while(0) {
		int whilevar1;
		int whilevar2;
		int whilevar3;
	}

	do {
		int dowhilevar1;
		int dowhilevar2;
		int dowhilevar3;
	} while(0);

	return 0;
}

int gvar4;
int gvar5;
int gvar6;
