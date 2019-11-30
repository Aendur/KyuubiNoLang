#include <stdio.h>

int g(int a, int b) {
	return a+b;
}

int reduce(int vec[], int(*lambda)(int,int) ) {
//int reduce(int vec[], int lambda (int a,int b) {return a+b} ) {
	int x = vec[0];
	x = lambda(x, vec[1]);
	x = lambda(x, vec[2]);
	return x;
}

int main(int argc, char** argv) {
	// printf("%d\n", 4.9f || 0.0f);
	// printf("%d\n", 4.9f && 0.0f);
	// printf("%d\n", 0.0f || 0.0f);
	// printf("%d\n", 0.0f && 0.0f);
	// printf("%d\n", 4.9f || 1.0f);
	// printf("%d\n", 4.9f && 1.0f);
	int v[3] = {1,2,3};
	printf("%d\n", reduce(v, &g));

	char str[512];
	printf("%d\n", sizeof(str));
	return 0;
}

