#include <stdio.h>

int main(int argc, char** argv) {
	// lexical warning: identifier size
	// semantic error: rhs is not declared
	int a234567890b234567890c234567890d234567890 = a234567890b234567890c234567890d234567890;
	int abcde = abcde;

	// semantic error (redefinition)
	int abcde = a234567890b234567890c234567890d234567890;
	
	// malformed character constant
	char c = 'some long string';
	return 0;
}