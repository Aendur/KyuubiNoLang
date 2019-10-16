#include "map.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	char * strings[] = {
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "neptune"
	};

	const uint64_t len = 64;
	// printf("%ld\n", sizeof(unsigned int));
	printf("%-10s %-16s %-s\n", "string", "hexval", "intval");
	for (int i = 0; i < 9; i++) {
		uint64_t hval = hash(strings[i]);
		uint64_t  val = index(hval, len);
		printf("%-10s %016lx %lu %lu\n", strings[i], hval, val, sizeof(uint64_t));

	}


	return 0;
}

