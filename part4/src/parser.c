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
#line 77 "language.y"

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
#define YYLAST   8693

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
       2,     2,     2,    62,     2,     2,     2,    61,     2,     2,
      53,    54,    59,    57,    52,    58,     2,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
      55,    47,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   102,   103,   107,   108,   109,   110,   114,
     115,   116,   117,   118,   119,   123,   124,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     135,   139,   140,   144,   145,   149,   150,   150,   154,   155,
     159,   160,   161,   162,   163,   164,   165,   166,   170,   171,
     175,   176,   180,   181,   185,   186,   190,   191,   195,   196,
     200,   201,   202,   206,   207,   208,   209,   210,   214,   215,
     216,   220,   221,   222,   223,   227,   228,   229,   230,   231,
     235,   236,   237,   238,   242,   243,   244,   245,   246,   247,
     248,   252,   253,   257,   258,   259,   260
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR",
  "IDENTIFIER", "STRING_LITERAL", "CONSTANT_FLOAT", "CONSTANT_INT",
  "CONSTANT_HEX", "CONSTANT_CHAR", "IF", "ELSE", "WHILE", "DO", "RETURN",
  "\"++\"", "\"--\"", "\"!\"", "\"*\"", "\"/\"", "\"%\"", "\"+\"",
  "OP_NEG", "\"-\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"||\"", "\"&&\"", "\"=\"", "UNRECOGNIZED_TOKEN",
  "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST", "VARIABLE", "ARRAY",
  "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL", "DECLARATION", "';'", "'='",
  "'['", "']'", "'{'", "'}'", "','", "'('", "')'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "start",
  "declaration_list", "declaration", "init_declarator", "initializer_list",
  "function_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "parameter_list", "parameter", "compound_statement", "$@7",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -226

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-226)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     282,   -32,    15,    43,    71,    91,   110,   608,   702,    67,
     766,   117,   815,   786,   888,  -226,  1112,  1152,    29,  1288,
     997,    86,  1344,    77,    39,   100,  4124,  4157,  4190,  4223,
    4256,  4289,   108,   116,   103,   200,  1510,  1510,   849,  1526,
    1510,  1510,   111,   912,  1373,  1433,  1497,  2525,   141,   158,
      59,   151,   537,    88,  2296,  7705,  7712,  4322,  4355,   183,
    1404,   179,   184,   195,   191,    -1,   198,    -5,   144,   247,
    2618,  1526,  1526,   245,   217,  7745,  2536,  7752,   226,  7785,
    7792,  2640,  1462,  2700,  2719,  2779,  1510,  1510,  1510,  1510,
    1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,
    1748,   170,   204,     5,   238,  1586,   246,  2798,   383,   264,
     119,   275,   293,   298,  4388,   196,   664,   850,   920,  2423,
    7912,  8425,  8455,  7825,  7832,  7865,  7872,  7905,   122,   309,
    4421,   203,   305,   333,  1853,  2858,   997,   344,   342,  2877,
     353,   382,   389,  1526,  4454,  2023,  4487,    76,   269,   997,
     394,  2937,  1660,   997,   399,   392,    53,  2956,   400,   417,
     407,   531,  3016,  1736,  1786,  3035,  2378,   389,   419,   420,
     347,  2408,  2444,  3095,  3114,  3174,  4520,  4553,  4586,  4619,
    4652,  4685,  2045,  2045,  1526,  2045,  2045,   -26,   -24,   359,
    1749,  8465,  7923,  7956,  4718,  4751,  3193,  6104,  6137,  6170,
    6203,  6236,  6269,  1526,  6302,  4784,  4817,  4850,  4883,  4916,
    4949,  2083,  2083,  1526,  2083,  2083,    40,   118,   322,  1093,
    8473,  7964,  7997,  4982,  5015,  1748,   548,  1789,  2173,  2443,
    3464,  3497,  3530,  2108,  2108,  1526,  2108,  2108,   -21,   -17,
     207,   294,   261,  7236,  7269,  3563,  3596,  1005,  3629,  3662,
    3695,  3728,  3761,  2139,  2139,  1526,  2139,  2139,    50,    57,
     169,  1164,  1197,  2365,  7280,  3794,  3827,  3253,  3272,   997,
    6335,  6368,  6401,  6434,  6467,  6500,  1526,  8010,  6533,  6566,
    8043,   416,  8056,  8089,  2045,  2045,  2045,  2045,  2045,  2045,
    2045,  2045,  2045,  2045,  2045,  2045,  2045,  2045,  1748,   614,
     494,   997,   481,  6599,  6632,  6665,  6698,  6731,  6764,  1526,
    8097,  6797,  6830,  8130,   497,  8138,  8146,  2083,  2083,  2083,
    2083,  2083,  2083,  2083,  2083,  2083,  2083,  2083,  2083,  2083,
    2083,  1748,   721,   503,  6863,   423,  5048,  5081,  5114,  5147,
    5180,  5213,  1526,  7313,  5246,  5279,  7323,   499,  7356,  7366,
    2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,  2108,
    2108,  2108,  2108,  2108,  1748,   816,  5312,  5345,  5378,  5411,
    5444,  5477,  1526,  7399,  5510,  5543,  7410,   500,  7443,  7454,
    2139,  2139,  2139,  2139,  2139,  2139,  2139,  2139,  2139,  2139,
    2139,  2139,  2139,  2139,  1748,   928,   406,   997,  3332,   507,
    1748,  1014,  5576,   126,   470,  1988,  2711,  8503,  8513,  8543,
    8553,  8179,  8192,  8225,  8238,  8271,   -13,   513,  5609,   443,
    3351,  6896,   509,  1748,  1092,  5642,   193,   404,  2099,  8637,
    8583,  8589,  8595,  8601,  8279,  8312,  8320,  8328,  8361,    46,
     515,  5675,   454,  6929,  6962,   518,  1748,  1160,  3860,   104,
     397,   610,  1426,  1229,  1544,  1576,  2156,  7487,  7497,  7530,
    7540,  7573,    -6,   529,  3893,   458,   525,  1748,  1307,  3926,
     466,   409,  2245,  8631,  8372,  8380,  8410,  8418,  7584,  7617,
    7628,  7661,  7672,   422,   532,  3959,   462,  3411,  3430,  6995,
     536,  7028,   468,  5708,  5741,   565,  7061,   541,  7094,   477,
    5774,  5807,  5840,   542,  5873,   478,  3992,  4025,  5906,   543,
    5939,   482,  4058,  4091,   475,  7127,  7160,  7193,  7226,  5972,
    6005,  6038,  6071
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
    -226,  -226,  -226,   579,    32,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,   486,     7,  -170,  -115,   -15,  -226,
    -226,  -226,   742,  2216,  2038,  1939,  1600,  1604,  1327,   948,
     -20,   362,  -225,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    42,   147,    10,   153,   149,   136,
     154,   150,   137,    67,    68,    43,    20,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      76,   204,   132,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   335,    57,   194,    11,   269,   -93,   284,    14,   -56,
     285,    11,   350,   133,    12,    57,   -56,   351,    13,   223,
     284,   151,   -93,   -54,    57,   -56,   301,   350,    69,    83,
      21,   -54,     9,   -54,   162,   -56,   -55,   -56,   165,     9,
      64,    73,    65,     3,     4,     5,   -55,   108,   -55,   109,
     -94,   223,   223,   106,   -48,   134,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   167,   -48,   -48,
     -48,   -48,   -48,   317,   419,    -9,    22,    23,   -95,   317,
     194,   245,    24,   380,   176,   177,   178,   179,   180,   181,
     -56,   381,    86,    66,   -54,   182,   183,   397,   -96,   -48,
     -55,   -54,   -54,   -48,   -48,   -54,   -48,   442,   -56,   -56,
      15,   -48,    69,    17,   265,   -48,    57,    90,    91,   -60,
     -60,   -60,   -60,   223,    18,   245,    62,   160,   161,    57,
     184,    57,    60,    57,   -60,   185,    83,   -57,   351,   186,
     465,   265,    57,    92,    93,    57,    70,    83,   156,   157,
      83,   -56,   318,   196,   398,    86,   -57,    81,   -57,   -57,
     285,    71,   278,   278,   223,   278,   278,   140,   -55,    72,
     486,   -33,   -56,   -33,   173,   -57,   492,   227,   228,   229,
     230,   231,   232,   223,   -56,    87,   420,    84,   233,   234,
     102,   311,   311,   223,   311,   311,   -31,   -56,   -31,   499,
     382,   383,   -58,   -58,    85,   194,   245,    26,    27,    28,
      29,    30,    31,   344,   344,   223,   344,   344,    36,    37,
     -58,   -58,   505,   235,   130,   -10,   -57,   318,   236,   -57,
      87,   103,   237,   374,   374,   223,   374,   374,   352,   353,
     -58,   -58,   -57,   511,   104,   105,   -52,   -57,   107,    57,
      -9,    22,    23,    39,   110,   -91,   223,   -91,    40,   -58,
     113,   -58,    41,   -53,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   194,   245,
     114,    57,   487,     1,   -11,     2,     3,     4,     5,   223,
     -63,   -63,   -63,   -63,   -63,   -63,   135,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   194,   245,   -63,   139,   -63,   -63,   -63,   358,   359,
     -15,   -15,   223,   354,   355,   -60,   -60,   -60,   -60,   141,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   194,   245,   -60,   142,   -60,   356,
     357,   143,   223,   319,   320,   -58,   -58,   145,   144,   146,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   194,   245,   -58,    57,    57,   -14,
     194,   245,    58,    83,    58,   195,     2,     3,     4,     5,
     286,   287,   -58,   -58,   -32,   152,   -32,    58,   -16,   -16,
      57,   224,   155,   194,   245,    83,    58,   -35,   -58,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   194,   245,   352,   353,
     -59,   -59,   267,   224,   224,   319,   320,   -59,   -59,   175,
     382,   383,   -59,   -59,   -34,   163,   -34,   194,   245,   -59,
     166,   -59,   -35,   -12,   168,   380,   -35,   -35,   -59,   -35,
     -59,   -59,   195,   246,   -35,   174,   -13,    57,   -35,   -92,
     402,   -92,    83,   -55,   -55,   145,   -37,   444,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   145,   266,   494,    58,   -57,
     381,   286,   287,   -59,   -59,   224,   145,   246,   501,   -35,
     145,    58,   507,    58,   145,    58,   513,   -57,   -57,   -59,
     145,   -37,   516,   266,    58,   -37,   -37,    58,   -37,   145,
     145,   518,   520,   -37,   145,   421,   522,   -37,   247,   248,
     249,   250,   251,   252,   279,   279,   224,   279,   279,   253,
     254,   425,   443,   448,   469,   227,   228,   229,   230,   231,
     232,   489,   493,   496,   500,   224,   233,   234,    88,    89,
     -58,   -58,   502,   312,   312,   224,   312,   312,   506,   508,
     -37,   512,   169,   -58,   255,   515,    16,   195,   246,   256,
     517,   519,   521,   257,   138,   345,   345,   224,   345,   345,
       0,   235,   334,     0,     0,     0,   236,     0,    -2,     1,
     237,     2,     3,     4,     5,   375,   375,   224,   375,   375,
       0,   227,   228,   229,   230,   231,   232,     0,     0,     0,
       0,    58,   233,   234,     0,     0,     0,     0,   224,   354,
     355,   -61,   -61,   -61,   -61,     0,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     195,   246,   -61,    58,   -61,   356,   357,   235,   418,     0,
       0,   224,   236,     0,     0,     0,   237,     0,     0,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   195,   246,    88,    89,   -59,   -59,     0,
       0,     0,    -3,    -3,   224,    -3,    -3,    -3,    -3,     0,
     -59,     0,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   195,   246,   227,   228,
     229,   230,   231,   232,   224,     0,     0,     0,     0,   233,
     234,     0,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   195,   246,     0,    58,
      58,     0,   195,   246,    61,    63,    -5,    -5,     0,    -5,
      -5,    -5,    -5,     0,   235,   441,     0,    74,     0,   236,
       0,    78,    58,   237,     0,   195,   246,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,   195,   246,
       0,     0,     0,   111,   112,    -7,    -7,     0,    -7,    -7,
      -7,    -7,     0,   227,   228,   229,   230,   231,   232,   195,
     246,     0,   -36,     0,   233,   234,   -36,    19,     0,   -36,
       0,     0,   129,   131,   -36,     0,     0,     0,   -36,    58,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   235,
     464,     0,     0,     0,   236,     0,   148,     0,   237,    90,
      91,   -61,   -61,   -61,   -61,   158,     0,   159,    -8,    -8,
       0,    -8,    -8,    -8,    -8,   -40,   -61,     0,     0,   -40,
     -40,     0,   -40,   170,     0,    92,    93,   -40,     0,     0,
       0,   -40,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   281,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,   227,   228,   229,   230,   231,
     232,     0,     0,     0,     0,   302,   233,   234,     0,    90,
      91,   -62,   -62,   -62,   -62,   314,     0,     0,   -45,     0,
       0,     0,   -45,   -45,     0,   -45,   -62,   333,   131,     0,
     -45,   193,     0,     0,   -45,    92,    93,   347,     0,     0,
       0,   235,   485,     0,    75,    77,   236,   222,    79,    80,
     237,     0,     0,     0,     0,     0,     0,   377,    25,     0,
       2,     3,     4,     5,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,     0,   399,   222,
     222,   227,   228,   229,   230,   231,   232,     0,     0,     0,
       0,     0,   233,   234,   -84,   -84,   -84,   -84,   -84,   -84,
     417,   131,     0,    38,   125,   126,   127,   175,   193,   244,
      39,   422,   -84,   -84,     0,    40,   -84,   -84,   -84,    41,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   235,   491,     0,
       0,     0,   236,   440,   131,     0,   237,     0,     0,     0,
       0,     0,   264,     0,   445,     0,     0,     0,     0,     0,
       0,   222,     0,   244,     0,     0,     0,     0,     0,   227,
     228,   229,   230,   231,   232,     0,   463,   131,     0,   264,
     233,   234,    -4,    -4,   466,    -4,    -4,    -4,    -4,     0,
       0,     0,   321,   322,   -60,   -60,   -60,   -60,     0,     0,
     277,   280,   222,   282,   283,     0,   484,   131,     0,     0,
       0,     0,   490,   131,     0,   235,   498,   -60,   323,   324,
     236,   222,    -6,    -6,   237,    -6,    -6,    -6,    -6,   310,
     313,   222,   315,   316,     0,   497,   131,   227,   228,   229,
     230,   231,   232,   193,   244,     0,     0,     0,   233,   234,
       0,   343,   346,   222,   348,   349,     0,     0,   503,   131,
       0,     0,     0,   384,   385,   -60,   -60,   -60,   -60,     0,
       0,   373,   376,   222,   378,   379,     0,     0,     0,   509,
     131,     0,     0,   235,   504,   -60,   -60,     0,   236,   386,
     387,     0,   237,     0,   222,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   413,   414,   415,   193,   193,   244,   -63,   -63,
       0,     0,   -63,   -63,   388,   389,     0,   222,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   436,   437,   438,   222,   193,
     244,   -66,     0,   -66,   -66,   -66,   358,   359,   -35,   -35,
     222,   -35,   -35,   -35,   -35,     0,     0,     0,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   459,   460,
     461,   244,   193,   244,   227,   228,   229,   230,   231,   232,
     222,     0,     0,     0,     0,   233,   234,     0,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   480,   481,
     482,   264,   193,   244,     0,     0,     0,     0,   193,   244,
     192,    26,    27,    28,    29,    30,    31,     0,     0,     0,
     235,   510,    36,    37,     0,   236,   221,     0,     0,   237,
       0,   193,   244,     0,    25,     0,     2,     3,     4,     5,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,     0,   193,   244,     0,    39,   221,   221,
       0,     0,    40,     0,   -30,   -30,    41,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   193,   244,     0,     0,    38,
       0,   123,   124,   175,    82,     0,    39,   192,   243,     0,
       0,    40,     0,     0,   -38,    41,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,   354,   355,   -62,   -62,   -62,
     -62,   263,   -37,   -37,     0,   -37,   -37,   -37,   -37,     0,
     221,     0,   243,     0,     0,     0,     0,     0,   -62,   -38,
     -62,   356,   357,   -38,   -38,     0,   -38,     0,   263,     0,
       0,   -38,     0,     0,     0,   -38,     0,     0,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   221,   -43,   -43,   -43,   -43,   -43,   197,   198,   199,
     200,   201,   202,     0,     0,     0,     0,     0,    36,    37,
     221,     0,     0,   205,   206,   207,   208,   209,   210,     0,
     221,     0,     0,   -43,   211,   212,     0,   -43,   -43,     0,
     -43,     0,   192,   243,     0,   -43,     0,     0,     0,   -43,
       0,     0,   221,   203,     0,     0,     0,     0,    40,     0,
       0,     0,    41,   -67,   -67,   -67,   -67,   -67,   -67,   213,
       0,     0,   221,     0,   214,     0,   -29,   -29,   215,   -29,
     -29,   -29,   -29,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   358,   359,   221,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   192,   192,   192,   192,   192,   192,   192,   192,   411,
     412,     0,     0,   190,   192,   192,   243,   191,   -64,     0,
     -64,   -64,   -64,   358,   359,     0,   221,     0,     0,   219,
       0,     0,     0,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   434,   435,     0,     0,     0,   221,   192,   243,
     -28,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,   221,
       0,   219,   219,     0,     0,   220,   220,   243,   243,   243,
     243,   243,   243,   243,   243,   457,   458,     0,   117,   118,
     243,   192,   243,     0,   119,   120,   121,   122,     0,   221,
     190,   241,     0,     0,   191,   242,     0,   263,   263,   263,
     263,   263,   263,   263,   263,   478,   479,     0,     0,     0,
     263,   192,   243,     0,     0,     0,     0,   192,   243,     0,
       0,     0,     0,     0,   261,     0,   -26,   -26,   262,   -26,
     -26,   -26,   -26,   219,     0,   241,     0,   220,     0,   242,
     192,   243,     0,     0,     0,   176,   177,   178,   179,   180,
     181,   261,     0,     0,     0,   262,   182,   183,     0,     0,
       0,     0,     0,   192,   243,     0,     0,     0,   288,   289,
     -60,   -60,   -60,   -60,   219,     0,   -22,   -22,   220,   -22,
     -22,   -22,   -22,     0,   192,   243,     0,     0,   -60,     0,
       0,   184,     0,   219,   290,   291,   185,   220,     0,     0,
     186,     0,     0,   219,     0,     0,     0,   220,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   190,   241,     0,     0,   191,
     242,     0,     0,     0,     0,   219,   -84,   -84,     0,   220,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   219,     0,     0,     0,   220,
     247,   248,   249,   250,   251,   252,     0,     0,     0,     0,
       0,   253,   254,     0,     0,     0,   219,     0,     0,     0,
     220,     0,     0,     0,   190,   190,   405,   406,   191,   191,
     191,   191,   407,   408,   409,   410,     0,   190,   190,   241,
       0,   191,   191,   242,     0,     0,   255,     0,     0,   219,
       0,   256,     0,   220,     0,   257,     0,   219,   219,   428,
     429,   220,   220,   220,   220,   430,   431,   432,   433,     0,
     219,   190,   241,     0,   220,   191,   242,     0,     0,     0,
       0,     0,   219,     0,     0,     0,   220,     0,     0,     0,
     241,   241,   451,   452,   242,   242,   242,   242,   453,   454,
     455,   456,   189,   241,   190,   241,     0,   242,   191,   242,
       0,     0,   219,     0,     0,     0,   220,     0,   218,     0,
     261,   261,   472,   473,   262,   262,   262,   262,   474,   475,
     476,   477,     0,   261,   190,   241,     0,   262,   191,   242,
     190,   241,     0,     0,   191,   242,     0,     0,     0,     0,
     218,   218,     0,     0,     0,     0,     0,   288,   289,   -61,
     -61,   -61,   -61,   190,   241,     0,   116,   191,   242,     0,
     227,   228,   229,   230,   231,   232,     0,   -61,     0,   189,
     240,   233,   234,   290,   291,     0,   190,   241,     0,     0,
     191,   242,   270,   271,   272,   273,   274,   275,     0,     0,
       0,   188,     0,   182,   183,     0,     0,   190,   241,     0,
       0,   191,   242,   260,     0,     0,   235,   217,     0,     0,
       0,   236,   218,     0,   240,   237,     0,     0,     0,     0,
     303,   304,   305,   306,   307,   308,     0,     0,   276,     0,
     260,   211,   212,   185,     0,     0,     0,   186,     0,   217,
     217,     0,     0,     0,     0,   336,   337,   338,   339,   340,
     341,     0,     0,   218,   115,     0,   233,   234,   321,   322,
     -61,   -61,   -61,   -61,     0,     0,   309,     0,   188,   239,
       0,   214,   218,     0,     0,   215,   366,   367,   368,   369,
     370,   371,   218,   -61,   323,   324,     0,   253,   254,     0,
       0,   342,     0,     0,   189,   240,   236,     0,     0,     0,
     237,     0,   259,     0,   218,     0,     0,     0,     0,     0,
       0,   217,     0,   239,     0,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   372,     0,   218,     0,     0,   256,     0,   259,
       0,   257,   -85,   -85,   -85,   -85,   -85,   -85,   -65,     0,
     -65,   -65,   -65,   358,   359,   218,     0,     0,     0,     0,
     -85,   -85,   217,   189,   404,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   189,   189,   240,   187,
       0,   217,     0,     0,     0,     0,     0,     0,   218,     0,
       0,   217,     0,     0,     0,   216,   218,   427,     0,     0,
       0,     0,     0,   188,   239,     0,     0,     0,     0,   218,
     189,   240,     0,   217,   384,   385,   -61,   -61,   -61,   -61,
       0,   218,     0,     0,     0,     0,     0,   216,   216,   240,
     450,     0,     0,   217,     0,     0,   -61,   -61,     0,     0,
     386,   387,   240,   189,   240,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   217,   128,   187,   238,     0,   260,
     471,     0,   403,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   260,   189,   240,   188,   188,   239,     0,   189,
     240,     0,   -63,     0,     0,     0,     0,   217,     0,     0,
     258,   -63,   -63,    94,    95,   426,     0,     0,     0,   216,
       0,   238,   189,   240,     0,     0,     0,     0,   217,   188,
     239,     0,     0,     0,     0,     0,     0,   258,   -24,   -24,
     217,   -24,   -24,   -24,   -24,   189,   240,     0,   449,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     216,   239,   188,   239,     0,     0,   189,   240,   -20,   -20,
     217,   -20,   -20,   -20,   -20,     0,   -68,   -68,   470,   216,
     -68,   -68,   -68,   -68,   390,   391,   392,     0,     0,   216,
       0,   259,   188,   239,     0,     0,     0,     0,   188,   239,
       0,   187,   238,     0,   -18,   -18,     0,   -18,   -18,   -18,
     -18,   216,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   188,   239,     0,     0,     0,     0,     0,     0,   -66,
       0,   216,   -86,   -86,   -86,   -86,   -86,   -86,   -66,   -66,
      94,    95,     0,     0,   188,   239,     0,     0,     0,     0,
     -86,   -86,   216,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   188,   239,     0,     0,     0,
       0,     0,     0,   416,   187,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,   439,   187,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -44,     0,     0,     0,   -44,   -44,     0,   -44,   462,
     187,   238,   -75,   -44,   225,     0,     0,   -44,   216,   226,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     187,   238,     0,     0,     0,     0,   187,   238,     0,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   187,
     238,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,     0,   187,   238,   -47,     0,     0,     0,   -47,   -47,
       0,   -47,     0,     0,     0,     0,   -47,     0,     0,     0,
     -47,     0,     0,   187,   238,     0,   -41,     0,     0,     0,
     -41,   -41,     0,   -41,     0,     0,     0,     0,   -41,     0,
       0,   -39,   -41,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
     288,   289,   -62,   -62,   -62,   -62,   -39,     0,     0,     0,
     -39,   -39,     0,   -39,     0,     0,     0,     0,   -39,     0,
     -62,     0,   -39,     0,     0,   -46,   290,   291,     0,   -46,
     -46,     0,   -46,     0,     0,     0,     0,   -46,     0,     0,
     -42,   -46,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,     0,     0,     0,   -42,     0,     0,     0,   -42,
     -42,     0,   -42,     0,     0,     0,     0,   -42,     0,     0,
       0,   -42,     0,     0,   -21,     0,     0,     0,   -21,   -27,
       0,   -21,     0,     0,     0,     0,   -21,     0,     0,   -19,
     -21,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -17,     0,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,   -17,   -17,   -17,   -17,     0,     0,     0,
       0,     0,     0,     0,   -19,     0,     0,     0,   -19,   -25,
       0,   -19,     0,     0,     0,     0,   -19,     0,     0,     0,
     -19,     0,     0,   -17,     0,     0,     0,   -17,   -23,     0,
     -17,     0,     0,     0,     0,   -17,     0,     0,    25,   -17,
       2,     3,     4,     5,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,   175,   164,     0,
      39,     0,     0,     0,     0,    40,     0,     0,     0,    41,
       0,     0,   -50,     0,     0,     0,   -50,   -50,     0,   -50,
       0,     0,     0,     0,   -50,     0,     0,    25,   -50,     2,
       3,     4,     5,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    25,     0,     2,     3,
       4,     5,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,   175,   171,     0,    39,
       0,     0,     0,     0,    40,     0,     0,     0,    41,     0,
       0,    38,     0,     0,     0,   175,   172,     0,    39,     0,
       0,     0,     0,    40,     0,     0,   -49,    41,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,   -49,     0,     0,     0,   -49,   -49,     0,   -49,     0,
       0,     0,     0,   -49,     0,     0,     0,   -49,     0,     0,
     -51,     0,     0,     0,   -51,   -51,     0,   -51,     0,     0,
       0,     0,   -51,     0,     0,   -36,   -51,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
     -36,     0,     0,     0,   -36,   268,     0,   -36,     0,     0,
       0,     0,   -36,     0,     0,     0,   -36,     0,     0,   -36,
       0,     0,     0,   -36,   300,     0,   -36,     0,     0,     0,
       0,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,   -36,
       0,     0,     0,   -36,   396,     0,   -36,     0,     0,     0,
       0,   -36,     0,     0,     0,   -36,     0,     0,   -35,     0,
       0,     0,   -35,   -35,     0,   -35,     0,     0,     0,     0,
     -35,     0,     0,    25,   -35,     2,     3,     4,     5,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    25,     0,     2,     3,     4,     5,    26,    27,
      28,    29,    30,    31,    32,     0,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,   175,   488,     0,    39,     0,     0,     0,     0,
      40,     0,     0,     0,    41,     0,     0,    38,     0,     0,
       0,   175,   495,     0,    39,     0,     0,     0,     0,    40,
       0,     0,    25,    41,     2,     3,     4,     5,    26,    27,
      28,    29,    30,    31,    32,     0,    33,    34,    35,    36,
      37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,   175,   514,     0,    39,     0,     0,     0,     0,    40,
       0,     0,     0,    41,     0,     0,   -37,     0,     0,     0,
     -37,   -37,     0,   -37,     0,     0,     0,     0,   -37,     0,
       0,     0,   -37,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,   -87,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,   -88,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -89,   -89,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     363,   364,     0,     0,     0,   -75,   365,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,   -80,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,     0,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,     0,     0,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,   394,     0,     0,   -75,   -75,   395,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,     0,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,     0,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
       0,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,     0,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,     0,     0,     0,     0,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,     0,     0,     0,     0,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,     0,     0,
       0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,    99,
     100,     0,     0,     0,     0,   101,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,     0,     0,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
       0,     0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,     0,     0,     0,     0,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
       0,     0,     0,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,     0,     0,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,     0,     0,     0,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,     0,
       0,     0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,     0,     0,     0,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,   -89,   -89,     0,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,   298,   -75,     0,     0,
       0,   299,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,     0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   330,
     331,     0,     0,     0,     0,   332,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,   -75,   447,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,     0,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,     0,     0,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,     0,
       0,   -75,   -75,   468,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -90,   -90,     0,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,     0,
       0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,     0,     0,
       0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,     0,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,     0,     0,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,   -84,     0,     0,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,   -86,     0,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,   -87,     0,     0,     0,     0,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,   -88,     0,     0,     0,     0,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,     0,   -89,     0,     0,
       0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
     -80,     0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,     0,     0,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,     0,     0,
       0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,     0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,     0,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,     0,     0,     0,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
       0,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   -75,     0,     0,     0,   401,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,     0,     0,     0,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   423,     0,     0,     0,     0,
     424,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
       0,   -82,     0,     0,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,   -90,     0,     0,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,   -81,     0,     0,
       0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,     0,
     -83,     0,     0,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -90,     0,     0,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,     0,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
       0,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,   -83,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   360,   361,   362,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
     -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -76,   -76,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   360,   361,   362,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   360,   361,   362,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -69,   -69,     0,     0,   -69,
     -69,   -69,   -69,   390,   391,   392,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,   -70,   -70,
       0,     0,   -70,   -70,   -70,   -70,   390,   391,   392,   -72,
     -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,     0,     0,   -71,     0,
     -68,   -68,   -68,   -68,    96,    97,    98,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,     0,     0,   -79,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,     0,     0,   -76,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -69,     0,     0,     0,     0,     0,     0,   -70,     0,
     -69,   -69,   -69,   -69,    96,    97,    98,   -70,   -70,   -70,
     -70,    96,    97,    98,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,   -73,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -74,   -68,   -68,   -68,   -68,   -68,   -68,   -67,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -67,   -67,    94,
      95,     0,   -68,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   294,   295,   296,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -68,   -68,
     -68,   -68,   -68,   327,   328,   329,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -78,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -79,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -77,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -69,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   294,   295,
     296,   -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   294,   295,   296,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -72,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -69,   -69,   -69,   -69,   -69,   327,   328,
     329,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   327,   328,   329,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -66,   -66,     0,     0,   -66,   -66,   388,
     389,   -67,   -67,     0,     0,   -67,   -67,   388,   389,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,     0,     0,   -64,   -64,   388,   389,   -65,
     -65,   -64,     0,   -65,   -65,   388,   389,     0,     0,     0,
     -64,   -64,    94,    95,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -65,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
     -65,   -65,    94,    95,   -63,     0,     0,     0,     0,     0,
     -63,   -63,   292,   293,     0,     0,     0,   -63,   -63,   -63,
     325,   326,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -66,     0,     0,     0,     0,     0,   -66,   -66,
     292,   293,   -67,     0,     0,     0,     0,     0,   -67,   -67,
     292,   293,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,     0,   -64,   -64,
     292,   293,   -65,     0,     0,     0,     0,     0,   -65,   -65,
     292,   293,   -66,   -66,   -66,   -66,   -66,   -66,   -67,   -67,
     -67,   -67,   -67,   -67,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -66,   -66,   -66,
     325,   326,     0,   -67,   -67,   -67,   325,   326,     0,   -64,
     -64,   -64,   325,   326,     0,   -65,   -65,   -65,   325,   326,
     384,   385,   -62,   -62,   -62,   -62,   321,   322,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   -62,     0,     0,   386,   387,     0,     0,
       0,   -62,   323,   324
};

static const yytype_int16 yycheck[] =
{
      20,   226,    22,    23,     0,   175,     7,    33,     1,    33,
      34,     7,    33,     8,    46,    35,    33,    34,    50,    39,
      33,   136,     7,    49,    44,    49,   196,    33,    24,    44,
       1,    52,     0,    54,   149,    52,    49,    54,   153,     7,
       1,    34,     3,     4,     5,     6,    52,    52,    54,    54,
       7,    71,    72,    54,     1,    50,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    33,   299,    46,    47,    48,     7,    33,
     100,   101,    53,    33,     7,     8,     9,    10,    11,    12,
      33,    34,    33,    54,    54,    18,    19,   267,     7,    46,
      54,    51,    52,    50,    51,    46,    53,   332,    51,    52,
       0,    58,   108,    46,   134,    62,   136,    29,    30,    31,
      32,    33,    34,   143,     7,   145,    49,    51,    52,   149,
      53,   151,    46,   153,    46,    58,   151,    33,    34,    62,
     365,   161,   162,    55,    56,   165,    46,   162,   141,   142,
     165,    33,    34,    50,   269,    33,    52,    46,    54,    33,
      34,    53,   182,   183,   184,   185,   186,    48,    46,    53,
     395,    52,    54,    54,   167,    49,   401,     7,     8,     9,
      10,    11,    12,   203,    33,    34,   301,    46,    18,    19,
       7,   211,   212,   213,   214,   215,    52,    46,    54,   424,
      31,    32,    33,    34,    46,   225,   226,     7,     8,     9,
      10,    11,    12,   233,   234,   235,   236,   237,    18,    19,
      51,    52,   447,    53,    54,    46,    33,    34,    58,    33,
      34,    47,    62,   253,   254,   255,   256,   257,    31,    32,
      33,    34,    46,   468,    49,    54,    46,    54,    50,   269,
      46,    47,    48,    53,     7,    52,   276,    54,    58,    52,
      15,    54,    62,    46,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      54,   301,   397,     1,    46,     3,     4,     5,     6,   309,
      29,    30,    31,    32,    33,    34,    50,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    52,    50,    54,    55,    56,    57,    58,
      51,    52,   342,    29,    30,    31,    32,    33,    34,    54,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    52,    54,    54,    55,
      56,    53,   372,    31,    32,    33,    34,    52,    49,    54,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,    54,   397,   398,    46,
     400,   401,    20,   398,    22,    23,     3,     4,     5,     6,
      31,    32,    33,    34,    52,    51,    54,    35,    51,    52,
     420,    39,    49,   423,   424,   420,    44,     1,    49,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   446,   447,    31,    32,
      33,    34,    50,    71,    72,    31,    32,    33,    34,    50,
      31,    32,    33,    34,    52,    51,    54,   467,   468,    52,
      51,    54,    46,    46,    54,    33,    50,    51,    54,    53,
      51,    52,   100,   101,    58,    46,    46,   487,    62,    52,
      54,    54,   487,    51,    52,    52,     1,    54,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    52,   134,    54,   136,    33,
      34,    31,    32,    33,    34,   143,    52,   145,    54,    15,
      52,   149,    54,   151,    52,   153,    54,    51,    52,    49,
      52,    46,    54,   161,   162,    50,    51,   165,    53,    52,
      52,    54,    54,    58,    52,    54,    54,    62,     7,     8,
       9,    10,    11,    12,   182,   183,   184,   185,   186,    18,
      19,    54,    49,    54,    54,     7,     8,     9,    10,    11,
      12,    54,    49,    54,    49,   203,    18,    19,    31,    32,
      33,    34,    54,   211,   212,   213,   214,   215,    49,    54,
      15,    49,    51,    46,    53,    49,     7,   225,   226,    58,
      49,    49,    49,    62,   108,   233,   234,   235,   236,   237,
      -1,    53,    54,    -1,    -1,    -1,    58,    -1,     0,     1,
      62,     3,     4,     5,     6,   253,   254,   255,   256,   257,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,   269,    18,    19,    -1,    -1,    -1,    -1,   276,    29,
      30,    31,    32,    33,    34,    -1,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,    52,   301,    54,    55,    56,    53,    54,    -1,
      -1,   309,    58,    -1,    -1,    -1,    62,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    31,    32,    33,    34,    -1,
      -1,    -1,     0,     1,   342,     3,     4,     5,     6,    -1,
      46,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,     7,     8,
       9,    10,    11,    12,   372,    -1,    -1,    -1,    -1,    18,
      19,    -1,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,    -1,   397,
     398,    -1,   400,   401,    22,    23,     0,     1,    -1,     3,
       4,     5,     6,    -1,    53,    54,    -1,    35,    -1,    58,
      -1,    39,   420,    62,    -1,   423,   424,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,   446,   447,
      -1,    -1,    -1,    71,    72,     0,     1,    -1,     3,     4,
       5,     6,    -1,     7,     8,     9,    10,    11,    12,   467,
     468,    -1,    46,    -1,    18,    19,    50,    51,    -1,    53,
      -1,    -1,   100,   101,    58,    -1,    -1,    -1,    62,   487,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    53,
      54,    -1,    -1,    -1,    58,    -1,   134,    -1,    62,    29,
      30,    31,    32,    33,    34,   143,    -1,   145,     0,     1,
      -1,     3,     4,     5,     6,    46,    46,    -1,    -1,    50,
      51,    -1,    53,   161,    -1,    55,    56,    58,    -1,    -1,
      -1,    62,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   184,    15,    16,    17,
      18,    19,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,   203,    18,    19,    -1,    29,
      30,    31,    32,    33,    34,   213,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,    46,   225,   226,    -1,
      58,    23,    -1,    -1,    62,    55,    56,   235,    -1,    -1,
      -1,    53,    54,    -1,    36,    37,    58,    39,    40,    41,
      62,    -1,    -1,    -1,    -1,    -1,    -1,   255,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,   276,    71,
      72,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    18,    19,    29,    30,    31,    32,    33,    34,
     298,   299,    -1,    46,    96,    97,    98,    50,   100,   101,
      53,   309,    47,    48,    -1,    58,    51,    52,    53,    62,
      55,    56,    57,    58,    59,    60,    61,    53,    54,    -1,
      -1,    -1,    58,   331,   332,    -1,    62,    -1,    -1,    -1,
      -1,    -1,   134,    -1,   342,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    -1,   364,   365,    -1,   161,
      18,    19,     0,     1,   372,     3,     4,     5,     6,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
     182,   183,   184,   185,   186,    -1,   394,   395,    -1,    -1,
      -1,    -1,   400,   401,    -1,    53,    54,    54,    55,    56,
      58,   203,     0,     1,    62,     3,     4,     5,     6,   211,
     212,   213,   214,   215,    -1,   423,   424,     7,     8,     9,
      10,    11,    12,   225,   226,    -1,    -1,    -1,    18,    19,
      -1,   233,   234,   235,   236,   237,    -1,    -1,   446,   447,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,   253,   254,   255,   256,   257,    -1,    -1,    -1,   467,
     468,    -1,    -1,    53,    54,    51,    52,    -1,    58,    55,
      56,    -1,    62,    -1,   276,    -1,    29,    30,    31,    32,
      33,    34,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,    51,    52,
      -1,    -1,    55,    56,    57,    58,    -1,   309,    29,    30,
      31,    32,    33,    34,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    52,    -1,    54,    55,    56,    57,    58,     0,     1,
     342,     3,     4,     5,     6,    -1,    -1,    -1,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,     7,     8,     9,    10,    11,    12,
     372,    -1,    -1,    -1,    -1,    18,    19,    -1,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,    -1,    -1,    -1,    -1,   400,   401,
      23,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      53,    54,    18,    19,    -1,    58,    39,    -1,    -1,    62,
      -1,   423,   424,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,   446,   447,    -1,    53,    71,    72,
      -1,    -1,    58,    -1,     0,     1,    62,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   467,   468,    -1,    -1,    46,
      -1,    94,    95,    50,    51,    -1,    53,   100,   101,    -1,
      -1,    58,    -1,    -1,     1,    62,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    29,    30,    31,    32,    33,
      34,   134,     0,     1,    -1,     3,     4,     5,     6,    -1,
     143,    -1,   145,    -1,    -1,    -1,    -1,    -1,    52,    46,
      54,    55,    56,    50,    51,    -1,    53,    -1,   161,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   184,    15,    16,    17,    18,    19,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,    19,
     203,    -1,    -1,     7,     8,     9,    10,    11,    12,    -1,
     213,    -1,    -1,    46,    18,    19,    -1,    50,    51,    -1,
      53,    -1,   225,   226,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,   235,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    29,    30,    31,    32,    33,    34,    53,
      -1,    -1,   255,    -1,    58,    -1,     0,     1,    62,     3,
       4,     5,     6,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,   276,    -1,    29,    30,    31,    32,    33,
      34,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,    -1,    23,   297,   298,   299,    23,    52,    -1,
      54,    55,    56,    57,    58,    -1,   309,    -1,    -1,    39,
      -1,    -1,    -1,    39,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    -1,    -1,    -1,   330,   331,   332,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,   342,
      -1,    71,    72,    -1,    -1,    71,    72,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,    -1,    88,    89,
     363,   364,   365,    -1,    90,    91,    92,    93,    -1,   372,
     100,   101,    -1,    -1,   100,   101,    -1,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,    -1,    -1,    -1,
     393,   394,   395,    -1,    -1,    -1,    -1,   400,   401,    -1,
      -1,    -1,    -1,    -1,   134,    -1,     0,     1,   134,     3,
       4,     5,     6,   143,    -1,   145,    -1,   143,    -1,   145,
     423,   424,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,   161,    -1,    -1,    -1,   161,    18,    19,    -1,    -1,
      -1,    -1,    -1,   446,   447,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,   184,    -1,     0,     1,   184,     3,
       4,     5,     6,    -1,   467,   468,    -1,    -1,    49,    -1,
      -1,    53,    -1,   203,    55,    56,    58,   203,    -1,    -1,
      62,    -1,    -1,   213,    -1,    -1,    -1,   213,    29,    30,
      31,    32,    33,    34,    -1,   225,   226,    -1,    -1,   225,
     226,    -1,    -1,    -1,    -1,   235,    47,    48,    -1,   235,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,   255,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,   276,    -1,    -1,    -1,
     276,    -1,    -1,    -1,   284,   285,   286,   287,   284,   285,
     286,   287,   288,   289,   290,   291,    -1,   297,   298,   299,
      -1,   297,   298,   299,    -1,    -1,    53,    -1,    -1,   309,
      -1,    58,    -1,   309,    -1,    62,    -1,   317,   318,   319,
     320,   317,   318,   319,   320,   321,   322,   323,   324,    -1,
     330,   331,   332,    -1,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    -1,   342,    -1,    -1,    -1,
     350,   351,   352,   353,   350,   351,   352,   353,   354,   355,
     356,   357,    23,   363,   364,   365,    -1,   363,   364,   365,
      -1,    -1,   372,    -1,    -1,    -1,   372,    -1,    39,    -1,
     380,   381,   382,   383,   380,   381,   382,   383,   384,   385,
     386,   387,    -1,   393,   394,   395,    -1,   393,   394,   395,
     400,   401,    -1,    -1,   400,   401,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,   423,   424,    -1,    87,   423,   424,    -1,
       7,     8,     9,    10,    11,    12,    -1,    49,    -1,   100,
     101,    18,    19,    55,    56,    -1,   446,   447,    -1,    -1,
     446,   447,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    23,    -1,    18,    19,    -1,    -1,   467,   468,    -1,
      -1,   467,   468,   134,    -1,    -1,    53,    39,    -1,    -1,
      -1,    58,   143,    -1,   145,    62,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    -1,    -1,    53,    -1,
     161,    18,    19,    58,    -1,    -1,    -1,    62,    -1,    71,
      72,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    -1,    -1,   184,    86,    -1,    18,    19,    29,    30,
      31,    32,    33,    34,    -1,    -1,    53,    -1,   100,   101,
      -1,    58,   203,    -1,    -1,    62,     7,     8,     9,    10,
      11,    12,   213,    54,    55,    56,    -1,    18,    19,    -1,
      -1,    53,    -1,    -1,   225,   226,    58,    -1,    -1,    -1,
      62,    -1,   134,    -1,   235,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,    29,    30,    31,    32,    33,
      34,    -1,    53,    -1,   255,    -1,    -1,    58,    -1,   161,
      -1,    62,    29,    30,    31,    32,    33,    34,    52,    -1,
      54,    55,    56,    57,    58,   276,    -1,    -1,    -1,    -1,
      47,    48,   184,   284,   285,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,   297,   298,   299,    23,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,   213,    -1,    -1,    -1,    39,   317,   318,    -1,    -1,
      -1,    -1,    -1,   225,   226,    -1,    -1,    -1,    -1,   330,
     331,   332,    -1,   235,    29,    30,    31,    32,    33,    34,
      -1,   342,    -1,    -1,    -1,    -1,    -1,    71,    72,   350,
     351,    -1,    -1,   255,    -1,    -1,    51,    52,    -1,    -1,
      55,    56,   363,   364,   365,    -1,    -1,    -1,    -1,    -1,
      -1,   372,    -1,    -1,   276,    99,   100,   101,    -1,   380,
     381,    -1,   284,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,   393,   394,   395,   297,   298,   299,    -1,   400,
     401,    -1,    46,    -1,    -1,    -1,    -1,   309,    -1,    -1,
     134,    55,    56,    57,    58,   317,    -1,    -1,    -1,   143,
      -1,   145,   423,   424,    -1,    -1,    -1,    -1,   330,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   161,     0,     1,
     342,     3,     4,     5,     6,   446,   447,    -1,   350,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
     184,   363,   364,   365,    -1,    -1,   467,   468,     0,     1,
     372,     3,     4,     5,     6,    -1,    51,    52,   380,   203,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,   213,
      -1,   393,   394,   395,    -1,    -1,    -1,    -1,   400,   401,
      -1,   225,   226,    -1,     0,     1,    -1,     3,     4,     5,
       6,   235,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,   423,   424,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,   255,    29,    30,    31,    32,    33,    34,    55,    56,
      57,    58,    -1,    -1,   446,   447,    -1,    -1,    -1,    -1,
      47,    48,   276,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   467,   468,    -1,    -1,    -1,
      -1,    -1,    -1,   297,   298,   299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,   330,   331,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    46,    -1,    -1,    -1,    50,    51,    -1,    53,   363,
     364,   365,    46,    58,    48,    -1,    -1,    62,   372,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,
     394,   395,    -1,    -1,    -1,    -1,   400,   401,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,   423,
     424,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,   446,   447,    46,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,   467,   468,    -1,    46,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,     1,    62,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      29,    30,    31,    32,    33,    34,    46,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      49,    -1,    62,    -1,    -1,    46,    55,    56,    -1,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
       1,    62,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,     1,
      62,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,     1,    62,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,     1,    62,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,     1,    62,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,     1,    62,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,     1,    62,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,     1,    62,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,     1,    62,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    46,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    51,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    51,    52,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    51,    52,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    51,
      52,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    51,    52,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    46,    29,    30,    31,    32,    33,    34,    46,    -1,
      55,    56,    57,    58,    59,    60,    61,    55,    56,    57,
      58,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    29,    30,    31,    32,    33,
      34,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    54,    55,
      56,    57,    58,    59,    60,    61,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    49,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    54,    55,    56,    57,    58,    59,    60,    61,    29,
      30,    31,    32,    33,    34,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    54,    55,    56,    57,    58,    59,    60,    61,
      54,    55,    56,    57,    58,    59,    60,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    49,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    54,    55,    56,    57,    58,    59,    60,
      61,    29,    30,    31,    32,    33,    34,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    54,    55,    56,    57,    58,    59,
      60,    61,    54,    55,    56,    57,    58,    59,    60,    61,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    29,
      30,    31,    32,    33,    34,    54,    55,    56,    57,    58,
      59,    60,    61,    51,    52,    -1,    -1,    55,    56,    57,
      58,    51,    52,    -1,    -1,    55,    56,    57,    58,    29,
      30,    31,    32,    33,    34,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    29,    30,    31,    32,    33,    34,
      -1,    51,    52,    -1,    -1,    55,    56,    57,    58,    51,
      52,    46,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      55,    56,    57,    58,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    46,    29,    30,    31,    32,    33,    34,    -1,    -1,
      55,    56,    57,    58,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    29,    30,    31,    32,    33,    34,    29,    30,
      31,    32,    33,    34,    29,    30,    31,    32,    33,    34,
      29,    30,    31,    32,    33,    34,    -1,    54,    55,    56,
      57,    58,    -1,    54,    55,    56,    57,    58,    -1,    54,
      55,    56,    57,    58,    -1,    54,    55,    56,    57,    58,
      29,    30,    31,    32,    33,    34,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    54,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    64,    65,    66,    67,
      69,    96,    46,    50,    78,     0,    66,    46,     7,    51,
      79,     1,    47,    48,    53,     1,     7,     8,     9,    10,
      11,    12,    13,    15,    16,    17,    18,    19,    46,    53,
      58,    62,    67,    78,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    96,
      46,    85,    49,    85,     1,     3,    54,    76,    77,    96,
      46,    53,    53,    78,    85,    92,    93,    92,    85,    92,
      92,    46,    51,    81,    46,    46,    33,    34,    31,    32,
      29,    30,    55,    56,    57,    58,    59,    60,    61,    47,
      48,    53,     7,    47,    49,    54,    54,    50,    52,    54,
       7,    85,    85,    15,    54,    87,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    86,    85,
      54,    85,    95,     8,    50,    50,    72,    75,    77,    50,
      48,    54,    54,    53,    49,    52,    54,    68,    85,    71,
      74,    80,    51,    70,    73,    49,    78,    78,    85,    85,
      51,    52,    80,    51,    51,    80,    51,    14,    54,    51,
      85,    51,    51,    78,    46,    50,     7,     8,     9,    10,
      11,    12,    18,    19,    53,    58,    62,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    50,     7,     8,     9,
      10,    11,    12,    53,    94,     7,     8,     9,    10,    11,
      12,    18,    19,    53,    58,    62,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    48,    53,     7,     8,     9,
      10,    11,    12,    18,    19,    53,    58,    62,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     7,     8,     9,
      10,    11,    12,    18,    19,    53,    58,    62,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    50,    51,    79,
       7,     8,     9,    10,    11,    12,    53,    92,    93,    94,
      92,    85,    92,    92,    33,    34,    31,    32,    29,    30,
      55,    56,    57,    58,    59,    60,    61,    47,    48,    53,
      51,    79,    85,     7,     8,     9,    10,    11,    12,    53,
      92,    93,    94,    92,    85,    92,    92,    33,    34,    31,
      32,    29,    30,    55,    56,    57,    58,    59,    60,    61,
      47,    48,    53,    85,    54,    95,     7,     8,     9,    10,
      11,    12,    53,    92,    93,    94,    92,    85,    92,    92,
      33,    34,    31,    32,    29,    30,    55,    56,    57,    58,
      59,    60,    61,    47,    48,    53,     7,     8,     9,    10,
      11,    12,    53,    92,    93,    94,    92,    85,    92,    92,
      33,    34,    31,    32,    29,    30,    55,    56,    57,    58,
      59,    60,    61,    47,    48,    53,    51,    79,    80,    85,
      48,    53,    54,    87,    88,    89,    89,    90,    90,    90,
      90,    91,    91,    92,    92,    92,    86,    85,    54,    95,
      80,    54,    85,    48,    53,    54,    87,    88,    89,    89,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    86,
      85,    54,    95,    49,    54,    85,    48,    53,    54,    87,
      88,    89,    89,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    86,    85,    54,    95,    85,    48,    53,    54,
      87,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    86,    85,    54,    95,    80,    51,    54,
      85,    54,    95,    49,    54,    51,    54,    85,    54,    95,
      49,    54,    54,    85,    54,    95,    49,    54,    54,    85,
      54,    95,    49,    54,    51,    49,    54,    49,    54,    49,
      54,    49,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    68,    70,    69,    71,
      69,    72,    69,    73,    69,    74,    69,    75,    69,    69,
      69,    76,    76,    77,    77,    78,    79,    78,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96
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
#line 98 "language.y"
    { root = (yyvsp[0].node); }
#line 3136 "src/parser.c"
    break;

  case 3:
#line 102 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3142 "src/parser.c"
    break;

  case 4:
#line 103 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3148 "src/parser.c"
    break;

  case 5:
#line 107 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3154 "src/parser.c"
    break;

  case 6:
#line 108 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3160 "src/parser.c"
    break;

  case 7:
#line 109 "language.y"
    { (yyval.node) = NULL; }
#line 3166 "src/parser.c"
    break;

  case 8:
#line 110 "language.y"
    { (yyval.node) = NULL; }
#line 3172 "src/parser.c"
    break;

  case 9:
#line 114 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); }
#line 3178 "src/parser.c"
    break;

  case 10:
#line 115 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); }
#line 3184 "src/parser.c"
    break;

  case 11:
#line 116 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval)); }
#line 3190 "src/parser.c"
    break;

  case 12:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval)); }
#line 3196 "src/parser.c"
    break;

  case 13:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval)); }
#line 3202 "src/parser.c"
    break;

  case 14:
#line 119 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval)); }
#line 3208 "src/parser.c"
    break;

  case 15:
#line 123 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3214 "src/parser.c"
    break;

  case 16:
#line 124 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3220 "src/parser.c"
    break;

  case 17:
#line 128 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3226 "src/parser.c"
    break;

  case 18:
#line 128 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3232 "src/parser.c"
    break;

  case 19:
#line 129 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3238 "src/parser.c"
    break;

  case 20:
#line 129 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3244 "src/parser.c"
    break;

  case 21:
#line 130 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3250 "src/parser.c"
    break;

  case 22:
#line 130 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3256 "src/parser.c"
    break;

  case 23:
#line 131 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3262 "src/parser.c"
    break;

  case 24:
#line 131 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3268 "src/parser.c"
    break;

  case 25:
#line 132 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3274 "src/parser.c"
    break;

  case 26:
#line 132 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3280 "src/parser.c"
    break;

  case 27:
#line 133 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3286 "src/parser.c"
    break;

  case 28:
#line 133 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3292 "src/parser.c"
    break;

  case 29:
#line 134 "language.y"
    { (yyval.node) = NULL; }
#line 3298 "src/parser.c"
    break;

  case 30:
#line 135 "language.y"
    { (yyval.node) = NULL; }
#line 3304 "src/parser.c"
    break;

  case 31:
#line 139 "language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3310 "src/parser.c"
    break;

  case 32:
#line 140 "language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3316 "src/parser.c"
    break;

  case 33:
#line 144 "language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); }
#line 3322 "src/parser.c"
    break;

  case 34:
#line 145 "language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); }
#line 3328 "src/parser.c"
    break;

  case 35:
#line 149 "language.y"
    { (yyval.node) = NULL; }
#line 3334 "src/parser.c"
    break;

  case 36:
#line 150 "language.y"
    { begin(NULL); }
#line 3340 "src/parser.c"
    break;

  case 37:
#line 150 "language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3346 "src/parser.c"
    break;

  case 38:
#line 154 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3352 "src/parser.c"
    break;

  case 39:
#line 155 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3358 "src/parser.c"
    break;

  case 40:
#line 159 "language.y"
    { (yyval.node) = NULL; }
#line 3364 "src/parser.c"
    break;

  case 41:
#line 160 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3370 "src/parser.c"
    break;

  case 42:
#line 161 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3376 "src/parser.c"
    break;

  case 43:
#line 162 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3382 "src/parser.c"
    break;

  case 44:
#line 163 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3388 "src/parser.c"
    break;

  case 45:
#line 164 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3394 "src/parser.c"
    break;

  case 46:
#line 165 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3400 "src/parser.c"
    break;

  case 47:
#line 166 "language.y"
    { (yyval.node) = NULL; }
#line 3406 "src/parser.c"
    break;

  case 48:
#line 170 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign_context((yyval.node)); }
#line 3412 "src/parser.c"
    break;

  case 49:
#line 171 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3418 "src/parser.c"
    break;

  case 50:
#line 175 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3424 "src/parser.c"
    break;

  case 51:
#line 176 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign_context((yyval.node)); }
#line 3430 "src/parser.c"
    break;

  case 52:
#line 180 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context((yyval.node)); }
#line 3436 "src/parser.c"
    break;

  case 53:
#line 181 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3442 "src/parser.c"
    break;

  case 54:
#line 185 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3448 "src/parser.c"
    break;

  case 55:
#line 186 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3454 "src/parser.c"
    break;

  case 56:
#line 190 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3460 "src/parser.c"
    break;

  case 57:
#line 191 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3466 "src/parser.c"
    break;

  case 58:
#line 195 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3472 "src/parser.c"
    break;

  case 59:
#line 196 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3478 "src/parser.c"
    break;

  case 60:
#line 200 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3484 "src/parser.c"
    break;

  case 61:
#line 201 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3490 "src/parser.c"
    break;

  case 62:
#line 202 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3496 "src/parser.c"
    break;

  case 63:
#line 206 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3502 "src/parser.c"
    break;

  case 64:
#line 207 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3508 "src/parser.c"
    break;

  case 65:
#line 208 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3514 "src/parser.c"
    break;

  case 66:
#line 209 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3520 "src/parser.c"
    break;

  case 67:
#line 210 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3526 "src/parser.c"
    break;

  case 68:
#line 214 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3532 "src/parser.c"
    break;

  case 69:
#line 215 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3538 "src/parser.c"
    break;

  case 70:
#line 216 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3544 "src/parser.c"
    break;

  case 71:
#line 220 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3550 "src/parser.c"
    break;

  case 72:
#line 221 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3556 "src/parser.c"
    break;

  case 73:
#line 222 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3562 "src/parser.c"
    break;

  case 74:
#line 223 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3568 "src/parser.c"
    break;

  case 75:
#line 227 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3574 "src/parser.c"
    break;

  case 76:
#line 228 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3580 "src/parser.c"
    break;

  case 77:
#line 229 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3586 "src/parser.c"
    break;

  case 78:
#line 230 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3592 "src/parser.c"
    break;

  case 79:
#line 231 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3598 "src/parser.c"
    break;

  case 80:
#line 235 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3604 "src/parser.c"
    break;

  case 81:
#line 236 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); }
#line 3610 "src/parser.c"
    break;

  case 82:
#line 237 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-2].node),     ENDARG)); assign_context((yyval.node)); }
#line 3616 "src/parser.c"
    break;

  case 83:
#line 238 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); }
#line 3622 "src/parser.c"
    break;

  case 84:
#line 242 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3628 "src/parser.c"
    break;

  case 85:
#line 243 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3634 "src/parser.c"
    break;

  case 86:
#line 244 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3640 "src/parser.c"
    break;

  case 87:
#line 245 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3646 "src/parser.c"
    break;

  case 88:
#line 246 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3652 "src/parser.c"
    break;

  case 89:
#line 247 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3658 "src/parser.c"
    break;

  case 90:
#line 248 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3664 "src/parser.c"
    break;

  case 91:
#line 252 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3670 "src/parser.c"
    break;

  case 92:
#line 253 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3676 "src/parser.c"
    break;

  case 93:
#line 257 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3682 "src/parser.c"
    break;

  case 94:
#line 258 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3688 "src/parser.c"
    break;

  case 95:
#line 259 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3694 "src/parser.c"
    break;

  case 96:
#line 260 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3700 "src/parser.c"
    break;


#line 3704 "src/parser.c"

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
#line 263 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
