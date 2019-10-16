#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "token.h"

const char* tok_to_str(enum tokenclass tc) {
	switch(tc) {
		case ERROR_INVALID_CHAR_CONST: return "ERROR_INVALID_CHAR_CONST";
		case ERROR_INVALID_IDENTIFIER: return "ERROR_INVALID_IDENTIFIER";
		case ERROR_UNRECOGNIZED_TOKEN: return "ERROR_UNRECOGNIZED_TOKEN";
		case ERROR_SCANNER:            return "ERROR_SCANNER";
		
		case KW_IF:     return "KW_IF";
		case KW_ELSE:   return "KW_ELSE";
		case KW_DO:     return "KW_DO";
		case KW_WHILE:  return "KW_WHILE";
		case KW_RETURN: return "KW_RETURN";

		case TYPE_VOID:  return "TYPE_VOID";
		case TYPE_BOOL:  return "TYPE_BOOL";
		case TYPE_CHAR:  return "TYPE_CHAR";
		case TYPE_INT:   return "TYPE_INT";
		case TYPE_FLOAT: return "TYPE_FLOAT";

		case OP_ADD: return "OP_ADD";
		case OP_SUB: return "OP_SUB";
		case OP_MUL: return "OP_MUL";
		case OP_DIV: return "OP_DIV";
		case OP_REM: return "OP_REM";
		case OP_INC: return "OP_INC";
		case OP_DEC: return "OP_DEC";

		case OP_LT:  return "OP_LT";
		case OP_LE:  return "OP_LE";
		case OP_EQ:  return "OP_EQ";
		case OP_GE:  return "OP_GE";
		case OP_GT:  return "OP_GT";
		case OP_NE:  return "OP_NE";

		case OP_NOT: return "OP_NOT";
		case OP_AND: return "OP_AND";
		case OP_OR : return "OP_OR";

		case POI_LBRACE:    return "POI_LBRACE";
		case POI_RBRACE:    return "POI_RBRACE";
		case POI_LBRACKET:  return "POI_LBRACKET";
		case POI_RBRACKET:  return "POI_RBRACKET";
		case POI_LPAR:      return "POI_LPAR";
		case POI_RPAR:      return "POI_RPAR";
		case POI_SEMICOLON: return "POI_SEMICOLON";
		case POI_COMMA:     return "POI_COMMA";
		case POI_EQ:        return "POI_EQ";

		case IDENTIFIER:     return "IDENTIFIER";
		case CONSTANT:       return "CONSTANT";
		case STRING_LITERAL: return "STRING_LITERAL";

		default: return "UNDEFINED CLASS";
	}
}

struct token * new_token(int line, int column, enum tokenclass tc, const char * text) {
	struct token * tok = malloc(sizeof(struct token));
	tok->line = line;
	tok->column = column;
	tok->tc = tc;
	tok->text = malloc(strlen(text)+1);
	tok->next = NULL;
	strcpy(tok->text, text);
	return tok;
}

void add_token(struct tokenlist * l, struct token * t) {
	if (l->first == NULL) {
		l->first = t;
		l->last  = t;
	} else {
		l->last->next = t;
		l->last = t;
	}
}


void clear_tokens (struct tokenlist * l) {
	struct token * t1 = l->first;
	struct token * t2;

	while (t1 != NULL) {
		t2 = t1->next;
		free(t1);
		t1 = t2;
	}

	l->first = NULL;
	l->last = NULL;
}