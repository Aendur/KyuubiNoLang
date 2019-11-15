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
#line 79 "language.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "arg-list.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Tablestack * context_stack;

#line 112 "src/parser.c"


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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
       2,     2,     2,    65,     2,     2,     2,    64,     2,     2,
      56,    57,    62,    60,    55,    61,     2,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
      58,    50,    59,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   104,   105,   109,   110,   111,   112,   116,
     117,   118,   119,   120,   121,   125,   126,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     137,   141,   142,   146,   147,   151,   152,   152,   156,   157,
     161,   162,   163,   164,   165,   166,   167,   168,   172,   173,
     177,   178,   182,   183,   187,   188,   192,   193,   197,   198,
     202,   203,   204,   208,   209,   210,   211,   212,   216,   217,
     218,   222,   223,   224,   225,   229,   230,   231,   232,   233,
     237,   238,   239,   240,   244,   245,   246,   247,   248,   249,
     250,   254,   255,   259,   260,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR", "STRING",
  "IDENTIFIER", "STRING_LITERAL", "CONSTANT_FLOAT", "CONSTANT_INT",
  "CONSTANT_HEX", "CONSTANT_CHAR", "IF", "ELSE", "WHILE", "DO", "RETURN",
  "\"++\"", "\"--\"", "\"!\"", "\"*\"", "\"/\"", "\"%\"", "\"+\"",
  "OP_NEG", "\"-\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"||\"", "\"&&\"", "\"=\"", "UNRECOGNIZED_TOKEN",
  "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST", "VARIABLE",
  "CONSTANT", "ARRAY", "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL",
  "DECLARATION", "GENERIC_NODE", "';'", "'='", "'['", "']'", "'{'", "'}'",
  "','", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "$accept", "start", "declaration_list", "declaration",
  "init_declarator", "initializer_list", "function_definition", "$@1",
  "$@2", "$@3", "$@4", "$@5", "$@6", "argument_list", "argument",
  "compound_statement", "$@7", "statement_list", "statement",
  "conditional_statement", "iteration_statement", "return_statement",
  "assignment_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_call_list", "type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      61,    91,    93,   123,   125,    44,    40,    41,    60,    62,
      43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -269

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-269)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     314,   237,     0,    12,    21,    24,    63,   449,   536,    16,
     620,    85,   852,  1300,   962,  -269,   984,  1004,     8,  1100,
    3725,    54,  1391,    36,    37,    60,  2154,  4574,  4609,  4616,
    4651,  4658,    56,    61,   129,    62,  1532,  1532,  1321,  1590,
    1532,  1532,   141,  1618,  2565,  2661,  2729,  2749,   152,   171,
     -24,   -12,   383,   122,  2324,  6407,  6442,  4693,  4700,   215,
    1199,   189,   228,   236,   259,     3,   241,   206,   267,   315,
    2812,  1649,   165,  1590,  1590,   341,   309,  6449,  6484,  6491,
     319,  6526,  6533,  2832,  1274,  2895,  2915,  2978,  1532,  1532,
    1532,  1532,  1532,  1532,  1532,  1532,  1532,  1532,  1532,  1532,
    1532,  1532,   119,     9,   328,  1384,   325,  2998,   249,   347,
     238,   367,  4735,   291,   292,   371,   381,   389,  4742,   395,
     390,  2148,  2557,  2660,  7494,  7526,  7532,  6568,  6575,  6610,
    6617,  6652,    27,   397,  1769,  3061,  3725,   402,   295,  3081,
     399,  4777,  1807,  4784,   407,   410,  1590,    92,   174,  3725,
     426,  3144,  1508,  3725,   440,   327,   332,   473,  3164,   415,
     446,   231,  3227,  1574,  1689,  3247,  1721,   410,   447,   451,
     243,  1751,  1861,  3310,  3330,  3393,  2399,  4819,  4854,  4889,
    4924,  4959,  1831,  1831,  1590,  1831,  1831,   -18,   109,   293,
     867,  2624,  6665,  6700,  4994,  5029,  3413,  3768,  6707,  6742,
    6749,  6784,  6791,  1590,  6826,  2448,  5064,  5085,  5106,  5127,
    5148,  1895,  1895,  1590,  1895,  1895,    33,   -22,   170,  2087,
    4973,  3817,  3852,  5169,  5190,  1134,  3803,  3838,  3873,  3908,
    3943,  1919,  1919,  1590,  1919,  1919,    73,    34,    45,   553,
    1502,  2458,  5204,  3978,  4013,  2108,  4048,  4083,  4118,  4153,
    4188,  2015,  2015,  1590,  2015,  2015,   182,    70,   154,  1363,
    2071,  5239,  5250,  4223,  4258,  3476,  3496,  3725,  1649,   401,
    4272,  6839,  6874,  6887,  6922,  6935,  1590,  6970,  6983,  7018,
    7031,   441,  7066,  7079,  1831,  1831,  1831,  1831,  1831,  1831,
    1831,  1831,  1831,  1831,  1831,  1831,  1831,  1831,   448,  3725,
    1649,   548,   444,  1649,   762,  4307,  3887,  3922,  3957,  3992,
    4027,  1590,  4062,  4097,  4132,  4167,   445,  4202,  4237,  1895,
    1895,  1895,  1895,  1895,  1895,  1895,  1895,  1895,  1895,  1895,
    1895,  1895,  1895,  1649,   831,  2578,  5285,  5295,  5330,  5340,
    5375,  1590,  5385,  5420,  5430,  5465,   450,  5475,  5510,  1919,
    1919,  1919,  1919,  1919,  1919,  1919,  1919,  1919,  1919,  1919,
    1919,  1919,  1919,  1649,   921,  3733,  5521,  5556,  5567,  5602,
    5613,  1590,  5648,  5659,  5694,  5705,   453,  5740,  5751,  2015,
    2015,  2015,  2015,  2015,  2015,  2015,  2015,  2015,  2015,  2015,
    2015,  2015,  2015,   862,  3725,  3559,   452,  5786,   333,  1649,
     941,   456,  5821,   172,   321,  1008,  2907,  7564,  7574,  7606,
    7616,  7114,  7127,  7162,  7175,  7210,    86,  3579,   454,  7217,
     338,  7252,   465,  5856,   339,  1649,  1012,   461,  5877,    -7,
     225,  2666,  2991,  5008,  5043,  5800,  5835,  4371,  4406,  4441,
    4476,  4511,    53,   467,  4322,   344,  1649,  1118,   463,  4357,
      64,    51,  2742,  2825,  2308,  7400,  7432,  7439,  5891,  5926,
    5936,  5971,  5981,    79,   469,  4392,   376,  1649,  1206,   466,
    4427,   105,   164,  1536,  2501,  2217,  7447,  7479,  7487,  6016,
    6027,  6062,  6073,  6108,   191,  3642,  3662,  6123,  6158,   479,
    7265,   404,  7300,   492,  7307,  7342,  6193,  6214,   480,  4833,
     412,  4868,  4462,  4497,   481,  6228,   413,  6263,  4532,  4567,
     483,  6274,   418,  6309,  1237,  7355,  7390,  4903,  4938,  6319,
    6354,  6365,  6400
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,  -269,   537,   210,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,   435,     5,  -170,  -132,   -14,  -269,
    -269,  -269,   369,  2261,  2077,  1924,  1668,  1412,  1139,   761,
     -20,   363,  -268,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    42,   147,    10,   153,   149,   136,
     154,   150,   137,    67,    68,    43,    20,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      78,   204,   114,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   398,    57,   194,   151,   267,    14,    11,   -93,    21,
      88,   -93,   -56,   320,    11,    57,   284,   162,   133,   223,
     -94,   165,   -56,    89,    57,   -54,   299,   -57,   320,   -95,
      85,    69,   -96,   420,   -54,   -56,   424,   -56,    64,    75,
      65,     3,     4,     5,   176,   177,   178,   179,   180,   181,
     -57,   194,   243,   223,   223,   182,   183,    -9,    22,    23,
     106,    88,   134,    15,    24,    17,   445,   319,   -56,   350,
      26,    27,    28,    29,    30,    31,   -55,   351,   352,   -58,
     -58,    36,    37,   351,   352,   -59,   -59,   319,    62,   -56,
     -54,   -56,   184,    18,    66,   394,   466,   185,   -57,   350,
     -58,   186,   -58,    60,   -56,   380,   -59,   349,   -59,    70,
     -55,   -52,    73,   349,   263,    69,    57,    74,    39,   -57,
     284,   -57,   243,    40,   -56,   -56,   223,    41,   -54,    57,
     -54,    57,   491,    57,   -55,   395,   -55,    85,   -55,   -57,
     380,   263,    57,   -56,   285,    57,   160,   161,    85,   157,
     158,    85,    92,    93,   -60,   -60,   -60,   -60,   500,   -57,
     -57,   -56,   278,   278,   223,   278,   278,   417,    -9,    22,
      23,   -60,   173,   225,   226,   227,   228,   229,   230,   506,
      94,    95,   196,   223,   231,   232,   381,   382,   -58,   -58,
      83,   313,   313,   223,   313,   313,   381,   382,   -59,   -59,
     512,    86,   321,   322,   -58,   -58,   -57,   285,   -58,   -58,
       9,   343,   343,   223,   343,   343,   379,     9,   -59,   -59,
      87,   233,   112,   102,   -57,   379,   234,   -58,   -15,   -15,
     235,   373,   373,   223,   373,   373,   -54,   -54,   -10,   245,
     246,   247,   248,   249,   250,   -55,   -55,    57,   194,   243,
     251,   252,     2,     3,     4,     5,   223,   321,   322,   -59,
     -59,   108,   485,   109,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   103,    57,
     194,   243,   -59,   194,   243,   169,    12,   253,   104,   140,
      13,   223,   254,   -33,   107,   -33,   255,   -16,   -16,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   194,   243,     1,   105,     2,     3,     4,
       5,   223,   -31,   110,   -31,   286,   287,   -58,   -58,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   194,   243,   -58,   -91,   142,   -91,   143,
     -32,   223,   -32,   286,   287,   -59,   -59,   117,   -53,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   -59,    57,    57,   118,   -11,   135,   194,
     243,    85,   -34,    58,   -34,    58,   195,   -92,   142,   -92,
     488,    61,    63,   142,   142,   495,   497,    57,    58,   142,
     139,   503,   224,    85,    76,   194,   243,    58,    80,   225,
     226,   227,   228,   229,   230,    90,    91,   -58,   -58,   141,
     231,   232,    90,    91,   -59,   -59,   194,   243,   144,   -57,
      89,   142,   -58,   509,   195,   244,   224,   224,   145,   -59,
     111,   113,   115,   116,   -57,   146,   -14,   194,   243,    -2,
       1,   155,     2,     3,     4,     5,   152,   233,   397,   142,
     265,   516,   234,   175,   -35,    57,   235,   142,   142,   518,
     520,    85,   168,   142,   -48,   522,   -48,   -48,   -48,   -48,
     163,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   167,   -48,
     -48,   -48,   -48,   -48,   166,   -12,   174,   264,   402,    58,
     -13,   421,   428,   148,   487,   244,   494,   449,   -37,   224,
     470,   156,    58,   492,    58,   159,    58,   496,   501,   502,
     507,   508,   -48,   513,   264,    58,   -48,   -48,    58,   -48,
     170,   515,   517,   519,   -48,   521,    -3,    -3,   -48,    -3,
      -3,    -3,    -3,   138,    16,   279,   279,   224,   279,   279,
       0,     0,     0,   281,     0,     0,   225,   226,   227,   228,
     229,   230,     0,     0,     0,     0,   224,   231,   232,     0,
       0,     0,   302,     0,   314,   314,   224,   314,   314,     0,
       0,     0,   316,   353,   354,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,   344,   344,   224,   344,   344,     0,
       0,     0,   346,     0,   233,   419,     0,     0,   -60,   234,
     -60,   355,   356,   235,   374,   374,   224,   374,   374,     0,
      -5,    -5,   376,    -5,    -5,    -5,    -5,     0,     0,     0,
      58,   195,   244,     0,     0,     0,     0,   396,   113,   224,
       0,     0,     0,     0,     0,   401,     0,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,     0,    58,   195,   244,     0,   195,   244,     0,   418,
     113,     0,   422,   113,   224,     0,     0,     0,     0,     0,
     427,     0,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   195,   244,     0,     0,
       0,     0,   443,   113,   224,     0,     0,     0,     0,     0,
     448,     0,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   195,   244,     0,     0,
       0,     0,   464,   113,   224,     0,     0,     0,     0,     0,
     469,     0,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,     0,    58,    58,     0,
       0,     0,   195,   244,     0,     0,     0,     0,   489,   113,
     225,   226,   227,   228,   229,   230,     0,     0,     0,     0,
      58,   231,   232,     0,   193,     0,     0,     0,   195,   244,
       0,     0,     0,     0,   498,   113,     0,    77,    79,     0,
     222,    81,    82,     0,     0,     0,     0,     0,     0,   195,
     244,     0,     0,     0,     0,   504,   113,     0,   233,   423,
       0,     0,     0,   234,     0,     0,     0,   235,     0,     0,
     195,   244,   193,   242,   222,   222,   510,   113,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,    58,     0,
     231,   232,    -7,    -7,     0,    -7,    -7,    -7,    -7,   129,
     130,   131,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   233,   444,     0,
       0,     0,   234,     0,     0,   262,   235,   288,   289,   -60,
     -60,   -60,   -60,   242,     0,     0,     0,   222,     0,     0,
       0,   -35,     0,     0,     0,   -35,   -35,     0,   -35,   -60,
       0,     0,   262,   -35,     0,   290,   291,   -35,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,     0,
     231,   232,     0,   277,   280,   222,   282,   283,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,     0,
     231,   232,    -8,    -8,   222,    -8,    -8,    -8,    -8,     0,
       0,     0,   312,   315,   222,   317,   318,   233,   465,     0,
       0,     0,   234,     0,    -4,    -4,   235,    -4,    -4,    -4,
      -4,     0,   342,   345,   222,   347,   348,   233,   490,     0,
       0,     0,   234,     0,    -6,    -6,   235,    -6,    -6,    -6,
      -6,     0,   372,   375,   222,   377,   378,     0,     0,     0,
     225,   226,   227,   228,   229,   230,     0,     0,     0,   193,
     242,   231,   232,     0,     0,     0,     0,   222,   288,   289,
     -61,   -61,   -61,   -61,     0,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   413,   414,   415,   193,     0,
     -61,   193,   242,     0,   193,   242,   290,   291,   233,   499,
       0,     0,   222,   234,     0,     0,     0,   235,     0,     0,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     439,   440,   441,   222,   193,   242,     0,     0,     0,     0,
     -35,   -35,   222,   -35,   -35,   -35,   -35,     0,     0,     0,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     460,   461,   462,   242,   193,   242,   225,   226,   227,   228,
     229,   230,   222,     0,     0,     0,     0,   231,   232,     0,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     481,   482,   483,   262,     0,     0,     0,     0,     0,     0,
     193,   242,   192,     0,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,   233,   505,     0,     0,   221,   234,
       0,     0,     0,   235,   -84,   333,   193,   242,     0,   -84,
     334,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,   193,   242,     0,
     192,   241,   221,   221,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,     0,   231,   232,     0,   193,   242,
       0,     0,     0,     0,     0,   127,   128,     0,   -37,     0,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   233,   511,     0,     0,     0,   234,     0,     0,
       0,   235,     0,   261,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   241,     0,     0,     0,   221,   -37,     0,     0,     0,
     -37,   -37,     0,   -37,     0,     0,     0,     0,   -37,     0,
     261,   -36,   -37,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -40,   221,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   221,     0,     0,     0,     0,     0,     0,   -36,
       0,     0,   221,   -36,    19,     0,   -36,     0,     0,     0,
       0,   -36,     0,     0,     0,   -36,     0,     0,     0,     0,
     -40,     0,   221,     0,   -40,   -40,     0,   -40,     0,     0,
       0,     0,   -40,     0,   -29,   -29,   -40,   -29,   -29,   -29,
     -29,     0,   221,   383,   384,   -60,   -60,   -60,   -60,    26,
      27,    28,    29,    30,    31,     0,     0,   192,   241,     0,
      36,    37,     0,     0,     0,   221,     0,   -60,   -60,     0,
       0,   385,   386,   192,   192,   192,   192,   192,   192,   192,
     192,   411,   412,     0,     0,   191,   192,     0,     0,   192,
     241,     0,   192,   241,     0,     0,     0,    39,     0,     0,
     221,   220,    40,     0,     0,     0,    41,     0,   221,   221,
     221,   221,   221,   221,   221,   221,   437,   438,     0,     0,
       0,   221,   192,   241,     0,     0,     0,     0,     0,     0,
     221,     0,     0,   191,   240,   220,   220,     0,   241,   241,
     241,   241,   241,   241,   241,   241,   458,   459,     0,     0,
       0,   241,   192,   241,   123,   124,   125,   126,   -28,   -28,
     221,   -28,   -28,   -28,   -28,     0,     0,     0,   261,   261,
     261,   261,   261,   261,   261,   261,   479,   480,     0,     0,
       0,   261,   -63,   -63,   -63,   -63,   -63,   -63,   192,   241,
     197,   198,   199,   200,   201,   202,   260,     0,     0,     0,
       0,    36,    37,     0,   240,     0,     0,   -63,   220,   -63,
     -63,   -63,   357,   358,   192,   241,   383,   384,   -61,   -61,
     -61,   -61,     0,   260,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,   192,   241,     0,   203,     0,
     -61,   -61,     0,    40,   385,   386,   220,    41,   205,   206,
     207,   208,   209,   210,     0,     0,   192,   241,     0,   211,
     212,     0,     0,     0,     0,   220,     0,     0,     0,   -45,
       0,   -45,   -45,   -45,   -45,   220,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,     0,     0,   220,   213,     0,     0,     0,
       0,   214,     0,     0,     0,   215,     0,   176,   177,   178,
     179,   180,   181,     0,     0,   220,     0,   -45,   182,   183,
       0,   -45,   -45,     0,   -45,     0,     0,     0,     0,   -45,
     191,   240,     0,   -45,     0,     0,     0,     0,   220,   -22,
     -22,   190,   -22,   -22,   -22,   -22,   191,   191,   191,   191,
     407,   408,   409,   410,     0,   184,     0,   219,     0,   191,
     185,     0,   191,   240,   186,   191,   240,     0,     0,     0,
       0,   -24,   -24,   220,   -24,   -24,   -24,   -24,     0,     0,
       0,   220,   220,   220,   220,   433,   434,   435,   436,   190,
     239,   219,   219,     0,   220,   191,   240,     0,     0,     0,
       0,   -20,   -20,   220,   -20,   -20,   -20,   -20,   121,   122,
       0,   240,   240,   240,   240,   454,   455,   456,   457,     0,
       0,     0,     0,     0,   240,   191,   240,   245,   246,   247,
     248,   249,   250,   220,     0,     0,     0,     0,   251,   252,
       0,   260,   260,   260,   260,   475,   476,   477,   478,     0,
       0,     0,   259,     0,   260,     0,     0,     0,     0,     0,
     239,   191,   240,     0,   219,   225,   226,   227,   228,   229,
     230,     0,     0,     0,     0,   253,   231,   232,     0,   259,
     254,     0,     0,     0,   255,     0,     0,   191,   240,   270,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
     182,   183,   219,     0,     0,     0,     0,     0,   191,   240,
       0,   -18,   -18,   233,   -18,   -18,   -18,   -18,   234,     0,
       0,   219,   235,     0,     0,     0,     0,     0,     0,   191,
     240,   219,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,   185,     0,     0,     0,   186,     0,     0,     0,
       0,   219,     0,   305,   306,   307,   308,   309,   310,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,   335,   336,   337,
     338,   339,   340,     0,     0,     0,   190,   239,   231,   232,
       0,     0,     0,     0,   219,     0,     0,   189,     0,     0,
       0,   311,   190,   190,   405,   406,   214,     0,     0,     0,
     215,     0,     0,   218,     0,   190,     0,     0,   190,   239,
       0,   190,   239,     0,     0,   341,     0,     0,     0,   219,
     234,     0,     0,     0,   235,     0,     0,   219,   219,   431,
     432,     0,     0,     0,     0,   189,   238,   218,   218,     0,
     219,   190,   239,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,   120,     0,     0,     0,   239,   239,   452,
     453,     0,     0,   365,   366,   367,   368,   369,   370,     0,
     239,   190,   239,     0,   251,   252,     0,     0,     0,   219,
       0,     0,     0,     0,     0,     0,     0,   259,   259,   473,
     474,     0,     0,     0,     0,     0,     0,     0,   258,     0,
     259,     0,     0,     0,     0,     0,   238,   190,   239,     0,
     218,   371,     0,     0,     0,     0,   254,     0,     0,     0,
     255,     0,     0,     0,     0,   258,     0,     0,     0,     0,
       0,     0,     0,   190,   239,     0,     0,     0,     0,     0,
     188,   -63,   -63,   -63,   -63,   -63,   -63,     0,   218,     0,
       0,     0,     0,     0,   190,   239,   217,   323,   324,   -60,
     -60,   -60,   -60,     0,     0,   -63,   -63,   218,     0,   -63,
     -63,   387,   388,     0,     0,   190,   239,   218,   -84,   -84,
     -84,   -84,   -84,   -84,   -60,   325,   326,     0,   188,   237,
     217,   217,     0,     0,     0,     0,     0,   218,   -84,   363,
       0,     0,   -84,   -84,   364,   119,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   218,    92,    93,
     -61,   -61,   -61,   -61,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   189,   238,     0,     0,     0,   -61,     0,     0,
     218,     0,     0,   -84,   -84,    71,    94,    95,   189,   404,
      72,   257,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   237,
       0,   189,     0,   217,   189,   238,     0,   189,   238,     0,
       0,     0,     0,     0,     0,   218,     0,     0,   257,     0,
       0,     0,     0,   218,   430,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   218,   189,   238,     0,
       0,   217,     0,     0,     0,   218,     0,     0,     0,     0,
       0,   -66,   -66,   238,   451,   -66,   -66,   387,   388,     0,
     217,     0,     0,     0,   187,     0,   238,   189,   238,     0,
     217,     0,     0,     0,     0,   218,     0,     0,     0,     0,
     216,     0,     0,   258,   472,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,     0,     0,   189,   238,     0,     0,     0,     0,     0,
     217,     0,   187,   236,   216,   216,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   188,   237,     0,     0,   189,
     238,     0,     0,   217,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   403,   132,   -66,     0,   -66,   -66,   -66,   357,   358,
     189,   238,     0,   -63,   188,     0,     0,   188,   237,     0,
     188,   237,   -63,   -63,    96,    97,     0,     0,   217,     0,
       0,   189,   238,     0,     0,   256,   429,     0,     0,     0,
       0,     0,     0,   236,     0,     0,     0,   216,     0,   217,
     188,   237,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,   256,     0,     0,     0,   450,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,   237,
     188,   237,     0,     0,     0,   216,     0,     0,   217,   -84,
     268,   -84,     0,     0,     0,   269,   471,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   216,     0,     0,     0,     0,   257,
       0,     0,     0,     0,   216,     0,   188,   237,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   216,     0,     0,     0,   -84,   303,
       0,     0,   188,   237,   304,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -68,   216,   -68,   -68,   -68,   -68,   -68,
     359,   360,   361,   188,   237,     0,     0,     0,     0,   187,
     236,   383,   384,   -62,   -62,   -62,   -62,   216,     0,     0,
       0,     0,     0,     0,   188,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,     0,   416,   385,
     386,   187,   236,     0,   187,   236,    25,     0,     2,     3,
       4,     5,   216,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,     0,    92,    93,   -62,
     -62,   -62,   -62,   442,   187,   236,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,   -62,     0,   -84,   -84,
     -84,   -84,   -84,   -84,    38,    94,    95,     0,   175,    84,
       0,    39,     0,   463,   187,   236,    40,     0,     0,   446,
      41,     0,   216,   -84,   447,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   484,   -63,   -63,   -63,   -63,   -63,   -63,
     187,   236,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -63,   -38,   -38,   -38,
     -38,   -38,   -63,   -63,   292,   293,   187,   236,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   323,   324,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,   187,   236,   -66,
     -38,     0,     0,     0,   -38,   -38,     0,   -38,   -66,   -66,
      96,    97,   -38,   -61,   325,   326,   -38,     0,   187,   236,
     -43,     0,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -44,     0,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,     0,   353,   354,   -61,   -61,   -61,   -61,   -43,     0,
       0,     0,   -43,   -43,     0,   -43,     0,     0,     0,     0,
     -43,     0,     0,     0,   -43,     0,     0,   -61,   -44,   -61,
     355,   356,   -44,   -44,     0,   -44,     0,     0,     0,     0,
     -44,     0,     0,   -47,   -44,   -47,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -41,     0,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,   353,   354,   -62,   -62,   -62,
     -62,   -47,     0,     0,     0,   -47,   -47,     0,   -47,     0,
       0,     0,     0,   -47,     0,     0,     0,   -47,     0,     0,
     -62,   -41,   -62,   355,   356,   -41,   -41,     0,   -41,     0,
       0,     0,     0,   -41,     0,     0,   -39,   -41,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -46,     0,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   288,   289,   -62,
     -62,   -62,   -62,     0,   -39,     0,     0,     0,   -39,   -39,
       0,   -39,     0,     0,     0,     0,   -39,     0,     0,   -62,
     -39,     0,     0,     0,   -46,   290,   291,     0,   -46,   -46,
       0,   -46,     0,     0,     0,     0,   -46,     0,     0,   -42,
     -46,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -21,
       0,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,
       0,   323,   324,   -62,   -62,   -62,   -62,   -42,     0,     0,
       0,   -42,   -42,     0,   -42,     0,     0,     0,     0,   -42,
       0,     0,     0,   -42,     0,     0,     0,   -21,   -62,   325,
     326,   -21,   -27,     0,   -21,     0,     0,     0,     0,   -21,
       0,     0,   -19,   -21,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,   -17,     0,   -17,   -17,   -17,   -17,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,     0,     0,     0,     0,     0,     0,     0,     0,
     -19,     0,     0,     0,   -19,   -25,     0,   -19,     0,     0,
       0,     0,   -19,     0,     0,     0,   -19,     0,     0,     0,
     -17,     0,     0,     0,   -17,   -23,     0,   -17,     0,     0,
       0,     0,   -17,     0,     0,    25,   -17,     2,     3,     4,
       5,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,   -50,     0,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,   175,   164,     0,
      39,     0,     0,     0,     0,    40,     0,     0,     0,    41,
       0,     0,     0,   -50,     0,     0,     0,   -50,   -50,     0,
     -50,     0,     0,     0,     0,   -50,     0,     0,    25,   -50,
       2,     3,     4,     5,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    25,     0,
       2,     3,     4,     5,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
     175,   171,     0,    39,     0,     0,     0,     0,    40,     0,
       0,     0,    41,     0,     0,     0,    38,     0,     0,     0,
     175,   172,     0,    39,     0,     0,     0,     0,    40,     0,
       0,   -49,    41,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -51,     0,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
       0,     0,     0,   -49,   -49,     0,   -49,     0,     0,     0,
       0,   -49,     0,     0,     0,   -49,     0,     0,     0,   -51,
       0,     0,     0,   -51,   -51,     0,   -51,     0,     0,     0,
       0,   -51,     0,     0,   -36,   -51,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,     0,     0,     0,   -36,   266,     0,   -36,
       0,     0,     0,     0,   -36,     0,     0,     0,   -36,     0,
       0,     0,   -36,     0,     0,     0,   -36,   298,     0,   -36,
       0,     0,     0,     0,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -35,     0,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,     0,     0,     0,   -36,
     393,     0,   -36,     0,     0,     0,     0,   -36,     0,     0,
       0,   -36,     0,     0,     0,   -35,     0,     0,     0,   -35,
     -35,     0,   -35,     0,     0,     0,     0,   -35,     0,     0,
      25,   -35,     2,     3,     4,     5,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      25,     0,     2,     3,     4,     5,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,   175,   486,     0,    39,     0,     0,     0,     0,
      40,     0,     0,     0,    41,     0,     0,     0,    38,     0,
       0,     0,   175,   493,     0,    39,     0,     0,     0,     0,
      40,     0,     0,    25,    41,     2,     3,     4,     5,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,   -37,     0,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,   175,   514,     0,    39,     0,
       0,     0,     0,    40,     0,     0,     0,    41,     0,     0,
       0,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
       0,     0,     0,   -37,     0,     0,    25,   -37,     2,     3,
       4,     5,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   175,     0,
       0,    39,     0,     0,   467,     0,    40,   -84,   -84,   468,
      41,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,   300,
       0,     0,     0,     0,   301,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -85,     0,     0,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -68,   -68,   -68,   -68,   -68,   329,
     330,   331,   -71,   -71,   -71,   -71,   -71,   -71,   -86,     0,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -85,   -85,   -85,
     -85,   -85,   -85,   -87,     0,     0,     0,     0,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -88,     0,
       0,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,   -89,     0,     0,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,
     -75,   -75,   -75,   -75,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   362,     0,
       0,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -89,   -80,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -85,   -85,
     -85,   -85,   -85,   -85,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -78,   -78,   -78,   -78,   -78,   -78,   -85,     0,
       0,     0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -75,   -75,   -75,
     -75,   -75,   -75,   -86,     0,     0,     0,   -86,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,   -87,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,
     -79,   -79,   -79,   -88,     0,     0,     0,   -88,   -88,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -77,   -77,   -77,   -77,   -77,   -77,   -89,     0,
       0,     0,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,   -76,
     -76,   -76,   -76,   392,     0,     0,     0,   -75,   -75,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,
     -80,   -80,   -80,   -80,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -84,   -84,   -84,   -84,   -84,   -84,   -80,     0,
       0,     0,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   399,   -84,     0,     0,     0,   400,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   425,     0,
       0,     0,     0,   426,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -82,     0,     0,     0,     0,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -90,     0,     0,
       0,     0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,   -69,   -69,
     -69,   -69,   -69,   329,   330,   331,   -70,   -70,   -70,   -70,
     -70,   -70,   -82,     0,     0,     0,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,   -90,   -90,
     -90,   -90,   -90,   -70,   -70,   -70,   -70,   -70,   329,   330,
     331,   -72,   -72,   -72,   -72,   -72,   -72,   -90,     0,     0,
       0,   -90,   -90,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -81,   -81,   -81,   -81,   -81,   -81,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,   -81,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,
     -83,   -83,   -83,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,   -74,   -74,   -74,   -74,   -83,     0,     0,
       0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -81,   -81,   -81,   -81,   -81,   -81,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,   -81,   -81,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
       0,   -83,   -83,   -85,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,   -86,   -86,
       0,     0,     0,     0,     0,   -87,   -87,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
     -88,   -88,     0,     0,     0,     0,     0,   -89,   -89,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,   -75,   101,     0,     0,     0,     0,     0,   -80,
     -80,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,   -82,   -82,     0,     0,     0,     0,
       0,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,   -81,   -81,     0,     0,
       0,     0,     0,   -83,   -83,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -85,
       0,   -85,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,   -90,
     -90,   -90,   -90,   -90,   -86,     0,   -86,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,   -87,   -87,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -81,   -81,   -81,   -81,   -81,   -81,   -87,
       0,   -87,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,
     -83,   -83,   -83,   -83,   -88,     0,   -88,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -63,   -63,   -63,   -63,   -63,   -63,   -89,
       0,   -89,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
     -63,   -63,   -63,   327,   328,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   297,     0,   -75,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,
     -80,   -80,   -80,   -80,   -80,   -66,   -66,   -66,   327,   328,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -80,
       0,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -85,   -85,   -85,   -85,   -85,   -85,
     -67,   -67,   -67,   327,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,   -89,   -75,
     -75,   -75,   -75,   -75,   -75,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,     0,     0,   332,
     -80,   -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -71,   -71,   -71,   -71,   -71,   -71,
     -80,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,     0,     0,   -68,   -68,   -68,
     -68,   389,   390,   391,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -75,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -76,   -76,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -82,     0,   -82,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,   -90,   -90,   -64,   -64,   -64,
     327,   328,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -90,     0,   -90,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,
     -82,   -82,   -65,   -65,   -65,   327,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -90,   -90,   -90,
     -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -69,   -69,   -69,   -69,   -69,   -69,   -90,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   359,   360,   361,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   359,   360,
     361,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   389,   390,
     391,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,   389,
     390,   391,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -81,     0,   -81,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,     0,
     -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -68,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -68,   -68,   -68,   -68,    98,
      99,   100,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,   -78,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,     0,     0,
     -79,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,   -77,     0,     0,     0,     0,
       0,     0,   -76,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,     0,   -70,     0,   -69,   -69,   -69,   -69,
      98,    99,   100,   -70,   -70,   -70,   -70,    98,    99,   100,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,   -72,
       0,     0,     0,     0,     0,     0,   -73,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -68,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   294,   295,   296,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,   -85,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,     0,     0,   -87,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,   -88,     0,     0,     0,     0,     0,     0,
     -89,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -85,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,   -86,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,   -78,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -75,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
     -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -79,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -77,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   -69,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   294,   295,   296,   -70,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   294,
     295,   296,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,     0,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,   -82,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,     0,     0,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,     0,   -81,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,   -83,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -67,     0,   -67,   -67,   -67,
     357,   358,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -64,     0,   -64,
     -64,   -64,   357,   358,   -65,     0,   -65,   -65,   -65,   357,
     358,   -67,   -67,     0,     0,   -67,   -67,   387,   388,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -64,   -64,     0,     0,   -64,   -64,   387,
     388,   -65,   -65,   -67,     0,   -65,   -65,   387,   388,     0,
       0,     0,   -67,   -67,    96,    97,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,   -64,     0,     0,     0,     0,
       0,   -65,     0,     0,   -64,   -64,    96,    97,     0,     0,
     -65,   -65,    96,    97,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,     0,   -66,   -66,   292,   293,   -67,     0,     0,     0,
       0,     0,   -67,   -67,   292,   293,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,     0,   -64,   -64,   292,   293,   -65,     0,
       0,     0,     0,     0,   -65,   -65,   292,   293
};

static const yytype_int16 yycheck[] =
{
      20,   269,    22,    23,   136,   175,     1,     0,     8,     1,
      34,     8,    34,    35,     7,    35,    34,   149,     9,    39,
       8,   153,    34,    35,    44,    49,   196,    34,    35,     8,
      44,    24,     8,   301,    52,    57,   304,    49,     1,    34,
       3,     4,     5,     6,     8,     9,    10,    11,    12,    13,
      57,    71,    72,    73,    74,    19,    20,    49,    50,    51,
      57,    34,    53,     0,    56,    49,   334,    34,    34,    35,
       8,     9,    10,    11,    12,    13,    49,    32,    33,    34,
      35,    19,    20,    32,    33,    34,    35,    34,    52,    55,
      57,    57,    56,     8,    57,   265,   364,    61,    34,    35,
      55,    65,    57,    49,    34,    35,    55,    34,    57,    49,
      57,    49,    56,    34,   134,   108,   136,    56,    56,    55,
      34,    57,   142,    61,    54,    55,   146,    65,    55,   149,
      57,   151,   400,   153,    55,   267,    57,   151,    52,    34,
      35,   161,   162,    34,    35,   165,    54,    55,   162,   144,
     145,   165,    30,    31,    32,    33,    34,    35,   426,    54,
      55,    52,   182,   183,   184,   185,   186,   299,    49,    50,
      51,    49,   167,     8,     9,    10,    11,    12,    13,   447,
      58,    59,    53,   203,    19,    20,    32,    33,    34,    35,
      49,   211,   212,   213,   214,   215,    32,    33,    34,    35,
     468,    49,    32,    33,    34,    35,    34,    35,    54,    55,
       0,   231,   232,   233,   234,   235,    34,     7,    54,    55,
      49,    56,    57,     8,    52,    34,    61,    57,    54,    55,
      65,   251,   252,   253,   254,   255,    54,    55,    49,     8,
       9,    10,    11,    12,    13,    54,    55,   267,   268,   269,
      19,    20,     3,     4,     5,     6,   276,    32,    33,    34,
      35,    55,   394,    57,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    50,   299,
     300,   301,    57,   303,   304,    54,    49,    56,    52,    51,
      53,   311,    61,    55,    53,    57,    65,    54,    55,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,     1,    57,     3,     4,     5,
       6,   341,    55,     8,    57,    32,    33,    34,    35,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    52,    55,    55,    57,    57,
      55,   371,    57,    32,    33,    34,    35,    16,    49,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,    52,   394,   395,    57,    49,    53,   399,
     400,   395,    55,    20,    57,    22,    23,    55,    55,    57,
      57,    22,    23,    55,    55,    57,    57,   417,    35,    55,
      53,    57,    39,   417,    35,   425,   426,    44,    39,     8,
       9,    10,    11,    12,    13,    32,    33,    34,    35,    52,
      19,    20,    32,    33,    34,    35,   446,   447,    57,    34,
      35,    55,    49,    57,    71,    72,    73,    74,    57,    49,
      71,    72,    73,    74,    49,    56,    49,   467,   468,     0,
       1,    52,     3,     4,     5,     6,    54,    56,    57,    55,
      53,    57,    61,    53,    16,   485,    65,    55,    55,    57,
      57,   485,    57,    55,     1,    57,     3,     4,     5,     6,
      54,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    54,    49,    49,   134,    57,   136,
      49,    57,    57,   134,    52,   142,    52,    57,    16,   146,
      57,   142,   149,    57,   151,   146,   153,    52,    57,    52,
      57,    52,    49,    57,   161,   162,    53,    54,   165,    56,
     161,    52,    52,    52,    61,    52,     0,     1,    65,     3,
       4,     5,     6,   108,     7,   182,   183,   184,   185,   186,
      -1,    -1,    -1,   184,    -1,    -1,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,   203,    19,    20,    -1,
      -1,    -1,   203,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   213,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,   231,   232,   233,   234,   235,    -1,
      -1,    -1,   233,    -1,    56,    57,    -1,    -1,    55,    61,
      57,    58,    59,    65,   251,   252,   253,   254,   255,    -1,
       0,     1,   253,     3,     4,     5,     6,    -1,    -1,    -1,
     267,   268,   269,    -1,    -1,    -1,    -1,   268,   269,   276,
      -1,    -1,    -1,    -1,    -1,   276,    -1,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    -1,   299,   300,   301,    -1,   303,   304,    -1,   300,
     301,    -1,   303,   304,   311,    -1,    -1,    -1,    -1,    -1,
     311,    -1,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,    -1,
      -1,    -1,   333,   334,   341,    -1,    -1,    -1,    -1,    -1,
     341,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    -1,    -1,
      -1,    -1,   363,   364,   371,    -1,    -1,    -1,    -1,    -1,
     371,    -1,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,    -1,   394,   395,    -1,
      -1,    -1,   399,   400,    -1,    -1,    -1,    -1,   399,   400,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
     417,    19,    20,    -1,    23,    -1,    -1,    -1,   425,   426,
      -1,    -1,    -1,    -1,   425,   426,    -1,    36,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   446,
     447,    -1,    -1,    -1,    -1,   446,   447,    -1,    56,    57,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,
     467,   468,    71,    72,    73,    74,   467,   468,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,   485,    -1,
      19,    20,     0,     1,    -1,     3,     4,     5,     6,    98,
      99,   100,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,   134,    65,    30,    31,    32,
      33,    34,    35,   142,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    52,
      -1,    -1,   161,    61,    -1,    58,    59,    65,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,   182,   183,   184,   185,   186,    -1,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,     0,     1,   203,     3,     4,     5,     6,    -1,
      -1,    -1,   211,   212,   213,   214,   215,    56,    57,    -1,
      -1,    -1,    61,    -1,     0,     1,    65,     3,     4,     5,
       6,    -1,   231,   232,   233,   234,   235,    56,    57,    -1,
      -1,    -1,    61,    -1,     0,     1,    65,     3,     4,     5,
       6,    -1,   251,   252,   253,   254,   255,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,   268,
     269,    19,    20,    -1,    -1,    -1,    -1,   276,    30,    31,
      32,    33,    34,    35,    -1,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
      52,   300,   301,    -1,   303,   304,    58,    59,    56,    57,
      -1,    -1,   311,    61,    -1,    -1,    -1,    65,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
       0,     1,   341,     3,     4,     5,     6,    -1,    -1,    -1,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,     8,     9,    10,    11,
      12,    13,   371,    -1,    -1,    -1,    -1,    19,    20,    -1,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,    -1,    -1,    -1,    -1,    -1,    -1,
     399,   400,    23,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    39,    61,
      -1,    -1,    -1,    65,    50,    51,   425,   426,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       1,    -1,     3,     4,     5,     6,    -1,   446,   447,    -1,
      71,    72,    73,    74,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,   467,   468,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,   134,     0,     1,    -1,     3,     4,     5,
       6,   142,    -1,    -1,    -1,   146,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
     161,     1,    65,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    -1,     1,   184,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,   203,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,   213,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      49,    -1,   233,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,     0,     1,    65,     3,     4,     5,
       6,    -1,   253,    30,    31,    32,    33,    34,    35,     8,
       9,    10,    11,    12,    13,    -1,    -1,   268,   269,    -1,
      19,    20,    -1,    -1,    -1,   276,    -1,    54,    55,    -1,
      -1,    58,    59,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,    -1,    23,   297,    -1,    -1,   300,
     301,    -1,   303,   304,    -1,    -1,    -1,    56,    -1,    -1,
     311,    39,    61,    -1,    -1,    -1,    65,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
      -1,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    71,    72,    73,    74,    -1,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,    -1,    -1,
      -1,   362,   363,   364,    92,    93,    94,    95,     0,     1,
     371,     3,     4,     5,     6,    -1,    -1,    -1,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,    -1,    -1,
      -1,   392,    30,    31,    32,    33,    34,    35,   399,   400,
       8,     9,    10,    11,    12,    13,   134,    -1,    -1,    -1,
      -1,    19,    20,    -1,   142,    -1,    -1,    55,   146,    57,
      58,    59,    60,    61,   425,   426,    30,    31,    32,    33,
      34,    35,    -1,   161,     0,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   446,   447,    -1,    56,    -1,
      54,    55,    -1,    61,    58,    59,   184,    65,     8,     9,
      10,    11,    12,    13,    -1,    -1,   467,   468,    -1,    19,
      20,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,   213,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,     8,     9,    10,
      11,    12,    13,    -1,    -1,   253,    -1,    49,    19,    20,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
     268,   269,    -1,    65,    -1,    -1,    -1,    -1,   276,     0,
       1,    23,     3,     4,     5,     6,   284,   285,   286,   287,
     288,   289,   290,   291,    -1,    56,    -1,    39,    -1,   297,
      61,    -1,   300,   301,    65,   303,   304,    -1,    -1,    -1,
      -1,     0,     1,   311,     3,     4,     5,     6,    -1,    -1,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,    71,
      72,    73,    74,    -1,   332,   333,   334,    -1,    -1,    -1,
      -1,     0,     1,   341,     3,     4,     5,     6,    90,    91,
      -1,   349,   350,   351,   352,   353,   354,   355,   356,    -1,
      -1,    -1,    -1,    -1,   362,   363,   364,     8,     9,    10,
      11,    12,    13,   371,    -1,    -1,    -1,    -1,    19,    20,
      -1,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
      -1,    -1,   134,    -1,   392,    -1,    -1,    -1,    -1,    -1,
     142,   399,   400,    -1,   146,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    56,    19,    20,    -1,   161,
      61,    -1,    -1,    -1,    65,    -1,    -1,   425,   426,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,   184,    -1,    -1,    -1,    -1,    -1,   446,   447,
      -1,     0,     1,    56,     3,     4,     5,     6,    61,    -1,
      -1,   203,    65,    -1,    -1,    -1,    -1,    -1,    -1,   467,
     468,   213,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,   233,    -1,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,   268,   269,    19,    20,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    23,    -1,    -1,
      -1,    56,   284,   285,   286,   287,    61,    -1,    -1,    -1,
      65,    -1,    -1,    39,    -1,   297,    -1,    -1,   300,   301,
      -1,   303,   304,    -1,    -1,    56,    -1,    -1,    -1,   311,
      61,    -1,    -1,    -1,    65,    -1,    -1,   319,   320,   321,
     322,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
     332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    89,    -1,    -1,    -1,   349,   350,   351,
     352,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
     362,   363,   364,    -1,    19,    20,    -1,    -1,    -1,   371,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,   381,
     382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
     392,    -1,    -1,    -1,    -1,    -1,   142,   399,   400,    -1,
     146,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   425,   426,    -1,    -1,    -1,    -1,    -1,
      23,    30,    31,    32,    33,    34,    35,    -1,   184,    -1,
      -1,    -1,    -1,    -1,   446,   447,    39,    30,    31,    32,
      33,    34,    35,    -1,    -1,    54,    55,   203,    -1,    58,
      59,    60,    61,    -1,    -1,   467,   468,   213,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    -1,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,   233,    50,    51,
      -1,    -1,    54,    55,    56,    88,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,   253,    30,    31,
      32,    33,    34,    35,    30,    31,    32,    33,    34,    35,
      -1,    -1,   268,   269,    -1,    -1,    -1,    49,    -1,    -1,
     276,    -1,    -1,    49,    50,    51,    58,    59,   284,   285,
      56,   134,    58,    59,    60,    61,    62,    63,    64,   142,
      -1,   297,    -1,   146,   300,   301,    -1,   303,   304,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   161,    -1,
      -1,    -1,    -1,   319,   320,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,   332,   333,   334,    -1,
      -1,   184,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    54,    55,   349,   350,    58,    59,    60,    61,    -1,
     203,    -1,    -1,    -1,    23,    -1,   362,   363,   364,    -1,
     213,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      39,    -1,    -1,   379,   380,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,
      -1,    -1,    -1,   399,   400,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    71,    72,    73,    74,    -1,    -1,    30,    31,
      32,    33,    34,    35,    -1,   268,   269,    -1,    -1,   425,
     426,    -1,    -1,   276,    30,    31,    32,    33,    34,    35,
      -1,   284,   101,    55,    -1,    57,    58,    59,    60,    61,
     446,   447,    -1,    49,   297,    -1,    -1,   300,   301,    -1,
     303,   304,    58,    59,    60,    61,    -1,    -1,   311,    -1,
      -1,   467,   468,    -1,    -1,   134,   319,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,   146,    -1,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,   161,    -1,    -1,    -1,   349,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,   362,
     363,   364,    -1,    -1,    -1,   184,    -1,    -1,   371,    50,
      51,    52,    -1,    -1,    -1,    56,   379,    58,    59,    60,
      61,    62,    63,    64,   203,    -1,    -1,    -1,    -1,   392,
      -1,    -1,    -1,    -1,   213,    -1,   399,   400,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,   233,    -1,    -1,    -1,    50,    51,
      -1,    -1,   425,   426,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    55,   253,    57,    58,    59,    60,    61,
      62,    63,    64,   446,   447,    -1,    -1,    -1,    -1,   268,
     269,    30,    31,    32,    33,    34,    35,   276,    -1,    -1,
      -1,    -1,    -1,    -1,   467,   468,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,   297,    58,
      59,   300,   301,    -1,   303,   304,     1,    -1,     3,     4,
       5,     6,   311,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    -1,    30,    31,    32,
      33,    34,    35,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    49,    -1,    30,    31,
      32,    33,    34,    35,    49,    58,    59,    -1,    53,    54,
      -1,    56,    -1,   362,   363,   364,    61,    -1,    -1,    51,
      65,    -1,   371,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,    30,    31,    32,    33,    34,    35,
     399,   400,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    52,    16,    17,    18,
      19,    20,    58,    59,    60,    61,   425,   426,    -1,    -1,
      30,    31,    32,    33,    34,    35,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,   446,   447,    49,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    58,    59,
      60,    61,    61,    57,    58,    59,    65,    -1,   467,   468,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    30,    31,    32,    33,    34,    35,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    55,    49,    57,
      58,    59,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,     1,    65,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    -1,    -1,    30,    31,    32,    33,    34,
      35,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,
      55,    49,    57,    58,    59,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,     1,    65,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    -1,    30,    31,    32,
      33,    34,    35,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    52,
      65,    -1,    -1,    -1,    49,    58,    59,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,     1,
      65,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    -1,
      -1,    30,    31,    32,    33,    34,    35,    49,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    49,    57,    58,
      59,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,     1,    65,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,     1,    65,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,     1,    65,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,     1,    65,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,     1,    65,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,     1,    65,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
       1,    65,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,     1,    65,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,     1,    65,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    51,    -1,    61,    54,    55,    56,
      65,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    50,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    51,    52,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    50,    -1,    -1,
      -1,    -1,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    50,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    50,    -1,    -1,
      -1,    -1,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    49,    50,    58,    59,    60,    61,    62,
      63,    64,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    49,    50,    58,    59,    60,
      61,    62,    63,    64,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    49,    50,    58,
      59,    60,    61,    62,    63,    64,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    49,
      50,    58,    59,    60,    61,    62,    63,    64,    58,    59,
      60,    61,    62,    63,    64,    30,    31,    32,    33,    34,
      35,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    49,    50,    58,    59,    60,    61,    62,    63,    64,
      58,    59,    60,    61,    62,    63,    64,    30,    31,    32,
      33,    34,    35,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    49,    50,    58,    59,    60,    61,    62,
      63,    64,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    30,    31,    32,    33,    34,
      35,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    30,    31,    32,    33,
      34,    35,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    30,    31,    32,
      33,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    50,    30,    31,
      32,    33,    34,    35,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    50,    30,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      30,    31,    32,    33,    34,    35,    57,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    54,    55,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    54,
      55,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    54,    55,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    30,    31,    32,
      33,    34,    35,    57,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    30,    31,    32,    33,    34,    35,
      57,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    54,    55,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    54,
      55,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    49,    -1,    58,    59,
      60,    61,    62,    63,    64,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      58,    59,    60,    61,    62,    63,    64,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    58,    59,    60,    61,    62,    63,    64,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    58,    59,    60,    61,    62,    63,
      64,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    58,    59,    60,    61,
      62,    63,    64,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    58,    59,
      60,    61,    62,    63,    64,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    49,    -1,    58,    59,
      60,    61,    62,    63,    64,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      58,    59,    60,    61,    62,    63,    64,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    58,    59,    60,    61,    62,    63,    64,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    52,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    49,    -1,    58,    59,
      60,    61,    62,    63,    64,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    49,    -1,    58,    59,
      60,    61,    62,    63,    64,    58,    59,    60,    61,    62,
      63,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    55,    -1,    57,    58,    59,
      60,    61,    30,    31,    32,    33,    34,    35,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    59,    60,    61,    55,    -1,    57,    58,    59,    60,
      61,    54,    55,    -1,    -1,    58,    59,    60,    61,    30,
      31,    32,    33,    34,    35,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    54,    55,    -1,    -1,    58,    59,    60,
      61,    54,    55,    49,    -1,    58,    59,    60,    61,    -1,
      -1,    -1,    58,    59,    60,    61,    30,    31,    32,    33,
      34,    35,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      58,    59,    60,    61,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    67,    68,    69,    70,
      72,    99,    49,    53,    81,     0,    69,    49,     8,    54,
      82,     1,    50,    51,    56,     1,     8,     9,    10,    11,
      12,    13,    14,    16,    17,    18,    19,    20,    49,    56,
      61,    65,    70,    81,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    99,
      49,    88,    52,    88,     1,     3,    57,    79,    80,    99,
      49,    51,    56,    56,    56,    81,    88,    95,    96,    95,
      88,    95,    95,    49,    54,    84,    49,    49,    34,    35,
      32,    33,    30,    31,    58,    59,    60,    61,    62,    63,
      64,    50,     8,    50,    52,    57,    57,    53,    55,    57,
       8,    88,    57,    88,    98,    88,    88,    16,    57,    90,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    95,    89,     9,    53,    53,    75,    78,    80,    53,
      51,    52,    55,    57,    57,    57,    56,    71,    88,    74,
      77,    83,    54,    73,    76,    52,    88,    81,    81,    88,
      54,    55,    83,    54,    54,    83,    54,    15,    57,    54,
      88,    54,    54,    81,    49,    53,     8,     9,    10,    11,
      12,    13,    19,    20,    56,    61,    65,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    53,     8,     9,    10,
      11,    12,    13,    56,    97,     8,     9,    10,    11,    12,
      13,    19,    20,    56,    61,    65,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     8,     9,    10,    11,    12,
      13,    19,    20,    56,    61,    65,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     8,     9,    10,    11,    12,
      13,    19,    20,    56,    61,    65,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    53,    54,    82,    51,    56,
       8,     9,    10,    11,    12,    13,    56,    95,    96,    97,
      95,    88,    95,    95,    34,    35,    32,    33,    30,    31,
      58,    59,    60,    61,    62,    63,    64,    50,    54,    82,
      51,    56,    88,    51,    56,     8,     9,    10,    11,    12,
      13,    56,    95,    96,    97,    95,    88,    95,    95,    34,
      35,    32,    33,    30,    31,    58,    59,    60,    61,    62,
      63,    64,    50,    51,    56,     8,     9,    10,    11,    12,
      13,    56,    95,    96,    97,    95,    88,    95,    95,    34,
      35,    32,    33,    30,    31,    58,    59,    60,    61,    62,
      63,    64,    50,    51,    56,     8,     9,    10,    11,    12,
      13,    56,    95,    96,    97,    95,    88,    95,    95,    34,
      35,    32,    33,    30,    31,    58,    59,    60,    61,    62,
      63,    64,    50,    54,    82,    83,    88,    57,    98,    51,
      56,    88,    57,    90,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    89,    83,    88,    57,
      98,    57,    88,    57,    98,    51,    56,    88,    57,    90,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    95,    89,    88,    57,    98,    51,    56,    88,    57,
      90,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    89,    88,    57,    98,    51,    56,    88,
      57,    90,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    89,    83,    54,    52,    57,    88,
      57,    98,    57,    54,    52,    57,    52,    57,    88,    57,
      98,    57,    52,    57,    88,    57,    98,    57,    52,    57,
      88,    57,    98,    57,    54,    52,    57,    52,    57,    52,
      57,    52,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    73,    72,    74,
      72,    75,    72,    76,    72,    77,    72,    78,    72,    72,
      72,    79,    79,    80,    80,    81,    82,    81,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     5,     8,     9,     6,     1,     3,     0,     9,     0,
       9,     0,     8,     0,     8,     0,     8,     0,     7,     5,
       4,     1,     3,     2,     4,     2,     0,     4,     1,     2,
       1,     2,     2,     1,     1,     1,     2,     2,     5,     7,
       5,     7,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       1,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1
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
#line 100 "language.y"
    { root = (yyvsp[0].node); }
#line 2932 "src/parser.c"
    break;

  case 3:
#line 104 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2938 "src/parser.c"
    break;

  case 4:
#line 105 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 2944 "src/parser.c"
    break;

  case 5:
#line 109 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2950 "src/parser.c"
    break;

  case 6:
#line 110 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2956 "src/parser.c"
    break;

  case 7:
#line 111 "language.y"
    { (yyval.node) = NULL; }
#line 2962 "src/parser.c"
    break;

  case 8:
#line 112 "language.y"
    { (yyval.node) = NULL; }
#line 2968 "src/parser.c"
    break;

  case 9:
#line 116 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); }
#line 2974 "src/parser.c"
    break;

  case 10:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); }
#line 2980 "src/parser.c"
    break;

  case 11:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval)); }
#line 2986 "src/parser.c"
    break;

  case 12:
#line 119 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval)); }
#line 2992 "src/parser.c"
    break;

  case 13:
#line 120 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval)); }
#line 2998 "src/parser.c"
    break;

  case 14:
#line 121 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval)); }
#line 3004 "src/parser.c"
    break;

  case 15:
#line 125 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3010 "src/parser.c"
    break;

  case 16:
#line 126 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3016 "src/parser.c"
    break;

  case 17:
#line 130 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3022 "src/parser.c"
    break;

  case 18:
#line 130 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3028 "src/parser.c"
    break;

  case 19:
#line 131 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3034 "src/parser.c"
    break;

  case 20:
#line 131 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3040 "src/parser.c"
    break;

  case 21:
#line 132 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3046 "src/parser.c"
    break;

  case 22:
#line 132 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3052 "src/parser.c"
    break;

  case 23:
#line 133 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3058 "src/parser.c"
    break;

  case 24:
#line 133 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3064 "src/parser.c"
    break;

  case 25:
#line 134 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3070 "src/parser.c"
    break;

  case 26:
#line 134 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3076 "src/parser.c"
    break;

  case 27:
#line 135 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3082 "src/parser.c"
    break;

  case 28:
#line 135 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3088 "src/parser.c"
    break;

  case 29:
#line 136 "language.y"
    { (yyval.node) = NULL; }
#line 3094 "src/parser.c"
    break;

  case 30:
#line 137 "language.y"
    { (yyval.node) = NULL; }
#line 3100 "src/parser.c"
    break;

  case 31:
#line 141 "language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3106 "src/parser.c"
    break;

  case 32:
#line 142 "language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3112 "src/parser.c"
    break;

  case 33:
#line 146 "language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); }
#line 3118 "src/parser.c"
    break;

  case 34:
#line 147 "language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); }
#line 3124 "src/parser.c"
    break;

  case 35:
#line 151 "language.y"
    { (yyval.node) = NULL; }
#line 3130 "src/parser.c"
    break;

  case 36:
#line 152 "language.y"
    { begin(NULL); }
#line 3136 "src/parser.c"
    break;

  case 37:
#line 152 "language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3142 "src/parser.c"
    break;

  case 38:
#line 156 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3148 "src/parser.c"
    break;

  case 39:
#line 157 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3154 "src/parser.c"
    break;

  case 40:
#line 161 "language.y"
    { (yyval.node) = NULL; }
#line 3160 "src/parser.c"
    break;

  case 41:
#line 162 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3166 "src/parser.c"
    break;

  case 42:
#line 163 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3172 "src/parser.c"
    break;

  case 43:
#line 164 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3178 "src/parser.c"
    break;

  case 44:
#line 165 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3184 "src/parser.c"
    break;

  case 45:
#line 166 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3190 "src/parser.c"
    break;

  case 46:
#line 167 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3196 "src/parser.c"
    break;

  case 47:
#line 168 "language.y"
    { (yyval.node) = NULL; }
#line 3202 "src/parser.c"
    break;

  case 48:
#line 172 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign_context((yyval.node)); }
#line 3208 "src/parser.c"
    break;

  case 49:
#line 173 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3214 "src/parser.c"
    break;

  case 50:
#line 177 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3220 "src/parser.c"
    break;

  case 51:
#line 178 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign_context((yyval.node)); }
#line 3226 "src/parser.c"
    break;

  case 52:
#line 182 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context((yyval.node)); }
#line 3232 "src/parser.c"
    break;

  case 53:
#line 183 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3238 "src/parser.c"
    break;

  case 54:
#line 187 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3244 "src/parser.c"
    break;

  case 55:
#line 188 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3250 "src/parser.c"
    break;

  case 56:
#line 192 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3256 "src/parser.c"
    break;

  case 57:
#line 193 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3262 "src/parser.c"
    break;

  case 58:
#line 197 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3268 "src/parser.c"
    break;

  case 59:
#line 198 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3274 "src/parser.c"
    break;

  case 60:
#line 202 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3280 "src/parser.c"
    break;

  case 61:
#line 203 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3286 "src/parser.c"
    break;

  case 62:
#line 204 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3292 "src/parser.c"
    break;

  case 63:
#line 208 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3298 "src/parser.c"
    break;

  case 64:
#line 209 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3304 "src/parser.c"
    break;

  case 65:
#line 210 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3310 "src/parser.c"
    break;

  case 66:
#line 211 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3316 "src/parser.c"
    break;

  case 67:
#line 212 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3322 "src/parser.c"
    break;

  case 68:
#line 216 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3328 "src/parser.c"
    break;

  case 69:
#line 217 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3334 "src/parser.c"
    break;

  case 70:
#line 218 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3340 "src/parser.c"
    break;

  case 71:
#line 222 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3346 "src/parser.c"
    break;

  case 72:
#line 223 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3352 "src/parser.c"
    break;

  case 73:
#line 224 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3358 "src/parser.c"
    break;

  case 74:
#line 225 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3364 "src/parser.c"
    break;

  case 75:
#line 229 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3370 "src/parser.c"
    break;

  case 76:
#line 230 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3376 "src/parser.c"
    break;

  case 77:
#line 231 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3382 "src/parser.c"
    break;

  case 78:
#line 232 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3388 "src/parser.c"
    break;

  case 79:
#line 233 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3394 "src/parser.c"
    break;

  case 80:
#line 237 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3400 "src/parser.c"
    break;

  case 81:
#line 238 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3406 "src/parser.c"
    break;

  case 82:
#line 239 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call",     ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval));}
#line 3412 "src/parser.c"
    break;

  case 83:
#line 240 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3418 "src/parser.c"
    break;

  case 84:
#line 244 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); retrieve((yyval.node), (yyval.node)->name); }
#line 3424 "src/parser.c"
    break;

  case 85:
#line 245 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, key); free(key); }
#line 3430 "src/parser.c"
    break;

  case 86:
#line 246 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , key); free(key); }
#line 3436 "src/parser.c"
    break;

  case 87:
#line 247 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3442 "src/parser.c"
    break;

  case 88:
#line 248 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3448 "src/parser.c"
    break;

  case 89:
#line 249 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , key); free(key); }
#line 3454 "src/parser.c"
    break;

  case 90:
#line 250 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3460 "src/parser.c"
    break;

  case 91:
#line 254 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3466 "src/parser.c"
    break;

  case 92:
#line 255 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3472 "src/parser.c"
    break;

  case 93:
#line 259 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3478 "src/parser.c"
    break;

  case 94:
#line 260 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3484 "src/parser.c"
    break;

  case 95:
#line 261 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3490 "src/parser.c"
    break;

  case 96:
#line 262 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3496 "src/parser.c"
    break;


#line 3500 "src/parser.c"

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
#line 265 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
