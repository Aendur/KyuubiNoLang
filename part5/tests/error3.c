int min(int x, int y) {
	// semantic errors (variable redefinition)
	int x = y;
	int y = x;
	{
		// OK
		int x = y;
		int y = x;
	}
	return 0;
}

// OK (polymorphic func)
int min(int x, int y, int z) {
	// undeclared variable
	a = 5;
}

int b;
// function redefinition (same parameters)
int min(int x, int y) {
	b = 5;
	c = 5; // undeclared
	int c;
	b = max(10, 20); // undefined function
	c = min(10, 20);
}


