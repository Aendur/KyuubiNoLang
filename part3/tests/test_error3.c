// test function declaration 
void write(voi);     // unrecognized type
void write(int);     // missing identifier
void write(float x;  // missing )
void write(char x);
void write(char x[]) // missing ;
void write(char x[10]) { return; } // also test return without argument

// test function definition
int min(int x, int y) {
	// test if-else statement
	if (y <) { return x; }
	else { return y; }
}

int min(int v[], int n) {
	// test variable decl
	int r;

	// test variable init
	int i = 0;
	
	// test vector indexing
	r = v[0];

	// test while loop
	while (n > i) {
		// test if statement
		if (r >= v[i]) {
			// test variable assignment
			r = v[i++];
		}
	}
	return r;
}

int main(void) {
	// test do loop
	do {
		// test initializer list
		int X[] = {3, 2, 1;
		int Y[] = {3,};
		
		// test function call
		write(min(min(X, 3), min(Y, 1)));
		write();
	} while (0);

	return 0;
}
