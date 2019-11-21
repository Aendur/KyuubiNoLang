#include "actions.h"
#include "parser.h"
extern int yynerrs;


#define ERROR_MSG_BUFF 256

void type_error(Node * node, char * type1, char * type2) {
	//++yynerrs;
	//yyerror(msg);
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: incompatible types, '%s' and '%s'", type1, type2);
	node_error(msg, node);
}

void node_error(const char * msg, Node * node) {
	++yynerrs;
	yyerror(msg);
	fprintf(stderr, "Line %d, column %d, node, %s\n", node->line, node->col0, msg);
}

void redefinition_error(const char * name) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s'", name);
	++yynerrs;
	yyerror(msg);
}

void redefinition_error_fun(const char * name, const char * pars) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s' with parameters '%s'", name, pars);
	++yynerrs;
	yyerror(msg);
}

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	Symbol * new_context;
	// if there is a name, search for it in the current context
	if (name != NULL) {
		new_context = table_find(context_stack->top, name);
		
		// if it exists, error
		if (new_context != NULL) {
			redefinition_error(name);
			return NULL;
		}
	}

	// if there is not a name, or it does not exist, create a new context
	new_context = table_insert(context_stack->top, name);

	if (new_context == NULL) {
		// if it was not inserted, error
		fprintf(stderr, "unable to insert context\n");
		return NULL;
	} else {
		// otherwise push it into the stack
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
		return new_context;
	}
}

void add_symbol_args(struct arg_list * args) {
	if (args != NULL) {
		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->decl_type) {
				case ARRAY   : add_symbol_arr(arg->data_type, arg->name); break;
				case VARIABLE: add_symbol_var(arg->data_type, arg->name); break;
				default      : break;
			}
			arg = arg->next;
		}
	}
}

Table * begin_fun(int type, const char * name, struct arg_list * args) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }
	if (name == NULL) { fprintf(stderr, "function name is null\n"); return NULL; }

	char * key = al_key(args);
	Symbol * new_context = table_find(context_stack->top, name);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, name);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
	}
	new_context->root = context_stack->top;
	ts_push(context_stack, new_context);

	new_context = table_find(context_stack->top, key);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, key);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
		new_context->attr->arg_list = args;
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
	} else {
		redefinition_error_fun(name, key);
	}
	free(key);

	add_symbol_args(args);

	return new_context;
}

void assign_context(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign context: stack is empty\n");
	} else {
		node->context = context_stack->top;
	}
}

void assign_body(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign body: stack is empty\n");
	} else {
		context_stack->top->attr->statement_tree = node;
	}
}

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }
	Symbol * new_context = ts_pull(context_stack);
	return  new_context;
}

Symbol * add_symbol_var(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = VARIABLE;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * add_symbol_arr(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = ARRAY;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * add_symbol(int symbol_type, int data_type, const char * key) {
	//switch (data_type) { case VOID: case INT: case CHAR: case FLOAT: case STRING: break; default: fprintf(stderr, "undefined type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add symbol with null key\n"); return NULL; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = symbol_type;
		symbol->attr->return_type = data_type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * retrieve(Node * node, const char * key) {
	Symbol * s = table_find_back(node->context, key);
	if (s == NULL) {
		char msg[ERROR_MSG_BUFF];
		snprintf(msg, ERROR_MSG_BUFF, "semantic error: undeclared symbol '%s'", key);
		yyerror(msg);
		yynerrs++;
		return NULL;
	} else {
		node->symbol = s;
		return s;
	}
}

char * str_ptr(const char * prefix, void* address, const char * suffix) {
	unsigned long size = 24;
	if(prefix != NULL) { size += strlen(prefix); }
	if(suffix != NULL) { size += strlen(suffix); }
	char * str = calloc(size, sizeof(char));

	if (prefix == NULL && suffix == NULL) {
		snprintf(str, size, "%p", address);
	} else if (prefix != NULL && suffix == NULL) {
		snprintf(str, size, "%s:%p", prefix, address);
	} else if (prefix == NULL && suffix != NULL) {
		snprintf(str, size, "%p:%s", address, suffix);
	} else {
		snprintf(str, size, "%s:%p:%s", prefix, address, suffix);
	}
	return str;
}




// void resolve_types(Symbol * tgt, Symbol * src) {
void resolve_types(Node * tgtnode, Node * srcnode) {
	Symbol * tgt = tgtnode->symbol;
	Symbol * src = srcnode->symbol;
	if (tgt == NULL) { fprintf(stderr, "typecheck null target sybmol\n"); return; }
	if (src == NULL) { /*nothing to do, */ return; }

	// int tgtsym = tgt->attr->symbol_type;
	// int srcsym = src->attr->symbol_type;

	int tgtret = tgt->attr->return_type;
	int srcret = src->attr->return_type;

	if (tgtret == UNDEFINED) { tgt->attr->return_type = srcret; return; }
	if (tgtret == srcret)    { return; }

	switch (tgtret) {
		case FLOAT: switch(srcret) {
			case UNDEFINED: return;
			case STRING:    type_error(tgtnode, "float", "char[]"); return;
			case FLOAT:     return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      type_error(tgtnode, "float", "void"); return;
			default:        type_error(tgtnode, "float", "unknown type"); return;
		} break;
		case CHAR : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    type_error(tgtnode, "char", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = srcret; return;
			case CHAR:      tgt->attr->return_type = srcret; return;
			case INT :      tgt->attr->return_type = srcret; return;
			case VOID:      type_error(tgtnode, "char", "void"); return;
			default:        type_error(tgtnode, "char", "unknown type"); return;
		} break;
		case INT  : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    type_error(tgtnode, "int", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = srcret; return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      type_error(tgtnode, "int", "void"); return;
			default:        type_error(tgtnode, "int", "unknown type"); return;
		} break;
		case VOID : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    type_error(tgtnode, "void", "char[]"); return;
			case FLOAT:     type_error(tgtnode, "void", "float"); return;
			case CHAR:      type_error(tgtnode, "void", "char"); return;
			case INT :      type_error(tgtnode, "void", "int"); return;
			case VOID:      return;
			default:        type_error(tgtnode, "void", "unknown type"); return;
		} break;
		case STRING: switch(srcret) {
			case UNDEFINED: return;
			case STRING:    return;
			case FLOAT:     type_error(tgtnode, "char[]", "float"); return;
			case CHAR:      type_error(tgtnode, "char[]", "char"); return;
			case INT :      type_error(tgtnode, "char[]", "int"); return;
			case VOID:      type_error(tgtnode, "char[]", "void"); return;
			default:        type_error(tgtnode, "char[]", "unknown type"); return;
		} break;
		default: {
			++yynerrs;
			char msg[ERROR_MSG_BUFF];
			snprintf(msg, ERROR_MSG_BUFF, "semantic error: unable to determine type");
			yyerror(msg);
		} break;
	}
}

Symbol * typecheck_lazy(Node * node) {
	if (node == NULL) { return NULL; }

	if (node->symbol == NULL) {
		char * key = str_ptr("node", node, NULL);
		node->symbol = add_symbol(GENERIC_NODE, UNDEFINED, key);
		free(key);
	}

	Symbol * leaf_symbol;
	if (node->nleaves == 0) {
		/* do nothing */ 		
	} else if (node->nleaves == 1) {
		leaf_symbol = typecheck_lazy(node->leaf[0]);
		// resolve_types(node->symbol, leaf_symbol);
		resolve_types(node, node->leaf[0]);
	} else { //if (node->nleaves > 1) {
		for (int i = 0; i < node->nleaves; ++i) {
			leaf_symbol = typecheck_lazy(node->leaf[i]);
			// resolve_types(node->symbol, leaf_symbol);
			resolve_types(node, node->leaf[i]);
		}
	}
	
	return node->symbol;
}
