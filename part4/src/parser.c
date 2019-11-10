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
#line 36 "language.y"

#include <stdio.h>
#include <string.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Table * symbol_table;
//extern int no_scope;

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
#define YYLAST   6275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

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
       2,     2,     2,    42,     2,     2,     2,    41,     2,     2,
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
       0,    55,    55,    59,    60,    64,    65,    66,    67,    68,
      72,    73,    77,    78,    79,    83,    84,    85,    89,    90,
      94,    95,    96,    97,   101,   102,   106,   107,   108,   112,
     113,   113,   117,   118,   122,   123,   124,   125,   126,   127,
     128,   129,   133,   134,   138,   139,   143,   144,   148,   149,
     153,   154,   158,   159,   163,   164,   165,   169,   170,   171,
     172,   173,   177,   178,   179,   183,   184,   185,   186,   190,
     191,   192,   193,   194,   198,   199,   200,   201,   205,   206,
     207,   208,   213,   214,   218,   219,   220,   221
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
  "INVALID_CHAR_CONST", "';'", "'='", "'['", "']'", "'{'", "'}'", "','",
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "$accept", "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_declarator",
  "parameter_list", "parameter", "compound_statement", "$@1",
  "statement_list", "statement", "conditional_statement",
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
     275,   276,   277,   278,   279,   280,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -253

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-253)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     379,    30,   -12,    13,    34,    46,    72,   271,   299,    64,
     198,   102,   111,   635,  1597,   711,  -253,   803,   934,   334,
     972,  1022,   190,  1083,  2941,   505,   505,  1688,  3110,  3138,
     420,   777,   505,   505,   120,   144,    52,    67,   537,  1493,
    5996,  5087,  5115,  3978,  3166,    88,    17,   166,   165,   189,
     218,   452,  1898,   169,  1959,  2123,  2181,  2221,  2261,   244,
     272,   304,  5143,  4006,  5171,   247,   275,   295,  5199,  5227,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   818,   455,   505,   326,   307,   324,    35,
     220,    -4,    70,   351,  2301,   777,   777,   369,   360,  2341,
    1098,  2381,  2421,  2461,   443,   397,    61,  3194,   156,   572,
    6202,  6208,  6002,  6027,  6033,  6058,  5255,  5283,  5311,  5339,
    5367,   425,  4034,   187,   336,   225,   378,   223,   404,   503,
     418,   137,   426,   432,   419,   456,   414,  4062,   911,  4090,
     417,   490,   494,   500,   777,   423,   429,   491,    37,  2501,
     501,   449,   500,   511,  2541,  2581,  2621,  4118,  4146,  4174,
     777,   998,   998,  1454,  1527,  1638,   420,   777,   998,   998,
     460,   132,   162,   121,   141,  1315,  1362,  1852,  2072,  2970,
    1058,  1058,  3222,  3250,  3278,   777,  1058,  1058,    -9,    77,
     403,   827,  1939,  5380,  5408,  4202,  3306,  1094,  1094,  3334,
    3362,  3390,   777,  1094,  1094,    -2,   320,   316,  1682,  6071,
    5421,  5449,  4230,  3418,  2661,  1128,  1128,   172,  1184,  2998,
     777,  1128,  1128,     5,    -3,   565,   864,  2044,  4734,  4744,
    3446,  3026,  2701,  2741,  2941,   502,  3474,  3502,  3530,   777,
    2010,  3558,  4772,   464,   507,  4783,  4811,   998,   998,   998,
     998,   998,   998,   998,   998,   998,   998,   998,   998,   998,
     818,   573,   998,  4258,  4286,  4314,   777,  5457,  4342,  5485,
     512,  5493,  5521,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058,  1058,  1058,  1058,  1058,  1058,   818,   656,  1058,  4370,
    4398,  4426,   777,  5534,  4454,  5562,   528,  5590,  5618,  1094,
    1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,  1094,
    1094,  1094,   818,   671,  1094,   536,  2941,  3586,  3614,  3642,
     777,  4821,  3670,  4849,   530,  4859,  4887,  1128,  1128,  1128,
    1128,  1128,  1128,  1128,  1128,  1128,  1128,  1128,  1128,  1128,
     818,   745,  1128,   405,  2941,  2781,  4482,   553,   469,    85,
    3054,   309,   343,  1237,  6179,  5866,  5874,  5899,  5907,  4898,
    4926,  4937,  4965,  4976,   563,  3698,   497,   195,   562,  3726,
      95,   909,  1282,  2018,  5129,  5157,  5185,  5213,  5626,  5654,
    5662,  5690,  5698,   571,  4510,   510,     0,   574,  3754,   410,
     532,  6231,  6239,  6096,  6121,  6146,  6171,  5726,  5754,  5782,
    5810,  5838,   580,  4538,   525,   105,  2821,   576,  3082,   347,
     856,  1412,  1781,  5932,  5939,  5964,  5971,  5004,  5014,  5042,
    5052,  5080,   583,  3782,   526,   101,  2861,  2901,  3810,   482,
    3838,  3866,  4566,  4594,  4622,  4650,  4678,  4706,   604,  3894,
    3922,  3950,   742
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -253,  -253,  -253,   607,   245,  -253,   -18,   450,  -253,  -253,
     504,     2,  -152,  -232,   -49,  -253,  -253,  -253,  1855,   781,
    1757,  1506,  1433,  1109,   979,   318,   655,   -19,  -252,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    53,    10,    65,    66,    11,    91,
      92,    54,    24,    55,    56,    57,    58,    59,    60,   188,
     189,   190,   191,   192,   193,   194,   195,    63,   124,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    34,   345,    15,   234,    44,   101,    12,   -84,   366,
     273,   179,   196,    21,    12,   328,   -50,   299,    88,   273,
      89,     3,     4,     5,   327,   -48,   213,   -48,   129,   -50,
     130,   -50,    44,   -85,   -49,   385,    44,   -48,   -42,   -48,
     -42,   -42,   -42,   -42,   -42,   152,   -42,   -42,   -42,   -42,
     -42,    90,    97,    93,   -86,   -84,    13,   -42,   -42,   -42,
      14,   404,   316,   -42,   213,   231,   -87,   -42,   -42,   128,
     -42,    70,    16,   161,   162,   -42,   196,   196,   -48,   -42,
     344,   163,   164,   165,   406,    71,   -50,   179,   136,   424,
      18,   166,   135,   -50,   167,   274,   -50,   161,   162,   168,
     197,   198,   -24,   169,   -24,   163,   164,   165,   199,   200,
     201,   -50,   426,   274,   -51,   166,   429,    86,   167,   231,
     327,   202,   213,   168,   299,   196,   203,   169,    20,   -51,
     204,    22,    14,   -49,   -49,   -49,    93,   249,   250,   -52,
     -52,   196,   241,   241,   148,   149,   -11,   179,   196,   241,
     241,   247,   -52,   -52,   154,   251,   252,   -54,   -54,   -54,
     -54,   268,   268,   -48,   -48,   141,   196,   268,   268,   -26,
     -15,   -26,   -54,   -54,    71,   -51,   253,   254,   294,   294,
     248,   -50,   -51,   196,   294,   294,   -78,   -78,   -78,   -78,
     -78,   -78,    94,   -50,   -50,    99,   322,   322,    95,   -78,
     -78,   196,   322,   322,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   247,    44,   -12,   -12,    45,   -82,
     196,   -82,    96,    46,   -10,    19,   -49,   -49,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   213,   231,   241,    70,     9,   -21,   196,   214,   -23,
     -21,   -49,     9,   -23,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   213,   231,   268,
     102,    -2,     1,   196,     2,     3,     4,     5,   -18,   -18,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   213,   231,   294,   101,    44,   103,    -3,
      -3,   196,    -3,    -3,    -3,    -3,   105,   106,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   213,   231,   322,   104,    44,    44,   248,   -51,   107,
     179,   136,   301,   302,   -52,   -52,   126,    42,   300,   -50,
     -51,   -51,    42,    62,    64,   -52,    25,    26,   177,   -50,
      68,    69,   -13,   -13,    27,    28,    29,   101,   127,   249,
     250,   -53,   -53,   211,    30,   328,   -51,    31,   138,    42,
     139,   131,    32,    42,   -53,   -53,    33,   101,   134,   -51,
       1,   -51,     2,     3,     4,     5,   -47,    44,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,   118,   119,
     120,   211,   229,    42,   -14,   -14,   -29,    44,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   275,
     276,   -52,   -52,   -16,   177,   -29,   -29,   -29,   300,   -51,
     -22,   -29,   161,   162,   -22,   -29,   -29,   -52,   -29,   -51,
     163,   164,   165,   -29,   -20,   -19,   -19,   -29,   -20,   -25,
     166,   -25,   144,   167,   137,   -83,   229,   -83,   168,   211,
     142,   -27,   169,   -27,    25,    26,   143,   215,   216,   -12,
     -12,    45,    27,    28,    29,   217,   218,   219,   -46,   240,
     242,   -28,   -17,   -28,   177,    31,   245,   246,   220,   122,
      32,   -15,   -15,   221,    33,   348,   349,   222,   267,   269,
     -16,   -16,   197,   198,   271,   272,     2,     3,     4,     5,
     199,   200,   201,   -17,   -17,   293,   295,    25,    26,   146,
     151,   297,   298,   202,   232,   157,   158,   159,   203,   138,
     156,   431,   204,   321,   323,   153,   346,   155,   160,   325,
     326,   350,   138,    32,   434,   -29,   369,    33,   301,   302,
     -53,   -53,    42,    72,    73,   -52,   -52,   138,   138,   437,
     441,   -53,   388,   -52,   408,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   361,   362,   363,   211,   229,
     177,   329,   330,   -52,   -52,   215,   216,   428,    72,    73,
     -53,   -53,   430,   217,   218,   219,   432,   -52,   -53,   -52,
     433,   380,   381,   382,   211,   229,   220,   365,   435,   436,
     439,   221,   440,   -31,    17,   222,   243,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   399,   400,   401,
     211,   229,   211,   140,    42,    -8,    -8,     0,    -8,    -8,
      -8,    -8,     0,     0,     0,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   419,   420,   421,   211,   229,
     229,     0,    42,    42,     0,     0,     0,   177,   215,   216,
       0,     0,     0,     0,    43,     0,   217,   218,   219,    43,
      43,    43,     0,   215,   216,   178,     0,    43,    43,   220,
     384,   217,   218,   219,   221,     0,     0,     0,   222,     0,
     212,     0,     0,     0,   220,   403,    43,     0,     0,   221,
      43,    -9,    -9,   222,    -9,    -9,    -9,    -9,     0,     0,
       0,     0,     0,     0,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,   212,   230,
      43,     0,     0,   -31,    42,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   215,   216,     0,
       0,   178,   -31,   -31,   -31,   217,   218,   219,   -31,     0,
       0,     0,   -31,   -31,     0,   -31,     0,     0,   220,   423,
     -31,     0,     0,   221,   -31,     0,     0,   222,     0,   180,
     181,     0,     0,   230,     0,     0,   212,   182,   183,   184,
      36,     0,     0,    -4,    -4,    36,    -4,    -4,    -4,    -4,
     185,   171,     0,     0,     0,   186,   178,   178,     0,   187,
       0,   178,     0,   178,   178,     0,   205,     0,     0,     0,
     197,   198,    36,     0,     0,     0,    36,     0,   199,   200,
     201,   277,   278,   -54,   -54,   -54,   -54,     0,     0,     0,
       0,   202,   212,   212,     0,     0,   203,     0,   212,   212,
     204,   -54,   279,   280,   205,   223,   125,     0,     0,     0,
     230,   230,   329,   330,   -53,   -53,   230,   230,   331,   332,
     -54,   -54,   -54,   -54,     0,     0,     0,   171,   -53,    43,
     -53,     0,     0,     0,     0,     0,   -54,     0,   -54,   333,
     334,     0,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   212,   230,   178,     0,   223,
       0,     0,   205,   215,   216,   275,   276,   -53,   -53,     0,
       0,   217,   218,   219,    -7,    -7,     0,    -7,    -7,    -7,
      -7,   212,   230,   -53,   220,     0,     0,   171,     0,   221,
       0,     0,     0,   222,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   230,   212,
       0,    43,    -5,    -5,     0,    -5,    -5,    -5,    -5,     0,
       0,     0,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   212,   230,   230,    41,    43,
      43,     0,     0,    41,   178,     0,     0,     0,     0,   176,
     161,   162,     0,     0,     0,    36,     0,     0,   236,   237,
     238,     0,    -6,    -6,   210,    -6,    -6,    -6,    -6,     0,
      41,   239,     0,     0,    41,     0,   168,     0,     0,     0,
     169,   205,   223,   367,     0,     0,     0,     0,     0,    41,
      41,    41,    41,    41,    41,    41,    41,   116,   117,     0,
       0,    43,   210,   228,    41,     0,     0,   205,   223,   386,
     180,   181,     0,     0,     0,     0,     0,     0,   263,   264,
     265,    43,     0,   -29,   -29,   176,   -29,   -29,   -29,   -29,
       0,   266,     0,   205,   223,   405,   186,    36,   -31,   -31,
     187,   -31,   -31,   -31,   -31,     0,   197,   198,     0,     0,
       0,     0,     0,     0,   289,   290,   291,   228,     0,     0,
     210,   205,   223,   425,     0,    36,    36,   292,    40,     0,
     171,     0,   203,    40,     0,     0,   204,     0,     0,   175,
     215,   216,     0,     0,     0,   176,     0,     0,   317,   318,
     319,     0,     0,     0,   209,     0,     0,     0,     0,     0,
      40,   320,     0,     0,    40,     0,   221,     0,     0,     0,
     222,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      40,    40,    40,   112,   113,   114,   115,    36,     0,     0,
       0,     0,   209,   227,    40,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,    36,     0,     0,
       0,   -80,   -80,    41,     0,   175,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   176,   176,   176,   176,
     176,   176,   176,   176,   359,   360,     0,     0,     0,   210,
     228,   176,     0,     0,     0,     0,     0,   227,     0,     0,
     209,   251,   252,   -55,   -55,   -55,   -55,     0,     0,     0,
     378,   379,     0,     0,     0,   210,   228,     0,   -55,   -55,
       0,     0,   253,   254,     0,   175,     0,     0,   210,   210,
     210,   210,   210,   210,   210,   210,   397,   398,     0,     0,
       0,   210,   228,   210,     0,    41,   277,   278,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,   228,   228,   228,   228,
     228,   228,   228,   228,   417,   418,   -55,   279,   280,   210,
     228,   228,     0,    41,    41,     0,     0,     0,   176,   -57,
     -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,   -57,   -57,     0,     0,
     -57,   -57,   255,   256,     0,     0,   175,   175,   175,   175,
     355,   356,   357,   358,     0,     0,     0,     0,     0,   209,
     227,   175,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,    41,   374,   375,   376,   377,
       0,     0,     0,   -62,   -62,   209,   227,   -62,   -62,   -62,
     -62,   257,   258,   259,     0,    41,     0,     0,   209,   209,
     209,   209,   393,   394,   395,   396,     0,     0,     0,     0,
       0,   209,   227,   209,     0,    40,   331,   332,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,   227,   227,   227,   227,
     413,   414,   415,   416,   -55,     0,   -55,   333,   334,   209,
     227,   227,    39,    40,    40,     0,     0,    39,   175,     0,
       0,     0,     0,   174,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   208,     0,
       0,   -78,   -78,     0,    39,   -78,   -78,   -78,    39,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,    39,    39,   110,   111,    74,    75,   -54,
     -54,   -54,   -54,     0,     0,    40,   208,   226,    39,   -54,
       0,     0,     0,     0,     0,    38,     0,     0,    76,    77,
      38,     0,     0,     0,     0,    40,   173,     0,     0,   174,
       0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   207,     0,     0,   -80,   -80,     0,    38,   -80,   -80,
     -80,    38,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   226,     0,     0,   208,     0,    38,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     225,    38,     0,     0,     0,     0,     0,     0,   -30,   174,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   173,     0,     0,     0,     0,   -30,   -30,   -30,
       0,     0,     0,   -30,     0,     0,     0,   -30,    23,     0,
     -30,     0,     0,     0,     0,   -30,     0,     0,     0,   -30,
       0,     0,     0,     0,   225,     0,     0,   207,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,    39,     0,   -79,
     -79,   -79,   173,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     174,   174,   353,   354,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   226,   174,   303,   304,   -54,   -54,
     -54,   -54,   -78,   -78,   -78,   -78,   -78,   -78,   372,   373,
       0,   -54,     0,     0,   -78,   -78,   -78,   305,   306,   208,
     226,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   208,   208,   391,   392,     0,     0,     0,     0,
      38,     0,     0,     0,     0,   208,   226,   208,     0,    39,
       0,     0,     0,   173,   352,     0,     0,     0,     0,     0,
     226,   226,   411,   412,     0,     0,   207,   225,   173,     0,
       0,     0,     0,   208,   226,   226,    37,    39,    39,     0,
     371,    37,   174,     0,     0,     0,     0,   172,     0,     0,
       0,     0,   207,   225,     0,   331,   332,   -56,   -56,   -56,
     -56,     0,   206,     0,     0,   207,   390,     0,    37,     0,
       0,     0,    37,   -56,     0,   -56,   333,   334,   207,   225,
     207,     0,    38,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,   225,   410,     0,     0,     0,     0,    39,
     206,   224,    37,     0,     0,     0,   207,   225,   225,     0,
      38,    38,     0,     0,     0,   173,     0,     0,     0,    39,
       0,     0,     0,   172,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,   -65,   -65,   170,    67,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   224,     0,     0,   206,   -34,
      87,   -34,   -34,   -34,   -34,   -34,    98,   -34,   -34,   -34,
     -34,   -34,    38,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,     0,   172,   -34,     0,     0,     0,   -34,   -34,
       0,   -34,    38,     0,     0,     0,   -34,     0,   121,   123,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   133,     0,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -39,   170,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -57,   -57,   -57,   281,   282,     0,   -39,
     -39,   -39,     0,     0,     0,   -39,     0,     0,     0,   -39,
     -39,    37,   -39,   145,     0,     0,   147,   -39,     0,   150,
       0,   -39,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   235,     0,   206,   224,   172,
       0,   170,   244,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     370,     0,   277,   278,   -56,   -56,   -56,   -56,     0,     0,
     270,   -72,   -72,   206,   224,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -56,   279,   280,     0,   389,   296,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,   206,
     224,   206,     0,    37,     0,   324,   -57,     0,   -57,   -57,
     -57,   335,   336,     0,   409,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   347,     0,     0,   206,   224,   224,
     260,    37,    37,   -69,   -69,   261,   172,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   364,   123,     0,     0,     0,
       0,   368,     0,     0,    47,     0,     2,     3,     4,     5,
      48,     0,    49,    50,    51,    25,    26,     0,     0,     0,
       0,   383,   123,    27,    28,    29,     0,   387,     0,    52,
       0,     0,     0,   156,   100,     0,    31,     0,     0,     0,
       0,    32,     0,    37,     0,    33,     0,   402,   123,     0,
       0,     0,     0,     0,     0,   407,     0,     0,     0,     0,
       0,     0,   -32,    37,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   422,   123,     0,     0,     0,
       0,   -32,   -32,   -32,   170,     0,     0,   -32,     0,     0,
       0,   -32,   -32,     0,   -32,     0,     0,     0,     0,   -32,
       0,     0,   -37,   -32,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,     0,     0,     0,   -37,     0,     0,
       0,   -37,   -37,     0,   -37,     0,     0,     0,     0,   -37,
       0,     0,   -38,   -37,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,     0,
       0,   -38,   -38,     0,   -38,     0,     0,     0,     0,   -38,
       0,     0,   -41,   -38,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,     0,     0,     0,   -41,     0,     0,
       0,   -41,   -41,     0,   -41,     0,     0,     0,     0,   -41,
       0,     0,   -35,   -41,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,     0,     0,     0,   -35,     0,     0,
       0,   -35,   -35,     0,   -35,     0,     0,     0,     0,   -35,
       0,     0,   -33,   -35,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,   -33,     0,     0,
       0,   -33,   -33,     0,   -33,     0,     0,     0,     0,   -33,
       0,     0,   -40,   -33,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,     0,     0,     0,   -40,     0,     0,
       0,   -40,   -40,     0,   -40,     0,     0,     0,     0,   -40,
       0,     0,   -36,   -40,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,   -36,     0,     0,
       0,   -36,   -36,     0,   -36,     0,     0,     0,     0,   -36,
       0,     0,   -44,   -36,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,     0,     0,     0,   -44,     0,     0,
       0,   -44,   -44,     0,   -44,     0,     0,     0,     0,   -44,
       0,     0,   -43,   -44,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,   -43,   -43,   -43,     0,     0,     0,   -43,     0,     0,
       0,   -43,   -43,     0,   -43,     0,     0,     0,     0,   -43,
       0,     0,   -45,   -43,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,     0,     0,     0,   -45,     0,     0,
       0,   -45,   -45,     0,   -45,     0,     0,     0,     0,   -45,
       0,     0,   -30,   -45,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,     0,
       0,   -30,   233,     0,   -30,     0,     0,     0,     0,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,     0,
       0,   -30,   315,     0,   -30,     0,     0,     0,     0,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,     0,     0,
       0,   -30,   343,     0,   -30,     0,     0,     0,     0,   -30,
       0,     0,   -29,   -30,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,     0,     0,     0,   -29,     0,     0,
       0,   -29,   -29,     0,   -29,     0,     0,     0,     0,   -29,
       0,     0,    47,   -29,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,    52,     0,     0,
       0,   156,   427,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    47,    33,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,    52,     0,     0,
       0,   156,   438,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    47,    33,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,    52,     0,     0,
       0,   156,   442,     0,    31,     0,     0,     0,     0,    32,
       0,     0,   -31,    33,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,
       0,   -31,   -31,     0,   -31,     0,     0,     0,     0,   -31,
       0,     0,    47,   -31,     2,     3,     4,     5,    48,     0,
      49,    50,    51,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,     0,     0,     0,    52,     0,     0,
       0,   156,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,     0,    33,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   262,   -74,     0,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,   342,   -74,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,     0,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,     0,
       0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,   -74,    85,   -74,     0,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,   288,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,     0,     0,     0,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
       0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   314,   -74,   -74,     0,     0,
       0,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,   340,     0,     0,     0,   -69,   341,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,     0,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,     0,
       0,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,     0,     0,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -69,     0,    83,     0,     0,     0,
       0,    84,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,   -74,     0,   -74,     0,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
     -76,     0,   -76,     0,     0,     0,     0,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,   -75,     0,
     -75,     0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,   -77,     0,   -77,     0,
       0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -78,     0,   -78,     0,     0,     0,
       0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,   -80,     0,   -80,     0,     0,     0,     0,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
     -79,     0,   -79,     0,     0,     0,     0,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     286,     0,     0,     0,     0,   287,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   312,   -69,
       0,     0,     0,   313,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
       0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,     0,     0,     0,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,     0,     0,     0,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,     0,     0,     0,     0,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,     0,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
       0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,     0,     0,
       0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,     0,     0,     0,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   337,   338,   339,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -63,
     -63,     0,     0,   -63,   -63,   -63,   -63,   257,   258,   259,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -64,   -64,     0,
       0,   -64,   -64,   -64,   -64,   257,   258,   259,   -66,   -66,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -67,   -67,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   337,   338,   339,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   337,   338,   339,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
       0,     0,   -68,   -62,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -62,   -62,   -62,   -62,    80,    81,    82,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,   -65,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,
     -72,   -72,   -72,   -61,   -61,   -61,   281,   282,     0,   -72,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,
     -73,   -60,   -60,   -60,   281,   282,     0,   -73,     0,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -71,   -71,   -71,   -71,   -71,   -71,   -58,
     -58,   -58,   281,   282,     0,   -71,     0,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -70,   -70,   -70,   -70,   -70,   -70,   -59,   -59,   -59,
     281,   282,     0,   -70,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,    80,    81,    82,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,    80,    81,    82,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,   -68,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   283,
     284,   285,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -62,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     309,   310,   311,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -65,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -72,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -70,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -63,   -63,   -63,   -63,   -63,   283,   284,   285,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   283,   284,   285,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   309,   310,   311,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   309,   310,   311,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -67,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,   -61,   -61,     0,
       0,   -61,   -61,   255,   256,   -60,   -60,     0,     0,   -60,
     -60,   255,   256,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
     -58,   -58,     0,     0,   -58,   -58,   255,   256,   -59,   -59,
       0,     0,   -59,   -59,   255,   256,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,   -61,     0,   -61,   -61,   -61,   335,
     336,   -60,     0,   -60,   -60,   -60,   335,   336,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,     0,     0,   -58,     0,   -58,   -58,
     -58,   335,   336,   -59,     0,   -59,   -59,   -59,   335,   336,
     -57,   -57,   -57,   -57,   -57,   -57,   -61,   -61,   -61,   -61,
     -61,   -61,   -57,     0,     0,     0,     0,     0,   -61,     0,
       0,   -57,   -57,    78,    79,     0,     0,   -61,   -61,    78,
      79,   -60,   -60,   -60,   -60,   -60,   -60,   -58,   -58,   -58,
     -58,   -58,   -58,   -60,     0,     0,     0,     0,     0,   -58,
       0,     0,   -60,   -60,    78,    79,     0,     0,   -58,   -58,
      78,    79,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,   -59,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,   -59,   -59,    78,    79,     0,     0,     0,
     -57,     0,     0,     0,     0,     0,   -57,   -57,   307,   308,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -61,     0,     0,     0,     0,
       0,   -61,   -61,   307,   308,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   307,   308,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,     0,     0,     0,     0,
       0,   -58,   -58,   307,   308,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   251,   252,   -56,   -56,   -56,   -56,     0,
     -59,     0,     0,     0,     0,     0,   -59,   -59,   307,   308,
     -56,   -56,     0,     0,   253,   254,    74,    75,   -55,   -55,
     -55,   -55,    74,    75,   -56,   -56,   -56,   -56,   -55,     0,
       0,     0,     0,     0,   -56,     0,     0,    76,    77,     0,
       0,     0,     0,    76,    77,   303,   304,   -55,   -55,   -55,
     -55,     0,     0,   303,   304,   -56,   -56,   -56,   -56,     0,
     -55,     0,     0,     0,     0,     0,   305,   306,   -56,     0,
       0,     0,     0,     0,   305,   306
};

static const yytype_int16 yycheck[] =
{
      19,    19,   234,     1,   156,    24,    55,     0,    20,   261,
      19,    30,    31,    11,     7,    18,    19,    19,     1,    19,
       3,     4,     5,     6,    19,    34,    45,    29,    32,    32,
      34,    34,    51,    20,    34,   287,    55,    32,     1,    34,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    34,    50,    46,    20,    20,    26,    20,    21,    22,
      30,   313,   214,    26,    83,    84,    20,    30,    31,    34,
      33,    19,     0,    12,    13,    38,    95,    96,    26,    42,
     232,    20,    21,    22,   316,    18,    19,   106,   106,   341,
      26,    30,    31,    26,    33,    18,    19,    12,    13,    38,
      12,    13,    32,    42,    34,    20,    21,    22,    20,    21,
      22,    34,   344,    18,    19,    30,    31,    29,    33,   138,
      19,    33,   141,    38,    19,   144,    38,    42,    26,    34,
      42,    20,    30,    32,    29,    34,   129,    16,    17,    18,
      19,   160,   161,   162,   142,   143,    26,   166,   167,   168,
     169,    19,    31,    32,   152,    14,    15,    16,    17,    18,
      19,   180,   181,    31,    32,    28,   185,   186,   187,    32,
      26,    34,    31,    32,    18,    19,    35,    36,   197,   198,
      18,    19,    26,   202,   203,   204,    14,    15,    16,    17,
      18,    19,    26,    31,    32,    26,   215,   216,    33,    27,
      28,   220,   221,   222,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    19,   234,    26,    27,    28,    32,
     239,    34,    33,    33,    26,    27,    31,    32,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,    19,     0,    26,   266,    30,    26,
      30,    26,     7,    30,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
      26,     0,     1,   292,     3,     4,     5,     6,    31,    32,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   345,   316,    26,     0,
       1,   320,     3,     4,     5,     6,    31,    32,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    20,   344,   345,    18,    19,    34,
     349,   349,    16,    17,    18,    19,    29,    19,    18,    19,
      31,    32,    24,    25,    26,    29,    12,    13,    30,    29,
      32,    33,    26,    27,    20,    21,    22,   406,    34,    16,
      17,    18,    19,    45,    30,    18,    19,    33,    32,    51,
      34,    20,    38,    55,    31,    32,    42,   426,     9,    32,
       1,    34,     3,     4,     5,     6,    26,   406,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    26,    27,     1,   426,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    16,
      17,    18,    19,    26,   106,    20,    21,    22,    18,    19,
      26,    26,    12,    13,    30,    30,    31,    34,    33,    29,
      20,    21,    22,    38,    26,    31,    32,    42,    30,    32,
      30,    34,    33,    33,    29,    32,   138,    34,    38,   141,
      34,    32,    42,    34,    12,    13,    34,    12,    13,    26,
      27,    28,    20,    21,    22,    20,    21,    22,    26,   161,
     162,    32,    26,    34,   166,    33,   168,   169,    33,    34,
      38,    31,    32,    38,    42,    31,    32,    42,   180,   181,
      31,    32,    12,    13,   186,   187,     3,     4,     5,     6,
      20,    21,    22,    31,    32,   197,   198,    12,    13,    29,
      29,   203,   204,    33,    30,    20,    21,    22,    38,    32,
      30,    34,    42,   215,   216,    34,    34,    26,    33,   221,
     222,    34,    32,    38,    34,     9,    34,    42,    16,    17,
      18,    19,   234,    16,    17,    18,    19,    32,    32,    34,
      34,    29,    34,    26,    34,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,    16,    17,    18,    19,    12,    13,    34,    16,    17,
      18,    19,    29,    20,    21,    22,    34,    32,    26,    34,
      29,   283,   284,   285,   286,   287,    33,    34,    34,    29,
      34,    38,    29,     9,     7,    42,   166,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   129,   316,     0,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,   344,   345,    -1,    -1,    -1,   349,    12,    13,
      -1,    -1,    -1,    -1,    19,    -1,    20,    21,    22,    24,
      25,    26,    -1,    12,    13,    30,    -1,    32,    33,    33,
      34,    20,    21,    22,    38,    -1,    -1,    -1,    42,    -1,
      45,    -1,    -1,    -1,    33,    34,    51,    -1,    -1,    38,
      55,     0,     1,    42,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,   406,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,     1,   426,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    12,    13,    -1,
      -1,   106,    20,    21,    22,    20,    21,    22,    26,    -1,
      -1,    -1,    30,    31,    -1,    33,    -1,    -1,    33,    34,
      38,    -1,    -1,    38,    42,    -1,    -1,    42,    -1,    12,
      13,    -1,    -1,   138,    -1,    -1,   141,    20,    21,    22,
      19,    -1,    -1,     0,     1,    24,     3,     4,     5,     6,
      33,    30,    -1,    -1,    -1,    38,   161,   162,    -1,    42,
      -1,   166,    -1,   168,   169,    -1,    45,    -1,    -1,    -1,
      12,    13,    51,    -1,    -1,    -1,    55,    -1,    20,    21,
      22,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    33,   197,   198,    -1,    -1,    38,    -1,   203,   204,
      42,    34,    35,    36,    83,    84,    85,    -1,    -1,    -1,
     215,   216,    16,    17,    18,    19,   221,   222,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,   106,    32,   234,
      34,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    -1,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,    -1,   138,
      -1,    -1,   141,    12,    13,    16,    17,    18,    19,    -1,
      -1,    20,    21,    22,     0,     1,    -1,     3,     4,     5,
       6,   286,   287,    34,    33,    -1,    -1,   166,    -1,    38,
      -1,    -1,    -1,    42,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      -1,   316,     0,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    19,   344,
     345,    -1,    -1,    24,   349,    -1,    -1,    -1,    -1,    30,
      12,    13,    -1,    -1,    -1,   234,    -1,    -1,    20,    21,
      22,    -1,     0,     1,    45,     3,     4,     5,     6,    -1,
      51,    33,    -1,    -1,    55,    -1,    38,    -1,    -1,    -1,
      42,   260,   261,   262,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,   406,    83,    84,    85,    -1,    -1,   286,   287,   288,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,   426,    -1,     0,     1,   106,     3,     4,     5,     6,
      -1,    33,    -1,   312,   313,   314,    38,   316,     0,     1,
      42,     3,     4,     5,     6,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,   138,    -1,    -1,
     141,   340,   341,   342,    -1,   344,   345,    33,    19,    -1,
     349,    -1,    38,    24,    -1,    -1,    42,    -1,    -1,    30,
      12,    13,    -1,    -1,    -1,   166,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    33,    -1,    -1,    55,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,   406,    -1,    -1,
      -1,    -1,    83,    84,    85,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,   426,    -1,    -1,
      -1,    27,    28,   234,    -1,   106,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,    -1,    -1,    -1,   260,
     261,   262,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,
     141,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
     281,   282,    -1,    -1,    -1,   286,   287,    -1,    31,    32,
      -1,    -1,    35,    36,    -1,   166,    -1,    -1,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    -1,    -1,
      -1,   312,   313,   314,    -1,   316,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    34,    35,    36,   340,
     341,   342,    -1,   344,   345,    -1,    -1,    -1,   349,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,   247,   248,   249,   250,
     251,   252,   253,   254,    -1,    -1,    -1,    -1,    -1,   260,
     261,   262,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,   406,   277,   278,   279,   280,
      -1,    -1,    -1,    31,    32,   286,   287,    35,    36,    37,
      38,    39,    40,    41,    -1,   426,    -1,    -1,   299,   300,
     301,   302,   303,   304,   305,   306,    -1,    -1,    -1,    -1,
      -1,   312,   313,   314,    -1,   316,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,   327,   328,   329,   330,
     331,   332,   333,   334,    32,    -1,    34,    35,    36,   340,
     341,   342,    19,   344,   345,    -1,    -1,    24,   349,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    27,    28,    -1,    51,    31,    32,    33,    55,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    14,    15,    16,
      17,    18,    19,    -1,    -1,   406,    83,    84,    85,    26,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    35,    36,
      24,    -1,    -1,    -1,    -1,   426,    30,    -1,    -1,   106,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    27,    28,    -1,    51,    31,    32,
      33,    55,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,   138,    -1,    -1,   141,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,     1,   166,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,   106,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,   138,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,   234,    -1,    31,
      32,    33,   166,    35,    36,    37,    38,    39,    40,    41,
     247,   248,   249,   250,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   260,   261,   262,    14,    15,    16,    17,
      18,    19,    14,    15,    16,    17,    18,    19,   275,   276,
      -1,    29,    -1,    -1,    26,    27,    28,    35,    36,   286,
     287,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,   299,   300,   301,   302,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,   312,   313,   314,    -1,   316,
      -1,    -1,    -1,   247,   248,    -1,    -1,    -1,    -1,    -1,
     327,   328,   329,   330,    -1,    -1,   260,   261,   262,    -1,
      -1,    -1,    -1,   340,   341,   342,    19,   344,   345,    -1,
     274,    24,   349,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,   286,   287,    -1,    14,    15,    16,    17,    18,
      19,    -1,    45,    -1,    -1,   299,   300,    -1,    51,    -1,
      -1,    -1,    55,    32,    -1,    34,    35,    36,   312,   313,
     314,    -1,   316,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,    -1,    -1,    -1,   406,
      83,    84,    85,    -1,    -1,    -1,   340,   341,   342,    -1,
     344,   345,    -1,    -1,    -1,   349,    -1,    -1,    -1,   426,
      -1,    -1,    -1,   106,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    30,    31,    35,    36,    37,
      38,    39,    40,    41,    -1,   138,    -1,    -1,   141,     1,
      45,     3,     4,     5,     6,     7,    51,     9,    10,    11,
      12,    13,   406,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,   166,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,   426,    -1,    -1,    -1,    38,    -1,    83,    84,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    14,    15,    16,    17,    18,    19,    -1,
       1,   106,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    34,    35,    36,    37,    38,    -1,    20,
      21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      31,   234,    33,   138,    -1,    -1,   141,    38,    -1,   144,
      -1,    42,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,   260,   261,   262,
      -1,   166,   167,    -1,    14,    15,    16,    17,    18,    19,
     273,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
     185,    31,    32,   286,   287,    35,    36,    37,    38,    39,
      40,    41,    34,    35,    36,    -1,   299,   202,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,   312,
     313,   314,    -1,   316,    -1,   220,    32,    -1,    34,    35,
      36,    37,    38,    -1,   327,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,   239,    -1,    -1,   340,   341,   342,
      28,   344,   345,    31,    32,    33,   349,    35,    36,    37,
      38,    39,    40,    41,    -1,   260,   261,    -1,    -1,    -1,
      -1,   266,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,   286,   287,    20,    21,    22,    -1,   292,    -1,    26,
      -1,    -1,    -1,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    -1,   406,    -1,    42,    -1,   312,   313,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   426,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,   340,   341,    -1,    -1,    -1,
      -1,    20,    21,    22,   349,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    32,    26,    34,    35,    36,    37,    38,    39,
      40,    41,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    14,    15,    16,    17,    18,    19,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    34,    35,    36,    37,    38,    -1,    26,
      -1,    14,    15,    16,    17,    18,    19,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    34,    35,    36,    37,    38,    -1,    26,    -1,    14,
      15,    16,    17,    18,    19,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    34,
      35,    36,    37,    38,    -1,    26,    -1,    14,    15,    16,
      17,    18,    19,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    34,    35,    36,
      37,    38,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    14,    15,    16,    17,    18,    19,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    37,    38,    31,    32,    -1,    -1,    35,
      36,    37,    38,    14,    15,    16,    17,    18,    19,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    37,    38,    31,    32,
      -1,    -1,    35,    36,    37,    38,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    32,    -1,    34,    35,    36,    37,    38,    14,    15,
      16,    17,    18,    19,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    32,    -1,    34,    35,    36,    37,    38,
      14,    15,    16,    17,    18,    19,    14,    15,    16,    17,
      18,    19,    26,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    35,    36,    37,
      38,    14,    15,    16,    17,    18,    19,    14,    15,    16,
      17,    18,    19,    26,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    35,    36,
      37,    38,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    14,    15,    16,    17,    18,
      19,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      31,    32,    -1,    -1,    35,    36,    14,    15,    16,    17,
      18,    19,    14,    15,    16,    17,    18,    19,    26,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    35,    36,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    44,    45,    46,    47,
      48,    51,    72,    26,    30,    54,     0,    46,    26,    27,
      26,    54,    20,    31,    55,    12,    13,    20,    21,    22,
      30,    33,    38,    42,    49,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    28,    33,     1,     7,     9,
      10,    11,    26,    47,    54,    56,    57,    58,    59,    60,
      61,    72,    68,    70,    68,    49,    50,    61,    68,    68,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    28,    33,    27,    29,    61,     1,     3,
      34,    52,    53,    72,    26,    33,    33,    54,    61,    26,
      31,    57,    26,    26,    20,    31,    32,    34,    63,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    61,    34,    61,    71,    62,    29,    34,    34,    32,
      34,    20,    61,    61,     9,    31,    49,    29,    32,    34,
      53,    28,    34,    34,    33,    61,    29,    61,    54,    54,
      61,    29,     8,    34,    54,    26,    30,    20,    21,    22,
      33,    12,    13,    20,    21,    22,    30,    33,    38,    42,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      12,    13,    20,    21,    22,    33,    38,    42,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    12,    13,    20,
      21,    22,    33,    38,    42,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    30,    12,    13,    20,    21,    22,
      33,    38,    42,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    30,    31,    55,    61,    20,    21,    22,    33,
      68,    70,    68,    50,    61,    68,    68,    19,    18,    16,
      17,    14,    15,    35,    36,    37,    38,    39,    40,    41,
      28,    33,    27,    20,    21,    22,    33,    68,    70,    68,
      61,    68,    68,    19,    18,    16,    17,    14,    15,    35,
      36,    37,    38,    39,    40,    41,    28,    33,    27,    20,
      21,    22,    33,    68,    70,    68,    61,    68,    68,    19,
      18,    16,    17,    14,    15,    35,    36,    37,    38,    39,
      40,    41,    28,    33,    27,    31,    55,    20,    21,    22,
      33,    68,    70,    68,    61,    68,    68,    19,    18,    16,
      17,    14,    15,    35,    36,    37,    38,    39,    40,    41,
      28,    33,    27,    31,    55,    56,    34,    61,    31,    32,
      34,    63,    64,    65,    65,    66,    66,    66,    66,    67,
      67,    68,    68,    68,    61,    34,    71,    62,    61,    34,
      63,    64,    65,    65,    66,    66,    66,    66,    67,    67,
      68,    68,    68,    61,    34,    71,    62,    61,    34,    63,
      64,    65,    65,    66,    66,    66,    66,    67,    67,    68,
      68,    68,    61,    34,    71,    62,    56,    61,    34,    63,
      64,    65,    65,    66,    66,    66,    66,    67,    67,    68,
      68,    68,    61,    34,    71,    62,    56,    31,    34,    31,
      29,    34,    34,    29,    34,    34,    29,    34,    31,    34,
      29,    34,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    53,    53,    54,
      55,    54,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    69,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     4,     5,     1,     3,     4,     1,     3,
       5,     4,     5,     5,     1,     3,     2,     4,     5,     2,
       0,     4,     1,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     5,     7,     5,     7,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     1,     4,     3,     4,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1
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
#line 55 "language.y"
    { root = (yyvsp[0].node); }
#line 2613 "src/parser.c"
    break;

  case 4:
#line 60 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); }
#line 2619 "src/parser.c"
    break;

  case 6:
#line 65 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-definition", (yyvsp[-1].node), (yyvsp[0].node), NULL)); /*add_symbol_fun($$);*/ }
#line 2625 "src/parser.c"
    break;

  case 8:
#line 67 "language.y"
    { }
#line 2631 "src/parser.c"
    break;

  case 9:
#line 68 "language.y"
    { }
#line 2637 "src/parser.c"
    break;

  case 11:
#line 73 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2643 "src/parser.c"
    break;

  case 12:
#line 77 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); add_symbol_var((yyval.node)); }
#line 2649 "src/parser.c"
    break;

  case 13:
#line 78 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); add_symbol_arr((yyval.node)); }
#line 2655 "src/parser.c"
    break;

  case 14:
#line 79 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); add_symbol_arr((yyval.node)); }
#line 2661 "src/parser.c"
    break;

  case 16:
#line 84 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2667 "src/parser.c"
    break;

  case 17:
#line 85 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2673 "src/parser.c"
    break;

  case 19:
#line 90 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2679 "src/parser.c"
    break;

  case 20:
#line 94 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); add_symbol_fun((yyval.node)); }
#line 2685 "src/parser.c"
    break;

  case 21:
#line 95 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-3].node), (yyvsp[-2].node),     NULL)); add_symbol_fun((yyval.node)); }
#line 2691 "src/parser.c"
    break;

  case 22:
#line 96 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node),     NULL)); add_symbol_fun((yyval.node)); }
#line 2697 "src/parser.c"
    break;

  case 23:
#line 97 "language.y"
    { }
#line 2703 "src/parser.c"
    break;

  case 25:
#line 102 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2709 "src/parser.c"
    break;

  case 26:
#line 106 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); }
#line 2715 "src/parser.c"
    break;

  case 27:
#line 107 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); }
#line 2721 "src/parser.c"
    break;

  case 28:
#line 108 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); }
#line 2727 "src/parser.c"
    break;

  case 29:
#line 112 "language.y"
    { }
#line 2733 "src/parser.c"
    break;

  case 30:
#line 113 "language.y"
    {printf("enter scope\n");}
#line 2739 "src/parser.c"
    break;

  case 31:
#line 113 "language.y"
    { (yyval.node) = (yyvsp[-1].node); {printf("exit scope\n");} }
#line 2745 "src/parser.c"
    break;

  case 33:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); }
#line 2751 "src/parser.c"
    break;

  case 34:
#line 122 "language.y"
    { }
#line 2757 "src/parser.c"
    break;

  case 41:
#line 129 "language.y"
    { }
#line 2763 "src/parser.c"
    break;

  case 42:
#line 133 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL)); }
#line 2769 "src/parser.c"
    break;

  case 43:
#line 134 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2775 "src/parser.c"
    break;

  case 44:
#line 138 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2781 "src/parser.c"
    break;

  case 45:
#line 139 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL)); }
#line 2787 "src/parser.c"
    break;

  case 46:
#line 143 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return",     NULL)); }
#line 2793 "src/parser.c"
    break;

  case 47:
#line 144 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return", (yyvsp[0].node), NULL)); }
#line 2799 "src/parser.c"
    break;

  case 49:
#line 149 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2805 "src/parser.c"
    break;

  case 51:
#line 154 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2811 "src/parser.c"
    break;

  case 53:
#line 159 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2817 "src/parser.c"
    break;

  case 55:
#line 164 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2823 "src/parser.c"
    break;

  case 56:
#line 165 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2829 "src/parser.c"
    break;

  case 58:
#line 170 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2835 "src/parser.c"
    break;

  case 59:
#line 171 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2841 "src/parser.c"
    break;

  case 60:
#line 172 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2847 "src/parser.c"
    break;

  case 61:
#line 173 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2853 "src/parser.c"
    break;

  case 63:
#line 178 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2859 "src/parser.c"
    break;

  case 64:
#line 179 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2865 "src/parser.c"
    break;

  case 66:
#line 184 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2871 "src/parser.c"
    break;

  case 67:
#line 185 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2877 "src/parser.c"
    break;

  case 68:
#line 186 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2883 "src/parser.c"
    break;

  case 70:
#line 191 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('!'   , "'!'" , (yyvsp[0].node), NULL)); }
#line 2889 "src/parser.c"
    break;

  case 71:
#line 192 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-'   , "'-'" , (yyvsp[0].node), NULL)); }
#line 2895 "src/parser.c"
    break;

  case 72:
#line 193 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "'++'", (yyvsp[0].node), NULL)); }
#line 2901 "src/parser.c"
    break;

  case 73:
#line 194 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "'--'", (yyvsp[0].node), NULL)); }
#line 2907 "src/parser.c"
    break;

  case 75:
#line 199 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('V'   , "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL)); }
#line 2913 "src/parser.c"
    break;

  case 76:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('C'   , "function-call", (yyvsp[-2].node)    , NULL)); }
#line 2919 "src/parser.c"
    break;

  case 77:
#line 201 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('C'   , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL)); }
#line 2925 "src/parser.c"
    break;

  case 81:
#line 208 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2931 "src/parser.c"
    break;

  case 83:
#line 214 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); }
#line 2937 "src/parser.c"
    break;


#line 2941 "src/parser.c"

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
#line 224 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

