#include "misc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * str_ptr(const char * prefix, void* address, const char * suffix) {
	unsigned long size = 24;
	if(prefix != NULL) { size += strlen(prefix); }
	if(suffix != NULL) { size += strlen(suffix); }
	char * str = calloc(size, sizeof(char));

	address = (void*) (((size_t) address << 44) >> 44);
	if (prefix == NULL && suffix == NULL) {
		snprintf(str, size, "%p", address);
	} else if (prefix != NULL && suffix == NULL) {
		snprintf(str, size, "%s:%p", prefix, address);
	} else if (prefix == NULL && suffix != NULL) {
		snprintf(str, size, "%p:%s", address, suffix);
	} else {
		snprintf(str, size, "%s:%p:%s", prefix, address, suffix);
	}
	return str;
}

char * function_label(Symbol * args) {
	if (args != NULL) {
		Symbol * func = args->root;
		if (func != NULL) {
			int size = sizeof(args->key) + sizeof(func->key) + 3;
			char * str = malloc(size);
			snprintf(str, size, "%s_%s:", func->key, args->key);
			return str;
		}
	}
	return NULL;
}

char * random_label(int len) {
	char alphabet[64] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_0123456789";
	const int size = 63;
	const int siz = 53;


	char * label = malloc(len+2);
	int i = 0;
	label[i++] = alphabet[rand() % siz];
	while (i < len) {
		label[i] = alphabet[rand() % size];
		++i;
	}
	label[i] = 0;

	//printf("%d %s\n", strlen(label), label);
	return label;
}