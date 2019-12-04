float abs(float x) {
	//float a;
	if (x < 0.0) { x = -x; }
	//else         { a =  x; }
	return x;
}

float sqrt(float x) {
	if (x == 0.0) { return 0.0; }
	if (x == 1.0) { return 1.0; }
	float a1 = 1.5;
	float a2;
	float error;
	
	do {
		a2 = (a1 * a1 + x) / (2.0 * a1);
		asm("// error = x - (a2 * a2);");
		error = x-(a2 * a2);
		a1 = a2;
		// write(a2);
		// write(error);
		// return a2;
	} while (abs(error) > 0.001);
	return a2;
}

int main(void) {
	//write (sqrt(25.0));
	int i = -1;
	while (++i <= 100) {
		float x = i;
		write(i);
		write(' ');
		write(sqrt(x));
		write();
	}

	float f;
	f = read(f);
	write(sqrt(f));
	write();
	return 0;
}
