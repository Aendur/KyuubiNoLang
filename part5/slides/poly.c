int min(int a, int b) {
	int res;
	if (a <= b) { res = a;}
	else { res = b; }
	return res;
}

float min(float a, int i) {
	float b = i;
	float res;
	if (a <= b) { res = a;}
	else { res = b; }
	return res;
}

float min(int i, float b) {
	float a = i;
	float res;
	if (a <= b) { res = a;}
	else { res = b; }
	return res;
}

float min(float a, float b) {
	float res;
	if (a <= b) { res = a;}
	else { res = b; }
	return res;
}

int main(void) {
	char msg1[] = "min(";
	char msg2[] = ", ";
	char msg3[] = ") = ";
	int   i1 = read(i1);
	int   i2 = read(i2);
	float f1 = read(f1);
	float f2 = read(f2);
	write(msg1); write(i1); write(msg2); write(i2); write(msg3); write(min(i1, i2)); write();
	write(msg1); write(i1); write(msg2); write(f2); write(msg3); write(min(i1, f2)); write();
	write(msg1); write(f1); write(msg2); write(i2); write(msg3); write(min(f1, i2)); write();
	write(msg1); write(f1); write(msg2); write(f2); write(msg3); write(min(f1, f2)); write();
	
	// float x = 1 + 2.5;
	// write(x);
	// write();
	
	return 0;
}
