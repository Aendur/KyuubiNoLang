void write(int i) { asm("	println #0"); }
void write(char c) { asm("	println #0"); }
void write(float f) { asm("	println #0"); }


float caster(int i, char c, float f) {
	asm("// i + i"); i + i;
	asm("// i + c"); i + c;
	asm("// i + f"); i + f;
	asm("// c + i"); c + i;
	asm("// c + c"); c + c;
	asm("// c + f"); c + f;
	asm("// f + i"); f + i;
	asm("// f + c"); f + c;
	asm("// f + f"); f + f;
//	write(i);
//	write(c);
//	write(f);
}
