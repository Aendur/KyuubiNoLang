int main(void) {
	int a = -1, b = +1, c = 5;
	do {
		b = b * c--;
	} while (c > 0);

	int h = 0xFFFFFFFF;
	float x = 1.0;
	float y = -123.456789;
	float z = +3.14159;
	return 0;
}