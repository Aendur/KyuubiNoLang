float abs(float x) {
	if (x < 0.0) { x = -x; }
	return x;
}

float sqrt(float x) {
	float a1 = 1.5;
	float a2;
	float error;

	if (x <= 0.0) {
		a2 = x;
	} else {
		do {
			a2 = (a1 * a1 + x) / (2.0 * a1);
			error = x-(a2 * a2);
			a1 = a2;
		} while (abs(error) > 0.001);
	}
	return a2;
}

int main(void) {
	char format1[] = "sqrt(";
	char format2[] = ") = ";
	
	int i = -1;
	while (++i <= 100) {
		float x = i;
		write(format1);
		write(i);
		write(format2);
		write(sqrt(x));
		write();
	}

	char question[] = "please enter a number: ";
	char msg1[] = "sqrt is not defined ";
	char msg2[] = "for negative values\n";
	
	write(question);
	float f = sqrt(read(f));

	if (f < 0.0) {
		write(msg1);
		write(msg2);
	} else {
		//write(sqrt(f));
		write(f);
		write();
	}
	return 0;
}
