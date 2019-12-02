//#include <stdio.h>

#define OPERATOR(op) OPERATOR_##op
#define OPERATOR_OP_ADD +
#define OPERATOR_OP_SUB -
#define OPERATOR_OP_MUL *
#define OPERATOR_OP_DIV /
#define OPERATOR_OP_MOD %

#define ATTR_VTYPE(type)   ATTR_VTYPE_##type
#define ATTR_VTYPE_INT     attr->value.ival
#define ATTR_VTYPE_CHAR    attr->value.cval
#define ATTR_VTYPE_FLOAT   attr->value.fval
#define CAST_TYPE(type)    CAST_TYPE_##type
#define CAST_TYPE_INT      (int)
#define CAST_TYPE_CHAR     (char)
#define CAST_TYPE_FLOAT    (float)
#define CAST_TYPE_VOID     

#define EVAL_CASE(op,ect0,ecast,ect1,ect2) \
	case ect2: tgt->attr->return_ect = ect0; tgt->ATTR_VTYPE(ect0) = (CAST_TYPE(ecast) op1->ATTR_VTYPE(ect1) OPERATOR(op) CAST_TYPE(ecast) op2->ATTR_VTYPE(ect1)); break;

#define EVAL_CASES_INT(op) \
	case INT: switch(type2) { \
		EVAL_CASE(op,INT,INT,INT,INT) \
		EVAL_CASE(op,INT,INT,INT,CHAR) \
		EVAL_CASE(op,FLOAT,FLOAT,INT,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_CHAR(op) \
	case CHAR: switch(type2) { \
		EVAL_CASE(op,INT,INT,CHAR,INT) \
		EVAL_CASE(op,CHAR,CHAR,CHAR,CHAR) \
		EVAL_CASE(op,FLOAT,FLOAT,CHAR,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_CHAR(op) \
	case FLOAT: switch(type2) { \
		EVAL_CASE(op,FLOAT,FLOAT,FLOAT,INT) \
		EVAL_CASE(op,FLOAT,FLOAT,FLOAT,CHAR) \
		EVAL_CASE(op,FLOAT,FLOAT,FLOAT,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \


#define EVALUATE(op,etype) \
switch(type1) { \
	EVAL_CASES_INT(op) \
	EVAL_CASES_CHAR(op) \
	EVAL_CASES_FLOAT(op) \
	default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
}

int main() {
	EVALUATE(OP_MOD,INT,);
}

