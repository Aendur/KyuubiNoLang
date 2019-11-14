#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("%p\n", (void*) -1);

	char * str;
	str = "teststr";
	printf("%s\n", str);
	free(str);
	str = NULL;
}
