#ifndef TABLE_H
#define TABLE_H


typedef struct table Symbol;
typedef struct table Table;
struct table {
	const char * key;
	struct attr * attr;
	struct table * next;
	struct table * prev;

	unsigned long n_buckets;
	unsigned long n_keys;
	struct table  * root;
	struct table  * below;
	struct bucket * buckets;
};

struct bucket {
	struct table * first;
	struct table * last;
	unsigned long size;
};

struct attr {
	int symbol_type;
	int return_type;
	union {
		int   ival;
		char  cval;
		const char* sval;
		float fval;
	} value;
	struct arg_list * arg_list;
	struct node * statement_tree;
};

struct table * table_init (unsigned long size, const char * key);
void table_free (Table** tab);
double table_loadf (Table* tab);
unsigned long table_hash (const char * key);
struct table * table_find (Table* tab, const char* key);
struct table * table_find_back (Table* tab, const char* key);
struct table * table_insert (Table* tab, const char* key); //, struct attr* val);
struct table * table_retire (Table* tab, const char* key);
void           table_remove (Table* tab, const char* key);
struct table * table_rehash (Table** tab);

// struct pair * pair_init(const char * key);
//void pair_print(struct pair * pair);
void pair_print(struct table * pair);
void attr_print(struct attr * attr);

void table_printm (Table* tab);
void table_printf (Table* tab, int level);

unsigned long round_to_2(unsigned long x);


#endif

