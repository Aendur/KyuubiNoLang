#include <stdio.h>

void f1(int X[]) {
	printf("%d\n", X[0]);
}
void f2(int X[3]) {
	printf("%d\n", X[0]);
	printf("%d\n", X[1]);
	printf("%d\n", X[2]);
	printf("%d\n", X[3]);
}

int main() {
	int X1[] = { 1 };
	int X2[] = {1,2,3};
	int X3[3] = {1,2,3};
	f1(X1); f1(X2); f1(X3);
	f2(X1); f2(X2); f2(X3);
}
