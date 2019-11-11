#ifndef TABLE_STACK_H
#define TABLE_STACK_H

typedef struct table Table;

typedef struct tablestack Tablestack;
struct tablestack {
	Table * top;
	Table * bot;
	unsigned long size;
};

Tablestack * ts_init(void);
void ts_free(Tablestack ** ts);
Table * ts_push(Tablestack * ts, Table * tab);
Table * ts_pull(Tablestack * ts);
void ts_print(Tablestack * ts);

#endif

