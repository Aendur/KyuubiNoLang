#ifndef TABLE_STACK_H
#define TABLE_STACK_H

typedef struct table Table;

typedef struct tablestack Tablestack;

struct selene {
	struct selene * below;
	struct table * symbol;
};

struct tablestack {
	struct selene * top;
	struct selene * bot;
	unsigned long size;
};

Tablestack * ts_init(void);
Table * ts_top(Tablestack * ts);
Table * ts_bot(Tablestack * ts);
void ts_free(Tablestack ** ts);
Table * ts_push(Tablestack * ts, Table * tab);
Table * ts_pull(Tablestack * ts);
void ts_printf(Tablestack * ts);
void ts_printm(Tablestack * ts);

struct selene * sel_init(Table * tab);
void sel_free(struct selene ** sel);

//void ts_printt(Tablestack * ts);

#endif

