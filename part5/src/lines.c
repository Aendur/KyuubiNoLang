#include "lines.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>


struct lines * lines_init(void) {
	struct lines * lines = malloc(sizeof(struct lines));
	lines->size = 0;
	lines->first = NULL;
	lines->last = NULL;
	return lines;
}


struct line * line_init(const char * str) {
	struct line * line = malloc(sizeof(struct line));
	line->text = malloc(sizeof(str) + 1);
	strcpy((char*) line->text, str);
	line->root = NULL;
	line->next = NULL;
	line->prev = NULL;
	return line;
}

struct line * lines_append(struct lines * lines, const char * text) {
	if (lines == NULL) { fprintf(stderr, "null lines\n"); return NULL; }
	if (text  == NULL) { fprintf(stderr, "null line \n"); return NULL; }

	if (lines->size == 0) {
		assert(lines->first == NULL);
		assert(lines->last == NULL);
		struct line * line = line_init(text);
		line->root = lines;
		
		lines->first = line;
		lines->last  = line;
		lines->size++;
		return line;
	} else {
		assert(lines->first != NULL);
		assert(lines->last != NULL);
		struct line * line = line_init(text);
		line->root = lines;
		line->prev = lines->last;
		
		lines->last->next = line;
		lines->last       = line;
		lines->size++;
		return line;
	}
}

void lines_write(FILE * output, struct lines * lines) {
	if (output == NULL) { fprintf(stderr, "cannot write to null\n"); return; }
	if (lines == NULL) { fprintf(stderr, "null lines\n"); return; }
	struct line * line = lines->first;
	while(line != NULL) {
		fprintf(output, "%s\n", line->text);
		line = line->next;
	}
}


void line_free(struct line ** line) {
	if (line == NULL) { fprintf(stderr, "null &line\n"); return; }
	if (*line == NULL) { fprintf(stderr, "null line\n"); return; }

	free((char*)((*line)->text));
	free((*line));
	(*line) = NULL;
}

void lines_free(struct lines ** lines) {
	if (lines == NULL) { fprintf(stderr, "null &lines\n"); return; }
	if (*lines == NULL) { fprintf(stderr, "null lines\n"); return; }

	struct line * line = (*lines)->first;
	struct line * next;
	while(line != NULL) {
		next = line->next;
		line_free(&line);
		line = next;
	}

	free((*lines));
	(*lines) = NULL;
}


#ifdef UNIT_TEST_LINES

int main() {
	struct lines * L = lines_init();
	lines_append(L, "lin1");
	lines_append(L, "lin2");
	lines_append(L, "lin3");
	lines_write(stdout, L);

	printf("%p\n", (void*)L);
	lines_free(&L);
	printf("%p\n\n\n", (void*)L);

	L = lines_init();
	lines_append(L, "lin1");
	lines_append(L, "lin2");
	lines_write(stdout, L);

	printf("%p\n", (void*)L);
	lines_free(&L);
	printf("%p\n\n\n", (void*)L);

	L = lines_init();
	lines_append(L, "lin1");
	lines_write(stdout, L);

	printf("%p\n", (void*)L);
	lines_free(&L);
	printf("%p\n\n\n", (void*)L);

	L = lines_init();
	lines_write(stdout, L);

	printf("%p\n", (void*)L);
	lines_free(&L);
	printf("%p\n\n\n", (void*)L);

}

#endif

