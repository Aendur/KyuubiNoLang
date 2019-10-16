/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * MIT License                                                                     *
 *                                                                                 *
 * Copyright (c) 2019 Diogo Cesar Ferreira                                         *
 *                                                                                 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy    *
 * of this software and associated documentation files (the "Software"), to deal   *
 * in the Software without restriction, including without limitation the rights    *
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is           *
 * furnished to do so, subject to the following conditions:                        *
 *                                                                                 *
 * The above copyright notice and this permission notice shall be included in all  *
 * copies or substantial portions of the Software.                                 *
 *                                                                                 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   *
 * SOFTWARE.                                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "symtab.h"
#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct symtab_table Table;

const int SIZE = 1000;
int * count;
int exec_insertions(void);

int main(void) {
	// Table * t = symtab_init(0, 0);
	// printf("%p\n", (void*) t);
	// symtab_free(&t);
	// printf("%p\n", (void*) t);


	srand(time(NULL));
	count = calloc(SIZE, sizeof(int));
	
	int N = exec_insertions();

	for (int i = 0; i < SIZE; ++i) { printf("%d %.2f %d %d\n", N, (float) N / (SIZE * 4.0), i, count[i]); }
	free(count);

	return 0;
}


int exec_insertions(void) {
	static int N = 0;
	static int M = 1000;
	static char str[] = {'A','A','A','A','A',0};
	unsigned long keys[] = {19, 23, 29, 31};
	printf("%s\n", str);
	do {
		++N;

		unsigned long hash;
		hash = symtab_hash(str, keys[N % 4]) % SIZE;
		if (count[hash] < 4) {
			count[hash]++;
		} else {
			break;
		}

		// if (count[hash] < 1) {
		// 	printf("%d hit\n", N);
		// 	count[hash]++;
		// } else {
		// 	printf("%d miss\n", N);
		// 	hash = symtab_hash(str, keys[1]) % (SIZE - 0);
		// 	if (count[hash] < 2) {
		// 		count[hash]++;
		// 	} else {
		// 		break;
		// 		// printf("%d deep\n", N);
		// 		// hash = symtab_hash(str, keys[2]) % (SIZE - 1);
		// 		// if (count[hash] < 3) {
		// 		// 	count[hash]++;
		// 		// } else {
		// 		// 	break;
		// 		// }
		// 	}
		// } 

		int i = strlen(str) - 1;
		while (++str[i] > 'z') {
			str[i] = 'A';
			--i;
		}
	} while (N < M);
	return N;
}
