#ifndef ARG_LIST_H
#define ARG_LIST_H

struct arg {
	struct arg * next;
	int data_type;
	int decl_type;
	const char * name;
};

struct arg_list {
	struct arg * first;
	struct arg * last;
	unsigned int size;
};

struct arg_list * al_init(int data_type, int decl_type, const char * name);
struct arg_list * al_link(struct arg_list * head, struct arg_list ** tail);
void al_free(struct arg_list**);
void al_print(struct arg_list *args);
char * al_key(struct arg_list *args);


#endif