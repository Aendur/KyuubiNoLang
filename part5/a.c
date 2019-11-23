#include <stdio.h>

int main(int argc, char** argv) {
	char str1[] = "$74";
	char str2[] = "74";
	char str3[] = "asd74";
	char str4[] = "@74";
	char str5[] = "74$";

	int i = -1;
	int s = -1;
	printf("%d %d\n", i, s);
	s = sscanf(str1, "$%d", &i); printf("%-5s %d %d\n", str1, i, s); i = -1;
	s = sscanf(str2, "$%d", &i); printf("%-5s %d %d\n", str2, i, s); i = -1;
	s = sscanf(str3, "$%d", &i); printf("%-5s %d %d\n", str3, i, s); i = -1;
	s = sscanf(str4, "$%d", &i); printf("%-5s %d %d\n", str4, i, s); i = -1;
	s = sscanf(str5, "$%d", &i); printf("%-5s %d %d\n", str5, i, s); i = -1;

	return 0;
}

