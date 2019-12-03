#ifndef EVALUATOR_H
#define EVALUATOR_H

#define OPERATOR(op) OPERATOR_##op
#define OPERATOR_OP_ADD +
#define OPERATOR_OP_SUB -
#define OPERATOR_OP_MUL *
#define OPERATOR_OP_DIV /
#define OPERATOR_OP_MOD %
#define OPERATOR_OP_AND &&
#define OPERATOR_OP_OR  ||
#define OPERATOR_OP_LT  <
#define OPERATOR_OP_LE  <=
#define OPERATOR_OP_EQ  ==
#define OPERATOR_OP_NE  !=
#define OPERATOR_OP_GE  >=
#define OPERATOR_OP_GT  >

#define ATTR_VTYPE(type)   ATTR_VTYPE_##type
#define ATTR_VTYPE_INT     attr->value.ival
#define ATTR_VTYPE_CHAR    attr->value.cval
#define ATTR_VTYPE_FLOAT   attr->value.fval
#define CAST_TYPE(type)    CAST_TYPE_##type
#define CAST_TYPE_INT      (int)
#define CAST_TYPE_CHAR     (char)
#define CAST_TYPE_FLOAT    (float)
#define CAST_TYPE_VOID     

#define RESOLVE(type1,type2) RESOLVE_##type1##type2
#define RESOLVE_INTINT INT
#define RESOLVE_INTCHAR INT
#define RESOLVE_INTFLOAT FLOAT
#define RESOLVE_CHARINT INT
#define RESOLVE_CHARCHAR CHAR
#define RESOLVE_CHARFLOAT FLOAT
#define RESOLVE_FLOATINT FLOAT
#define RESOLVE_FLOATCHAR FLOAT
#define RESOLVE_FLOATFLOAT FLOAT

#define EVAL_CASE(op,ect0,ecast,ect1,ect2) \
	case ect2: tgt->attr->return_type = ect0; tgt->ATTR_VTYPE(ect0) = (CAST_TYPE(ecast) op1->ATTR_VTYPE(ect1) OPERATOR(op) CAST_TYPE(ecast) op2->ATTR_VTYPE(ect2)); break;

#define EVAL_CASES_OP_ADD(ect1) EVAL_CASES_ARITHMETIC(OP_ADD,ect1)
#define EVAL_CASES_OP_SUB(ect1) EVAL_CASES_ARITHMETIC(OP_SUB,ect1)
#define EVAL_CASES_OP_MUL(ect1) EVAL_CASES_ARITHMETIC(OP_MUL,ect1)
#define EVAL_CASES_OP_DIV(ect1) EVAL_CASES_ARITHMETIC(OP_DIV,ect1)
#define EVAL_CASES_ARITHMETIC(op,ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(op,RESOLVE(ect1,INT),RESOLVE(ect1,INT),ect1,INT) \
		EVAL_CASE(op,RESOLVE(ect1,CHAR),RESOLVE(ect1,CHAR),ect1,CHAR) \
		EVAL_CASE(op,RESOLVE(ect1,FLOAT),RESOLVE(ect1,FLOAT),ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_OP_MOD(ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(OP_MOD,INT,INT,ect1,INT) \
		EVAL_CASE(OP_MOD,INT,INT,ect1,CHAR) \
		EVAL_CASE(OP_MOD,INT,INT,ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_OP_AND(ect1) EVAL_CASES_LOGICAL(OP_AND,ect1)
#define EVAL_CASES_OP_OR(ect1) EVAL_CASES_LOGICAL(OP_OR,ect1)
#define EVAL_CASES_OP_LT(ect1) EVAL_CASES_LOGICAL(OP_LT,ect1)
#define EVAL_CASES_OP_LE(ect1) EVAL_CASES_LOGICAL(OP_LE,ect1)
#define EVAL_CASES_OP_EQ(ect1) EVAL_CASES_LOGICAL(OP_EQ,ect1)
#define EVAL_CASES_OP_NE(ect1) EVAL_CASES_LOGICAL(OP_NE,ect1)
#define EVAL_CASES_OP_GE(ect1) EVAL_CASES_LOGICAL(OP_GE,ect1)
#define EVAL_CASES_OP_GT(ect1) EVAL_CASES_LOGICAL(OP_GT,ect1)
#define EVAL_CASES_LOGICAL(op,ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(op,INT,RESOLVE(ect1,INT),ect1,INT) \
		EVAL_CASE(op,INT,RESOLVE(ect1,CHAR),ect1,CHAR) \
		EVAL_CASE(op,INT,RESOLVE(ect1,FLOAT),ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVALUATE(op) \
	int type1 = op1->attr->return_type; \
	int type2 = op2->attr->return_type; \
	switch(type1) { \
		EVAL_CASES_##op(INT) \
		EVAL_CASES_##op(CHAR) \
		EVAL_CASES_##op(FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} \

// int main() {
// 	EVALUATE(OP_ADD);
// }
#endif
#ifndef EVALUATOR_H
#define EVALUATOR_H

#define OPERATOR(op) OPERATOR_##op
#define OPERATOR_OP_ADD +
#define OPERATOR_OP_SUB -
#define OPERATOR_OP_MUL *
#define OPERATOR_OP_DIV /
#define OPERATOR_OP_MOD %
#define OPERATOR_OP_AND &&
#define OPERATOR_OP_OR  ||
#define OPERATOR_OP_LT  <
#define OPERATOR_OP_LE  <=
#define OPERATOR_OP_EQ  ==
#define OPERATOR_OP_NE  !=
#define OPERATOR_OP_GE  >=
#define OPERATOR_OP_GT  >

#define ATTR_VTYPE(type)   ATTR_VTYPE_##type
#define ATTR_VTYPE_INT     attr->value.ival
#define ATTR_VTYPE_CHAR    attr->value.cval
#define ATTR_VTYPE_FLOAT   attr->value.fval
#define CAST_TYPE(type)    CAST_TYPE_##type
#define CAST_TYPE_INT      (int)
#define CAST_TYPE_CHAR     (char)
#define CAST_TYPE_FLOAT    (float)
#define CAST_TYPE_VOID     

#define RESOLVE(type1,type2) RESOLVE_##type1##type2
#define RESOLVE_INTINT INT
#define RESOLVE_INTCHAR INT
#define RESOLVE_INTFLOAT FLOAT
#define RESOLVE_CHARINT INT
#define RESOLVE_CHARCHAR CHAR
#define RESOLVE_CHARFLOAT FLOAT
#define RESOLVE_FLOATINT FLOAT
#define RESOLVE_FLOATCHAR FLOAT
#define RESOLVE_FLOATFLOAT FLOAT

#define EVAL_CASE(op,ect0,ecast,ect1,ect2) \
	case ect2: tgt->attr->return_type = ect0; tgt->ATTR_VTYPE(ect0) = (CAST_TYPE(ecast) op1->ATTR_VTYPE(ect1) OPERATOR(op) CAST_TYPE(ecast) op2->ATTR_VTYPE(ect1)); break;

#define EVAL_CASES_OP_ADD(ect1) EVAL_CASES_ARITHMETIC(OP_ADD,ect1)
#define EVAL_CASES_OP_SUB(ect1) EVAL_CASES_ARITHMETIC(OP_SUB,ect1)
#define EVAL_CASES_OP_MUL(ect1) EVAL_CASES_ARITHMETIC(OP_MUL,ect1)
#define EVAL_CASES_OP_DIV(ect1) EVAL_CASES_ARITHMETIC(OP_DIV,ect1)
#define EVAL_CASES_ARITHMETIC(op,ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(op,RESOLVE(ect1,INT),RESOLVE(ect1,INT),ect1,INT) \
		EVAL_CASE(op,RESOLVE(ect1,CHAR),RESOLVE(ect1,CHAR),ect1,CHAR) \
		EVAL_CASE(op,RESOLVE(ect1,FLOAT),RESOLVE(ect1,FLOAT),ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_OP_MOD(ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(OP_MOD,INT,INT,ect1,INT) \
		EVAL_CASE(OP_MOD,INT,INT,ect1,CHAR) \
		EVAL_CASE(OP_MOD,INT,INT,ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVAL_CASES_OP_AND(ect1) EVAL_CASES_LOGICAL(OP_AND,ect1)
#define EVAL_CASES_OP_OR(ect1) EVAL_CASES_LOGICAL(OP_OR,ect1)
#define EVAL_CASES_OP_LT(ect1) EVAL_CASES_LOGICAL(OP_LT,ect1)
#define EVAL_CASES_OP_LE(ect1) EVAL_CASES_LOGICAL(OP_LE,ect1)
#define EVAL_CASES_OP_EQ(ect1) EVAL_CASES_LOGICAL(OP_EQ,ect1)
#define EVAL_CASES_OP_NE(ect1) EVAL_CASES_LOGICAL(OP_NE,ect1)
#define EVAL_CASES_OP_GE(ect1) EVAL_CASES_LOGICAL(OP_GE,ect1)
#define EVAL_CASES_OP_GT(ect1) EVAL_CASES_LOGICAL(OP_GT,ect1)
#define EVAL_CASES_LOGICAL(op,ect1) \
	case ect1: switch(type2) { \
		EVAL_CASE(op,INT,RESOLVE(ect1,INT),ect1,INT) \
		EVAL_CASE(op,INT,RESOLVE(ect1,CHAR),ect1,CHAR) \
		EVAL_CASE(op,INT,RESOLVE(ect1,FLOAT),ect1,FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} break; \

#define EVALUATE(op) \
	int type1 = op1->attr->return_type; \
	int type2 = op2->attr->return_type; \
	switch(type1) { \
		EVAL_CASES_##op(INT) \
		EVAL_CASES_##op(CHAR) \
		EVAL_CASES_##op(FLOAT) \
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break; \
	} \

// int main() {
// 	EVALUATE(OP_ADD);
// }
#endif
