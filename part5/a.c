#include <stdio.h>

int main(int argc, char** argv) {
	printf("%d\n", 4.9f || 0.0f);
	printf("%d\n", 4.9f && 0.0f);
	printf("%d\n", 0.0f || 0.0f);
	printf("%d\n", 0.0f && 0.0f);
	printf("%d\n", 4.9f || 1.0f);
	printf("%d\n", 4.9f && 1.0f);
	return 0;
}

