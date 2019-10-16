#include "symbol.h"
#include <string.h>

// Polynomial hash function
uint64_t hash(char * str) {
	uint64_t len = strlen(str);
	uint64_t hash_value = len;

	const uint64_t sval = 3;
	uint64_t seed = 1;
	for (uint64_t i = 0; i < len; i++) {
		hash_value += (uint64_t) str[i] * seed;
		seed = seed * sval;
	}
	return hash_value; // & (mod-1);
	// 65521
}

uint64_t index(uint64_t value, uint64_t siz) {
	return value & (siz - 1);
}


