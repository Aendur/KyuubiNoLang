/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#include "parser.h"

/* Second part of user prologue.  */
#line 35 "language.y"

#include <stdio.h>

#line 97 "src/parser.c"


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6966

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

#define YYUNDEFTOK  2
#define YYMAXUTOK   280

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      33,    34,    39,    37,    32,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      35,    27,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    43,    47,    48,    49,    50,    51,    55,
      56,    60,    61,    62,    66,    67,    68,    72,    73,    77,
      78,    79,    80,    84,    85,    89,    90,    94,    95,    99,
     100,   101,   102,   103,   104,   108,   109,   113,   114,   118,
     119,   123,   124,   128,   129,   133,   134,   138,   139,   140,
     144,   145,   146,   147,   148,   152,   153,   154,   158,   159,
     160,   161,   165,   166,   167,   168,   169,   170,   174,   175,
     176,   177,   178,   182,   183,   187,   188,   189,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR", "IF",
  "ELSE", "WHILE", "DO", "RETURN", "OP_INC", "OP_DEC", "OP_GE", "OP_LE",
  "OP_EQ", "OP_NE", "OP_AND", "OP_OR", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "UNRECOGNIZED_TOKEN", "INVALID_IDENTIFIER",
  "INVALID_CHAR_CONST", "';'", "'='", "'['", "']'", "'{'", "'}'", "','",
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "declaration_list", "declaration", "init_declarator", "declarator",
  "initializer", "initializer_list", "function_declarator",
  "parameter_list", "compound_statement", "statement_list", "statement",
  "selection_statement", "iteration_statement", "return_statement",
  "assignment_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "postfix_expression",
  "primary_expression", "argument_list", "type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37
};
# endif

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1175,    19,   -18,     4,    54,    72,  1066,  1151,    56,   189,
      53,    80,  1188,   622,  1209,  -137,  1253,  1265,   422,  1356,
    1379,   389,  2953,    81,   100,   128,   636,  2983,  3013,  3043,
     699,  1386,   645,   135,   861,   895,   970,  1117,   140,   170,
     109,   252,   450,  6828,  1185,   969,  3073,  3103,   190,   564,
     204,   229,   317,    37,   645,   645,   268,   260,   248,  1164,
    1504,  1241,  1394,  1651,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,  3133,  3163,   691,
     695,    13,   331,   304,   353,   394,   285,   277,    -2,    75,
      16,   154,   283,   286,   309,  3193,   363,  4903,   828,  6834,
    6857,  1456,  2032,  6565,  6571,  1842,  6335,  4933,  4963,  4993,
     230,   326,  3223,   255,   276,   342,   282,   464,   106,   205,
     682,   224,   360,   374,   645,  3253,   717,  3283,   386,   479,
     291,   323,  1771,   393,   346,   374,   411,  1843,  1945,  1995,
    3313,  3343,  3373,  3403,   645,   111,    -3,    10,   922,   744,
    1300,  3433,  3463,  1263,  2263,  2293,  2323,   564,   645,   498,
      93,   334,   582,  6747,  1073,  6251,  2353,  2383,  3493,  3523,
    3553,  3583,   645,    -7,   138,   445,  6870,  6596,  6363,  3613,
    3643,   388,  5023,  5053,  5083,  5113,   645,  5143,  2413,  2443,
    2473,  2503,   645,   155,    62,    -9,  1880,  1015,  1422,  2533,
    2563,  5173,  5203,   695,    64,  2033,  2086,   432,  2117,   415,
     733,   733,   733,   733,   733,   733,   733,   733,   733,   733,
     733,   733,   733,  3673,  3703,   733,   695,    86,   531,   420,
     785,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,  2593,  2623,   785,   695,    89,   423,   818,
     818,   818,   818,   818,   818,   818,   818,   818,   818,   818,
     818,   818,  3733,  3763,   818,   695,   117,   264,   426,   431,
     909,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   909,   909,  2653,  2683,   909,   695,   120,   466,  5233,
     364,   366,  2148,  2179,  2210,   487,  3793,  5263,  5293,  5323,
    5353,   645,   160,  5383,  5413,   345,  6893,  6899,  6602,  6627,
    6633,  6639,  6371,  6399,  5443,  5473,  5503,   146,   486,  3823,
     373,   535,   549,  2713,  1530,  3853,  3883,  3913,   645,   382,
    3943,  3973,   933,  6770,  6776,  1681,  1870,  6468,  6476,  6262,
    6290,  4003,  4033,  4063,   275,   506,  2743,   406,  4093,  5533,
    5563,  5593,  5623,   645,   322,  5653,  5683,   559,  6907,  6930,
    6664,  6689,  6714,  6739,  6412,  6440,  5713,  5743,  5773,     1,
     552,  4123,   416,   651,  5803,  2773,  4153,  4183,  4213,  4243,
     645,    70,  4273,  4303,    59,  6799,  6805,  6501,  6508,  6533,
    6540,  6300,  6328,  4333,  4363,  4393,   256,   554,  2803,   502,
    5833,  5863,   425,  2241,   557,  5893,  5923,   695,   126,  4423,
    4453,   542,   558,  4483,  4513,   695,   142,  2833,  2863,   562,
    5953,  5983,   695,   148,  4543,  4573,   523,   583,   581,  4603,
    4633,   695,   151,  2893,  2923,  6013,   587,  6043,   526,  4663,
     592,  4693,   590,  6073,   601,  6103,   602,   607,  4723,   606,
    4753,   617,  6133,  6163,  4783,  4813,  6193,  6223,  4843,  4873
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,   632,   177,   -47,   -17,   436,  -137,  -137,    -6,
    -136,     3,  -137,  -137,  -137,  1787,  1502,  1400,  1329,  1080,
     809,   538,   -13,   267,  -132,    11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    33,     9,    83,    84,    10,    91,    14,
      34,    35,    36,    37,    38,   113,   145,   146,   147,   148,
     149,   150,   151,   187,   114,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    50,   -75,   208,    20,    46,    90,   272,   273,   -45,
     -45,    11,   249,    46,   188,   211,   -43,    11,   -75,    56,
     249,    46,   -41,   -45,   -76,   -45,   212,   213,   -45,   -45,
     -42,   -43,   119,   189,   190,   191,   166,    61,    87,   179,
      88,     3,     4,     5,   -45,    12,   192,   112,   -23,    13,
     -23,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,   107,   108,   109,   181,   188,    97,   179,   199,   292,
     294,    89,   290,   130,   -77,   272,   273,   -46,   -46,    19,
     271,   -43,    17,    13,   189,   190,   191,   188,   271,   -44,
     188,   -46,   -78,   -46,   -43,   320,   -43,   192,   289,   129,
      21,   -20,   -44,   166,   -44,   -20,   189,   190,   191,   189,
     190,   191,   230,   199,    54,   347,   131,   132,   188,   192,
     319,   188,   192,   346,   -41,   -41,    46,   188,    64,   137,
     210,   181,   -22,    55,   372,   -41,   -22,   189,   190,   191,
     189,   190,   191,   188,   166,   -41,   189,   190,   191,   188,
     192,   371,   188,   192,   398,   399,   250,   -43,   139,   192,
     437,    59,   189,   190,   191,   210,    62,   -43,   189,   190,
     191,   189,   190,   191,   270,   192,   441,     8,   211,   -44,
     -42,   192,   445,     8,   192,   450,   120,   -41,   121,   -41,
     179,   199,    46,    46,   -44,    46,    63,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   314,   315,   316,
      82,    61,   303,   179,   199,    -9,    18,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   341,   342,   343,
     -10,   -21,   330,   179,   199,   -21,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   366,   367,   368,    64,
     -19,   355,   179,   199,   -19,   -14,   -42,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   393,   394,   395,
      65,   -43,   382,   179,   199,   270,   438,    94,   -43,    46,
      47,    46,    95,   153,   442,    47,   -40,   -73,   -42,   -73,
     -42,   446,   373,    47,   230,    61,   -11,    61,   -11,   152,
     451,    47,   154,   155,   156,   129,   -42,   -42,   126,   166,
     127,   118,   157,   128,   117,   158,   167,   122,   168,   180,
     123,   152,   152,   -24,   -35,   -24,   -35,   -35,   -35,   -35,
     -35,   135,   -35,   -35,   -35,   -17,   -17,   169,   170,   171,
     250,   -44,   124,   -35,   -35,   -35,    85,   180,   200,   -35,
     172,   -44,   231,   -43,   -35,   125,   -35,   -11,   -11,    52,
     179,   212,   213,   -46,   -46,   -43,   -43,   -25,   -15,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -74,   -46,
     -74,    65,   -44,   167,   115,   116,   -25,   -25,   -25,   -44,
     205,   152,   -25,   200,   179,   199,   126,   -25,   401,   -25,
     231,   -44,   179,   199,   206,   126,    47,   410,   267,   179,
     199,   152,   -16,   -44,   -44,   -11,   -11,    52,   179,   199,
     -12,   -12,    53,    22,   167,   152,   -26,   136,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   138,   126,   152,
     418,   -25,    27,    28,    29,   -26,   -26,   -26,   126,   296,
     425,   -26,    49,   152,   323,    32,   -26,   348,   -26,   152,
     374,   251,   252,   -45,   -45,   375,    66,    67,   -45,   -45,
     180,   200,    47,    47,   -45,    47,   -45,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     -13,   -13,   304,   180,   200,   400,   -26,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     -18,   -18,   331,   180,   200,   409,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   -14,
     -14,   356,   180,   200,   126,   417,   434,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     153,    45,   383,   180,   200,   -12,    45,   -12,   126,    47,
     453,    47,   321,   322,    45,   153,   -15,   -15,   152,   154,
     155,   156,    45,   -16,   -16,   251,   252,   -46,   -46,   157,
     411,   424,   158,   433,   154,   155,   156,   165,   -46,   167,
     178,   435,   439,   228,   157,   152,   443,   158,   232,   233,
     -45,   -45,    45,    45,    45,    45,    45,    45,    45,    45,
     105,   106,   447,   -45,   -45,   448,   452,    45,   178,   198,
     152,   454,   126,    22,   455,     2,     3,     4,     5,    23,
     456,    24,    25,    26,   126,   458,   457,    22,    16,   -13,
     180,   -13,    27,    28,    29,     0,   140,   152,    30,   126,
       0,   459,   168,    31,   165,    32,    27,    28,    29,     0,
       0,     0,   -39,     0,   198,   141,   142,   143,     0,    32,
       0,   169,   170,   171,   180,   200,     0,    45,   144,     0,
     426,     0,   180,   200,   172,     2,     3,     4,     5,   180,
     200,     0,   182,     0,     0,   165,   168,     0,   180,   200,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   183,   184,   185,     0,   169,   170,   171,   188,   -29,
     -29,   -29,     0,     0,   186,   -29,     0,     0,   172,     0,
     -29,     0,   -29,     0,   297,     0,     0,   189,   190,   191,
       0,   178,   198,    45,    45,     0,    45,     0,     0,     0,
     192,     0,     0,   298,   299,   300,   312,   313,   -50,   -50,
     -50,   -50,   -50,   -50,   178,   198,   301,     0,   165,   165,
     165,   165,   165,   165,   165,   165,   339,   340,   -50,   -50,
     -50,   218,   219,   165,   178,   198,   324,   178,   178,   178,
     178,   178,   178,   178,   178,   364,   365,     0,     0,     0,
       0,     0,   178,   178,   198,   325,   326,   327,   198,   198,
     198,   198,   198,   198,   198,   198,   391,   392,   328,   349,
       0,     0,    44,   198,   178,   198,     0,    44,     0,     0,
      45,     0,    45,     0,     0,    44,     0,     0,   350,   351,
     352,     0,     0,    44,    66,    67,   -46,   -46,     0,     0,
       0,   353,     0,     0,   -46,     0,     0,     0,   164,     0,
     165,   177,    22,     0,     2,     3,     4,     5,    23,     0,
      24,    25,    26,    44,    44,    44,    44,   101,   102,   103,
     104,    27,    28,    29,     0,     0,     0,    30,    44,   177,
     197,     0,    60,     0,    32,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,     0,     0,
     376,   178,     0,     0,     0,   -27,   -27,   -27,     0,     0,
       0,   -27,     0,     0,     0,   164,   -27,     0,   -27,   377,
     378,   379,     0,     0,     0,   197,   214,   215,   -47,   -47,
     -47,   -47,   380,     0,     0,   178,   198,     0,    44,   232,
     233,   -46,   -46,   178,   198,     0,   -47,   216,   217,     0,
     178,   198,     0,     0,   -46,   -46,   164,     0,     0,   178,
     198,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -55,   -55,   -55,   -55,   -55,   -55,     0,
     -32,   -32,   -32,     0,     0,   -55,   -32,     0,     0,     0,
       0,   -32,     0,   -32,   -55,   -55,   -55,   -55,    74,    75,
      76,     0,   177,   197,    44,    44,     0,    44,     0,     0,
       0,     0,     0,   308,   309,   310,   311,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   177,   197,     0,     0,   164,
     164,   164,   164,   335,   336,   337,   338,   -50,     0,   -50,
     -50,   -50,   278,   279,   164,   177,   197,     0,   177,   177,
     177,   177,   360,   361,   362,   363,    15,     1,     0,     2,
       3,     4,     5,   177,   177,   197,     0,     0,     0,   197,
     197,   197,   197,   387,   388,   389,   390,   -50,   -50,   -50,
     -50,   -50,   -50,    43,   197,   177,   197,     0,    43,     0,
       0,    44,     0,    44,   -50,   -50,    43,     0,   -50,   -50,
     238,   239,     0,     0,    43,     0,     0,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   163,
       0,   164,   176,     0,     0,     0,     0,   -33,   -33,   -33,
       0,     0,     0,   -33,    43,    43,    99,   100,   -33,     0,
     -33,    -2,    -2,     0,    -2,    -2,    -2,    -2,     0,    43,
     176,   196,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,     1,     0,     2,     3,
       4,     5,   177,     0,   -30,   -30,   -30,     0,    -7,    -7,
     -30,    -7,    -7,    -7,    -7,   -30,   163,   -30,     0,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   196,     0,     0,    -8,
      -8,   -50,    -8,    -8,    -8,    -8,   177,   197,     0,    43,
     -50,   -50,    72,    73,   177,   197,     0,     0,     0,     0,
       0,   177,   197,     0,     0,     0,     0,   163,     0,     0,
     177,   197,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,    -3,    -3,     0,    -3,    -3,    -3,    -3,
       0,   -28,   -28,   -28,     0,    -6,    -6,   -28,    -6,    -6,
      -6,    -6,   -28,     0,   -28,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   176,   196,    43,    43,     0,    43,     0,
     -72,   -72,   306,   307,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   176,   196,     0,     0,
     163,   163,   333,   334,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,     0,   163,   176,   196,     0,   176,
     176,   358,   359,     0,   -55,   -55,   -55,   -55,   -55,   220,
     221,   222,    42,     0,   176,   176,   196,    42,     0,     0,
     196,   196,   385,   386,     0,    42,    -4,    -4,     0,    -4,
      -4,    -4,    -4,    42,     0,   196,   176,   196,     0,     0,
       0,     0,    43,     0,    43,     0,     0,     0,   162,    -5,
      -5,   175,    -5,    -5,    -5,    -5,   -25,   -25,     0,   -25,
     -25,   -25,   -25,    42,    98,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   163,   -34,   -34,   -34,     0,     0,    42,   175,
     195,     0,     0,    41,   -34,   -34,   -34,     0,    41,     0,
     -34,     0,     0,     0,     0,   -34,    41,   -34,     0,     0,
       0,     0,     0,     0,    41,     0,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,   162,     0,     0,     0,   161,
       0,     0,   174,   176,   -55,   195,   -55,   -55,   -55,   -55,
     -55,   280,   281,   282,    96,     0,     0,     0,    42,     0,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,    41,
     174,   194,   -54,     0,     0,     0,   162,   176,   196,     0,
       0,   -54,   -54,    72,    73,   176,   196,     0,     0,     0,
       0,     0,   176,   196,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   176,   196,     0,     0,    40,   161,     0,     0,     0,
      40,     0,     0,     0,     0,     0,   194,     0,    40,     0,
       0,     0,   175,   195,    42,    42,    40,    42,     0,    41,
     305,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   160,     0,     0,   173,   175,   195,   161,   -72,   162,
     332,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   162,   175,   195,     0,   175,   357,
       0,   110,   173,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,   175,   195,     0,     0,     0,   195,
     384,     0,     0,   174,   194,    41,    41,     0,    41,     0,
     302,     0,     0,     0,   195,   175,   195,     0,   160,     0,
       0,    42,     0,    42,     0,     0,   174,   194,   193,     0,
     329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,   161,   174,   194,     0,   354,
       0,   162,   -31,     0,   -31,   -31,   -31,   -31,   -31,   160,
     -31,   -31,   -31,     0,   174,   174,   194,     0,     0,     0,
     381,   -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,
       0,     0,   -31,     0,   -31,   194,   174,   194,     0,     0,
       0,     0,    41,     0,    41,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   175,     0,     0,   173,   193,    40,    40,     0,
      40,     0,   -54,   -54,     0,     0,   -54,   -54,   238,   239,
       0,     0,   161,     0,     0,     0,     0,   317,   173,   193,
       0,     0,     0,     0,     0,     0,   175,   195,     0,     0,
       0,     0,     0,     0,   175,   195,     0,   344,   173,   193,
       0,   175,   195,     0,     0,     0,     0,     0,     0,     0,
     175,   195,     0,     0,     0,     0,   369,   173,   193,     0,
       0,     0,   -37,   174,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,     0,     0,     0,     0,   396,   173,   193,
       0,   -37,   -37,   -37,    40,     0,    40,   -37,     0,     0,
      39,     0,   -37,     0,   -37,    51,     0,   174,   194,     0,
       0,     0,     0,    57,     0,   174,   194,     0,     0,    58,
       0,    39,   174,   194,   160,     0,     0,     0,     0,     0,
       0,   174,   194,     0,     0,     0,   159,     0,     0,    86,
       0,    92,    93,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -36,   -36,   -36,     0,   111,   -56,   -36,
       0,     0,     0,     0,   -36,   173,   -36,   -56,   -56,   -56,
     -56,    74,    75,    76,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,   274,   275,   -47,   -47,   -47,   -47,
       0,   -53,   -53,   159,     0,   -53,   -53,   238,   239,   173,
     193,   133,   -47,   134,   -47,   276,   277,   173,   193,     0,
       0,     0,     0,     0,   173,   193,    39,     0,     0,     0,
       0,   209,     0,   173,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,   229,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,     0,     0,   248,
       0,     0,     0,     0,     0,   -38,   -38,   -38,     0,     0,
       0,   -38,     0,   268,     0,     0,   -38,     0,   -38,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,    39,    39,     0,    39,    22,     0,     2,     3,
       4,     5,    23,     0,    24,    25,    26,     0,     0,     0,
       0,     0,     0,   318,     0,    27,    28,    29,     0,     0,
       0,    30,     0,     0,     0,     0,   207,     0,    32,     0,
       0,     0,     0,   345,    22,     0,     2,     3,     4,     5,
      23,     0,    24,    25,    26,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   370,    27,    28,    29,     0,     0,   -53,    30,
       0,     0,     0,     0,   291,     0,    32,   -53,   -53,    72,
      73,     0,     0,   397,     0,     0,     0,     0,     0,    39,
       0,    39,     0,     0,     0,     0,     0,    22,   404,     2,
       3,     4,     5,    23,     0,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,   159,
       0,     0,    30,     0,     0,   412,     0,   293,    22,    32,
       2,     3,     4,     5,    23,     0,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
     419,     0,     0,    30,     0,     0,     0,     0,   295,    22,
      32,     2,     3,     4,     5,    23,     0,    24,    25,    26,
     427,     0,     0,     0,     0,     0,     0,   428,    27,    28,
      29,     0,     0,     0,    30,     0,     0,     0,     0,   402,
     -25,    32,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,     0,     0,     0,   436,     0,     0,     0,     0,   -25,
     -25,   -25,   440,     0,     0,   -25,     0,     0,     0,   444,
     -25,    22,   -25,     2,     3,     4,     5,    23,   449,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,     0,    30,     0,     0,     0,
       0,   403,   -26,    32,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,     0,     0,     0,   -26,     0,     0,
       0,     0,   -26,     0,   -26,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   243,   244,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
     245,   246,     0,     0,   -58,   -58,   247,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,     0,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   283,   284,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
     285,   286,     0,     0,     0,   -58,   287,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,    77,    78,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,   -58,
      79,    80,     0,     0,     0,     0,    81,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,   -62,
     -62,   -62,     0,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,   -67,
     -67,   -67,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,     0,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -65,     0,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   223,   224,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
     225,   226,     0,     0,     0,     0,   227,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   262,   263,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
     264,   265,   -58,     0,     0,     0,   266,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   413,   414,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,     0,   -58,   -58,   416,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,     0,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   413,   414,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,     0,   -59,   -59,   416,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   413,   414,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,     0,   -60,   -60,   416,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   413,   414,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   415,     0,     0,   -61,   -61,   416,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   429,   430,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   431,     0,     0,     0,   -58,   432,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   429,   430,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   431,     0,     0,     0,   -59,   432,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   429,   430,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   431,     0,     0,     0,   -60,   432,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   429,   430,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   431,     0,     0,     0,   -61,   432,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   201,   202,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,   -58,
       0,   203,     0,     0,     0,     0,   204,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   201,   202,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,   -59,
       0,   203,     0,     0,     0,     0,   204,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   201,   202,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,   -60,
       0,   203,     0,     0,     0,     0,   204,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   201,   202,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,   -61,
       0,   203,     0,     0,     0,     0,   204,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -72,
       0,   -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -68,
       0,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -69,
       0,   -69,     0,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
       0,   -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,   -62,
       0,   -62,     0,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
       0,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,   -67,
       0,   -67,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
       0,   -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   405,   406,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,     0,     0,   408,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   405,   406,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,     0,     0,   408,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   405,   406,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,     0,     0,   408,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   405,   406,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,     0,     0,   408,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   420,   421,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   -58,     0,     0,     0,   423,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   420,   421,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   -59,     0,     0,     0,   423,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   420,   421,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   -60,     0,     0,     0,   423,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   420,   421,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   422,   -61,     0,     0,     0,   423,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -71,
       0,   -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,   -63,
       0,   -63,     0,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -65,
       0,   -65,     0,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -55,   -55,     0,     0,   -55,   -55,   -55,   -55,
     240,   241,   242,   -56,   -56,     0,     0,   -56,   -56,   -56,
     -56,   240,   241,   242,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -57,   -57,     0,     0,   -57,   -57,   -57,   -57,   240,
     241,   242,   -56,     0,   -56,   -56,   -56,   -56,   -56,   280,
     281,   282,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   280,   281,   282,
     -57,   -57,   -57,   -57,    74,    75,    76,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   -55,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   259,   260,   261,   -56,   -56,   -56,   -56,   -56,
     220,   221,   222,   -57,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -57,   -57,   -57,   -57,   -57,   220,   221,
     222,   -56,     0,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   259,   260,   261,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -57,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   259,
     260,   261,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,   -51,
     -51,     0,     0,   -51,   -51,   238,   239,   -52,   -52,     0,
       0,   -52,   -52,   238,   239,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,     0,     0,   -54,     0,   -54,   -54,   -54,   278,   279,
     -53,     0,   -53,   -53,   -53,   278,   279,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -52,   -52,   -52,   -52,   -52,   -52,
       0,     0,     0,     0,     0,   -51,     0,   -51,   -51,   -51,
     278,   279,   -52,     0,   -52,   -52,   -52,   278,   279,   -51,
     -51,   -51,   -51,   -51,   -51,   -52,   -52,   -52,   -52,   -52,
     -52,   -51,     0,     0,     0,     0,     0,   -52,     0,     0,
     -51,   -51,    72,    73,     0,     0,   -52,   -52,    72,    73,
     -50,   -50,   -50,   -50,   -50,   -50,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,   -50,     0,     0,     0,     0,
       0,   -50,   -50,   257,   258,     0,   -54,   -54,   -54,   218,
     219,   -53,   -53,   -53,   -53,   -53,   -53,   -51,   -51,   -51,
     -51,   -51,   -51,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,   -53,   -53,   -53,   218,   219,     0,   -51,   -51,   -51,
     218,   219,     0,   -52,   -52,   -52,   218,   219,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,     0,   -54,
     -54,   257,   258,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,   -53,   -53,   257,   258,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,     0,     0,     0,     0,     0,   -51,
     -51,   257,   258,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,   234,   235,   -47,   -47,   -47,   -47,     0,   -52,     0,
       0,     0,     0,     0,   -52,   -52,   257,   258,   -47,   -47,
       0,     0,   236,   237,   234,   235,   -48,   -48,   -48,   -48,
     234,   235,   -49,   -49,   -49,   -49,     0,     0,     0,     0,
       0,   -48,   -48,     0,     0,   236,   237,   -49,   -49,     0,
       0,   236,   237,   274,   275,   -48,   -48,   -48,   -48,   274,
     275,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -48,     0,   -48,   276,   277,     0,   -49,     0,   -49,
     276,   277,    68,    69,   -47,   -47,   -47,   -47,    68,    69,
     -48,   -48,   -48,   -48,   -47,     0,     0,     0,     0,     0,
     -48,     0,     0,    70,    71,     0,     0,     0,     0,    70,
      71,    68,    69,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,   -49,   253,   254,   -47,   -47,   -47,   -47,
       0,     0,    70,    71,     0,     0,     0,     0,     0,   -47,
       0,     0,     0,     0,     0,   255,   256,   214,   215,   -48,
     -48,   -48,   -48,   214,   215,   -49,   -49,   -49,   -49,     0,
       0,   253,   254,   -48,   -48,   -48,   -48,   -48,   216,   217,
       0,     0,     0,   -49,   216,   217,   -48,     0,     0,     0,
       0,     0,   255,   256,   253,   254,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,     0,     0,   255,   256
};

static const yytype_int16 yycheck[] =
{
      13,    18,    20,   139,    10,    18,    53,    16,    17,    18,
      19,     0,    19,    26,     1,    18,    19,     6,    20,    25,
      19,    34,    29,    32,    20,    34,    16,    17,    18,    19,
      29,    34,    34,    20,    21,    22,    49,    34,     1,    52,
       3,     4,     5,     6,    34,    26,    33,    34,    32,    30,
      34,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    53,     1,    79,    80,    81,   205,
     206,    34,   204,   120,    20,    16,    17,    18,    19,    26,
      18,    19,    26,    30,    20,    21,    22,     1,    18,    19,
       1,    32,    20,    34,    32,   227,    34,    33,    34,   116,
      20,    26,    32,   116,    34,    30,    20,    21,    22,    20,
      21,    22,    19,   126,    33,   247,   122,   123,     1,    33,
      34,     1,    33,    34,    31,    32,   139,     1,    19,   135,
      19,   120,    26,    33,   266,    26,    30,    20,    21,    22,
      20,    21,    22,     1,   157,    34,    20,    21,    22,     1,
      33,    34,     1,    33,    34,   287,    18,    19,    30,    33,
      34,    26,    20,    21,    22,    19,    26,    29,    20,    21,
      22,    20,    21,    22,    19,    33,    34,     0,    18,    19,
      34,    33,    34,     6,    33,    34,    32,    32,    34,    34,
     203,   204,   205,   206,    34,   208,    26,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      20,   208,   225,   226,   227,    26,    27,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
      26,    26,   245,   246,   247,    30,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,    19,
      26,   264,   265,   266,    30,    26,    26,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
      18,    19,   285,   286,   287,    19,   408,     9,    26,   292,
      13,   294,    34,     1,   416,    18,    26,    32,    32,    34,
      34,   423,    28,    26,    19,   292,    32,   294,    34,    32,
     432,    34,    20,    21,    22,   322,    31,    32,    32,   322,
      34,    34,    30,    31,    29,    33,    49,    34,     1,    52,
      34,    54,    55,    32,     1,    34,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    31,    32,    20,    21,    22,
      18,    19,    33,    20,    21,    22,    29,    80,    81,    26,
      33,    29,    18,    19,    31,    29,    33,    26,    27,    28,
     373,    16,    17,    18,    19,    31,    32,     1,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    32,    34,
      34,    18,    19,   116,    31,    32,    20,    21,    22,    26,
      30,   124,    26,   126,   407,   408,    32,    31,    34,    33,
      18,    19,   415,   416,    30,    32,   139,    34,    20,   422,
     423,   144,    26,    31,    32,    26,    27,    28,   431,   432,
      26,    27,    33,     1,   157,   158,     1,    34,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    26,    32,   172,
      34,     9,    20,    21,    22,    20,    21,    22,    32,    34,
      34,    26,    30,   186,    34,    33,    31,    34,    33,   192,
      34,    16,    17,    18,    19,    34,    16,    17,    18,    19,
     203,   204,   205,   206,    29,   208,    26,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      26,    27,   225,   226,   227,    29,     9,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
      31,    32,   245,   246,   247,    29,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,    31,
      32,   264,   265,   266,    32,    29,    34,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       1,    13,   285,   286,   287,    32,    18,    34,    32,   292,
      34,   294,    31,    32,    26,     1,    31,    32,   301,    20,
      21,    22,    34,    31,    32,    16,    17,    18,    19,    30,
      31,    29,    33,    29,    20,    21,    22,    49,    29,   322,
      52,    34,    34,   157,    30,   328,    34,    33,    16,    17,
      18,    19,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    29,    31,    32,    34,    29,    79,    80,    81,
     353,    29,    32,     1,    34,     3,     4,     5,     6,     7,
      29,     9,    10,    11,    32,    29,    34,     1,     6,    32,
     373,    34,    20,    21,    22,    -1,     1,   380,    26,    32,
      -1,    34,     1,    31,   116,    33,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,   126,    20,    21,    22,    -1,    33,
      -1,    20,    21,    22,   407,   408,    -1,   139,    33,    -1,
      29,    -1,   415,   416,    33,     3,     4,     5,     6,   422,
     423,    -1,     1,    -1,    -1,   157,     1,    -1,   431,   432,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    20,    21,    22,    -1,    20,    21,    22,     1,    20,
      21,    22,    -1,    -1,    33,    26,    -1,    -1,    33,    -1,
      31,    -1,    33,    -1,     1,    -1,    -1,    20,    21,    22,
      -1,   203,   204,   205,   206,    -1,   208,    -1,    -1,    -1,
      33,    -1,    -1,    20,    21,    22,   218,   219,    14,    15,
      16,    17,    18,    19,   226,   227,    33,    -1,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,    34,    35,
      36,    37,    38,   245,   246,   247,     1,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    -1,    -1,    -1,
      -1,    -1,   264,   265,   266,    20,    21,    22,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,    33,     1,
      -1,    -1,    13,   285,   286,   287,    -1,    18,    -1,    -1,
     292,    -1,   294,    -1,    -1,    26,    -1,    -1,    20,    21,
      22,    -1,    -1,    34,    16,    17,    18,    19,    -1,    -1,
      -1,    33,    -1,    -1,    26,    -1,    -1,    -1,    49,    -1,
     322,    52,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    64,    65,    66,    67,    68,    69,    70,
      71,    20,    21,    22,    -1,    -1,    -1,    26,    79,    80,
      81,    -1,    31,    -1,    33,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
       1,   373,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,   116,    31,    -1,    33,    20,
      21,    22,    -1,    -1,    -1,   126,    14,    15,    16,    17,
      18,    19,    33,    -1,    -1,   407,   408,    -1,   139,    16,
      17,    18,    19,   415,   416,    -1,    34,    35,    36,    -1,
     422,   423,    -1,    -1,    31,    32,   157,    -1,    -1,   431,
     432,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    14,    15,    16,    17,    18,    19,    -1,
      20,    21,    22,    -1,    -1,    26,    26,    -1,    -1,    -1,
      -1,    31,    -1,    33,    35,    36,    37,    38,    39,    40,
      41,    -1,   203,   204,   205,   206,    -1,   208,    -1,    -1,
      -1,    -1,    -1,   214,   215,   216,   217,    -1,    -1,    14,
      15,    16,    17,    18,    19,   226,   227,    -1,    -1,   230,
     231,   232,   233,   234,   235,   236,   237,    32,    -1,    34,
      35,    36,    37,    38,   245,   246,   247,    -1,   249,   250,
     251,   252,   253,   254,   255,   256,     0,     1,    -1,     3,
       4,     5,     6,   264,   265,   266,    -1,    -1,    -1,   270,
     271,   272,   273,   274,   275,   276,   277,    14,    15,    16,
      17,    18,    19,    13,   285,   286,   287,    -1,    18,    -1,
      -1,   292,    -1,   294,    31,    32,    26,    -1,    35,    36,
      37,    38,    -1,    -1,    34,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    49,
      -1,   322,    52,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    64,    65,    66,    67,    31,    -1,
      33,     0,     1,    -1,     3,     4,     5,     6,    -1,    79,
      80,    81,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,     1,    -1,     3,     4,
       5,     6,   373,    -1,    20,    21,    22,    -1,     0,     1,
      26,     3,     4,     5,     6,    31,   116,    33,    -1,    14,
      15,    16,    17,    18,    19,    -1,   126,    -1,    -1,     0,
       1,    26,     3,     4,     5,     6,   407,   408,    -1,   139,
      35,    36,    37,    38,   415,   416,    -1,    -1,    -1,    -1,
      -1,   422,   423,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     431,   432,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,     0,     1,    -1,     3,     4,     5,     6,
      -1,    20,    21,    22,    -1,     0,     1,    26,     3,     4,
       5,     6,    31,    -1,    33,    12,    13,    14,    15,    16,
      17,    18,    19,   203,   204,   205,   206,    -1,   208,    -1,
      27,    28,   212,   213,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,   226,   227,    -1,    -1,
     230,   231,   232,   233,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,   245,   246,   247,    -1,   249,
     250,   251,   252,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    13,    -1,   264,   265,   266,    18,    -1,    -1,
     270,   271,   272,   273,    -1,    26,     0,     1,    -1,     3,
       4,     5,     6,    34,    -1,   285,   286,   287,    -1,    -1,
      -1,    -1,   292,    -1,   294,    -1,    -1,    -1,    49,     0,
       1,    52,     3,     4,     5,     6,     0,     1,    -1,     3,
       4,     5,     6,    64,    65,     1,    -1,     3,     4,     5,
       6,     7,   322,     9,    10,    11,    -1,    -1,    79,    80,
      81,    -1,    -1,    13,    20,    21,    22,    -1,    18,    -1,
      26,    -1,    -1,    -1,    -1,    31,    26,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,   116,    -1,    -1,    -1,    49,
      -1,    -1,    52,   373,    32,   126,    34,    35,    36,    37,
      38,    39,    40,    41,    64,    -1,    -1,    -1,   139,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    79,
      80,    81,    26,    -1,    -1,    -1,   157,   407,   408,    -1,
      -1,    35,    36,    37,    38,   415,   416,    -1,    -1,    -1,
      -1,    -1,   422,   423,     0,     1,    -1,     3,     4,     5,
       6,   431,   432,    -1,    -1,    13,   116,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   126,    -1,    26,    -1,
      -1,    -1,   203,   204,   205,   206,    34,   208,    -1,   139,
     211,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    49,    -1,    -1,    52,   226,   227,   157,    28,   230,
     231,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,   245,   246,   247,    -1,   249,   250,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   264,   265,   266,    -1,    -1,    -1,   270,
     271,    -1,    -1,   203,   204,   205,   206,    -1,   208,    -1,
     210,    -1,    -1,    -1,   285,   286,   287,    -1,   116,    -1,
      -1,   292,    -1,   294,    -1,    -1,   226,   227,   126,    -1,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,   245,   246,   247,    -1,   249,
      -1,   322,     1,    -1,     3,     4,     5,     6,     7,   157,
       9,    10,    11,    -1,   264,   265,   266,    -1,    -1,    -1,
     270,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,   285,   286,   287,    -1,    -1,
      -1,    -1,   292,    -1,   294,    14,    15,    16,    17,    18,
      19,    -1,   373,    -1,    -1,   203,   204,   205,   206,    -1,
     208,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,   322,    -1,    -1,    -1,    -1,   225,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,   407,   408,    -1,    -1,
      -1,    -1,    -1,    -1,   415,   416,    -1,   245,   246,   247,
      -1,   422,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,   432,    -1,    -1,    -1,    -1,   264,   265,   266,    -1,
      -1,    -1,     1,   373,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   285,   286,   287,
      -1,    20,    21,    22,   292,    -1,   294,    26,    -1,    -1,
      13,    -1,    31,    -1,    33,    18,    -1,   407,   408,    -1,
      -1,    -1,    -1,    26,    -1,   415,   416,    -1,    -1,    32,
      -1,    34,   422,   423,   322,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    54,    55,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    14,    15,    16,    17,
      18,    19,    -1,    20,    21,    22,    -1,    80,    26,    26,
      -1,    -1,    -1,    -1,    31,   373,    33,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    31,    32,   116,    -1,    35,    36,    37,    38,   407,
     408,   124,    32,   126,    34,    35,    36,   415,   416,    -1,
      -1,    -1,    -1,    -1,   422,   423,   139,    -1,    -1,    -1,
      -1,   144,    -1,   431,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,   158,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,   186,    -1,    -1,    31,    -1,    33,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,   205,   206,    -1,   208,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,   246,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    14,    15,    16,    17,
      18,    19,   265,    20,    21,    22,    -1,    -1,    26,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    35,    36,    37,
      38,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,   292,
      -1,   294,    -1,    -1,    -1,    -1,    -1,     1,   301,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,   322,
      -1,    -1,    26,    -1,    -1,   328,    -1,    31,     1,    33,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
     353,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,     1,
      33,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
     373,    -1,    -1,    -1,    -1,    -1,    -1,   380,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
       1,    33,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    20,
      21,    22,   415,    -1,    -1,    26,    -1,    -1,    -1,   422,
      31,     1,    33,     3,     4,     5,     6,     7,   431,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,     1,    33,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      32,    26,    34,    35,    36,    37,    38,    39,    40,    41,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    37,    38,    31,    32,    -1,
      -1,    35,    36,    37,    38,    14,    15,    16,    17,    18,
      19,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      32,    -1,    34,    35,    36,    37,    38,    14,    15,    16,
      17,    18,    19,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    32,    -1,    34,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    14,    15,    16,    17,    18,
      19,    26,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    35,    36,    37,    38,
      14,    15,    16,    17,    18,    19,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    34,    35,    36,    37,
      38,    14,    15,    16,    17,    18,    19,    14,    15,    16,
      17,    18,    19,    14,    15,    16,    17,    18,    19,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    34,    35,    36,
      37,    38,    -1,    34,    35,    36,    37,    38,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    14,    15,    16,    17,    18,    19,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    31,    32,
      -1,    -1,    35,    36,    14,    15,    16,    17,    18,    19,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    31,    32,    -1,
      -1,    35,    36,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    32,    -1,    34,
      35,    36,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    26,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    35,
      36,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    14,    15,    16,    17,    18,    19,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    14,    15,    16,
      17,    18,    19,    14,    15,    16,    17,    18,    19,    -1,
      -1,    14,    15,    16,    17,    18,    19,    34,    35,    36,
      -1,    -1,    -1,    34,    35,    36,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    43,    44,    45,    46,
      49,    67,    26,    30,    51,     0,    44,    26,    27,    26,
      51,    20,     1,     7,     9,    10,    11,    20,    21,    22,
      26,    31,    33,    45,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    67,    30,
      47,    57,    28,    33,    33,    33,    51,    57,    57,    26,
      31,    53,    26,    26,    19,    18,    16,    17,    14,    15,
      35,    36,    37,    38,    39,    40,    41,    12,    13,    27,
      28,    33,    20,    47,    48,    29,    57,     1,     3,    34,
      46,    50,    57,    57,     9,    34,    59,    64,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    64,    64,
      58,    57,    34,    57,    66,    31,    32,    29,    34,    34,
      32,    34,    34,    34,    33,    29,    32,    34,    31,    47,
      46,    51,    51,    57,    57,     8,    34,    51,    26,    30,
       1,    20,    21,    22,    33,    58,    59,    60,    61,    62,
      63,    64,    65,     1,    20,    21,    22,    30,    33,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     1,    20,
      21,    22,    33,    58,    59,    60,    61,    62,    63,    64,
      65,    67,     1,    20,    21,    22,    33,    65,     1,    20,
      21,    22,    33,    58,    59,    60,    61,    62,    63,    64,
      65,    12,    13,    28,    33,    30,    30,    31,    52,    57,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    12,    13,    27,    28,    33,    48,    57,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    12,    13,    27,    28,    33,    57,    19,
      18,    16,    17,    14,    15,    35,    36,    37,    38,    39,
      40,    41,    12,    13,    27,    28,    33,    20,    57,    57,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    12,    13,    27,    28,    33,    57,    34,
      66,    31,    52,    31,    52,    31,    34,     1,    20,    21,
      22,    33,    59,    64,    65,    60,    61,    61,    62,    62,
      62,    62,    63,    63,    64,    64,    64,    58,    57,    34,
      66,    31,    32,    34,     1,    20,    21,    22,    33,    59,
      64,    65,    60,    61,    61,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    58,    57,    34,    66,    34,     1,
      20,    21,    22,    33,    59,    64,    65,    60,    61,    61,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    58,
      57,    34,    66,    28,    34,    34,     1,    20,    21,    22,
      33,    59,    64,    65,    60,    61,    61,    62,    62,    62,
      62,    63,    63,    64,    64,    64,    58,    57,    34,    66,
      29,    34,    31,    31,    57,    12,    13,    28,    33,    29,
      34,    31,    57,    12,    13,    28,    33,    29,    34,    57,
      12,    13,    28,    33,    29,    34,    29,    57,    57,    12,
      13,    28,    33,    29,    34,    34,    57,    34,    66,    34,
      57,    34,    66,    34,    57,    34,    66,    29,    34,    57,
      34,    66,    29,    34,    29,    34,    29,    34,    29,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    44,    44,    45,
      45,    46,    46,    46,    47,    47,    47,    48,    48,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    60,
      61,    61,    61,    61,    61,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    67,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     2,     4,     5,     1,     3,     4,     1,     3,     5,
       4,     5,     5,     1,     3,     2,     3,     1,     2,     1,
       2,     2,     1,     1,     2,     5,     7,     5,     7,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     3,     4,     2,     2,     1,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7:
#line 50 "language.y"
    { fprintf(stderr, "HANDLE DECL1 ERROR\n"); }
#line 2832 "src/parser.c"
    break;

  case 8:
#line 51 "language.y"
    { fprintf(stderr, "HANDLE DECL2 ERROR\n"); }
#line 2838 "src/parser.c"
    break;

  case 22:
#line 80 "language.y"
    { fprintf(stderr, "HANDLE ARG LIST ERROR\n"); }
#line 2844 "src/parser.c"
    break;

  case 72:
#line 178 "language.y"
    { fprintf(stderr, "HANDLE EXPR ERROR\n"); }
#line 2850 "src/parser.c"
    break;


#line 2854 "src/parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 193 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "%d %d: %s\n", yylloc.last_line, yylloc.first_column, msg);
}
