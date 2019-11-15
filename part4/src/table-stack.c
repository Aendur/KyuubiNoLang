#include "table-stack.h"
#include "table.h"
#include <stdlib.h>
#include <stdio.h>


// typedef struct table Table;
// typedef struct tablestack Tablestack;
// struct tablestack {
// 	Table * top;
// 	Table * bot;
// 	unsigned int size;
// };
// 

// Initialize a new emtpy stack;
Tablestack * ts_init(void) {
	Tablestack * ts = malloc(sizeof(Tablestack));
	ts->bot = NULL;
	ts->top = NULL;
	ts->size = 0;
	return ts;
}

// Release a stack from memory
void ts_free(Tablestack ** ts) {
	if (ts == NULL) { fprintf(stderr, "null ** tablestack\n"); return; }
	if (*ts == NULL) { fprintf(stderr, "null * tablestack\n"); return; }

	while ((*ts)->size > 0) {
		Table * tab = ts_pull(*ts);
		table_free(&tab);
	}
	free(*ts);
	*ts = NULL;
}


// Push an element into the stack
Table * ts_push(Tablestack * ts, Table * tab) {
	if (ts == NULL) { fprintf(stderr, "trying to push into a null obj\n"); return NULL; }
	if (tab == NULL) { fprintf(stderr, "trying to push a null obj\n"); return NULL; }

	if (ts->size == 0) {
		ts->bot = tab;
		ts->top = tab;
		ts->size = 1;
		return tab;
	} else {
		tab->below = ts->top;
		ts->top = tab;
		ts->size++;
		return tab;
	}
}

// Pull an element from the stack and return it
Table * ts_pull(Tablestack * ts) {
	if (ts == NULL) { fprintf(stderr, "trying to pull from a null obj\n"); return NULL; }
	if (ts->size == 0) { fprintf(stderr, "trying to pull from an empty stack\n"); return NULL; }
	else {
		Table * tab = ts->top;
		ts->top = tab->below;
		ts->size--;
		if (ts->size == 0) { ts->bot = NULL; }
		tab->below = NULL;
		return tab;
	}
}

void ts_printm(Tablestack * ts) {
	Table * tab = ts->top;
	printf("top:\n");
	while (tab != NULL) {
		printf("%p (%lu)\n", (void*) tab, ts->size);
		tab = tab->below;
	}
	printf("=====\n");
	tab = ts->top;
	while (tab != NULL) {
		printf("%p (%lu)\n", (void*) tab, ts->size);
		table_printm(tab);
		tab = tab->below;
		printf("-----\n");
	}
}

void ts_printf(Tablestack * ts) {
	Table * tab = ts->top;
	printf("top:\n");
	while (tab != NULL) {
		printf("%p (%lu)\n", (void*) tab, ts->size);
		tab = tab->below;
	}
	printf("=====\n");
	tab = ts->top;
	while (tab != NULL) {
		printf("%p (%lu)\n", (void*) tab, ts->size);
		table_printf(tab, 0);
		tab = tab->below;
		printf("-----\n");
	}
}

void ts_printt(Tablestack * ts) {
	printf("%p %lu\n", (void*) ts->top, ts->size);
}


#ifdef UNIT_TEST_TSTACK
int exec_insertions(void);
int main(void) {
	printf("\ntest init\n");
	Tablestack * ts = ts_init();
	ts_printt(ts);
	ts_printm(ts);

	printf("\ntest push\n");
	ts_push(ts, table_init(16, "k0")); ts_printf(ts);
	ts_push(ts, table_init(16, "k1")); ts_printf(ts);
	ts_push(ts, table_init(16, "k2")); ts_printf(ts);

	Table * tab;
	printf("\ntest pull\n");
	tab = ts_pull(ts); ts_printf(ts); table_free(&tab);
	tab = ts_pull(ts); ts_printf(ts); table_free(&tab);
	tab = ts_pull(ts); ts_printf(ts); table_free(&tab);
	tab = ts_pull(ts); ts_printf(ts); table_free(&tab);


	printf("\ntest free\n");
	ts_push(ts, NULL);
	ts_free(NULL);
	ts_free(&ts);
	ts_free(&ts);
	ts_push(ts, NULL);
	ts_pull(ts);

	return 0;
}


#endif

