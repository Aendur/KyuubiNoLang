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
    IDENTIFIER = 262,
    STRING_LITERAL = 263,
    CONSTANT_FLOAT = 264,
    CONSTANT_INT = 265,
    CONSTANT_HEX = 266,
    CONSTANT_CHAR = 267,
    IF = 268,
    ELSE = 269,
    WHILE = 270,
    DO = 271,
    RETURN = 272,
    OP_INC = 273,
    OP_DEC = 274,
    OP_NOT = 275,
    OP_MUL = 276,
    OP_DIV = 277,
    OP_MOD = 278,
    OP_ADD = 279,
    OP_NEG = 280,
    OP_SUB = 281,
    OP_LT = 282,
    OP_GT = 283,
    OP_LE = 284,
    OP_GE = 285,
    OP_EQ = 286,
    OP_NE = 287,
    OP_OR = 288,
    OP_AND = 289,
    OP_ASSIGN = 290,
    UNRECOGNIZED_TOKEN = 291,
    INVALID_IDENTIFIER = 292,
    INVALID_CHAR_CONST = 293,
    LIST = 294,
    VARIABLE = 295,
    ARRAY = 296,
    ARRAY_INDEX = 297,
    FUNCTION = 298,
    FUNCTION_CALL = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "language.y"

	struct node * node;
	int ival;
	const char * sval;

#line 108 "src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);
/* "%code provides" blocks.  */
#line 68 "language.y"

	void yyerror (char const *);	

#line 125 "src/parser.h"

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
