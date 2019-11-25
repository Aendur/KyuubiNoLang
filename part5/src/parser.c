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
#line 83 "src/language.y"

#include "actions.h"
#include "node-list.h"
#include "arg-list.h"
#include "misc.h"
#include "typechecker.h"

#include <stdlib.h>
#include <stdio.h>

int yylex (void);
void free_label(const char * str);
extern Node * root;
//extern Nodelist * node_list;


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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7631

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
       2,     2,     2,    70,     2,     2,     2,    69,     2,     2,
      61,    62,    67,    65,    60,    66,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
      63,    55,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   111,   112,   113,   114,   118,   119,
     120,   121,   122,   123,   127,   128,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   140,   141,   145,   146,   150,
     151,   151,   155,   156,   160,   161,   162,   163,   164,   165,
     166,   167,   171,   172,   176,   177,   181,   182,   186,   187,
     191,   192,   196,   197,   201,   202,   203,   207,   208,   209,
     210,   211,   215,   216,   217,   221,   222,   223,   224,   228,
     229,   230,   231,   232,   233,   237,   238,   239,   240,   244,
     245,   246,   247,   248,   249,   250,   254,   255,   259,   260,
     261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR", "STRING",
  "UNDEFINED", "IDENTIFIER", "STRING_LITERAL", "CONSTANT_FLOAT",
  "CONSTANT_INT", "CONSTANT_HEX", "CONSTANT_CHAR", "IF", "ELSE", "WHILE",
  "DO", "RETURN", "\"=\"", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "\"<\"",
  "\"<=\"", "\">=\"", "\">\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"%\"",
  "OP_POS", "OP_NEG", "\"!\"", "\"++\"", "\"--\"", "UNRECOGNIZED_TOKEN",
  "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST", "VARIABLE",
  "CONSTANT", "ARRAY", "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL",
  "VAR_DECL", "VAR_INIT", "ARR_DECL", "ARR_INIT", "GENERIC_NODE", "';'",
  "'='", "'['", "']'", "'{'", "'}'", "','", "'('", "')'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "declaration_list",
  "declaration", "init_declarator", "initializer_list",
  "function_definition", "$@1", "$@2", "$@3", "$@4", "argument_list",
  "argument", "compound_statement", "$@5", "statement_list", "statement",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    59,    61,    91,    93,   123,   125,
      44,    40,    41,    60,    62,    43,    45,    42,    47,    37,
      33
};
# endif

#define YYPACT_NINF -256

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-256)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,   179,    33,    38,    60,   138,   876,   899,   -46,  1118,
     225,  1148,  1906,  1263,  -256,  1402,  1467,   708,  1484,    83,
    1648,   186,  1255,   -25,  3542,   870,  1143,  4215,  4264,  4271,
      58,   177,   181,   567,  1654,  1654,  1983,  1690,  1654,  1654,
    1654,   187,  2678,  2708,  2776,  2806,  2844,   196,   226,    69,
      -6,   656,   295,  1049,  5946,  5995,  4287,  4322,   274,   240,
     242,   258,   288,    -2,    64,   143,   345,  2874,  1942,    44,
    1690,  1690,   357,   328,  6002,  6018,  6052,   326,  6068,  6075,
    6124,  2912,  1618,  2942,  2980,  3010,  1654,  1654,  1654,  1654,
    1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,  1654,
     346,    20,   350,  1676,   347,   435,   375,   -43,   358,  4338,
     263,   348,   362,   382,   409,  4345,   335,   805,   783,  1511,
    2215,  3679,  4122,  5723,  6131,  6147,  6181,  6197,  6204,   162,
     406,  2014,  3048,   440,  3078,   418,  4394,  2086,  4401,   434,
     443,  1690,   201,   319,    83,   417,    83,   445,   449,   477,
     468,  3116,   446,   463,   156,  3146,  1741,  3184,  1758,   443,
     471,   474,   337,  1870,  2013,  3214,  3252,  3282,  3591,  4416,
    4465,  4480,  4529,  4544,  2155,  2155,  1690,  2155,  2155,  2155,
      50,    82,   467,  1578,   561,  6253,  6266,  4593,  4608,  3320,
    3671,  6273,  6322,  6329,  6345,  6379,  1690,  6395,  3606,  4657,
    4672,  4687,  4736,  4751,  2276,  2276,  1690,  2276,  2276,  2276,
     157,   129,    17,  1334,   399,  6403,  6413,  4766,  4815,   492,
    1439,  1713,  2737,  3686,  3735,  2345,  2345,  1690,  2345,  2345,
    2345,    92,    23,   152,   264,    10,    -1,   390,  3750,  3765,
    2599,  2365,  3814,  3829,  3844,  3893,  2464,  2464,  1690,  2464,
    2464,  2464,    70,   233,   324,   472,   711,   576,  4826,  3908,
    3923,  3350,  3388,    83,  1942,   381,  3972,  6429,  6478,  6491,
    6504,  6553,  1690,  6566,  6579,  6628,  6641,   484,  6654,  6703,
    6716,  2155,  2155,  2155,  2155,  2155,  2155,  2155,  2155,  2155,
    2155,  2155,  2155,  2155,  2155,   513,    83,  1942,   917,   488,
    1942,   935,  3986,  6724,  6732,  6781,  6789,  6797,  1690,  6805,
    6813,  6862,  6870,   501,  6878,  6886,  6894,  2276,  2276,  2276,
    2276,  2276,  2276,  2276,  2276,  2276,  2276,  2276,  2276,  2276,
    2276,  1942,   948,  3655,  1869,  4836,  4885,  4895,  4905,  1690,
    4915,  4964,  4974,  4984,   502,  4994,  5043,  5053,  2345,  2345,
    2345,  2345,  2345,  2345,  2345,  2345,  2345,  2345,  2345,  2345,
    2345,  2345,  1942,  1022,  1164,  5064,  5075,  5124,  5135,  5146,
    1690,  5195,  5206,  5217,  5266,   507,  5277,  5288,  5337,  2464,
    2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,
    2464,  2464,  2464,   784,    83,  3418,   529,  5352,   489,  1942,
    1028,   527,  5367,   227,   544,  1785,  2160,  7427,  7473,  7483,
    7493,  6943,  6956,  6969,  7018,  7031,    59,  3456,   533,  7038,
     560,  7087,   550,  5416,   679,  1942,  1374,   557,  5431,   214,
     110,  2569,  7567,  7500,  7546,  7553,  7560,  7095,  7103,  7111,
    7121,  7170,   163,   566,  4035,   719,  1942,  1380,   572,  4050,
     142,   158,   649,   680,  1078,  7356,  7402,  7409,  5441,  5490,
    5500,  5510,  5520,   180,   589,  4065,   763,  1942,  1416,   599,
    4114,   236,   408,   943,  1268,  1350,  1624,  2519,  7417,  5569,
    5580,  5591,  5640,  5651,   293,  3486,  3524,  5666,  5715,   608,
    7183,   770,  7196,   651,  7203,  7252,  5730,  5779,   612,  7260,
     779,  7268,  4129,  4144,   624,  5789,   812,  5799,  4193,  4208,
     625,  5848,   813,  5859,   852,  7281,  7330,  7338,  7346,  5869,
    5879,  5928,  5939
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
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
    -256,  -256,   693,   140,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,   595,     3,  -162,  -135,   -40,  -256,  -256,  -256,   747,
    2308,  2189,  2001,  1809,  1502,  1228,   954,   -19,   366,  -255,
       6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    41,   142,     9,   146,   144,   147,   145,
      64,    65,    42,    19,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    75,   197,   111,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    56,   187,    83,    13,   263,    10,   -88,    16,   155,
     398,   157,    10,   135,    56,   -50,    87,   -27,   217,   -27,
     -62,   -62,   -62,   -62,    56,   -62,   -62,   296,    66,    67,
     130,   -57,   -57,   -57,   -57,    72,   -57,   -57,   -52,   -52,
     319,   320,   -88,   420,   -50,   349,   424,   -89,   -50,   187,
     238,   217,   217,   219,   220,   221,   222,   223,   224,   -62,
     104,   -62,   -62,   -62,   -62,   -62,   358,   359,   360,   -90,
     -57,   281,   -57,   -57,   -57,   356,   357,   445,   131,   -52,
     281,   225,   226,   -50,    23,   -50,     2,     3,     4,     5,
      86,   379,    24,    25,    26,    27,    28,    29,    30,   394,
      31,    32,    33,   -50,   282,   227,   109,   -48,   466,   228,
     229,    66,   259,   348,   230,    83,   -49,    83,   238,    70,
      34,    35,   217,   -48,   105,    56,   106,    56,   395,   -48,
     -48,   -53,   -53,   319,   320,   259,    56,    36,    56,   -50,
       8,   167,   150,   151,    37,   491,     8,   -91,    38,    39,
     -50,   318,   -48,    40,   -48,   274,   274,   217,   274,   274,
     274,   417,   165,   -51,   349,   240,   241,   242,   243,   244,
     245,   500,   -53,   -52,   -52,   350,   351,   217,   317,   -53,
     -53,   350,   351,    86,   317,   310,   310,   217,   310,   310,
     310,   -50,   506,   246,   247,   168,   169,   170,   171,   172,
     173,   348,   -51,   -25,   -51,   -25,   341,   341,   217,   341,
     341,   341,   -52,   512,   -52,   161,   -49,   248,   -53,   -48,
     -53,   249,   250,   174,   175,   -49,   251,   372,   372,   217,
     372,   372,   372,    11,    17,   -51,   318,    12,    71,   189,
     -49,    81,   -49,    60,    56,   187,   238,   176,   -51,   282,
      84,   177,   178,   217,   -50,   380,   179,   -51,   380,   485,
     153,   154,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   -51,    56,   187,   238,
      85,   187,   238,   100,   -51,   -54,   -54,   -54,   -54,   217,
     352,   353,   -50,   -50,    -9,   -51,   -51,   101,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   187,   238,   379,   102,   -54,   -54,   -54,   -54,
     217,    90,    91,   -86,   -54,   -86,   -54,   354,   355,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   187,   238,   -52,   -52,   381,   382,   -54,
     103,   217,   -49,   -49,   107,    83,   -51,    87,    92,    93,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   114,    56,    56,    83,   -14,   -14,
     187,   238,   -47,   -52,   -52,    57,    57,   188,   115,   -51,
     219,   220,   221,   222,   223,   224,   -15,   -15,    56,    57,
      -8,    20,    21,   218,   -10,   132,   187,   238,   137,    57,
     138,   -65,   -65,   -65,   -65,   136,   -65,   -65,   225,   226,
     -57,   -57,   -57,   -57,   139,   -57,   -57,   187,   238,   -53,
     -53,   381,   382,   134,   188,   239,   218,   218,     2,     3,
       4,     5,   227,   397,   140,    83,   228,   229,   187,   238,
     -65,   230,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -13,   -57,   -57,   -57,   325,   326,    56,   -53,   -53,   -42,
     141,   -42,   -42,   -42,   -42,   148,   156,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   159,   -42,   -42,   -42,   -52,   -52,
     283,   284,   261,   -54,   -54,   -54,   -54,   260,   383,   384,
     -26,   167,   -26,   239,   158,   -42,   -42,   218,   160,   -28,
      57,   -28,    57,   -79,   -79,   -79,   -79,   -11,   -79,   -79,
     260,    57,   -42,    57,   -52,   166,   -42,   -42,   -12,   -42,
     -29,   -54,   -54,   -42,   -42,   385,   386,   -87,   -42,   -87,
     275,   275,   218,   275,   275,   275,   402,   -79,   331,   137,
     421,   488,   -79,   332,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   218,   428,   449,   -53,   -53,   283,   284,   470,
     311,   311,   218,   311,   311,   311,    24,    25,    26,    27,
      28,    29,   -57,   -57,   -57,   -57,   487,   -57,   -57,   492,
     494,   342,   342,   218,   342,   342,   342,   -62,   -62,   -62,
     -62,   -53,   -62,   -62,    34,    35,     1,   496,     2,     3,
       4,     5,   373,   373,   218,   373,   373,   373,   -57,   501,
     137,   -46,   495,   502,   -57,   -57,   289,   290,    37,    57,
     188,   239,    38,    39,   507,   -62,   -62,    40,   218,   -62,
     -62,   -62,   -62,   389,   390,   391,   508,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   513,    57,   188,   239,   515,   188,   239,   -31,   517,
     -55,   -55,   -55,   -55,   218,   352,   353,   -52,   -52,    88,
      89,   519,   521,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   188,   239,    15,
     133,   -56,   -56,   -56,   -56,   218,   352,   353,     0,   -55,
     -52,   -55,   354,   355,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   188,   239,
       0,     0,   -57,   -57,   -57,   -57,   218,   -57,   -57,   137,
     -56,   497,   -56,   354,   355,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,     0,
      57,    57,    -8,    20,    21,   188,   239,    59,    61,    22,
     -57,   -57,     0,     0,   -57,   -57,   387,   388,     0,   137,
      73,   503,     0,    57,    77,   -29,     0,   -29,   -29,   -29,
     -29,   188,   239,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -55,   -55,   -55,   -55,     0,    90,
      91,     0,   188,   239,     0,   108,   110,   112,   113,     0,
       0,   -29,   -29,   137,     0,   509,   -53,   -53,    88,    89,
     137,     0,   516,   188,   239,     0,     0,   -55,   -29,   137,
       0,   518,   -29,   -29,     0,   -29,    92,    93,     0,   -29,
     -29,    57,     0,   -31,   -29,   -31,   -31,   -31,   -31,   -53,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   137,   137,   520,   522,    14,     1,   143,     2,
       3,     4,     5,     0,   149,     0,     0,     0,   152,   -31,
     -31,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,    -2,
      -2,   162,    -2,    -2,    -2,    -2,   -31,     0,     0,     0,
     -31,   -31,     0,   -31,     0,     0,     0,   -31,   -31,     0,
       0,     0,   -31,   277,   -80,   -80,   219,   220,   221,   222,
     223,   224,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   299,   219,   220,   221,   222,   223,   224,
       0,     0,     0,   313,   225,   226,     0,   219,   220,   221,
     222,   223,   224,     0,   -55,   -55,   -55,   -55,     0,   383,
     384,     0,   225,   226,   344,   186,     0,     0,   227,   419,
       0,     0,   228,   229,     0,   225,   226,   230,    74,    76,
       0,   216,    78,    79,    80,   375,   227,   423,     0,     0,
     228,   229,   -55,   -55,     0,   230,   385,   386,     0,   227,
     444,   396,   110,   228,   229,     0,     0,     0,   230,   401,
       0,     0,   186,   237,   216,   216,     0,     0,     0,     0,
       0,   219,   220,   221,   222,   223,   224,   219,   220,   221,
     222,   223,   224,     0,   418,   110,     0,   422,   110,     0,
     126,   127,   128,     0,     0,   427,     0,     0,     0,   225,
     226,     0,     0,     0,     0,   225,   226,     0,     0,     0,
     -57,   -57,   -57,   -57,     0,   -57,   -57,     0,   443,   110,
       0,     0,     0,   227,   465,   258,   448,   228,   229,   227,
     490,   237,   230,   228,   229,   216,     0,     0,   230,   -60,
     -60,   -60,   -60,   -57,   -60,   -60,     0,     0,   258,   464,
     110,     0,   -57,   -57,    94,    95,     0,   469,    -4,    -4,
       0,    -4,    -4,    -4,    -4,     0,     0,     0,   273,   276,
     216,   278,   279,   280,     0,     0,     0,     0,   -60,     0,
     -60,   -60,   -60,   356,   357,     0,   489,   110,    -6,    -6,
     216,    -6,    -6,    -6,    -6,     0,     0,     0,   309,   312,
     216,   314,   315,   316,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,   498,   110,     0,     0,     0,     0,     0,   340,
     343,   216,   345,   346,   347,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,   504,   110,     0,     0,   -81,   -81,     0,
     371,   374,   216,   376,   377,   378,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   510,   110,     0,     0,   186,   237,
     467,     0,     0,   -79,   -79,   468,   216,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   413,   414,   415,   186,   185,
       0,   186,   237,     0,   186,   237,    62,     0,    63,     3,
       4,     5,   216,    -7,    -7,   215,    -7,    -7,    -7,    -7,
       0,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   439,   440,   441,   216,   186,   237,     0,     0,   -56,
     -56,   -56,   -56,   216,   383,   384,   185,   236,   215,   215,
       0,     0,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   460,   461,   462,   237,   186,   237,     0,     0,
       0,     0,   124,   125,   216,     0,     0,   -56,   -56,     0,
       0,   385,   386,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   481,   482,   483,   258,     0,     0,     0,
       0,     0,     0,   186,   237,   -54,   -54,   -54,   -54,   257,
     321,   322,     0,     0,     0,   236,     0,     0,     0,   215,
       0,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,   186,
     237,     0,   257,   219,   220,   221,   222,   223,   224,   219,
     220,   221,   222,   223,   224,     0,   -54,   323,   324,     0,
     186,   237,    -3,    -3,   215,    -3,    -3,    -3,    -3,   -60,
     -60,   225,   226,   -60,   -60,   387,   388,   225,   226,     0,
       0,   186,   237,     0,   215,   219,   220,   221,   222,   223,
     224,     0,     0,     0,   215,   227,   499,     0,     0,   228,
     229,   227,   505,     0,   230,   228,   229,     0,     0,     0,
     230,     0,     0,   225,   226,   215,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,     0,   -80,   -80,    -5,    -5,     0,
      -5,    -5,    -5,    -5,     0,     0,   215,   227,   511,     0,
       0,   228,   229,     0,   -29,   -29,   230,   -29,   -29,   -29,
     -29,     0,   185,   236,   -80,     0,     0,     0,     0,   -80,
     215,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   185,
     185,   185,   185,   185,   185,   185,   185,   411,   412,     0,
       0,     0,   185,   184,     0,   185,   236,     0,   185,   236,
       0,     0,   -56,   -56,   -56,   -56,   215,    90,    91,   214,
       0,     0,     0,     0,     0,   215,   215,   215,   215,   215,
     215,   215,   215,   437,   438,     0,     0,     0,   215,   185,
     236,     0,     0,     0,     0,   -56,     0,   215,     0,     0,
     184,   235,   214,   214,    92,    93,   236,   236,   236,   236,
     236,   236,   236,   236,   458,   459,     0,     0,     0,   236,
     185,   236,   120,   121,   122,   123,     0,     0,   215,   -54,
     -54,   -54,   -54,     0,   285,   286,     0,   257,   257,   257,
     257,   257,   257,   257,   257,   479,   480,     0,   -31,   -31,
     257,   -31,   -31,   -31,   -31,     0,     0,   185,   236,     0,
       0,     0,     0,   256,     0,   -54,     0,     0,     0,   235,
       0,   287,   288,   214,     0,   -61,   -61,   -61,   -61,     0,
     -61,   -61,     0,   185,   236,     0,   256,    24,    25,    26,
      27,    28,    29,   190,   191,   192,   193,   194,   195,     0,
       0,     0,     0,     0,   185,   236,   -24,   -24,   214,   -24,
     -24,   -24,   -24,   -61,   -61,    34,    35,   -61,   -61,   387,
     388,    34,    35,     0,     0,   185,   236,     0,   214,   198,
     199,   200,   201,   202,   203,     0,     0,     0,   214,    37,
       0,     0,     0,    38,    39,   196,     0,     0,    40,    38,
      39,     0,     0,     0,    40,     0,     0,   204,   205,   214,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
     214,   206,     0,     0,     0,   207,   208,     0,   -21,   -21,
     209,   -21,   -21,   -21,   -21,     0,   184,   235,   -81,     0,
       0,     0,     0,   -81,   214,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   184,   184,   184,   184,   407,   408,   409,
     410,     0,     0,     0,     0,     0,   184,     0,     0,   184,
     235,     0,   184,   235,     0,     0,   -55,   -55,   -55,   -55,
     214,   285,   286,     0,     0,     0,     0,     0,     0,   214,
     214,   214,   214,   433,   434,   435,   436,     0,     0,     0,
     183,     0,   214,   184,   235,     0,     0,     0,     0,     0,
       0,   214,   -55,     0,     0,     0,   213,     0,   287,   288,
     235,   235,   235,   235,   454,   455,   456,   457,     0,     0,
       0,     0,     0,   235,   184,   235,     0,     0,     0,     0,
     -19,   -19,   214,   -19,   -19,   -19,   -19,   183,   234,   213,
     213,   256,   256,   256,   256,   475,   476,   477,   478,     0,
     -80,   -80,   -80,   -80,   256,   -80,   -80,   118,   119,     0,
       0,   184,   235,     0,     0,     0,     0,   -30,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,     0,   184,   235,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     255,     0,     0,   -30,   -30,     0,   234,     0,   184,   235,
     213,   168,   169,   170,   171,   172,   173,     0,     0,     0,
     -30,     0,     0,   255,   -30,    18,     0,   -30,     0,   184,
     235,   -30,   -30,     0,     0,     0,   -30,     0,     0,   174,
     175,     0,     0,     0,   -34,   213,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   176,     0,   213,     0,   177,   178,     0,
       0,     0,   179,   -17,   -17,   213,   -17,   -17,   -17,   -17,
     -34,   -34,   182,   240,   241,   242,   243,   244,   245,     0,
       0,     0,     0,     0,     0,     0,   213,   -34,   212,     0,
       0,   -34,   -34,     0,   -34,     0,     0,     0,   -34,   -34,
       0,   246,   247,   -34,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     233,   212,   212,   183,   234,   248,     0,     0,     0,   249,
     250,   213,     0,     0,   251,     0,     0,     0,   117,     0,
     183,   183,   405,   406,     0,   219,   220,   221,   222,   223,
     224,     0,     0,   183,     0,     0,   183,   234,     0,   183,
     234,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,   225,   226,     0,   213,   213,   431,   432,
       0,     0,   254,     0,     0,     0,     0,     0,   233,   213,
     183,   234,   212,     0,     0,     0,     0,   227,   213,     0,
       0,   228,   229,     0,     0,   254,   230,   234,   234,   452,
     453,     0,     0,     0,   266,   267,   268,   269,   270,   271,
     234,   183,   234,     0,     0,     0,     0,   212,     0,   213,
       0,   -56,   -56,   -56,   -56,     0,   285,   286,   255,   255,
     473,   474,   174,   175,     0,     0,     0,   212,     0,     0,
       0,   255,     0,     0,     0,     0,     0,   212,   183,   234,
     181,     0,     0,     0,     0,     0,   272,   -56,     0,     0,
     177,   178,     0,   287,   288,   179,   211,     0,   212,     0,
       0,     0,     0,     0,   183,   234,   -60,   -60,   -60,   -60,
       0,   -60,   -60,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,   183,   234,   181,   232,   211,
     211,     0,     0,     0,     0,   182,   233,     0,     0,   -60,
       0,     0,     0,   212,     0,   116,   183,   234,   -60,   -60,
      94,    95,   182,   404,     0,   302,   303,   304,   305,   306,
     307,     0,     0,     0,     0,   182,     0,     0,   182,   233,
       0,   182,   233,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,   204,   205,     0,     0,     0,   212,   430,
     253,     0,     0,     0,     0,     0,   232,     0,     0,   180,
     211,   212,   182,   233,     0,     0,     0,   308,     0,     0,
     212,   207,   208,   253,     0,   210,   209,     0,     0,   233,
     451,     0,     0,     0,   333,   334,   335,   336,   337,   338,
       0,     0,   233,   182,   233,   211,     0,     0,     0,     0,
       0,   212,     0,     0,     0,     0,   180,   231,   210,   210,
     254,   472,   225,   226,     0,   211,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   254,     0,   211,     0,     0,     0,     0,
     182,   233,     0,     0,     0,     0,   339,   129,     0,     0,
     228,   229,     0,     0,     0,   230,   211,     0,     0,     0,
     -80,     0,     0,     0,   -80,   -80,   182,   233,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,   211,     0,   252,
       0,     0,     0,     0,     0,   231,     0,   182,   233,   210,
       0,     0,     0,   181,   232,     0,     0,     0,     0,     0,
       0,   211,   252,     0,     0,     0,     0,     0,   182,   233,
     403,     0,     0,   364,   365,   366,   367,   368,   369,     0,
       0,     0,     0,   181,   210,     0,   181,   232,     0,   181,
     232,     0,     0,     0,     0,     0,     0,   211,     0,     0,
       0,   246,   247,     0,   210,     0,   429,     0,     0,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,   211,
     181,   232,     0,     0,     0,   370,     0,     0,   211,   249,
     250,     0,     0,     0,   251,   210,     0,   450,     0,     0,
     -58,   -58,   -58,   -58,     0,   -58,   -58,     0,     0,     0,
     232,   181,   232,     0,     0,     0,   210,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,   471,     0,
       0,     0,   180,   231,     0,     0,     0,     0,   -58,   -58,
     210,   253,   -58,   -58,   387,   388,     0,     0,   181,   232,
     -55,   -55,   -55,   -55,     0,   321,   322,     0,     0,     0,
       0,     0,   416,     0,     0,   180,   231,     0,   180,   231,
       0,     0,     0,     0,   181,   232,   210,     0,     0,     0,
     -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,
       0,   -55,   323,   324,     0,   181,   232,     0,   442,   180,
     231,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,     0,   -79,   362,   181,   232,   -79,   -79,
     363,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   463,
     180,   231,     0,     0,     0,     0,     0,     0,   210,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,     0,
     484,     0,     0,     0,     0,     0,     0,   180,   231,    23,
       0,     2,     3,     4,     5,   -39,   -39,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,     0,     0,
       0,     0,   -39,   180,   231,     0,   -39,   -39,     0,   -39,
       0,     0,     0,   -39,   -39,    34,    35,     0,   -39,     0,
       0,     0,     0,     0,   180,   231,     0,     0,   -82,   -82,
     -82,   -82,    36,   -82,   -82,     0,   167,    82,     0,    37,
       0,     0,     0,    38,    39,   180,   231,   -32,    40,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -82,   -32,   -32,   -32,     0,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -37,     0,   -37,
     -37,   -37,   -37,   -32,   -32,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,     0,     0,     0,
     -32,     0,     0,     0,   -32,   -32,     0,   -32,     0,     0,
       0,   -32,   -32,   -37,   -37,   -38,   -32,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -37,   -38,   -38,   -38,   -37,   -37,     0,   -37,     0,     0,
       0,   -37,   -37,     0,     0,   -41,   -37,   -41,   -41,   -41,
     -41,   -38,   -38,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,     0,     0,     0,     0,   -38,     0,
       0,     0,   -38,   -38,     0,   -38,     0,     0,     0,   -38,
     -38,   -41,   -41,   -35,   -38,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -41,   -35,
     -35,   -35,   -41,   -41,     0,   -41,     0,     0,     0,   -41,
     -41,     0,     0,   -33,   -41,   -33,   -33,   -33,   -33,   -35,
     -35,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,     0,     0,     0,   -35,     0,     0,     0,
     -35,   -35,     0,   -35,     0,     0,     0,   -35,   -35,   -33,
     -33,   -40,   -35,   -40,   -40,   -40,   -40,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -33,   -40,   -40,   -40,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,   -33,     0,
       0,   -36,   -33,   -36,   -36,   -36,   -36,   -40,   -40,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
       0,     0,     0,     0,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,     0,     0,   -40,   -40,   -36,   -36,   -18,
     -40,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -36,   -18,   -18,   -18,   -36,   -36,
       0,   -36,     0,     0,     0,   -36,   -36,     0,     0,   -16,
     -36,   -16,   -16,   -16,   -16,   -18,   -18,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,     0,     0,
       0,     0,   -18,     0,     0,     0,   -18,   -22,     0,   -18,
       0,     0,     0,   -18,   -18,   -16,   -16,   -44,   -18,   -44,
     -44,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -16,   -44,   -44,   -44,   -16,   -20,     0,   -16,
       0,     0,     0,   -16,   -16,     0,     0,    23,   -16,     2,
       3,     4,     5,   -44,   -44,    24,    25,    26,    27,    28,
      29,    30,     0,    31,    32,    33,     0,     0,     0,     0,
     -44,     0,     0,     0,   -44,   -44,     0,   -44,     0,     0,
       0,   -44,   -44,    34,    35,    23,   -44,     2,     3,     4,
       5,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      36,    31,    32,    33,   167,   163,     0,    37,     0,     0,
       0,    38,    39,     0,     0,   -43,    40,   -43,   -43,   -43,
     -43,    34,    35,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,     0,     0,     0,     0,    36,     0,
       0,     0,   167,   164,     0,    37,     0,     0,     0,    38,
      39,   -43,   -43,   -45,    40,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -43,   -45,
     -45,   -45,   -43,   -43,     0,   -43,     0,     0,     0,   -43,
     -43,     0,     0,   -30,   -43,   -30,   -30,   -30,   -30,   -45,
     -45,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,     0,     0,     0,     0,   -45,     0,     0,     0,
     -45,   -45,     0,   -45,     0,     0,     0,   -45,   -45,   -30,
     -30,   -30,   -45,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   262,     0,   -30,     0,     0,     0,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,     0,     0,     0,   -30,   295,
       0,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,   -29,
     -30,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -30,   -29,   -29,   -29,   -30,   393,
       0,   -30,     0,     0,     0,   -30,   -30,     0,     0,    23,
     -30,     2,     3,     4,     5,   -29,   -29,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,     0,     0,
       0,     0,   -29,     0,     0,     0,   -29,   -29,     0,   -29,
       0,     0,     0,   -29,   -29,    34,    35,    23,   -29,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    36,    31,    32,    33,   167,   486,     0,    37,
       0,     0,     0,    38,    39,     0,     0,    23,    40,     2,
       3,     4,     5,    34,    35,    24,    25,    26,    27,    28,
      29,    30,     0,    31,    32,    33,     0,     0,     0,     0,
      36,     0,     0,     0,   167,   493,     0,    37,     0,     0,
       0,    38,    39,    34,    35,   -31,    40,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
      36,   -31,   -31,   -31,   167,   514,     0,    37,     0,     0,
       0,    38,    39,     0,     0,     0,    40,     0,     0,     0,
       0,   -31,   -31,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,     0,
       0,     0,   -31,   -31,     0,   -31,     0,     0,     0,   -31,
     -31,     0,     0,     0,   -31,     0,   -79,   -79,    68,     0,
       0,     0,     0,    69,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   264,   -79,     0,
       0,     0,   265,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   300,     0,     0,     0,     0,   301,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   -83,   -83,   -83,
     -83,   446,   -83,   -83,     0,   -79,   447,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   297,     0,     0,
       0,     0,   298,   -61,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -83,   -61,   -61,    94,    95,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,
       0,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -84,   -75,   -75,     0,     0,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   361,     0,     0,     0,     0,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -75,     0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -81,   -81,   -81,   -81,     0,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -81,
     -83,   -83,     0,   -81,   -81,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -82,     0,     0,     0,   -82,   -82,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
       0,     0,     0,   -83,   -83,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -84,   -75,
     -75,     0,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   392,     0,     0,     0,   -69,   -69,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -75,     0,
       0,     0,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   -79,
       0,     0,     0,   400,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   425,     0,     0,     0,     0,   426,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,
       0,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -85,     0,     0,     0,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -77,     0,     0,     0,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -85,
     -78,   -78,     0,   -85,   -85,     0,   -58,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -76,   -58,   -58,    94,    95,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
       0,     0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -76,   -76,   -76,   -76,     0,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,     0,     0,     0,   -78,   -78,   -82,
     -82,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,     0,   -83,   -83,
       0,     0,     0,     0,     0,   -84,   -84,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -69,    99,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -77,   -77,     0,     0,     0,     0,     0,   -85,
     -85,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,     0,     0,   -76,   -76,
       0,     0,     0,     0,     0,   -78,   -78,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -80,     0,   -80,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,   -81,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,     0,   -82,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,   -83,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
       0,   -84,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -69,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
     -69,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -75,     0,   -75,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,
     -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -80,   -82,   -82,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -83,   -69,   -69,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   330,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,     0,   -65,   -65,     0,     0,     0,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -65,   -65,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,     0,     0,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,     0,
     -69,   -69,     0,     0,     0,   -75,   -75,   -75,   -75,     0,
     -75,   -75,     0,     0,     0,   -74,   -74,   -74,   -74,     0,
     -74,   -74,     0,     0,     0,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,     0,   -72,   -72,   -72,   -72,     0,   -72,
     -72,     0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -80,   -80,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -75,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,   -74,
     -74,     0,   -74,   -74,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,     0,   -70,   -70,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -70,   -70,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,     0,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,     0,   -77,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -85,     0,   -85,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,
       0,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,     0,
       0,   -77,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -63,     0,   -63,   -63,   -63,   -63,   -63,   358,   359,
     360,   -64,   -64,   -64,   -64,     0,   -64,   -64,     0,     0,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,
       0,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,     0,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   358,   359,   360,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -63,   -63,   -63,   -63,     0,   -63,   -63,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,     0,   -64,   -64,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
       0,     0,   -63,   -63,   -63,   -63,   389,   390,   391,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -64,   389,   390,   391,
     -66,   -66,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -76,     0,   -76,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,     0,   -78,     0,     0,     0,     0,   -59,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -76,   -59,   -59,    94,    95,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -77,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -85,   -85,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -62,   -62,   -62,
     -62,     0,   -62,   -62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,
     -62,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -62,
     -62,   -62,   -62,    96,    97,    98,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,   -65,
       0,     0,     0,     0,     0,     0,   -73,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -69,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -70,     0,     0,     0,     0,     0,     0,   -71,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -63,   -63,   -63,   -63,     0,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,     0,   -64,   -64,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,     0,   -63,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -63,   -63,   -63,   -63,    96,    97,
      98,   -64,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,
     -64,   -64,   -64,   -64,    96,    97,    98,     0,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -68,   -68,   -68,   -68,     0,
     -68,   -68,     0,     0,     0,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,     0,     0,     0,     0,     0,     0,   -68,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -62,   -62,   -62,   -62,     0,   -62,
     -62,     0,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     291,   292,   293,   -65,     0,     0,     0,   -80,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,   -81,     0,     0,     0,
       0,     0,     0,   -82,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,   -62,   -62,   -62,   -62,     0,   -62,
     -62,     0,     0,   -84,   -65,   -65,   -65,   -65,     0,   -65,
     -65,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -75,
     -80,   -80,   -80,   -80,     0,   -80,   -80,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -62,   -62,   -62,   -62,   -62,
     327,   328,   329,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -80,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,   -81,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,
     -84,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,     0,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,
     -84,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -73,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -69,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,     0,   -75,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -74,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,     0,   -72,   -72,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -71,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -75,   -75,   -75,   -75,     0,   -75,   -75,
       0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,     0,   -71,   -71,   -71,
     -71,     0,   -71,   -71,     0,   -72,   -72,   -72,   -72,     0,
     -72,   -72,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -63,   -63,   -63,   -63,     0,   -63,
     -63,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,     0,   -64,   -64,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,     0,
     -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     291,   292,   293,   -64,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   291,   292,   293,   -66,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,
       0,     0,   -77,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -63,   -63,   -63,   -63,
       0,   -63,   -63,     0,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,
       0,   -85,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -63,   -63,   -63,
     -63,   -63,   327,   328,   329,   -64,   -64,   -64,   -64,   -64,
     327,   328,   329,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -76,   -76,   -76,   -76,     0,   -76,
     -76,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -77,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -85,     0,     0,     0,   -76,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -78,   -76,   -76,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -76,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,   -78,   -78,   -78,
     -78,     0,   -78,   -78,     0,     0,     0,   -61,   -61,   -61,
     -61,     0,   -61,   -61,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -61,     0,   -61,   -61,
     -61,   356,   357,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,
     -59,   -59,     0,   -59,   -59,     0,     0,     0,   -60,   -60,
     -60,   -60,     0,   -60,   -60,     0,     0,     0,     0,     0,
       0,     0,   -58,     0,   -58,   -58,   -58,   356,   357,   -59,
       0,   -59,   -59,   -59,   356,   357,   -59,   -59,     0,     0,
     -59,   -59,   387,   388,   -60,     0,     0,     0,     0,     0,
     -60,   -60,   289,   290,   -61,   -61,   -61,   -61,     0,   -61,
     -61,     0,     0,     0,   -58,   -58,   -58,   -58,     0,   -58,
     -58,     0,     0,     0,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,
     -61,     0,     0,     0,     0,     0,   -61,   -61,   289,   290,
     -58,     0,     0,     0,     0,     0,   -58,   -58,   289,   290,
     -59,     0,     0,     0,     0,     0,   -59,   -59,   289,   290,
       0,     0,   -60,   -60,   -60,   325,   326,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -58,   -58,   -58,   -58,     0,   -58,
     -58,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -56,   -56,
     -56,   -56,     0,   321,   322,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   325,   326,     0,     0,   -58,   -58,   -58,   325,   326,
       0,     0,   -59,   -59,   -59,   325,   326,     0,     0,   -56,
     323,   324
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    43,     1,   167,     0,     9,    54,   144,
     265,   146,     6,    56,    33,    21,    22,    60,    37,    62,
      21,    22,    23,    24,    43,    26,    27,   189,    22,    54,
      10,    21,    22,    23,    24,    32,    26,    27,    21,    22,
      23,    24,     9,   298,    21,    22,   301,     9,    54,    68,
      69,    70,    71,     9,    10,    11,    12,    13,    14,    60,
      62,    62,    63,    64,    65,    66,    67,    68,    69,     9,
      60,    21,    62,    63,    64,    65,    66,   332,    58,    62,
      21,    37,    38,    60,     1,    62,     3,     4,     5,     6,
      21,    21,     9,    10,    11,    12,    13,    14,    15,   261,
      17,    18,    19,    21,    22,    61,    62,    57,   363,    65,
      66,   105,   131,    21,    70,   155,    57,   157,   137,    61,
      37,    38,   141,    54,    60,   144,    62,   146,   263,    59,
      60,    21,    22,    23,    24,   154,   155,    54,   157,    57,
       0,    58,   139,   140,    61,   400,     6,     9,    65,    66,
      21,    22,    60,    70,    62,   174,   175,   176,   177,   178,
     179,   296,   159,    21,    22,     9,    10,    11,    12,    13,
      14,   426,    62,    21,    22,    23,    24,   196,    21,    21,
      22,    23,    24,    21,    21,   204,   205,   206,   207,   208,
     209,    62,   447,    37,    38,     9,    10,    11,    12,    13,
      14,    21,    60,    60,    62,    62,   225,   226,   227,   228,
     229,   230,    60,   468,    62,    59,    54,    61,    60,    62,
      62,    65,    66,    37,    38,    62,    70,   246,   247,   248,
     249,   250,   251,    54,     9,    21,    22,    58,    61,    58,
      60,    54,    62,    57,   263,   264,   265,    61,    21,    22,
      54,    65,    66,   272,    21,    22,    70,    21,    22,   394,
      59,    60,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,    62,   296,   297,   298,
      54,   300,   301,     9,    57,    21,    22,    23,    24,   308,
      26,    27,    59,    60,    54,    59,    60,    55,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    21,    57,    21,    22,    23,    24,
     339,    26,    27,    60,    60,    62,    62,    63,    64,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    21,    22,    23,    24,    54,
      62,   370,    59,    60,     9,   395,    21,    22,    63,    64,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,    17,   394,   395,   417,    59,    60,
     399,   400,    54,    59,    60,    19,    20,    21,    62,    54,
       9,    10,    11,    12,    13,    14,    59,    60,   417,    33,
      54,    55,    56,    37,    54,    58,   425,   426,    60,    43,
      62,    21,    22,    23,    24,    57,    26,    27,    37,    38,
      21,    22,    23,    24,    62,    26,    27,   446,   447,    21,
      22,    23,    24,    58,    68,    69,    70,    71,     3,     4,
       5,     6,    61,    62,    62,   485,    65,    66,   467,   468,
      60,    70,    62,    63,    64,    65,    66,    67,    68,    69,
      54,    62,    63,    64,    65,    66,   485,    59,    60,     1,
      61,     3,     4,     5,     6,    57,    59,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    21,    22,
      23,    24,    58,    21,    22,    23,    24,   131,    26,    27,
      60,    58,    62,   137,    59,    37,    38,   141,    62,    60,
     144,    62,   146,    21,    22,    23,    24,    54,    26,    27,
     154,   155,    54,   157,    57,    54,    58,    59,    54,    61,
      17,    59,    60,    65,    66,    63,    64,    60,    70,    62,
     174,   175,   176,   177,   178,   179,    62,    55,    56,    60,
      62,    62,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,   196,    62,    62,    21,    22,    23,    24,    62,
     204,   205,   206,   207,   208,   209,     9,    10,    11,    12,
      13,    14,    21,    22,    23,    24,    57,    26,    27,    62,
      57,   225,   226,   227,   228,   229,   230,    21,    22,    23,
      24,    57,    26,    27,    37,    38,     1,    57,     3,     4,
       5,     6,   246,   247,   248,   249,   250,   251,    57,    62,
      60,    54,    62,    57,    63,    64,    65,    66,    61,   263,
     264,   265,    65,    66,    62,    59,    60,    70,   272,    63,
      64,    65,    66,    67,    68,    69,    57,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,    62,   296,   297,   298,    57,   300,   301,    17,    57,
      21,    22,    23,    24,   308,    26,    27,    21,    22,    23,
      24,    57,    57,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     6,
     105,    21,    22,    23,    24,   339,    26,    27,    -1,    60,
      54,    62,    63,    64,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
      -1,    -1,    21,    22,    23,    24,   370,    26,    27,    60,
      60,    62,    62,    63,    64,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,    -1,
     394,   395,    54,    55,    56,   399,   400,    20,    21,    61,
      59,    60,    -1,    -1,    63,    64,    65,    66,    -1,    60,
      33,    62,    -1,   417,    37,     1,    -1,     3,     4,     5,
       6,   425,   426,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    21,    22,    23,    24,    -1,    26,
      27,    -1,   446,   447,    -1,    68,    69,    70,    71,    -1,
      -1,    37,    38,    60,    -1,    62,    21,    22,    23,    24,
      60,    -1,    62,   467,   468,    -1,    -1,    54,    54,    60,
      -1,    62,    58,    59,    -1,    61,    63,    64,    -1,    65,
      66,   485,    -1,     1,    70,     3,     4,     5,     6,    54,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    60,    60,    62,    62,     0,     1,   131,     3,
       4,     5,     6,    -1,   137,    -1,    -1,    -1,   141,    37,
      38,    21,    22,    23,    24,    -1,    26,    27,    -1,     0,
       1,   154,     3,     4,     5,     6,    54,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    70,   176,    54,    55,     9,    10,    11,    12,
      13,    14,    -1,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,   196,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,   206,    37,    38,    -1,     9,    10,    11,
      12,    13,    14,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    37,    38,   227,    21,    -1,    -1,    61,    62,
      -1,    -1,    65,    66,    -1,    37,    38,    70,    34,    35,
      -1,    37,    38,    39,    40,   248,    61,    62,    -1,    -1,
      65,    66,    59,    60,    -1,    70,    63,    64,    -1,    61,
      62,   264,   265,    65,    66,    -1,    -1,    -1,    70,   272,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,     9,    10,    11,
      12,    13,    14,    -1,   297,   298,    -1,   300,   301,    -1,
      96,    97,    98,    -1,    -1,   308,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,   331,   332,
      -1,    -1,    -1,    61,    62,   131,   339,    65,    66,    61,
      62,   137,    70,    65,    66,   141,    -1,    -1,    70,    21,
      22,    23,    24,    54,    26,    27,    -1,    -1,   154,   362,
     363,    -1,    63,    64,    65,    66,    -1,   370,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   174,   175,
     176,   177,   178,   179,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,    65,    66,    -1,   399,   400,     0,     1,
     196,     3,     4,     5,     6,    -1,    -1,    -1,   204,   205,
     206,   207,   208,   209,    21,    22,    23,    24,    -1,    26,
      27,    -1,   425,   426,    -1,    -1,    -1,    -1,    -1,   225,
     226,   227,   228,   229,   230,    21,    22,    23,    24,    -1,
      26,    27,    -1,   446,   447,    -1,    -1,    54,    55,    -1,
     246,   247,   248,   249,   250,   251,    63,    64,    65,    66,
      67,    68,    69,    -1,   467,   468,    -1,    -1,   264,   265,
      56,    -1,    -1,    59,    60,    61,   272,    63,    64,    65,
      66,    67,    68,    69,    -1,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,    21,
      -1,   297,   298,    -1,   300,   301,     1,    -1,     3,     4,
       5,     6,   308,     0,     1,    37,     3,     4,     5,     6,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    -1,    -1,    21,
      22,    23,    24,   339,    26,    27,    68,    69,    70,    71,
      -1,    -1,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    -1,    -1,
      -1,    -1,    94,    95,   370,    -1,    -1,    59,    60,    -1,
      -1,    63,    64,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    -1,    -1,    -1,
      -1,    -1,    -1,   399,   400,    21,    22,    23,    24,   131,
      26,    27,    -1,    -1,    -1,   137,    -1,    -1,    -1,   141,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,   425,
     426,    -1,   154,     9,    10,    11,    12,    13,    14,     9,
      10,    11,    12,    13,    14,    -1,    62,    63,    64,    -1,
     446,   447,     0,     1,   176,     3,     4,     5,     6,    59,
      60,    37,    38,    63,    64,    65,    66,    37,    38,    -1,
      -1,   467,   468,    -1,   196,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,   206,    61,    62,    -1,    -1,    65,
      66,    61,    62,    -1,    70,    65,    66,    -1,    -1,    -1,
      70,    -1,    -1,    37,    38,   227,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,     0,     1,    -1,
       3,     4,     5,     6,    -1,    -1,   248,    61,    62,    -1,
      -1,    65,    66,    -1,     0,     1,    70,     3,     4,     5,
       6,    -1,   264,   265,    55,    -1,    -1,    -1,    -1,    60,
     272,    62,    63,    64,    65,    66,    67,    68,    69,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,    -1,
      -1,    -1,   294,    21,    -1,   297,   298,    -1,   300,   301,
      -1,    -1,    21,    22,    23,    24,   308,    26,    27,    37,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,    -1,    -1,    -1,   330,   331,
     332,    -1,    -1,    -1,    -1,    54,    -1,   339,    -1,    -1,
      68,    69,    70,    71,    63,    64,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,    -1,    -1,    -1,   361,
     362,   363,    90,    91,    92,    93,    -1,    -1,   370,    21,
      22,    23,    24,    -1,    26,    27,    -1,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,    -1,     0,     1,
     392,     3,     4,     5,     6,    -1,    -1,   399,   400,    -1,
      -1,    -1,    -1,   131,    -1,    57,    -1,    -1,    -1,   137,
      -1,    63,    64,   141,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,   425,   426,    -1,   154,     9,    10,    11,
      12,    13,    14,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,   446,   447,     0,     1,   176,     3,
       4,     5,     6,    59,    60,    37,    38,    63,    64,    65,
      66,    37,    38,    -1,    -1,   467,   468,    -1,   196,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,   206,    61,
      -1,    -1,    -1,    65,    66,    61,    -1,    -1,    70,    65,
      66,    -1,    -1,    -1,    70,    -1,    -1,    37,    38,   227,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,     0,     1,    -1,     3,     4,     5,     6,    -1,    -1,
     248,    61,    -1,    -1,    -1,    65,    66,    -1,     0,     1,
      70,     3,     4,     5,     6,    -1,   264,   265,    55,    -1,
      -1,    -1,    -1,    60,   272,    62,    63,    64,    65,    66,
      67,    68,    69,   281,   282,   283,   284,   285,   286,   287,
     288,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,   297,
     298,    -1,   300,   301,    -1,    -1,    21,    22,    23,    24,
     308,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,    -1,    -1,    -1,
      21,    -1,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
      -1,   339,    57,    -1,    -1,    -1,    37,    -1,    63,    64,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,   361,   362,   363,    -1,    -1,    -1,    -1,
       0,     1,   370,     3,     4,     5,     6,    68,    69,    70,
      71,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
      21,    22,    23,    24,   392,    26,    27,    88,    89,    -1,
      -1,   399,   400,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    -1,   425,   426,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
     131,    -1,    -1,    37,    38,    -1,   137,    -1,   446,   447,
     141,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      54,    -1,    -1,   154,    58,    59,    -1,    61,    -1,   467,
     468,    65,    66,    -1,    -1,    -1,    70,    -1,    -1,    37,
      38,    -1,    -1,    -1,     1,   176,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    61,    -1,   196,    -1,    65,    66,    -1,
      -1,    -1,    70,     0,     1,   206,     3,     4,     5,     6,
      37,    38,    21,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    54,    37,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,
      -1,    37,    38,    70,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,   264,   265,    61,    -1,    -1,    -1,    65,
      66,   272,    -1,    -1,    70,    -1,    -1,    -1,    87,    -1,
     281,   282,   283,   284,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,   294,    -1,    -1,   297,   298,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,   317,   318,   319,   320,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,   137,   330,
     331,   332,   141,    -1,    -1,    -1,    -1,    61,   339,    -1,
      -1,    65,    66,    -1,    -1,   154,    70,   348,   349,   350,
     351,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
     361,   362,   363,    -1,    -1,    -1,    -1,   176,    -1,   370,
      -1,    21,    22,    23,    24,    -1,    26,    27,   379,   380,
     381,   382,    37,    38,    -1,    -1,    -1,   196,    -1,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    -1,   206,   399,   400,
      21,    -1,    -1,    -1,    -1,    -1,    61,    57,    -1,    -1,
      65,    66,    -1,    63,    64,    70,    37,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   425,   426,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   446,   447,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    54,
      -1,    -1,    -1,   272,    -1,    86,   467,   468,    63,    64,
      65,    66,   281,   282,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,   294,    -1,    -1,   297,   298,
      -1,   300,   301,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,   317,   318,
     131,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    21,
     141,   330,   331,   332,    -1,    -1,    -1,    61,    -1,    -1,
     339,    65,    66,   154,    -1,    37,    70,    -1,    -1,   348,
     349,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,   361,   362,   363,   176,    -1,    -1,    -1,    -1,
      -1,   370,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
     379,   380,    37,    38,    -1,   196,    21,    22,    23,    24,
      -1,    26,    27,   392,    -1,   206,    -1,    -1,    -1,    -1,
     399,   400,    -1,    -1,    -1,    -1,    61,    99,    -1,    -1,
      65,    66,    -1,    -1,    -1,    70,   227,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,   425,   426,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,   248,    -1,   131,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   446,   447,   141,
      -1,    -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    -1,
      -1,   272,   154,    -1,    -1,    -1,    -1,    -1,   467,   468,
     281,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,   294,   176,    -1,   297,   298,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    37,    38,    -1,   196,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   330,
     331,   332,    -1,    -1,    -1,    61,    -1,    -1,   339,    65,
      66,    -1,    -1,    -1,    70,   227,    -1,   348,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
     361,   362,   363,    -1,    -1,    -1,   248,    -1,    -1,   370,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,
      -1,    -1,   264,   265,    -1,    -1,    -1,    -1,    59,    60,
     272,   392,    63,    64,    65,    66,    -1,    -1,   399,   400,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,   297,   298,    -1,   300,   301,
      -1,    -1,    -1,    -1,   425,   426,   308,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,   446,   447,    -1,   330,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,   467,   468,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,   361,
     362,   363,    -1,    -1,    -1,    -1,    -1,    -1,   370,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
     392,    -1,    -1,    -1,    -1,    -1,    -1,   399,   400,     1,
      -1,     3,     4,     5,     6,    37,    38,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    54,   425,   426,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    37,    38,    -1,    70,    -1,
      -1,    -1,    -1,    -1,   446,   447,    -1,    -1,    21,    22,
      23,    24,    54,    26,    27,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,   467,   468,     1,    70,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    55,    17,    18,    19,    -1,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,     1,    -1,     3,
       4,     5,     6,    37,    38,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    37,    38,     1,    70,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      54,    17,    18,    19,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    -1,    -1,     1,    70,     3,     4,     5,
       6,    37,    38,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    37,    38,     1,    70,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    54,    17,
      18,    19,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    -1,    -1,     1,    70,     3,     4,     5,     6,    37,
      38,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    37,
      38,     1,    70,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    54,    17,    18,    19,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      -1,     1,    70,     3,     4,     5,     6,    37,    38,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    37,    38,     1,
      70,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    54,    17,    18,    19,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    -1,    -1,     1,
      70,     3,     4,     5,     6,    37,    38,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    37,    38,     1,    70,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    54,    17,    18,    19,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    -1,    -1,     1,    70,     3,
       4,     5,     6,    37,    38,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    37,    38,     1,    70,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      54,    17,    18,    19,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    -1,    -1,     1,    70,     3,     4,     5,
       6,    37,    38,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    37,    38,     1,    70,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    54,    17,
      18,    19,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    -1,    -1,     1,    70,     3,     4,     5,     6,    37,
      38,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    37,
      38,     1,    70,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    54,    17,    18,    19,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    -1,
      -1,     1,    70,     3,     4,     5,     6,    37,    38,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    37,    38,     1,
      70,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    54,    17,    18,    19,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    -1,    -1,     1,
      70,     3,     4,     5,     6,    37,    38,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    37,    38,     1,    70,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    54,    17,    18,    19,    58,    59,    -1,    61,
      -1,    -1,    -1,    65,    66,    -1,    -1,     1,    70,     3,
       4,     5,     6,    37,    38,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    37,    38,     1,    70,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      54,    17,    18,    19,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    37,    38,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    70,    -1,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    55,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      21,    22,    23,    24,    -1,    26,    27,    21,    22,    23,
      24,    56,    26,    27,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    54,    63,    64,    65,    66,    67,    68,
      69,    55,    63,    64,    65,    66,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      55,    26,    27,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    55,
      26,    27,    -1,    59,    60,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    55,    26,
      27,    -1,    59,    60,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      55,    26,    27,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    -1,    21,    22,    23,    24,    -1,    26,    27,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    55,
      26,    27,    -1,    59,    60,    -1,    54,    63,    64,    65,
      66,    67,    68,    69,    55,    63,    64,    65,    66,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    55,    -1,    -1,    -1,    59,    60,    54,
      55,    63,    64,    65,    66,    67,    68,    69,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    54,    55,    63,    64,    65,
      66,    67,    68,    69,    63,    64,    65,    66,    67,    68,
      69,    54,    55,    21,    22,    23,    24,    -1,    26,    27,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    54,    55,    -1,    -1,    -1,    -1,    -1,    54,
      55,    63,    64,    65,    66,    67,    68,    69,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    54,    55,    63,    64,    65,
      66,    67,    68,    69,    63,    64,    65,    66,    67,    68,
      69,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    55,    26,    27,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    55,    26,    27,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    59,    60,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    59,    60,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    59,    60,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    59,    60,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    59,    60,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    59,    60,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    59,    60,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    59,    60,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    59,
      60,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      59,    60,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      59,    60,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    54,    63,    64,
      65,    66,    67,    68,    69,    55,    63,    64,    65,    66,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    59,    60,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    59,    60,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    59,    60,
      54,    -1,    63,    64,    65,    66,    67,    68,    69,    63,
      64,    65,    66,    67,    68,    69,    21,    22,    23,    24,
      -1,    26,    27,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    63,    64,
      65,    66,    67,    68,    69,    63,    64,    65,    66,    67,
      68,    69,    54,    21,    22,    23,    24,    -1,    26,    27,
      -1,    63,    64,    65,    66,    67,    68,    69,    -1,    21,
      22,    23,    24,    -1,    26,    27,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    54,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    63,    64,    65,    66,    67,    68,    69,    63,    64,
      65,    66,    67,    68,    69,    21,    22,    23,    24,    -1,
      26,    27,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    63,    64,    65,
      66,    67,    68,    69,    63,    64,    65,    66,    67,    68,
      69,    54,    21,    22,    23,    24,    -1,    26,    27,    -1,
      63,    64,    65,    66,    67,    68,    69,    -1,    21,    22,
      23,    24,    -1,    26,    27,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    54,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      63,    64,    65,    66,    67,    68,    69,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    57,    -1,    -1,    -1,    54,    -1,    63,
      64,    65,    66,    67,    68,    69,    63,    64,    65,    66,
      67,    68,    69,    21,    22,    23,    24,    -1,    26,    27,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    63,    64,    65,    66,    67,
      68,    69,    63,    64,    65,    66,    67,    68,    69,    54,
      21,    22,    23,    24,    -1,    26,    27,    -1,    63,    64,
      65,    66,    67,    68,    69,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    54,    21,    22,    23,    24,    -1,    26,
      27,    -1,    63,    64,    65,    66,    67,    68,    69,    54,
      21,    22,    23,    24,    -1,    26,    27,    -1,    63,    64,
      65,    66,    67,    68,    69,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    21,    22,    23,    24,    -1,    26,    27,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    62,    63,    64,    65,
      66,    67,    68,    69,    62,    63,    64,    65,    66,    67,
      68,    69,    21,    22,    23,    24,    -1,    26,    27,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    62,    63,    64,    65,    66,    67,    68,    69,    62,
      63,    64,    65,    66,    67,    68,    69,    62,    63,    64,
      65,    66,    67,    68,    69,    62,    63,    64,    65,    66,
      67,    68,    69,    21,    22,    23,    24,    -1,    26,    27,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    62,    63,    64,    65,    66,    67,    68,    69,
      62,    63,    64,    65,    66,    67,    68,    69,    62,    63,
      64,    65,    66,    67,    68,    69,    62,    63,    64,    65,
      66,    67,    68,    69,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    57,    -1,
      -1,    -1,    54,    -1,    63,    64,    65,    66,    67,    68,
      69,    63,    64,    65,    66,    67,    68,    69,    21,    22,
      23,    24,    -1,    26,    27,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    54,    21,    22,    23,    24,    -1,    26,    27,    -1,
      63,    64,    65,    66,    67,    68,    69,    62,    63,    64,
      65,    66,    67,    68,    69,    62,    63,    64,    65,    66,
      67,    68,    69,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    21,    22,    23,    24,    -1,    26,
      27,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    57,    -1,    -1,    -1,    54,    -1,    63,
      64,    65,    66,    67,    68,    69,    63,    64,    65,    66,
      67,    68,    69,    21,    22,    23,    24,    -1,    26,    27,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    54,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    62,    63,    64,    65,    66,    67,    68,    69,
      62,    63,    64,    65,    66,    67,    68,    69,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    21,    22,    23,    24,    -1,    26,    27,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      62,    63,    64,    65,    66,    67,    68,    69,    62,    63,
      64,    65,    66,    67,    68,    69,    60,    -1,    62,    63,
      64,    65,    66,    21,    22,    23,    24,    -1,    26,    27,
      21,    22,    23,    24,    -1,    26,    27,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    65,    66,    60,
      -1,    62,    63,    64,    65,    66,    59,    60,    -1,    -1,
      63,    64,    65,    66,    57,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    62,    63,    64,    65,    66,    21,    22,    23,
      24,    -1,    26,    27,    21,    22,    23,    24,    -1,    26,
      27,    21,    22,    23,    24,    -1,    26,    27,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,    62,
      63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    72,    73,    74,    76,
     101,    54,    58,    83,     0,    73,    54,     9,    59,    84,
      55,    56,    61,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    37,    38,    54,    61,    65,    66,
      70,    74,    83,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   101,    90,
      57,    90,     1,     3,    81,    82,   101,    54,    56,    61,
      61,    61,    83,    90,    97,    98,    97,    90,    97,    97,
      97,    54,    59,    86,    54,    54,    21,    22,    23,    24,
      26,    27,    63,    64,    65,    66,    67,    68,    69,    55,
       9,    55,    57,    62,    62,    60,    62,     9,    90,    62,
      90,   100,    90,    90,    17,    62,    92,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    91,
      10,    58,    58,    82,    58,    56,    57,    60,    62,    62,
      62,    61,    75,    90,    78,    80,    77,    79,    57,    90,
      83,    83,    90,    59,    60,    85,    59,    85,    59,    16,
      62,    59,    90,    59,    59,    83,    54,    58,     9,    10,
      11,    12,    13,    14,    37,    38,    61,    65,    66,    70,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    58,
       9,    10,    11,    12,    13,    14,    61,    99,     9,    10,
      11,    12,    13,    14,    37,    38,    61,    65,    66,    70,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     9,
      10,    11,    12,    13,    14,    37,    38,    61,    65,    66,
      70,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       9,    10,    11,    12,    13,    14,    37,    38,    61,    65,
      66,    70,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    58,    59,    84,    56,    61,     9,    10,    11,    12,
      13,    14,    61,    97,    98,    99,    97,    90,    97,    97,
      97,    21,    22,    23,    24,    26,    27,    63,    64,    65,
      66,    67,    68,    69,    55,    59,    84,    56,    61,    90,
      56,    61,     9,    10,    11,    12,    13,    14,    61,    97,
      98,    99,    97,    90,    97,    97,    97,    21,    22,    23,
      24,    26,    27,    63,    64,    65,    66,    67,    68,    69,
      55,    56,    61,     9,    10,    11,    12,    13,    14,    61,
      97,    98,    99,    97,    90,    97,    97,    97,    21,    22,
      23,    24,    26,    27,    63,    64,    65,    66,    67,    68,
      69,    55,    56,    61,     9,    10,    11,    12,    13,    14,
      61,    97,    98,    99,    97,    90,    97,    97,    97,    21,
      22,    23,    24,    26,    27,    63,    64,    65,    66,    67,
      68,    69,    55,    59,    84,    85,    90,    62,   100,    56,
      61,    90,    62,    92,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    91,    85,    90,    62,
     100,    62,    90,    62,   100,    56,    61,    90,    62,    92,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    91,    90,    62,   100,    56,    61,    90,    62,
      92,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    91,    90,    62,   100,    56,    61,    90,
      62,    92,    93,    94,    94,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    91,    85,    59,    57,    62,    90,
      62,   100,    62,    59,    57,    62,    57,    62,    90,    62,
     100,    62,    57,    62,    90,    62,   100,    62,    57,    62,
      90,    62,   100,    62,    59,    57,    62,    57,    62,    57,
      62,    57,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    75,    75,    77,    76,    78,    76,
      79,    76,    80,    76,    76,    81,    81,    82,    82,    83,
      84,    83,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    93,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     4,
       5,     8,     9,     6,     1,     3,     0,     9,     0,     9,
       0,     8,     0,     8,     5,     1,     3,     2,     4,     2,
       0,     4,     1,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     5,     7,     5,     7,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     1,     4,     3,     4,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1
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
  switch (yytype)
    {
    case 9: /* IDENTIFIER  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2667 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2673 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2679 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2685 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2691 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2697 "src/parser.c"
        break;

    case 72: /* declaration_list  */
#line 64 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2703 "src/parser.c"
        break;

    case 73: /* declaration  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2709 "src/parser.c"
        break;

    case 74: /* init_declarator  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2715 "src/parser.c"
        break;

    case 75: /* initializer_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2721 "src/parser.c"
        break;

    case 76: /* function_definition  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2727 "src/parser.c"
        break;

    case 81: /* argument_list  */
#line 63 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2733 "src/parser.c"
        break;

    case 82: /* argument  */
#line 63 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2739 "src/parser.c"
        break;

    case 83: /* compound_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2745 "src/parser.c"
        break;

    case 85: /* statement_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2751 "src/parser.c"
        break;

    case 86: /* statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2757 "src/parser.c"
        break;

    case 87: /* conditional_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2763 "src/parser.c"
        break;

    case 88: /* iteration_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2769 "src/parser.c"
        break;

    case 89: /* return_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2775 "src/parser.c"
        break;

    case 90: /* assignment_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2781 "src/parser.c"
        break;

    case 91: /* logical_or_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2787 "src/parser.c"
        break;

    case 92: /* logical_and_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2793 "src/parser.c"
        break;

    case 93: /* equality_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2799 "src/parser.c"
        break;

    case 94: /* relational_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2805 "src/parser.c"
        break;

    case 95: /* additive_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2811 "src/parser.c"
        break;

    case 96: /* multiplicative_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2817 "src/parser.c"
        break;

    case 97: /* unary_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2823 "src/parser.c"
        break;

    case 98: /* postfix_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2829 "src/parser.c"
        break;

    case 99: /* primary_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2835 "src/parser.c"
        break;

    case 100: /* argument_call_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2841 "src/parser.c"
        break;

      default:
        break;
    }
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
#line 106 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3107 "src/parser.c"
    break;

  case 3:
#line 107 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3113 "src/parser.c"
    break;

  case 4:
#line 111 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3119 "src/parser.c"
    break;

  case 5:
#line 112 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3125 "src/parser.c"
    break;

  case 6:
#line 113 "src/language.y"
    { (yyval.node) = NULL; }
#line 3131 "src/parser.c"
    break;

  case 7:
#line 114 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3137 "src/parser.c"
    break;

  case 8:
#line 118 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3143 "src/parser.c"
    break;

  case 9:
#line 119 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free_label((yyvsp[-2].sval));  tc_evaluate((yyval.node)); }
#line 3149 "src/parser.c"
    break;

  case 10:
#line 120 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3155 "src/parser.c"
    break;

  case 11:
#line 121 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free_label((yyvsp[-6].sval)); }
#line 3161 "src/parser.c"
    break;

  case 12:
#line 122 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free_label((yyvsp[-7].sval)); }
#line 3167 "src/parser.c"
    break;

  case 13:
#line 123 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free_label((yyvsp[-4].sval)); free_label((yyvsp[0].sval)); }
#line 3173 "src/parser.c"
    break;

  case 14:
#line 127 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3179 "src/parser.c"
    break;

  case 15:
#line 128 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3185 "src/parser.c"
    break;

  case 16:
#line 132 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3191 "src/parser.c"
    break;

  case 17:
#line 132 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3197 "src/parser.c"
    break;

  case 18:
#line 133 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3203 "src/parser.c"
    break;

  case 19:
#line 133 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3209 "src/parser.c"
    break;

  case 20:
#line 134 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3215 "src/parser.c"
    break;

  case 21:
#line 134 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3221 "src/parser.c"
    break;

  case 22:
#line 135 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3227 "src/parser.c"
    break;

  case 23:
#line 135 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3233 "src/parser.c"
    break;

  case 24:
#line 136 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3239 "src/parser.c"
    break;

  case 25:
#line 140 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3245 "src/parser.c"
    break;

  case 26:
#line 141 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3251 "src/parser.c"
    break;

  case 27:
#line 145 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3257 "src/parser.c"
    break;

  case 28:
#line 146 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3263 "src/parser.c"
    break;

  case 29:
#line 150 "src/language.y"
    { (yyval.node) = NULL; }
#line 3269 "src/parser.c"
    break;

  case 30:
#line 151 "src/language.y"
    { begin(NULL); }
#line 3275 "src/parser.c"
    break;

  case 31:
#line 151 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3281 "src/parser.c"
    break;

  case 32:
#line 155 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3287 "src/parser.c"
    break;

  case 33:
#line 156 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3293 "src/parser.c"
    break;

  case 34:
#line 160 "src/language.y"
    { (yyval.node) = NULL; }
#line 3299 "src/parser.c"
    break;

  case 35:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3305 "src/parser.c"
    break;

  case 36:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3311 "src/parser.c"
    break;

  case 37:
#line 163 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3317 "src/parser.c"
    break;

  case 38:
#line 164 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3323 "src/parser.c"
    break;

  case 39:
#line 165 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3329 "src/parser.c"
    break;

  case 40:
#line 166 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3335 "src/parser.c"
    break;

  case 41:
#line 167 "src/language.y"
    { (yyval.node) = NULL; }
#line 3341 "src/parser.c"
    break;

  case 42:
#line 171 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3347 "src/parser.c"
    break;

  case 43:
#line 172 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3353 "src/parser.c"
    break;

  case 44:
#line 176 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3359 "src/parser.c"
    break;

  case 45:
#line 177 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3365 "src/parser.c"
    break;

  case 46:
#line 181 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3371 "src/parser.c"
    break;

  case 47:
#line 182 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3377 "src/parser.c"
    break;

  case 48:
#line 186 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3383 "src/parser.c"
    break;

  case 49:
#line 187 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3389 "src/parser.c"
    break;

  case 50:
#line 191 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3395 "src/parser.c"
    break;

  case 51:
#line 192 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3401 "src/parser.c"
    break;

  case 52:
#line 196 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3407 "src/parser.c"
    break;

  case 53:
#line 197 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3413 "src/parser.c"
    break;

  case 54:
#line 201 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3419 "src/parser.c"
    break;

  case 55:
#line 202 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3425 "src/parser.c"
    break;

  case 56:
#line 203 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3431 "src/parser.c"
    break;

  case 57:
#line 207 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3437 "src/parser.c"
    break;

  case 58:
#line 208 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3443 "src/parser.c"
    break;

  case 59:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3449 "src/parser.c"
    break;

  case 60:
#line 210 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3455 "src/parser.c"
    break;

  case 61:
#line 211 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3461 "src/parser.c"
    break;

  case 62:
#line 215 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3467 "src/parser.c"
    break;

  case 63:
#line 216 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3473 "src/parser.c"
    break;

  case 64:
#line 217 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3479 "src/parser.c"
    break;

  case 65:
#line 221 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3485 "src/parser.c"
    break;

  case 66:
#line 222 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3491 "src/parser.c"
    break;

  case 67:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3497 "src/parser.c"
    break;

  case 68:
#line 224 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3503 "src/parser.c"
    break;

  case 69:
#line 228 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3509 "src/parser.c"
    break;

  case 70:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_POS, "+",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3515 "src/parser.c"
    break;

  case 71:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3521 "src/parser.c"
    break;

  case 72:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3527 "src/parser.c"
    break;

  case 73:
#line 232 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3533 "src/parser.c"
    break;

  case 74:
#line 233 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3539 "src/parser.c"
    break;

  case 75:
#line 237 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3545 "src/parser.c"
    break;

  case 76:
#line 238 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY); free_label((yyvsp[-3].sval));}
#line 3551 "src/parser.c"
    break;

  case 77:
#line 239 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval));}
#line 3557 "src/parser.c"
    break;

  case 78:
#line 240 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval));}
#line 3563 "src/parser.c"
    break;

  case 79:
#line 244 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3569 "src/parser.c"
    break;

  case 80:
#line 245 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3575 "src/parser.c"
    break;

  case 81:
#line 246 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3581 "src/parser.c"
    break;

  case 82:
#line 247 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3587 "src/parser.c"
    break;

  case 83:
#line 248 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3593 "src/parser.c"
    break;

  case 84:
#line 249 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3599 "src/parser.c"
    break;

  case 85:
#line 250 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3605 "src/parser.c"
    break;

  case 86:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3611 "src/parser.c"
    break;

  case 87:
#line 255 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3617 "src/parser.c"
    break;

  case 88:
#line 259 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3623 "src/parser.c"
    break;

  case 89:
#line 260 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3629 "src/parser.c"
    break;

  case 90:
#line 261 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3635 "src/parser.c"
    break;

  case 91:
#line 262 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3641 "src/parser.c"
    break;


#line 3645 "src/parser.c"

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
#line 265 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
