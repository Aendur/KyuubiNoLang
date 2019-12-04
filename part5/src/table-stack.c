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

	struct selene * sel = sel_init(tab);

	if (ts->size == 0) {
		ts->bot = sel;
		ts->top = sel;
		ts->size = 1;
		return tab;
	} else {
		sel->below = ts->top;
		ts->top = sel;
		ts->size++;
		return tab;
	}
}

// Pull an element from the stack and return it
Table * ts_pull(Tablestack * ts) {
	if (ts == NULL) { fprintf(stderr, "trying to pull from a null obj\n"); return NULL; }
	if (ts->size == 0) { fprintf(stderr, "trying to pull from an empty stack\n"); return NULL; }
	
	struct selene * sel = ts->top;
	Table * tab = sel->symbol;

	if (ts->size == 1) {
		ts->top = NULL;
		ts->bot = NULL;
		ts->size = 0;
	} else {
		ts->top = sel->below;
		ts->size--;
	}

	sel_free(&sel);
	return tab;
}

Table * ts_top(Tablestack * ts) {
	return ts->top->symbol;
}

Table * ts_bot(Tablestack * ts) {
	return ts->bot->symbol;
}

void ts_printm(Tablestack * ts) {
	struct selene * sel = ts->top;
	printf("top:\n");
	while (sel != NULL) {
		printf("%p (%lu)\n", (void*) sel, ts->size);
		sel = sel->below;
	}
	printf("=====\n");
	sel = ts->top;
	while (sel != NULL) {
		printf("%p (%lu)\n", (void*) sel, ts->size);
		table_printm(sel->symbol);
		sel = sel->below;
		printf("-----\n");
	}
}

void ts_printf(Tablestack * ts) {
	struct selene * sel = ts->top;
	printf("top:\n");
	while (sel != NULL) {
		printf("%p (%lu)\n", (void*) sel, ts->size);
		sel = sel->below;
	}
	printf("=====\n");
	sel = ts->top;
	while (sel != NULL) {
		printf("%p (%lu)\n", (void*) sel, ts->size);
		table_printf(sel->symbol, 0);
		sel = sel->below;
		printf("-----\n");
	}
}

void ts_printt(Tablestack * ts) {
	printf("%p %lu\n", (void*) ts->top, ts->size);
}


struct selene * sel_init(Table * tab) {
	struct selene * sel = malloc(sizeof(struct selene));
	sel->below = NULL;
	sel->symbol = tab;
	return sel;
}

void sel_free(struct selene ** sel) {
	if (sel == NULL) { return; }
	//if (*sel == NULL) { return; }
	free(*sel);
	*sel = NULL;
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

