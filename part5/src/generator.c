#include "generator.h"
#include "lines.h"
#include "misc.h"
#include "parser.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

extern struct lines * output_lines;

// tc_pull_operand

void gen_function_begin(Symbol * args) {
	char * label = function_label(args);
	if (label != NULL) {
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_set_defined_code(Symbol * symbol) {
	if(symbol->attr->defined) {
		switch(symbol->attr->return_type) {
			case INT: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%d", symbol->attr->value.ival); break;
			case CHAR: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "'%c'", symbol->attr->value.cval); break;
			case FLOAT: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%f", symbol->attr->value.fval); break;
			default: fprintf(stderr, "dont know how to set this type\n"); break;
		}
	} else {
		// snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%s", symbol->key);
	}
}

void gen_function_end(Symbol * args, Symbol * expr) {
	//if (expr != NULL && expr->attr->defined)  {
	//	
	//}

	char msg[40] = "\treturn";
	if (args->attr->function_returns) {
		switch(args->attr->return_type) {
			case INT: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
			case CHAR: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
			case FLOAT: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
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

void gen_binary(const char * instruction, Symbol * tgt, Symbol * src1, Symbol * src2) {
	gen_set_defined_code(src1);
	gen_set_defined_code(src2);
	int size =
		strlen(instruction)
		+ strlen(tgt->attr->code)
		+ strlen(src1->attr->code)
		+ strlen(src2->attr->code) + 8;
	char * line = malloc(size);
	snprintf(line, size, "\t%s %s, %s, %s", instruction, tgt->attr->code, src1->attr->code, src2->attr->code);
	lines_append(output_lines, line);
	free(line);
}
