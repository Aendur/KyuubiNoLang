#ifndef LINES_H
#define LINES_H

// void lines_append(const char ** lines, const char * line);


struct lines {
	struct line * first;
	struct line * last;
	int size;
}

struct line {
	const char * text;
	struct line * next;
}



struct lines {
	const char ** line;
	int capacity;
	int size;
}

#endif

// 1 k 1 2k 1 1 1 4k 1 1 1 1 1 1 1 8k