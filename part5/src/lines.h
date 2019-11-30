#ifndef LINES_H
#define LINES_H

// void lines_append(const char ** lines, const char * line);
#include <stdio.h>

struct lines {
	struct line * first;
	struct line * last;
	int size;
};

struct line {
	const char * text;
	struct lines * root;
	struct line * next;
	//struct line * prev;
};

struct lines * lines_init(void);
struct line * line_init(const char * str);
struct line * lines_append(struct lines * lines, const char * text);
void lines_write(FILE * output, struct lines * lines);
void line_free(struct line ** line);
void lines_free(struct lines ** lines);


#endif

// 1 k 1 2k 1 1 1 4k 1 1 1 1 1 1 1 8k