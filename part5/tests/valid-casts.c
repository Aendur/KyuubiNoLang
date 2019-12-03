float caster1(int i, char c, float f) {
	asm("// i + i"); i + i; i - i; i * i; i / i; i % i;
	asm("// i + c"); i + c; i - c; i * c; i / c; i % c;
	asm("// i + f"); i + f; i - f; i * f; i / f; i % f;
	asm("// c + i"); c + i; c - i; c * i; c / i; c % i;
	asm("// c + c"); c + c; c - c; c * c; c / c; c % c;
	asm("// c + f"); c + f; c - f; c * f; c / f; c % f;
	asm("// f + i"); f + i; f - i; f * i; f / i; f % i;
	asm("// f + c"); f + c; f - c; f * c; f / c; f % c;
	asm("// f + f"); f + f; f - f; f * f; f / f; f % f;
}


float caster2(int i, char c, float f) {
	asm("// i + i"); i && i; i || i;
	asm("// i + c"); i && c; i || c;
	asm("// i + f"); i && f; i || f;
	asm("// c + i"); c && i; c || i;
	asm("// c + c"); c && c; c || c;
	asm("// c + f"); c && f; c || f;
	asm("// f + i"); f && i; f || i;
	asm("// f + c"); f && c; f || c;
	asm("// f + f"); f && f; f || f;
}


float caster3(int i, char c, float f) {
	asm("// i + i"); i < i; i <= i; i == i; i != i; i >= i; i > i;
	asm("// i + c"); i < c; i <= c; i == c; i != c; i >= c; i > c;
	asm("// i + f"); i < f; i <= f; i == f; i != f; i >= f; i > f;
	asm("// c + i"); c < i; c <= i; c == i; c != i; c >= i; c > i;
	asm("// c + c"); c < c; c <= c; c == c; c != c; c >= c; c > c;
	asm("// c + f"); c < f; c <= f; c == f; c != f; c >= f; c > f;
	asm("// f + i"); f < i; f <= i; f == i; f != i; f >= i; f > i;
	asm("// f + c"); f < c; f <= c; f == c; f != c; f >= c; f > c;
	asm("// f + f"); f < f; f <= f; f == f; f != f; f >= f; f > f;
}

