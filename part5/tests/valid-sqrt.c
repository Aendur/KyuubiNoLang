int read (int arg) {
	int val;
	asm("	scani  $0");
	return val;
}
char read (char arg) {
	char val;
	asm("	scanc  $0");
	return val;
}
float read (float arg) {
	float val;
	asm("	scanf  $0");
	return val;
}
void write (int arg) {
	asm("	println #0");
}
void write (char arg) {
	asm("	println #0");
}
void write (float arg) {
	asm("	println #0");
}

float sqrt(float x) {
	float a1 = 1.0;
	float a2;
	float error; 
	do {
		a2 = (a1 * a1 + x) / (2.0 * a1);
		asm("// error = x - (a2 * a2);");
		error = x-(a2 * a2);
		a1 = a2;
	} while (error != 0.0);
	return a1;
}

int main(void) {
	int i = 100;
	float x = 0.0;
	while (i > 0) {
		write(sqrt(x));
		x = x + 1.0;
	}
	return 0;
}