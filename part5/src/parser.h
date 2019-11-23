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
    OP_INC = 275,
    OP_DEC = 276,
    OP_NOT = 277,
    OP_MUL = 278,
    OP_DIV = 279,
    OP_MOD = 280,
    OP_ADD = 281,
    OP_SUB = 282,
    OP_NEG = 283,
    OP_LT = 284,
    OP_GT = 285,
    OP_LE = 286,
    OP_GE = 287,
    OP_EQ = 288,
    OP_NE = 289,
    OP_OR = 290,
    OP_AND = 291,
    OP_ASSIGN = 292,
    UNRECOGNIZED_TOKEN = 293,
    INVALID_IDENTIFIER = 294,
    INVALID_CHAR_CONST = 295,
    LIST = 296,
    VARIABLE = 297,
    CONSTANT = 298,
    ARRAY = 299,
    ARRAY_INDEX = 300,
    FUNCTION = 301,
    FUNCTION_CALL = 302,
    DECLARATION = 303,
    INITIALIZATION = 304,
    GENERIC_NODE = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "src/language.y"

	struct node     *node;
	int              ival;
	const  char     *sval;
	struct arg_list *al;

#line 115 "src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);
/* "%code provides" blocks.  */
#line 71 "src/language.y"

	void yyerror (char const *);
	struct table * add_symbol(int symbol_type, int data_type, const char * key);

#line 133 "src/parser.h"

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
