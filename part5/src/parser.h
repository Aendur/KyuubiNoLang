/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    INT = 259,
    FLOAT = 260,
    CHAR = 261,
    STRING = 262,
    UNDEFINED = 263,
    IDENTIFIER = 264,
    STRING_LITERAL = 265,
    CONSTANT_FLOAT = 266,
    CONSTANT_INT = 267,
    CONSTANT_HEX = 268,
    CONSTANT_CHAR = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    RETURN = 274,
    ASM = 275,
    OP_ASSIGN = 276,
    OP_OR = 277,
    OP_AND = 278,
    OP_EQ = 279,
    OP_NE = 280,
    OP_LT = 281,
    OP_LE = 282,
    OP_GE = 283,
    OP_GT = 284,
    OP_ADD = 285,
    OP_SUB = 286,
    OP_MUL = 287,
    OP_DIV = 288,
    OP_MOD = 289,
    OP_POS = 290,
    OP_NEG = 291,
    OP_NOT = 292,
    OP_INC = 293,
    OP_DEC = 294,
    UNRECOGNIZED_TOKEN = 295,
    INVALID_IDENTIFIER = 296,
    INVALID_CHAR_CONST = 297,
    LIST = 298,
    VARIABLE = 299,
    CONSTANT = 300,
    ARRAY = 301,
    ARRAY_INDEX = 302,
    FUNCTION = 303,
    FUNCTION_CALL = 304,
    VAR_DECL = 305,
    VAR_INIT = 306,
    ARR_DECL = 307,
    ARR_INIT = 308,
    GENERIC_NODE = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 70 "src/language.y"

	struct node     *node;
	int              ival;
	const  char     *sval;
	struct arg_list *al;

#line 119 "src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);
/* "%code provides" blocks.  */
#line 77 "src/language.y"

	void yyerror (char const *);
	struct table * add_symbol(int symbol_type, int data_type, const char * key);

#line 137 "src/parser.h"

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
