#include "generator.h"
#include "lines.h"
#include "misc.h"
#include "parser.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

extern struct lines * output_lines;

void gen_function_begin(Symbol * args) {
	char * label = function_label(args);
	if (label != NULL) {
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_function_end(Symbol * args, Symbol * expr) {
	char msg[24] = "\treturn";
	
	if (args->attr->function_returns) {
		switch(args->attr->return_type) {
			case INT: strncat(strncat(msg, " ", 23), expr->key, 23); break;
			case CHAR: strncat(strncat(msg, " ", 23), expr->key, 23); break;
			case FLOAT: strncat(strncat(msg, " ", 23), expr->key, 23); break;
			case VOID: break; 
			default: fprintf(stderr, "cant return this type\n"); break;
		}
	} else {
		switch(args->attr->return_type) {
			case INT: strncat(msg, " 0", 23); break;
			case CHAR: strncat(msg, " '\\0'", 23); break;
			case FLOAT: strncat(msg, " 0.0", 23); break;
			case VOID: break; 
			default: fprintf(stderr, "cant return this type\n"); break;
		}
	}

	lines_append(output_lines, msg);
}


void gen_unary(const char * instruction, Symbol * tgt, Symbol * src) {
	int size = strlen(instruction) + strlen(tgt->attr->code) + strlen(src->attr->code) + 8;
	char * line = malloc(size);
	snprintf(line, size, "\t%s %s, %s", instruction, tgt->attr->code, src->attr->code);
	lines_append(output_lines, line);
	free(line);
}