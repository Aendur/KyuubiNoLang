/* A Bison parser, made by GNU Bison 3.4.2.  */

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
#define YYBISON_VERSION "3.4.2"

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
#line 44 "language.y"

#include <stdio.h>
#include <string.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Tablestack * context_stack;

#line 110 "src/parser.c"


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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  444

#define YYUNDEFTOK  2
#define YYMAXUTOK   287

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
       2,     2,     2,    49,     2,     2,     2,    48,     2,     2,
      40,    41,    46,    44,    39,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      42,    34,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    67,    68,    72,    73,    74,    75,    76,
      80,    81,    85,    86,    87,    91,    92,    93,    97,    98,
     102,   103,   104,   105,   109,   110,   114,   115,   116,   120,
     121,   121,   132,   133,   137,   138,   139,   140,   141,   142,
     143,   144,   148,   149,   149,   153,   154,   158,   159,   163,
     164,   168,   169,   173,   174,   178,   179,   180,   184,   185,
     186,   187,   188,   192,   193,   194,   198,   199,   200,   201,
     205,   206,   207,   208,   209,   213,   214,   215,   216,   220,
     221,   222,   223,   228,   229,   233,   234,   235,   236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR", "IF",
  "ELSE", "WHILE", "DO", "RETURN", "OP_INC", "OP_DEC", "OP_GE", "OP_LE",
  "OP_EQ", "OP_NE", "OP_AND", "OP_OR", "IDENTIFIER", "STRING_LITERAL",
  "CONSTANT", "UNRECOGNIZED_TOKEN", "INVALID_IDENTIFIER",
  "INVALID_CHAR_CONST", "TYPE", "LIST", "FUN_DEF", "FUN_CALL", "DECL_VAR",
  "DECL_VEC", "VEC_INDEX", "';'", "'='", "'['", "']'", "'{'", "'}'", "','",
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "$accept", "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_declarator",
  "parameter_list", "parameter", "compound_statement", "$@1",
  "statement_list", "statement", "conditional_statement", "$@2",
  "iteration_statement", "return_statement", "assignment_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    59,    61,    91,    93,   123,   125,    44,
      40,    41,    60,    62,    43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -248

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-248)))

#define YYTABLE_NINF -89

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     811,   133,   -13,    22,    58,    63,    70,   805,   929,    82,
      90,   212,    83,   936,  1493,  1025,  -248,  1155,  1202,   169,
    1251,  1271,   407,  1333,  3021,  1002,  1002,  1388,  3313,  3348,
     335,  1028,  1002,  1002,    97,   161,    30,   387,   417,   757,
    1675,  1554,  5371,  4189,  3383,   409,    15,   175,   107,   119,
     183,   450,  1616,   177,  2012,  2081,  2128,  2175,  2222,   195,
     221,   281,  5406,  4224,  5413,   126,   139,   296,  5448,  5455,
    1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  1002,  1069,   453,  1002,   154,   294,   330,   -10,
     313,    98,   113,   334,  2269,  1028,  1028,   367,   399,  2316,
    1465,  2363,  2410,  2457,   238,   404,    59,  3418,   405,   532,
    1326,  1534,  5915,  5921,  5953,  5959,  5490,  5497,  5532,  5539,
    5574,   345,  4259,   178,   338,    79,   295,   336,   415,   473,
     431,   166,   412,   439,   416,   451,   321,  4294,  1090,  4329,
     420,   507,   454,   455,  1028,   428,   446,   468,   406,  2504,
     467,   464,   517,   493,   455,  2551,  2598,  2645,  4364,  4399,
    4434,  1028,  1125,  1125,  3033,  3068,  3103,   335,  1028,  1125,
    1125,   348,   173,    36,   323,   157,   208,   545,  4945,  2024,
    3138,  1131,  1131,  3453,  3488,  3523,  1028,  1131,  1131,    27,
      87,    21,  1831,  3607,  3082,  3117,  4469,  3558,  1179,  1179,
    3593,  3628,  3663,  1028,  1179,  1179,    -2,    25,   317,  1713,
    5991,  5587,  5622,  4483,  3698,  2692,  1281,  1281,  1337,  1861,
    3173,  1028,  1281,  1281,    -6,   114,     6,    75,   937,   596,
    4955,  3712,  3208,  2739,  2786,  3021,   490,  3747,  3761,  3796,
    1028,  4990,  3810,  5001,   458,   504,  5036,  5047,  1125,  1125,
    1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,
    1125,  1069,   658,  1125,  4518,  4532,  4567,  1028,  3152,  4581,
    3187,   516,  3222,  3257,  1131,  1131,  1131,  1131,  1131,  1131,
    1131,  1131,  1131,  1131,  1131,  1131,  1131,  1069,   673,  1131,
    4616,  4630,  4665,  1028,  5635,  4679,  5670,   525,  5683,  5718,
    1179,  1179,  1179,  1179,  1179,  1179,  1179,  1179,  1179,  1179,
    1179,  1179,  1179,  1069,   747,  1179,   549,  3021,  3845,  3859,
    3894,  1028,  5082,  3908,  5092,   544,  5127,  5137,  1281,  1281,
    1281,  1281,  1281,  1281,  1281,  1281,  1281,  1281,  1281,  1281,
    1281,  1069,   882,  1281,   744,  3021,  2833,  4714,   558,   477,
      89,  3243,   102,   578,  1592,  1625,   261,   495,  1917,  1966,
    5172,  5183,  5218,  5229,  5264,   550,  3943,   491,   344,   560,
    3958,   142,    41,  6131,  6137,  3642,  3677,  5997,  6003,  3292,
    3467,  3502,  3537,  3572,   566,  4749,   505,    32,   567,  3993,
     289,   349,  1927,  6167,  6035,  6045,  6077,  6087,  5731,  5766,
    5779,  5814,  5827,   573,  4763,   514,    50,  2880,   577,  3278,
     117,    11,  6119,  6125,  5862,  5869,  5876,  5908,  5274,  5309,
    5319,  5354,  5364,   609,  4007,   559,   174,  2927,  2974,  4042,
     483,  4056,  4091,  4798,  4812,  4847,  4861,  4896,  4910,   637,
    4105,  4140,  4154,   838
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,   656,   100,  -248,   -18,   499,  -248,  -248,
     538,     3,  -149,  -232,   -49,  -248,  -248,  -248,  -248,  1786,
     783,  1651,  1510,  1437,  1112,   982,   319,   657,   -19,  -247,
       2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    53,    10,    65,    66,    11,    91,
      92,    54,    24,    55,    56,    57,   152,    58,    59,    60,
     189,   190,   191,   192,   193,   194,   195,   196,    63,   124,
      61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    34,    12,   346,    15,    44,   101,   -85,   235,    12,
     -85,   180,   197,   328,    21,   367,    88,   300,    89,     3,
       4,     5,   330,   331,   -53,   -53,   214,   330,   331,   -54,
     -54,   128,    44,   -49,   -49,   -49,    44,   276,   277,   -53,
     -53,   386,   -86,   301,   -51,   -53,   274,   -53,    93,    70,
     -54,   274,   -54,    97,   249,   -51,    90,   276,   277,   -54,
     -54,   -51,   -53,   -49,   214,   232,   317,   405,   -49,   300,
      16,   162,   163,   -50,   -51,   -51,   197,   197,   -87,   164,
     165,   166,   -54,   -88,   345,   407,   -50,   180,   136,   332,
     333,   -55,   -55,   -55,   -55,   425,   167,   135,    70,   168,
       9,   162,   163,    22,   169,   275,   -51,     9,   170,   164,
     165,   166,   -50,   427,   -55,    18,   -55,   334,   335,   232,
     249,   -52,   214,   -10,    19,   197,   167,   430,   -51,   168,
     -11,    93,   329,   -51,   169,   329,   -52,   129,   170,   130,
     -52,   -52,   197,   242,   242,   148,   149,    95,   180,   197,
     242,   242,   -24,   -51,   -24,   -51,   -52,   156,   -52,    96,
     275,   -52,   269,   269,   -18,   -18,    13,   197,   269,   269,
      14,   252,   253,   -55,   -55,   -55,   -55,   105,   106,   295,
     295,    25,    26,   -52,   197,   295,   295,   -13,   -13,    27,
      28,    29,   248,   328,   -15,   -55,   -55,   323,   323,   254,
     255,   141,   197,   323,   323,   -26,    30,   -26,    94,    31,
      99,   -49,   -49,   -50,    32,   -50,    44,   -83,    33,   -83,
     215,   197,   -58,   -58,   -58,   -58,   -58,   -58,   102,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   214,   232,   242,    20,   -58,   -58,   197,    14,
     -58,   -58,   256,   257,   103,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   214,   232,
     269,   -12,   -12,    45,   197,   -62,   -62,   -62,   -62,   -62,
     -62,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   214,   232,   295,   101,    44,   -62,
     -62,   104,   197,   -62,   -62,   256,   257,   301,   -52,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   214,   232,   323,   -52,    44,    44,   -14,   -14,
     126,   180,   136,   302,   303,   -53,   -53,   107,    42,   250,
     251,   -53,   -53,    42,    62,    64,   -21,   162,   163,   178,
     -21,    68,    69,   -53,   131,   164,   165,   166,   101,   -19,
     -19,   -53,   -53,   248,   212,   302,   303,   -54,   -54,   -23,
      42,   127,   167,   -23,    42,   168,   134,   138,   101,   139,
     169,   137,   -50,   -50,   170,   -54,   -15,   -15,    44,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   118,
     119,   120,   212,   230,    42,    71,   -51,   -42,    44,   -42,
     -42,   -42,   -42,   -42,   -43,   -42,   -42,   -42,   -42,   -42,
     -51,   198,   199,    71,   -52,   178,   -42,   -42,   -42,   200,
     201,   202,   -48,    72,    73,   -53,   -53,   -16,   -52,   -42,
     -12,   -12,    45,   -42,   -42,    86,   -42,    46,   -22,   203,
     -53,   -42,   -22,   142,   204,   -42,   144,   230,   205,   -25,
     212,   -25,    25,    26,   -20,   216,   217,   -84,   -20,   -84,
      27,    28,    29,   218,   219,   220,     2,     3,     4,     5,
     143,   241,   243,   -47,   -17,   -27,   178,   -27,   246,   247,
      31,   233,   157,   221,   122,    32,   349,   350,   222,    33,
     268,   270,   223,   -28,   151,   -28,   272,   273,   153,   -61,
     -61,   -61,   -61,   -61,   -61,   -16,   -16,   294,   296,   198,
     199,   -17,   -17,   298,   299,   154,   155,   200,   201,   202,
     138,   347,   432,   -61,   -61,   322,   324,   -61,   -61,   256,
     257,   326,   327,   146,   138,   351,   435,   203,    72,    73,
     -54,   -54,   204,   138,    42,   438,   205,   370,   -29,   -63,
     -63,   -63,   -63,   -63,   -63,   -54,   389,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   362,   363,   364,
     212,   230,   178,   -63,   -63,   409,   431,   -63,   -63,   -63,
     -63,   258,   259,   260,   250,   251,   -54,   -54,   138,   429,
     442,   433,   434,   381,   382,   383,   212,   230,   436,   437,
     -63,   -63,   -63,   -63,   -63,   -63,   -54,   -54,   440,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   400,
     401,   402,   212,   230,   212,   -63,    42,   -63,   -63,   -63,
     -63,   -63,   338,   339,   340,   441,   -31,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   420,   421,   422,
     212,   230,   230,    17,    42,    42,   244,   140,     0,   178,
     216,   217,     0,     0,     0,     0,    43,     0,   218,   219,
     220,    43,    43,    43,     0,   216,   217,   179,     0,    43,
      43,     0,     0,   218,   219,   220,     0,     0,   221,   366,
       0,     0,   213,   222,     0,     0,     0,   223,    43,     0,
       0,     0,    43,   221,   385,     0,     0,     0,   222,     0,
       0,     0,   223,     0,     0,     0,    42,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
     213,   231,    43,     0,     0,   -29,    42,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   216,
     217,     0,     0,   179,   -29,   -29,   -29,   218,   219,   220,
       0,    74,    75,   -55,   -55,   -55,   -55,   -29,     0,     0,
       0,   -29,   -29,     0,   -29,     0,     0,   221,   404,   -29,
     -55,     0,   222,   -29,     0,   231,   223,     0,   213,    76,
      77,     0,    36,     0,     0,    -2,     1,    36,     2,     3,
       4,     5,     1,   172,     2,     3,     4,     5,     0,   179,
     179,     0,     0,     0,   179,     0,   179,   179,   206,     0,
       0,     0,     0,     0,    36,     0,     0,     0,    36,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,   213,   213,     0,   -31,   -31,
     -31,   213,   213,     0,     0,     0,   206,   224,   125,     0,
       0,   -31,     0,   231,   231,   -31,   -31,     0,   -31,   231,
     231,     0,     0,   -31,     0,     0,     0,   -31,     0,   172,
       0,     0,    43,     0,   216,   217,     0,     0,     0,     0,
       0,     0,   218,   219,   220,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   213,   231,
     179,   224,   221,   424,   206,     0,     0,   222,     0,    -3,
      -3,   223,    -3,    -3,    -3,    -3,    -8,    -8,     0,    -8,
      -8,    -8,    -8,     0,   213,   231,     0,     0,     0,     0,
     172,   -58,   -58,   -58,   -58,   -58,   -58,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   231,   213,     0,    43,     0,   -58,     0,   -58,   -58,
     -58,   336,   337,     0,     0,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   213,   231,
     231,    41,    43,    43,     0,     0,    41,   179,     0,     0,
       0,     0,   177,     0,    25,    26,     0,     0,    36,     0,
       0,     0,   158,   159,   160,    -9,    -9,   211,    -9,    -9,
      -9,    -9,     0,    41,     0,     0,     0,    41,     0,     0,
     181,   182,   161,     0,   206,   224,   368,    32,   183,   184,
     185,    33,    41,    41,    41,    41,    41,    41,    41,    41,
     116,   117,     0,     0,    43,   211,   229,    41,   186,     0,
     206,   224,   387,   187,     0,     0,     0,   188,     0,     0,
       0,   198,   199,     0,    43,     0,     0,     0,   177,   200,
     201,   202,     0,     0,     0,     0,   206,   224,   406,     0,
      36,     0,   216,   217,     0,     0,     0,     0,     0,   203,
     218,   219,   220,     0,   204,     0,     0,     0,   205,     0,
     229,     0,     0,   211,   206,   224,   426,     0,    36,    36,
     221,    40,     0,   172,     0,   222,    40,   162,   163,   223,
       0,     0,   176,   181,   182,   237,   238,   239,     0,   177,
       0,   264,   265,   266,     0,    -4,    -4,   210,    -4,    -4,
      -4,    -4,     0,    40,     0,   240,     0,    40,     0,     0,
     169,   267,     0,     0,   170,     0,   187,     0,     0,     0,
     188,     0,    40,    40,    40,    40,   112,   113,   114,   115,
      36,   198,   199,     0,     0,   210,   228,    40,     0,   290,
     291,   292,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,
      36,     0,     0,     0,     0,     0,     0,    41,   176,   293,
       0,     0,     0,     0,   204,     0,     0,     0,   205,     0,
     177,   177,   177,   177,   177,   177,   177,   177,   360,   361,
       0,     0,     0,   211,   229,   177,     0,     0,     0,     0,
     228,    -5,    -5,   210,    -5,    -5,    -5,    -5,     0,     0,
       0,     0,     0,     0,   379,   380,     0,     0,     0,   211,
     229,    -6,    -6,     0,    -6,    -6,    -6,    -6,     0,   176,
       0,     0,   211,   211,   211,   211,   211,   211,   211,   211,
     398,   399,     0,   216,   217,   211,   229,   211,     0,    41,
       0,   318,   319,   320,     0,     0,     0,     0,     0,     0,
     229,   229,   229,   229,   229,   229,   229,   229,   418,   419,
       0,   321,     0,   211,   229,   229,   222,    41,    41,     0,
     223,     0,   177,   -29,   -29,     0,   -29,   -29,   -29,   -29,
      74,    75,   -56,   -56,   -56,   -56,     0,    40,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -56,
     176,   176,   176,   176,   356,   357,   358,   359,    76,    77,
       0,   -79,   -79,   210,   228,   176,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,    41,
     375,   376,   377,   378,     0,     0,     0,     0,     0,   210,
     228,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,    41,
       0,     0,   210,   210,   210,   210,   394,   395,   396,   397,
       0,   -79,   -79,   -79,     0,   210,   228,   210,   -79,    40,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     228,   228,   228,   228,   414,   415,   416,   417,     0,     0,
       0,     0,     0,   210,   228,   228,    39,    40,    40,     0,
       0,    39,   176,     0,     0,   -31,   -31,   175,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    39,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,    39,    39,   110,
     111,     0,     0,   -30,   -30,   -30,     0,     0,     0,    40,
     209,   227,    39,     0,     0,     0,   -30,     0,     0,    38,
     -30,    23,     0,   -30,    38,     0,     0,     0,   -30,    40,
     174,     0,   -30,   175,     0,     0,     0,     0,    74,    75,
     -57,   -57,   -57,   -57,     0,   208,     0,     0,     0,     0,
       0,    38,     0,     0,     0,    38,     0,   -57,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   227,    76,    77,   209,     0,
      38,   109,     0,     0,     0,     0,     0,   -63,     0,     0,
       0,     0,     0,   208,   226,    38,   -63,   -63,   -63,   -63,
      80,    81,    82,     0,   175,     0,   252,   253,   -56,   -56,
     -56,   -56,     0,     0,     0,     0,   174,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -56,   -56,     0,     0,   254,   255,   -34,   -34,   -34,   252,
     253,   -57,   -57,   -57,   -57,     0,     0,     0,   226,   -34,
       0,   208,     0,   -34,   -34,     0,   -34,     0,     0,     0,
       0,   -34,     0,   -57,   -57,   -34,     0,   254,   255,     0,
      37,     0,    39,     0,     0,    37,     0,   174,     0,     0,
       0,   173,     0,     0,     0,   175,   175,   354,   355,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   207,     0,   209,   227,
     175,     0,    37,     0,     0,     0,    37,     0,   -58,     0,
       0,     0,     0,   373,   374,     0,     0,   -58,   -58,    78,
      79,   108,     0,     0,   209,   227,     0,   304,   305,   -55,
     -55,   -55,   -55,     0,   207,   225,    37,   209,   209,   392,
     393,     0,     0,     0,     0,    38,     0,     0,     0,   -55,
     209,   227,   209,     0,    39,   306,   307,   173,   174,   353,
       0,     0,     0,     0,     0,   227,   227,   412,   413,     0,
       0,   208,   226,   174,     0,     0,     0,     0,   209,   227,
     227,     0,    39,    39,     0,   372,     0,   175,     0,   225,
       0,     0,   207,     0,     0,     0,     0,   208,   226,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
     208,   391,     0,     0,     0,     0,   171,    67,   173,     0,
       0,     0,     0,   208,   226,   208,     0,    38,     0,     0,
       0,    87,     0,     0,     0,     0,     0,    98,   226,   411,
       0,     0,     0,     0,    39,   278,   279,   -55,   -55,   -55,
     -55,   208,   226,   226,     0,    38,    38,     0,     0,     0,
     174,     0,     0,     0,    39,     0,     0,     0,     0,   121,
     123,     0,   -55,   280,   281,   -81,   -81,   -81,   -81,   -81,
     -81,   132,   133,     0,     0,     0,    37,     0,     0,     0,
       0,     0,   171,     0,     0,   -81,   -81,     0,     0,   352,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   207,   225,   173,     0,     0,    38,     0,     0,
       0,     0,     0,     0,   145,   371,     0,   147,     0,     0,
     150,   -59,   -59,   -59,   -59,   -59,   -59,    38,   207,   225,
       0,   304,   305,   -56,   -56,   -56,   -56,   236,     0,     0,
       0,   390,     0,   171,   245,   -59,   -59,     0,     0,   -59,
     -59,   256,   257,   -56,   207,   225,   207,     0,    37,   306,
     307,     0,   271,     0,     0,     0,     0,     0,     0,   410,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,   297,
       0,     0,   207,   225,   225,     0,    37,    37,     0,     0,
       0,   173,     0,     0,   -60,   -60,     0,   325,   -60,   -60,
     256,   257,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   348,     0,     0,     0,
       0,     0,   -39,   -39,   -39,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -39,     0,   365,   123,   -39,
     -39,     0,   -39,   369,     0,     0,     0,   -39,    37,   261,
       0,   -39,   -70,   -70,   262,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   384,   123,     0,     0,     0,    37,   388,
       0,     0,    47,     0,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,   403,
     123,    27,    28,    29,     0,     0,     0,   408,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,   157,   100,
       0,    31,     0,     0,     0,     0,    32,   423,   123,   -32,
      33,   -32,   -32,   -32,   -32,   -32,   171,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,     0,     0,     0,   -32,   -32,     0,   -32,     0,
       0,     0,     0,   -32,     0,     0,   -37,   -32,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,     0,
       0,     0,   -37,   -37,     0,   -37,     0,     0,     0,     0,
     -37,     0,     0,   -38,   -37,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,     0,     0,   -38,
     -38,     0,   -38,     0,     0,     0,     0,   -38,     0,     0,
     -41,   -38,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -41,     0,     0,     0,   -41,   -41,     0,   -41,
       0,     0,     0,     0,   -41,     0,     0,   -35,   -41,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
       0,     0,     0,   -35,   -35,     0,   -35,     0,     0,     0,
       0,   -35,     0,     0,   -33,   -35,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,     0,     0,     0,
     -33,   -33,     0,   -33,     0,     0,     0,     0,   -33,     0,
       0,   -40,   -33,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -40,     0,     0,     0,   -40,   -40,     0,
     -40,     0,     0,     0,     0,   -40,     0,     0,   -36,   -40,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,     0,
       0,     0,   -36,     0,     0,   -45,   -36,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -45,     0,     0,
       0,   -45,   -45,     0,   -45,     0,     0,     0,     0,   -45,
       0,     0,   -46,   -45,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -46,     0,     0,     0,   -46,   -46,
       0,   -46,     0,     0,     0,     0,   -46,     0,     0,   -44,
     -46,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,
       0,     0,     0,   -44,     0,     0,   -30,   -44,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,     0,
       0,     0,   -30,   234,     0,   -30,     0,     0,     0,     0,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,     0,     0,     0,   -30,
     316,     0,   -30,     0,     0,     0,     0,   -30,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,     0,     0,     0,   -30,   344,     0,   -30,
       0,     0,     0,     0,   -30,     0,     0,   -29,   -30,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
       0,     0,     0,   -29,   -29,     0,   -29,     0,     0,     0,
       0,   -29,     0,     0,    47,   -29,     2,     3,     4,     5,
      48,     0,    49,    50,    51,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
     157,   428,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    47,    33,     2,     3,     4,     5,    48,     0,    49,
      50,    51,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,   157,   439,     0,
      31,     0,     0,     0,     0,    32,     0,     0,    47,    33,
       2,     3,     4,     5,    48,     0,    49,    50,    51,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,   157,   443,     0,    31,     0,     0,
       0,     0,    32,     0,     0,   -31,    33,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,     0,
       0,   -31,   -31,     0,   -31,     0,     0,     0,     0,   -31,
       0,     0,    47,   -31,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,    52,     0,     0,     0,   157,     0,
       0,    31,     0,     0,     0,     0,    32,   -79,   -79,     0,
      33,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -81,   -81,     0,     0,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,   -63,   -63,   -63,   -63,   -63,   284,   285,
     286,   -66,   -66,   -66,   -66,   -66,   -66,   -80,   -80,     0,
       0,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,
     -73,   -73,   263,   -75,     0,     0,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,
     -80,   -80,   -80,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,   -74,   -74,   -74,   -74,   -80,   -80,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,   -72,
     -72,   -72,   343,   -75,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -82,   -82,   -82,
     -82,   -82,   -82,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -71,   -71,   -71,   -71,   -71,   -71,   -82,   -82,     0,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,
     -64,   -64,   -82,   -82,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,
     -81,   -81,   -81,   -64,   -64,   -64,   -64,   -64,   284,   285,
     286,     0,     0,     0,     0,     0,   -81,   -81,   -81,     0,
       0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,    85,   -75,     0,
       0,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,     0,     0,     0,     0,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,   -65,   -65,
     -65,   -65,   -65,   284,   285,   286,   -67,   -67,   -67,   -67,
     -67,   -67,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -80,   -80,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,   289,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -79,   -79,   -79,
     -79,   -79,   -79,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -58,   -58,   -58,   -58,   -58,   -58,   -79,   -79,   -79,
       0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,   -58,   -58,
     -58,   282,   283,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,   -62,   -62,   -62,   282,   283,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -80,   -80,   -80,
       0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,   -61,   -61,
     -61,   282,   283,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   315,   -75,   -75,     0,     0,     0,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   341,     0,     0,
       0,   -70,   342,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -79,     0,     0,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -81,     0,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -80,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -75,     0,     0,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -81,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -75,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -77,     0,
       0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -82,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -82,   -82,   -82,
       0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -82,     0,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -76,     0,     0,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -78,     0,     0,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -76,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,    83,     0,     0,     0,     0,    84,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,   -75,
       0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,   -77,     0,     0,     0,     0,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,   -76,
       0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,   -78,     0,     0,     0,     0,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,     0,   -79,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,   -81,     0,     0,     0,     0,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,   -80,
       0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   287,     0,     0,     0,     0,   288,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   313,   -70,
       0,     0,     0,   314,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -79,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -79,   -79,     0,     0,     0,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -81,   -81,     0,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -80,   -80,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -75,   -75,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,   -82,
       0,     0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -78,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -82,   -82,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -76,   -76,     0,     0,     0,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -78,   -78,     0,     0,     0,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,   -73,   -73,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
     -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -71,   -71,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   258,   259,
     260,   -65,   -65,     0,     0,   -65,   -65,   -65,   -65,   258,
     259,   260,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     338,   339,   340,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   338,   339,   340,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -66,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,     0,     0,     0,     0,   -74,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,   -71,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,     0,
     -65,     0,   -64,   -64,   -64,   -64,    80,    81,    82,   -65,
     -65,   -65,   -65,    80,    81,    82,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,     0,     0,
       0,     0,   -68,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -63,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   310,   311,   312,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -73,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -74,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -72,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -71,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   310,   311,   312,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -65,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   310,   311,   312,   -67,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
       0,   -62,     0,   -62,   -62,   -62,   336,   337,   -61,     0,
     -61,   -61,   -61,   336,   337,   -59,     0,   -59,   -59,   -59,
     336,   337,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,     0,     0,   -60,   -62,   -60,
     -60,   -60,   336,   337,   -61,     0,     0,   -62,   -62,    78,
      79,     0,     0,   -61,   -61,    78,    79,   -59,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,   -59,     0,     0,     0,
       0,     0,   -60,     0,     0,   -59,   -59,    78,    79,     0,
       0,   -60,   -60,    78,    79,   -58,   -58,   -58,   -58,   -58,
     -58,   -59,   -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,     0,   -58,   -58,   308,   309,     0,   -59,   -59,
     -59,   282,   283,     0,   -60,   -60,   -60,   282,   283,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,
       0,   -62,     0,     0,     0,     0,     0,   -62,   -62,   308,
     309,   -61,     0,     0,     0,     0,     0,   -61,   -61,   308,
     309,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,   -59,     0,     0,     0,     0,     0,   -59,
     -59,   308,   309,   -60,     0,     0,     0,     0,     0,   -60,
     -60,   308,   309,   332,   333,   -56,   -56,   -56,   -56,   332,
     333,   -57,   -57,   -57,   -57,   278,   279,   -56,   -56,   -56,
     -56,   278,   279,   -57,   -57,   -57,   -57,     0,   -56,     0,
     -56,   334,   335,     0,   -57,     0,   -57,   334,   335,     0,
       0,     0,   -56,   280,   281,     0,     0,     0,   -57,   280,
     281,   304,   305,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,     0,   306,
     307
};

static const yytype_int16 yycheck[] =
{
      19,    19,     0,   235,     1,    24,    55,    20,   157,     7,
      20,    30,    31,    19,    11,   262,     1,    19,     3,     4,
       5,     6,    16,    17,    18,    19,    45,    16,    17,    18,
      19,    41,    51,    39,    36,    41,    55,    16,    17,    18,
      19,   288,    20,    18,    19,    39,    19,    41,    46,    19,
      39,    19,    41,    50,    18,    19,    41,    16,    17,    18,
      19,    36,    41,    33,    83,    84,   215,   314,    41,    19,
       0,    12,    13,    41,    38,    39,    95,    96,    20,    20,
      21,    22,    41,    20,   233,   317,    36,   106,   106,    14,
      15,    16,    17,    18,    19,   342,    37,    38,    19,    40,
       0,    12,    13,    20,    45,    18,    19,     7,    49,    20,
      21,    22,    33,   345,    39,    33,    41,    42,    43,   138,
      18,    19,   141,    33,    34,   144,    37,    38,    41,    40,
      33,   129,    18,    19,    45,    18,    19,    39,    49,    41,
      38,    39,   161,   162,   163,   142,   143,    40,   167,   168,
     169,   170,    39,    39,    41,    41,    39,   154,    41,    40,
      18,    19,   181,   182,    38,    39,    33,   186,   187,   188,
      37,    14,    15,    16,    17,    18,    19,    38,    39,   198,
     199,    12,    13,    41,   203,   204,   205,    33,    34,    20,
      21,    22,    19,    19,    33,    38,    39,   216,   217,    42,
      43,    35,   221,   222,   223,    39,    37,    41,    33,    40,
      33,    38,    39,    39,    45,    41,   235,    39,    49,    41,
      37,   240,    14,    15,    16,    17,    18,    19,    33,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    33,    38,    39,   267,    37,
      42,    43,    44,    45,    33,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,    33,    34,    35,   293,    14,    15,    16,    17,    18,
      19,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   346,   317,    38,
      39,    20,   321,    42,    43,    44,    45,    18,    19,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    36,   345,   346,    33,    34,
      36,   350,   350,    16,    17,    18,    19,    41,    19,    16,
      17,    18,    19,    24,    25,    26,    33,    12,    13,    30,
      37,    32,    33,    36,    20,    20,    21,    22,   407,    38,
      39,    38,    39,    19,    45,    16,    17,    18,    19,    33,
      51,    41,    37,    37,    55,    40,     9,    39,   427,    41,
      45,    36,    38,    39,    49,    36,    38,    39,   407,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    18,    19,     1,   427,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      33,    12,    13,    18,    19,   106,    20,    21,    22,    20,
      21,    22,    33,    16,    17,    18,    19,    33,    33,    33,
      33,    34,    35,    37,    38,    36,    40,    40,    33,    40,
      33,    45,    37,    41,    45,    49,    40,   138,    49,    39,
     141,    41,    12,    13,    33,    12,    13,    39,    37,    41,
      20,    21,    22,    20,    21,    22,     3,     4,     5,     6,
      41,   162,   163,    33,    33,    39,   167,    41,   169,   170,
      40,    37,    37,    40,    41,    45,    38,    39,    45,    49,
     181,   182,    49,    39,    36,    41,   187,   188,    41,    14,
      15,    16,    17,    18,    19,    38,    39,   198,   199,    12,
      13,    38,    39,   204,   205,     8,    33,    20,    21,    22,
      39,    41,    41,    38,    39,   216,   217,    42,    43,    44,
      45,   222,   223,    36,    39,    41,    41,    40,    16,    17,
      18,    19,    45,    39,   235,    41,    49,    41,     9,    14,
      15,    16,    17,    18,    19,    33,    41,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    38,    39,    41,    36,    42,    43,    44,
      45,    46,    47,    48,    16,    17,    18,    19,    39,    41,
      41,    41,    36,   284,   285,   286,   287,   288,    41,    36,
      14,    15,    16,    17,    18,    19,    38,    39,    41,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,    39,   317,    41,    42,    43,
      44,    45,    46,    47,    48,    36,     9,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,     7,   345,   346,   167,   129,    -1,   350,
      12,    13,    -1,    -1,    -1,    -1,    19,    -1,    20,    21,
      22,    24,    25,    26,    -1,    12,    13,    30,    -1,    32,
      33,    -1,    -1,    20,    21,    22,    -1,    -1,    40,    41,
      -1,    -1,    45,    45,    -1,    -1,    -1,    49,    51,    -1,
      -1,    -1,    55,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    -1,   407,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,     1,   427,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    12,
      13,    -1,    -1,   106,    20,    21,    22,    20,    21,    22,
      -1,    14,    15,    16,    17,    18,    19,    33,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    -1,    40,    41,    45,
      33,    -1,    45,    49,    -1,   138,    49,    -1,   141,    42,
      43,    -1,    19,    -1,    -1,     0,     1,    24,     3,     4,
       5,     6,     1,    30,     3,     4,     5,     6,    -1,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,   170,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,   198,   199,    -1,    20,    21,
      22,   204,   205,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    33,    -1,   216,   217,    37,    38,    -1,    40,   222,
     223,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,   106,
      -1,    -1,   235,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   138,    40,    41,   141,    -1,    -1,    45,    -1,     0,
       1,    49,     3,     4,     5,     6,     0,     1,    -1,     3,
       4,     5,     6,    -1,   287,   288,    -1,    -1,    -1,    -1,
     167,    14,    15,    16,    17,    18,    19,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,    -1,   317,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    19,   345,   346,    -1,    -1,    24,   350,    -1,    -1,
      -1,    -1,    30,    -1,    12,    13,    -1,    -1,   235,    -1,
      -1,    -1,    20,    21,    22,     0,     1,    45,     3,     4,
       5,     6,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      12,    13,    40,    -1,   261,   262,   263,    45,    20,    21,
      22,    49,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,   407,    83,    84,    85,    40,    -1,
     287,   288,   289,    45,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    12,    13,    -1,   427,    -1,    -1,    -1,   106,    20,
      21,    22,    -1,    -1,    -1,    -1,   313,   314,   315,    -1,
     317,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    40,
      20,    21,    22,    -1,    45,    -1,    -1,    -1,    49,    -1,
     138,    -1,    -1,   141,   341,   342,   343,    -1,   345,   346,
      40,    19,    -1,   350,    -1,    45,    24,    12,    13,    49,
      -1,    -1,    30,    12,    13,    20,    21,    22,    -1,   167,
      -1,    20,    21,    22,    -1,     0,     1,    45,     3,     4,
       5,     6,    -1,    51,    -1,    40,    -1,    55,    -1,    -1,
      45,    40,    -1,    -1,    49,    -1,    45,    -1,    -1,    -1,
      49,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
     407,    12,    13,    -1,    -1,    83,    84,    85,    -1,    20,
      21,    22,     0,     1,    -1,     3,     4,     5,     6,    -1,
     427,    -1,    -1,    -1,    -1,    -1,    -1,   235,   106,    40,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,    -1,    -1,   261,   262,   263,    -1,    -1,    -1,    -1,
     138,     0,     1,   141,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,   282,   283,    -1,    -1,    -1,   287,
     288,     0,     1,    -1,     3,     4,     5,     6,    -1,   167,
      -1,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    -1,    12,    13,   313,   314,   315,    -1,   317,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      -1,    40,    -1,   341,   342,   343,    45,   345,   346,    -1,
      49,    -1,   350,     0,     1,    -1,     3,     4,     5,     6,
      14,    15,    16,    17,    18,    19,    -1,   235,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    33,
     248,   249,   250,   251,   252,   253,   254,   255,    42,    43,
      -1,    34,    35,   261,   262,   263,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,   407,
     278,   279,   280,   281,    -1,    -1,    -1,    -1,    -1,   287,
     288,    -1,    14,    15,    16,    17,    18,    19,    -1,   427,
      -1,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    33,    34,    35,    -1,   313,   314,   315,    40,   317,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,    -1,    -1,
      -1,    -1,    -1,   341,   342,   343,    19,   345,   346,    -1,
      -1,    24,   350,    -1,    -1,     0,     1,    30,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    55,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    70,    71,    72,
      73,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,   407,
      83,    84,    85,    -1,    -1,    -1,    33,    -1,    -1,    19,
      37,    38,    -1,    40,    24,    -1,    -1,    -1,    45,   427,
      30,    -1,    49,   106,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    -1,    33,    14,    15,
      16,    17,    18,    19,    -1,   138,    42,    43,   141,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    42,    43,    44,    45,
      46,    47,    48,    -1,   167,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,   106,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      38,    39,    -1,    -1,    42,    43,    20,    21,    22,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,   138,    33,
      -1,   141,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    45,    -1,    38,    39,    49,    -1,    42,    43,    -1,
      19,    -1,   235,    -1,    -1,    24,    -1,   167,    -1,    -1,
      -1,    30,    -1,    -1,    -1,   248,   249,   250,   251,    14,
      15,    16,    17,    18,    19,    -1,    45,    -1,   261,   262,
     263,    -1,    51,    -1,    -1,    -1,    55,    -1,    33,    -1,
      -1,    -1,    -1,   276,   277,    -1,    -1,    42,    43,    44,
      45,    70,    -1,    -1,   287,   288,    -1,    14,    15,    16,
      17,    18,    19,    -1,    83,    84,    85,   300,   301,   302,
     303,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    36,
     313,   314,   315,    -1,   317,    42,    43,   106,   248,   249,
      -1,    -1,    -1,    -1,    -1,   328,   329,   330,   331,    -1,
      -1,   261,   262,   263,    -1,    -1,    -1,    -1,   341,   342,
     343,    -1,   345,   346,    -1,   275,    -1,   350,    -1,   138,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   287,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
     300,   301,    -1,    -1,    -1,    -1,    30,    31,   167,    -1,
      -1,    -1,    -1,   313,   314,   315,    -1,   317,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   328,   329,
      -1,    -1,    -1,    -1,   407,    14,    15,    16,    17,    18,
      19,   341,   342,   343,    -1,   345,   346,    -1,    -1,    -1,
     350,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    83,
      84,    -1,    41,    42,    43,    14,    15,    16,    17,    18,
      19,    95,    96,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    34,    35,    -1,    -1,   248,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,   261,   262,   263,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   274,    -1,   141,    -1,    -1,
     144,    14,    15,    16,    17,    18,    19,   427,   287,   288,
      -1,    14,    15,    16,    17,    18,    19,   161,    -1,    -1,
      -1,   300,    -1,   167,   168,    38,    39,    -1,    -1,    42,
      43,    44,    45,    36,   313,   314,   315,    -1,   317,    42,
      43,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,   203,
      -1,    -1,   341,   342,   343,    -1,   345,   346,    -1,    -1,
      -1,   350,    -1,    -1,    38,    39,    -1,   221,    42,    43,
      44,    45,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,   240,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    33,    -1,   261,   262,    37,
      38,    -1,    40,   267,    -1,    -1,    -1,    45,   407,    35,
      -1,    49,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,   287,   288,    -1,    -1,    -1,   427,   293,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,   313,
     314,    20,    21,    22,    -1,    -1,    -1,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    45,   341,   342,     1,
      49,     3,     4,     5,     6,     7,   350,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     1,    49,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
       1,    49,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,     1,    49,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,     1,    49,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,     1,    49,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,
      49,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     1,    49,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
       1,    49,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,     1,    49,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,     1,    49,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,     1,    49,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    33,    -1,    -1,    -1,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    45,    34,    35,    -1,
      49,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    34,    35,    -1,
      -1,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    34,    35,    -1,
      -1,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    34,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    34,    35,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    34,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    34,    35,    36,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    35,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    35,    -1,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    35,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    35,    -1,
      -1,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    34,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    35,    -1,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    35,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      35,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    35,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    35,    36,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    38,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    39,    33,    41,    42,    43,    44,    45,
      46,    47,    48,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    42,    43,
      44,    45,    46,    47,    48,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      42,    43,    44,    45,    46,    47,    48,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    42,    43,    44,    45,    46,    47,    48,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    42,    43,    44,    45,    46,    47,
      48,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    36,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    39,    -1,
      41,    42,    43,    44,    45,    39,    -1,    41,    42,    43,
      44,    45,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    39,    33,    41,
      42,    43,    44,    45,    33,    -1,    -1,    42,    43,    44,
      45,    -1,    -1,    42,    43,    44,    45,    14,    15,    16,
      17,    18,    19,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    42,    43,    44,    45,    -1,
      -1,    42,    43,    44,    45,    14,    15,    16,    17,    18,
      19,    14,    15,    16,    17,    18,    19,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    -1,    41,    42,
      43,    44,    45,    -1,    41,    42,    43,    44,    45,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    14,    15,    16,    17,    18,
      19,    14,    15,    16,    17,    18,    19,    -1,    39,    -1,
      41,    42,    43,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    41,    42,
      43,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    51,    52,    53,    54,
      55,    58,    80,    33,    37,    61,     0,    53,    33,    34,
      33,    61,    20,    38,    62,    12,    13,    20,    21,    22,
      37,    40,    45,    49,    56,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    35,    40,     1,     7,     9,
      10,    11,    33,    54,    61,    63,    64,    65,    67,    68,
      69,    80,    76,    78,    76,    56,    57,    69,    76,    76,
      19,    18,    16,    17,    14,    15,    42,    43,    44,    45,
      46,    47,    48,    35,    40,    34,    36,    69,     1,     3,
      41,    59,    60,    80,    33,    40,    40,    61,    69,    33,
      38,    64,    33,    33,    20,    38,    39,    41,    71,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    69,    41,    69,    79,    70,    36,    41,    41,    39,
      41,    20,    69,    69,     9,    38,    56,    36,    39,    41,
      60,    35,    41,    41,    40,    69,    36,    69,    61,    61,
      69,    36,    66,    41,     8,    33,    61,    37,    20,    21,
      22,    40,    12,    13,    20,    21,    22,    37,    40,    45,
      49,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    12,    13,    20,    21,    22,    40,    45,    49,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    12,    13,
      20,    21,    22,    40,    45,    49,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    37,    12,    13,    20,    21,
      22,    40,    45,    49,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    37,    38,    62,    69,    20,    21,    22,
      40,    76,    78,    76,    57,    69,    76,    76,    19,    18,
      16,    17,    14,    15,    42,    43,    44,    45,    46,    47,
      48,    35,    40,    34,    20,    21,    22,    40,    76,    78,
      76,    69,    76,    76,    19,    18,    16,    17,    14,    15,
      42,    43,    44,    45,    46,    47,    48,    35,    40,    34,
      20,    21,    22,    40,    76,    78,    76,    69,    76,    76,
      19,    18,    16,    17,    14,    15,    42,    43,    44,    45,
      46,    47,    48,    35,    40,    34,    38,    62,    20,    21,
      22,    40,    76,    78,    76,    69,    76,    76,    19,    18,
      16,    17,    14,    15,    42,    43,    44,    45,    46,    47,
      48,    35,    40,    34,    38,    62,    63,    41,    69,    38,
      39,    41,    71,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    69,    41,    79,    70,    69,
      41,    71,    72,    73,    73,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    69,    41,    79,    70,    69,    41,
      71,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    69,    41,    79,    70,    63,    69,    41,
      71,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    69,    41,    79,    70,    63,    38,    41,
      38,    36,    41,    41,    36,    41,    41,    36,    41,    38,
      41,    36,    41,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    56,    56,    56,    57,    57,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    61,
      62,    61,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    66,    65,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    73,    74,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     4,     5,     1,     3,     4,     1,     3,
       5,     4,     5,     5,     1,     3,     2,     4,     5,     2,
       0,     4,     1,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     5,     0,     8,     5,     7,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     1,     4,     3,     4,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 63 "language.y"
    { root = (yyvsp[0].node); }
#line 2604 "src/parser.c"
    break;

  case 4:
#line 68 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2610 "src/parser.c"
    break;

  case 6:
#line 73 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); enclose((yyvsp[0].node), add_symbol_fun((yyval.node))); }
#line 2616 "src/parser.c"
    break;

  case 8:
#line 75 "language.y"
    { }
#line 2622 "src/parser.c"
    break;

  case 9:
#line 76 "language.y"
    { }
#line 2628 "src/parser.c"
    break;

  case 11:
#line 81 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2634 "src/parser.c"
    break;

  case 12:
#line 85 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); assign((yyval.node)); add_symbol_var((yyval.node)); }
#line 2640 "src/parser.c"
    break;

  case 13:
#line 86 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2646 "src/parser.c"
    break;

  case 14:
#line 87 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2652 "src/parser.c"
    break;

  case 16:
#line 92 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2658 "src/parser.c"
    break;

  case 17:
#line 93 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2664 "src/parser.c"
    break;

  case 19:
#line 98 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2670 "src/parser.c"
    break;

  case 20:
#line 102 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2676 "src/parser.c"
    break;

  case 21:
#line 103 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-declarator", (yyvsp[-3].node), (yyvsp[-2].node),     NULL)); assign((yyval.node)); }
#line 2682 "src/parser.c"
    break;

  case 22:
#line 104 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node),     NULL)); assign((yyval.node)); }
#line 2688 "src/parser.c"
    break;

  case 23:
#line 105 "language.y"
    { }
#line 2694 "src/parser.c"
    break;

  case 25:
#line 110 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2700 "src/parser.c"
    break;

  case 26:
#line 114 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); /*assign($$);*/ }
#line 2706 "src/parser.c"
    break;

  case 27:
#line 115 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); /*assign($$);*/ }
#line 2712 "src/parser.c"
    break;

  case 28:
#line 116 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); /*assign($$);*/ }
#line 2718 "src/parser.c"
    break;

  case 29:
#line 120 "language.y"
    { }
#line 2724 "src/parser.c"
    break;

  case 30:
#line 121 "language.y"
    {
				Table * t =  ts_push(context_stack, table_init(16));
				printf("enter scope (new context %p)\n", (void*) t);
			}
#line 2733 "src/parser.c"
    break;

  case 31:
#line 125 "language.y"
    {
				(yyval.node) = (yyvsp[-1].node);
				printf("exit scope\n");
			}
#line 2742 "src/parser.c"
    break;

  case 33:
#line 133 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2748 "src/parser.c"
    break;

  case 34:
#line 137 "language.y"
    { }
#line 2754 "src/parser.c"
    break;

  case 39:
#line 142 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = (yyvsp[0].node); }
#line 2760 "src/parser.c"
    break;

  case 41:
#line 144 "language.y"
    { }
#line 2766 "src/parser.c"
    break;

  case 42:
#line 148 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL)); assign((yyval.node)); }
#line 2772 "src/parser.c"
    break;

  case 43:
#line 149 "language.y"
    { enclose((yyvsp[0].node),NULL); }
#line 2778 "src/parser.c"
    break;

  case 44:
#line 149 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2784 "src/parser.c"
    break;

  case 45:
#line 153 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2790 "src/parser.c"
    break;

  case 46:
#line 154 "language.y"
    { enclose((yyvsp[-5].node),NULL); (yyval.node) = nl_push(node_list, node_init(DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL)); assign((yyval.node)); }
#line 2796 "src/parser.c"
    break;

  case 47:
#line 158 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return",     NULL)); assign((yyval.node)); }
#line 2802 "src/parser.c"
    break;

  case 48:
#line 159 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2808 "src/parser.c"
    break;

  case 50:
#line 164 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2814 "src/parser.c"
    break;

  case 52:
#line 169 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2820 "src/parser.c"
    break;

  case 54:
#line 174 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2826 "src/parser.c"
    break;

  case 56:
#line 179 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2832 "src/parser.c"
    break;

  case 57:
#line 180 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2838 "src/parser.c"
    break;

  case 59:
#line 185 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2844 "src/parser.c"
    break;

  case 60:
#line 186 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2850 "src/parser.c"
    break;

  case 61:
#line 187 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2856 "src/parser.c"
    break;

  case 62:
#line 188 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2862 "src/parser.c"
    break;

  case 64:
#line 193 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2868 "src/parser.c"
    break;

  case 65:
#line 194 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2874 "src/parser.c"
    break;

  case 67:
#line 199 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2880 "src/parser.c"
    break;

  case 68:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2886 "src/parser.c"
    break;

  case 69:
#line 201 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2892 "src/parser.c"
    break;

  case 71:
#line 206 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('!'   , "'!'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2898 "src/parser.c"
    break;

  case 72:
#line 207 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-'   , "'-'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2904 "src/parser.c"
    break;

  case 73:
#line 208 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "'++'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2910 "src/parser.c"
    break;

  case 74:
#line 209 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "'--'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2916 "src/parser.c"
    break;

  case 76:
#line 214 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(VEC_INDEX, "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2922 "src/parser.c"
    break;

  case 77:
#line 215 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_CALL , "function-call", (yyvsp[-2].node)    , NULL)); assign((yyval.node)); }
#line 2928 "src/parser.c"
    break;

  case 78:
#line 216 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_CALL , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2934 "src/parser.c"
    break;

  case 82:
#line 223 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2940 "src/parser.c"
    break;

  case 84:
#line 229 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2946 "src/parser.c"
    break;


#line 2950 "src/parser.c"

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 239 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

