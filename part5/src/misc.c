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

char * random_label(const char * prefix, int len, const char * suffix) {
	char alphabet[64] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_0123456789";
	const int size = 63;
	const int siz = 53;

	int LEN = len;
	LEN += prefix == NULL ? 0 : strlen(prefix);
	LEN += suffix == NULL ? 0 : strlen(suffix);
	char * label = calloc(LEN+1, sizeof(char));

	if (prefix != NULL) strncat(label, prefix, LEN);
	if (len > 0) {
		int i = strlen(label);
		label[i++] = alphabet[rand() % siz];
		while (i < LEN) { label[i++] = alphabet[rand() % size]; }
	}
	if (suffix != NULL) strncat(label, suffix, LEN);

	// printf("%d %s\n", strLEN(label), label);
	return label;
}

FILE * append_files(const char * f1, const char * f2) {
	FILE * fin1 = fopen(f1, "rb"); if (fin1 == NULL) { return NULL; }
	FILE * fin2 = fopen(f2, "rb"); if (fin2 == NULL) { fclose(fin1); return NULL; }
	FILE * fout  = fopen("k.tmp", "wb"); if (fout == NULL) { fclose(fin1); fclose(fin2); return NULL; }

	const unsigned int size = 1024;
	char buffer[size];
	unsigned int n = 0;
	while ((n = fread(buffer, sizeof(char), size, fin1)) > 0) { fwrite(buffer, sizeof(char), n, fout); }
	while ((n = fread(buffer, sizeof(char), size, fin2)) > 0) { fwrite(buffer, sizeof(char), n, fout); }

	fout = freopen("k.tmp", "r", fout);
	fclose(fin1);
	fclose(fin2);
	fseek(fout, 0, SEEK_SET);
	return fout;
}
