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
#line 76 "src/language.y"

#include "actions.h"
#include "node-list.h"
#include "arg-list.h"
#include "misc.h"

#include <stdlib.h>
#include <stdio.h>

int yylex (void);

extern Node * root;
extern Nodelist * node_list;


#line 109 "src/parser.c"


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
#define YYLAST   7586

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
       2,     2,     2,    66,     2,     2,     2,    65,     2,     2,
      57,    58,    63,    61,    56,    62,     2,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      59,    51,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    99,   103,   104,   105,   106,   110,   111,
     112,   113,   114,   115,   119,   120,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   134,
     135,   139,   140,   144,   145,   145,   149,   150,   154,   155,
     156,   157,   158,   159,   160,   161,   165,   166,   170,   171,
     175,   176,   180,   181,   187,   188,   192,   193,   197,   198,
     199,   203,   204,   205,   206,   207,   211,   212,   213,   217,
     218,   219,   220,   224,   225,   226,   227,   228,   232,   233,
     234,   235,   239,   240,   241,   242,   243,   244,   245,   249,
     250,   254,   255,   256,   257
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
  "DO", "RETURN", "\"++\"", "\"--\"", "\"!\"", "\"*\"", "\"/\"", "\"%\"",
  "\"+\"", "\"-\"", "OP_NEG", "\"<\"", "\">\"", "\"<=\"", "\">=\"",
  "\"==\"", "\"!=\"", "\"||\"", "\"&&\"", "\"=\"", "UNRECOGNIZED_TOKEN",
  "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST", "VARIABLE",
  "CONSTANT", "ARRAY", "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL",
  "DECLARATION", "GENERIC_NODE", "';'", "'='", "'['", "']'", "'{'", "'}'",
  "','", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "$accept", "declaration_list", "declaration", "init_declarator",
  "initializer_list", "function_definition", "$@1", "$@2", "$@3", "$@4",
  "$@5", "$@6", "argument_list", "argument", "compound_statement", "$@7",
  "statement_list", "statement", "conditional_statement",
  "iteration_statement", "return_statement", "assignment_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "primary_expression", "argument_call_list", "type", YY_NULLPTR
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
      59,    61,    91,    93,   123,   125,    44,    40,    41,    60,
      62,    43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -246

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-246)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     995,    38,     8,    25,    28,    33,   600,   613,    14,   669,
      88,   696,   940,   726,  -246,   795,   810,   409,  1204,    56,
    1382,    34,    26,    59,   502,  2326,  2478,  4497,  4532,  4539,
      85,   110,   140,   194,  1493,  1493,  1046,  1507,  1493,  1493,
     134,  1412,  1480,  1791,  2059,  2738,   147,   148,   130,   150,
     350,  2915,  1558,  6256,  6291,  4574,  4581,   214,   177,    53,
     181,   222,     0,   198,    70,    95,   274,  2834,  1705,   228,
    1507,  1507,   267,   237,  6298,  6333,  6340,   230,  6375,  6382,
    2902,  1252,  2923,  2987,  3008,  1493,  1493,  1493,  1493,  1493,
    1493,  1493,  1493,  1493,  1493,  1493,  1493,  1493,  1493,   207,
       9,   242,  1282,   239,  3072,   509,   259,   -17,   261,  4616,
     197,   268,   285,   289,   291,  4623,   200,   461,  3000,  3085,
    2195,  2833,  7342,  7374,  6417,  6424,  6459,  6466,  6501,   241,
     275,  1763,  3093,    56,   262,   288,  3157,   265,  4658,  1822,
    4665,   301,   322,  1507,    77,   103,    56,   316,  3178,  1437,
      56,   327,   298,   381,   466,  3242,   336,   351,   162,  3263,
    1548,  1557,  3327,  1571,   322,   361,   368,   132,  1624,  1684,
    3348,  3412,  3433,  2282,  4700,  4735,  4770,  4805,  4840,  1942,
    1942,  1507,  1942,  1942,   -27,    54,   379,  7482,  2071,  6514,
    6549,  4875,  4910,  3497,  2620,  6556,  6591,  6598,  6633,  6640,
    1507,  6675,  1059,  4945,  4966,  4987,  5008,  5029,  1980,  1980,
    1507,  1980,  1980,   -20,   -25,   287,  2839,   604,  3810,  3845,
    5050,  5071,   729,  2750,  3761,  3796,  3831,  3866,  2078,  2078,
    1507,  2078,  2078,    37,    63,    45,  3745,  2294,  2630,  5085,
    3901,  3936,   853,  3971,  4006,  4041,  4076,  4111,  2145,  2145,
    1507,  2145,  2145,    80,   166,   114,  1131,  1674,  2216,  5120,
    4146,  4181,  3518,  3582,    56,  1705,   378,  4195,  6688,  6723,
    6736,  6771,  6784,  1507,  6819,  6832,  6867,  6880,   365,  6915,
    6928,  1942,  1942,  1942,  1942,  1942,  1942,  1942,  1942,  1942,
    1942,  1942,  1942,  1942,  1942,   410,    56,  1705,   396,   375,
    1705,   536,  4230,  3880,  3915,  3950,  3985,  4020,  1507,  4055,
    4090,  4125,  4160,   376,  4294,  4329,  1980,  1980,  1980,  1980,
    1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,
    1705,   565,  1314,  5130,  5165,  5175,  5210,  5220,  1507,  5255,
    5265,  5300,  5310,   380,  5345,  5355,  2078,  2078,  2078,  2078,
    2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,
    1705,   912,  2571,  5390,  5401,  5436,  5447,  5482,  1507,  5493,
    5528,  5539,  5574,   385,  5585,  5620,  2145,  2145,  2145,  2145,
    2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,
     817,    56,  3603,   373,  5635,   399,  1705,  1013,   389,  5670,
     190,   415,  7490,  7520,  7384,  7394,  7426,  7436,  6963,  6976,
    7011,  7024,  7059,   -13,  3667,   403,  7066,   432,  7101,   412,
    5705,   442,  1705,  1127,   394,  5726,    47,   317,  4239,  7526,
    4924,  5684,  6021,  7442,  4364,  4399,  4434,  4714,  4749,    50,
     420,  4245,   446,  1705,  1159,   416,  4280,   160,   121,  4956,
    7474,  7249,  7281,  7288,  7295,  5740,  5775,  5785,  5820,  5830,
      67,   436,  4315,   449,  1705,  1299,   434,  4350,   260,   386,
    1709,  2673,  1988,  2390,  7327,  7335,  5865,  5876,  5911,  5922,
    5957,    82,  3688,  3752,  5972,  6007,   448,  7114,   468,  7149,
     492,  7156,  7191,  6042,  6063,   464,  4784,   469,  4819,  4385,
    4420,   477,  6077,   473,  6112,  4455,  4490,   491,  6123,   524,
    6158,   840,  7204,  7239,  4854,  4889,  6168,  6203,  6214,  6249
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   545,     7,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,   450,     4,  -168,  -130,   -18,  -246,  -246,
    -246,   738,  2437,  2253,  2101,  1845,  1589,  1315,   946,   -19,
     360,  -245,     6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    40,   144,     9,   150,   146,   133,   151,
     147,   134,    64,    65,    41,    19,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    75,
     201,   111,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    55,   191,   148,   264,    13,    10,     8,   281,   -91,
     -54,   317,    10,     8,    55,   316,   159,   -91,   220,   130,
     162,   395,   281,    55,    82,   296,   -52,    61,    66,    62,
       3,     4,     5,   -54,   -92,   137,    72,   -93,   -52,   -31,
     -53,   -31,   -94,   173,   174,   175,   176,   177,   178,   191,
     240,   220,   220,   417,   179,   180,   421,    23,   103,     2,
       3,     4,     5,   131,    16,    24,    25,    26,    27,    28,
      29,    30,   346,    31,    32,    33,    34,    35,   348,   349,
     -56,   -56,   -55,   317,    63,   316,   442,    59,    11,   -54,
     282,   181,    12,   -52,   391,   -52,   182,    17,   -54,   347,
     183,   -56,   346,   -56,   100,   -55,    36,   -54,   -53,    67,
     172,    66,   260,    37,    55,   376,   463,   376,    38,   -54,
     240,   -54,    39,   -53,   220,   -53,   105,    55,   106,    55,
      82,    55,   157,   158,   392,   -52,   -52,   -53,   -53,   260,
      55,    82,    70,    55,    82,   154,   155,   378,   379,   -56,
     -56,   -29,   488,   -29,   348,   349,   -57,   -57,   -14,   -14,
     275,   275,   220,   275,   275,    85,   414,    71,   170,   -56,
     -56,   242,   243,   244,   245,   246,   247,   -57,   497,   -57,
     -52,   220,   248,   249,    80,   -54,    86,   -15,   -15,   310,
     310,   220,   310,   310,   193,   -55,   347,    83,    84,   503,
     -54,   -54,   377,    24,    25,    26,    27,    28,    29,   340,
     340,   220,   340,   340,    34,    35,   -55,   166,   -55,   250,
     509,   -54,   -54,    99,   251,   -55,   282,    -9,   252,   370,
     370,   220,   370,   370,   101,   -55,    86,   222,   223,   224,
     225,   226,   227,   -55,   -50,    55,   191,   240,   228,   229,
     -55,    37,   104,   -89,   220,   -89,    38,    -8,    20,    21,
      39,   482,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,    85,    55,   191,   240,
     102,   191,   240,   107,   114,   230,   109,   -51,   115,   220,
     231,   -53,   -10,   132,   232,   -55,   377,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   191,   240,   136,   138,   -55,   -55,   149,   152,   220,
     318,   319,   -56,   -56,   139,   -13,   140,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   191,   240,   141,   -30,   -56,   -30,   142,   143,   220,
     318,   319,   -57,   -57,   -32,   262,   -32,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   160,    55,    55,    82,   -57,   172,   191,   240,    56,
      56,   192,   163,    87,    88,   -56,   -56,   222,   223,   224,
     225,   226,   227,    56,   165,    55,    82,   221,   228,   229,
     -56,   -11,    56,   191,   240,   222,   223,   224,   225,   226,
     227,   171,   283,   284,   -56,   -56,   228,   229,   -12,   378,
     379,   -57,   -57,   399,   191,   240,   484,   -33,   192,   241,
     221,   221,   -56,   418,   425,   230,   394,   -90,   446,   -90,
     231,   -57,   -57,   467,   232,   191,   240,   489,   283,   284,
     -57,   -57,   498,   230,   416,   139,   491,   485,   231,    -8,
      20,    21,   232,    55,    82,   493,    22,   -46,   -57,   -46,
     -46,   -46,   -46,   499,   504,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   164,   -46,   -46,   -46,   -46,   -46,   139,   505,
     492,   261,   510,    56,    87,    88,   -57,   -57,   139,   241,
     494,   512,   139,   221,   500,   139,    56,   506,    56,   -35,
      56,   -57,     2,     3,     4,     5,   -46,   514,   261,    56,
     -46,   -46,    56,   -46,   139,   139,   513,   515,   -46,   139,
     516,   517,   -46,   -82,   -82,   -82,   -82,   -82,   -82,   276,
     276,   221,   276,   276,   518,   222,   223,   224,   225,   226,
     227,    15,   -82,   -82,    68,   135,   228,   229,     0,    69,
     221,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   311,   311,
     221,   311,   311,     0,   222,   223,   224,   225,   226,   227,
     139,     0,   519,     0,     0,   228,   229,     0,   341,   341,
     221,   341,   341,   230,   420,     0,     0,     0,   231,     0,
      14,     1,   232,     2,     3,     4,     5,     0,   371,   371,
     221,   371,   371,    -2,    -2,     0,    -2,    -2,    -2,    -2,
       0,     0,   230,   441,    56,   192,   241,   231,     0,     0,
       0,   232,     0,   221,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,     0,    56,   192,   241,     0,
     192,   241,   -61,   -61,   -61,   324,   325,     0,   221,    -4,
      -4,     0,    -4,    -4,    -4,    -4,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     192,   241,     0,     0,     0,     0,    -6,    -6,   221,    -6,
      -6,    -6,    -6,     0,     0,     0,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     192,   241,     0,     0,     0,     0,    -7,    -7,   221,    -7,
      -7,    -7,    -7,     0,     0,     0,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
       0,    56,    56,     0,     0,     0,   192,   241,    58,    60,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,    73,     0,     0,    56,    77,     0,     0,     0,     0,
     -82,   330,   192,   241,     0,   -82,   331,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,    -3,    -3,     0,    -3,    -3,
      -3,    -3,     0,   192,   241,     0,   108,   110,   112,   113,
      -5,    -5,     0,    -5,    -5,    -5,    -5,     0,   -33,     0,
     -33,   -33,   -33,   -33,   192,   241,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -35,    56,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   -33,     0,   145,
       0,   -33,   -33,     0,   -33,     0,     0,   153,     0,   -33,
       0,   156,     0,   -33,   -82,   -82,   -82,   -82,   -82,   -82,
     -35,     0,     0,     0,   -35,   -35,   167,   -35,     0,     0,
       0,     0,   -35,     0,   -82,   360,   -35,     0,   -82,   -82,
     361,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   278,
       0,   222,   223,   224,   225,   226,   227,     0,     0,     0,
       0,     0,   228,   229,     0,     0,     0,     0,   299,     0,
       0,   -34,     0,   -34,   -34,   -34,   -34,     0,   313,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,     0,   190,   343,   230,
     462,     0,     0,     0,   231,     0,     0,     0,   232,     0,
      74,    76,     0,   219,    78,    79,     0,     0,   373,     0,
     -34,     0,     0,     0,   -34,    18,     1,   -34,     2,     3,
       4,     5,   -34,   393,   110,     0,   -34,     0,     0,     0,
       0,   398,     0,     0,   190,   239,   219,   219,     0,     0,
       0,     0,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,   228,   229,   415,   110,     0,   419,   110,
       0,   126,   127,   128,     0,     0,   424,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   440,   110,
     230,   487,     0,     0,     0,   231,   445,   259,     0,   232,
       0,     0,     0,     0,     0,   239,     0,     0,     0,   219,
     -82,   -82,   -82,   -82,   -82,   -82,   -38,     0,   461,   110,
     -38,   -38,     0,   -38,   259,     0,   466,     0,   -38,     0,
     -82,   300,   -38,     0,     0,     0,   301,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   274,   277,   219,   279,   280,
       0,     0,     0,     0,   486,   110,   222,   223,   224,   225,
     226,   227,     0,     0,     0,     0,   219,   228,   229,     0,
       0,     0,     0,     0,   309,   312,   219,   314,   315,     0,
     495,   110,   380,   381,   -58,   -58,   -58,   -58,   222,   223,
     224,   225,   226,   227,   339,   342,   219,   344,   345,   228,
     229,   501,   110,     0,   230,   496,   -58,   -58,     0,   231,
     382,   383,     0,   232,   369,   372,   219,   374,   375,     0,
       0,     0,   507,   110,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   190,   239,     0,     0,     0,   230,   502,     0,   219,
       0,   231,     0,     0,     0,   232,     0,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   410,   411,   412,
     190,     0,     0,   190,   239,     0,   190,   239,     0,     0,
       0,     0,   -35,   -35,   219,   -35,   -35,   -35,   -35,     0,
       0,     0,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   436,   437,   438,   219,   190,   239,     0,     0,
       0,     0,   -28,   -28,   219,   -28,   -28,   -28,   -28,     0,
       0,     0,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   457,   458,   459,   239,   190,   239,   222,   223,
     224,   225,   226,   227,   219,     0,     0,     0,     0,   228,
     229,     0,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   478,   479,   480,   259,   189,     0,     0,     0,
       0,     0,   190,   239,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   218,     0,     0,     0,   230,   508,     0,     0,
       0,   231,     0,     0,     0,   232,   443,     0,   190,   239,
     -82,   444,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   189,   238,   218,   218,     0,     0,   190,
     239,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,   124,   125,
     190,   239,     0,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,   -27,   -27,    37,
     -27,   -27,   -27,   -27,    38,     0,   258,     0,    39,     0,
       0,     0,     0,     0,   238,     0,     0,     0,   218,     0,
       0,     0,   -43,     0,     0,     0,   -43,   -43,     0,   -43,
       0,     0,     0,   258,   -43,     0,     0,     0,   -43,     0,
       0,    23,     0,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,   218,    31,    32,    33,
      34,    35,   194,   195,   196,   197,   198,   199,     0,     0,
       0,     0,     0,    34,    35,   218,   202,   203,   204,   205,
     206,   207,     0,     0,     0,   218,     0,   208,   209,     0,
      36,     0,     0,     0,   172,    81,     0,    37,     0,     0,
       0,     0,    38,     0,     0,   218,    39,     0,   -25,   -25,
     200,   -25,   -25,   -25,   -25,    38,     0,   -21,   -21,    39,
     -21,   -21,   -21,   -21,   210,   218,     0,     0,     0,   211,
       0,   -23,   -23,   212,   -23,   -23,   -23,   -23,     0,     0,
     189,   238,     0,     0,     0,     0,     0,     0,   218,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   189,   189,   189,   189,
     189,   189,   189,   189,   408,   409,     0,     0,   -61,   189,
     188,     0,   189,   238,     0,   189,   238,   -61,   -61,    93,
      94,     0,     0,   218,   -19,   -19,   217,   -19,   -19,   -19,
     -19,   218,   218,   218,   218,   218,   218,   218,   218,   434,
     435,     0,     0,     0,   218,   189,   238,     0,     0,     0,
       0,     0,     0,   218,     0,     0,     0,   188,   237,   217,
     217,   238,   238,   238,   238,   238,   238,   238,   238,   455,
     456,     0,     0,     0,   238,   189,   238,     0,   120,   121,
     122,   123,     0,   218,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   258,   258,   258,   258,   258,   258,   258,   258,   476,
     477,     0,     0,     0,   258,   -61,   -61,   -61,   -61,   -61,
     -61,   189,   238,     0,   173,   174,   175,   176,   177,   178,
     257,     0,     0,     0,     0,   179,   180,     0,   237,   -61,
     -61,     0,   217,   -61,   -61,   384,   385,   189,   238,     0,
     380,   381,   -59,   -59,   -59,   -59,     0,   257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   238,
       0,     0,   181,     0,   -59,   -59,     0,   182,   382,   383,
     217,   183,   242,   243,   244,   245,   246,   247,     0,   189,
     238,     0,     0,   248,   249,     0,     0,     0,     0,   217,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,   217,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,   217,
     250,     0,     0,     0,     0,   251,     0,     0,     0,   252,
       0,   222,   223,   224,   225,   226,   227,     0,     0,   217,
       0,   -36,   228,   229,     0,   -36,   -36,     0,   -36,     0,
       0,     0,     0,   -36,   188,   237,     0,   -36,     0,     0,
       0,     0,   217,     0,     0,     0,   187,     0,     0,     0,
     188,   188,   188,   188,   404,   405,   406,   407,     0,   230,
       0,     0,   216,   188,   231,     0,   188,   237,   232,   188,
     237,     0,     0,     0,     0,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,   217,   217,   217,   217,   430,
     431,   432,   433,   187,   236,   216,   216,     0,   217,   188,
     237,     0,     0,     0,     0,     0,     0,   217,     0,     0,
       0,     0,   118,   119,     0,   237,   237,   237,   237,   451,
     452,   453,   454,     0,     0,     0,     0,     0,   237,   188,
     237,   267,   268,   269,   270,   271,   272,   217,     0,     0,
       0,     0,   179,   180,     0,   257,   257,   257,   257,   472,
     473,   474,   475,     0,     0,     0,   256,     0,   257,     0,
       0,     0,     0,     0,   236,   188,   237,     0,   216,   302,
     303,   304,   305,   306,   307,     0,     0,     0,     0,   273,
     208,   209,     0,   256,   182,     0,     0,     0,   183,     0,
       0,   188,   237,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   216,     0,     0,     0,
       0,     0,   188,   237,     0,     0,     0,   308,     0,     0,
       0,     0,   211,   -64,   -64,   216,   212,   -64,   -64,   384,
     385,     0,     0,   188,   237,   216,     0,     0,     0,     0,
     -41,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   216,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,   332,   333,   334,
     335,   336,   337,     0,     0,   216,     0,     0,   228,   229,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -41,
     187,   236,     0,   -41,   -41,     0,   -41,     0,   216,     0,
       0,   -41,   186,     0,   -61,   -41,   187,   187,   402,   403,
     -61,   -61,   289,   290,     0,   338,     0,     0,   215,   187,
     231,     0,   187,   236,   232,   187,   236,     0,     0,     0,
       0,     0,     0,   216,   362,   363,   364,   365,   366,   367,
       0,   216,   216,   428,   429,   248,   249,     0,     0,   186,
     235,   215,   215,     0,   216,   187,   236,     0,     0,     0,
       0,     0,     0,   216,     0,     0,     0,   117,     0,     0,
       0,   236,   236,   449,   450,     0,     0,     0,     0,     0,
       0,     0,   368,     0,   236,   187,   236,   251,     0,     0,
       0,   252,     0,   216,     0,     0,     0,     0,     0,     0,
       0,   256,   256,   470,   471,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   255,     0,   256,     0,     0,     0,     0,     0,
     235,   187,   236,     0,   215,   -64,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -64,   -64,    93,    94,     0,   255,
       0,     0,     0,     0,     0,     0,     0,   187,   236,     0,
       0,   -66,   -66,     0,   185,   -66,   -66,   -66,   -66,   386,
     387,   388,   215,     0,     0,     0,     0,     0,   187,   236,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,   187,
     236,   215,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   185,   234,   214,   214,   -61,   -61,   -61,   -61,   -61,
     -61,   215,     0,   -82,   265,   -82,     0,     0,   116,   266,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
     -61,   215,   -61,   -61,   -61,   354,   355,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   186,   235,     0,     0,
       0,     0,     0,     0,   215,     0,   -83,   -83,     0,     0,
       0,     0,   186,   401,   254,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   234,     0,     0,   186,   214,     0,   186,   235,
       0,   186,   235,     0,     0,     0,     0,     0,     0,   215,
       0,   254,     0,     0,     0,     0,     0,   215,   427,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     215,   186,   235,     0,   214,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     0,   -65,   -65,   235,   448,   -65,
     -65,   384,   385,   214,     0,     0,     0,     0,   184,     0,
     235,   186,   235,   214,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,   213,     0,     0,   255,   469,     0,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,     0,     0,   186,   235,     0,
       0,     0,     0,   214,     0,   184,   233,   213,   213,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,   185,   234,
       0,     0,     0,   186,   235,     0,   214,     0,   -84,   -84,
       0,     0,     0,     0,   400,   129,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   186,   235,     0,   185,     0,     0,
     185,   234,     0,   185,   234,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   186,   235,     0,   253,   426,
       0,     0,     0,     0,     0,     0,   233,     0,     0,     0,
     213,     0,   214,   185,   234,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   253,     0,     0,     0,   447,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   234,   185,   234,     0,     0,     0,   213,     0,
       0,   214,     0,   464,     0,     0,   -82,   -82,   465,   468,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   213,     0,     0,
       0,     0,   254,     0,     0,     0,     0,   213,     0,   185,
     234,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   213,     0,     0,
     -82,     0,   297,     0,     0,   185,   234,   298,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -66,   213,   -66,   -66,
     -66,   -66,   -66,   356,   357,   358,   185,   234,     0,     0,
       0,     0,   184,   233,   380,   381,   -60,   -60,   -60,   -60,
     213,     0,     0,     0,     0,     0,     0,   185,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,   -60,
       0,   413,   382,   383,   184,   233,     0,   184,   233,   -42,
       0,   -42,   -42,   -42,   -42,   213,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,   439,   184,   233,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -42,     0,
       0,     0,   -42,   -42,     0,   -42,   460,   184,   233,     0,
     -42,   -83,     0,     0,   -42,   213,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,     0,     0,     0,
       0,     0,     0,   184,   233,   -45,     0,   -45,   -45,   -45,
     -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,   184,
     233,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     320,   321,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
     184,   233,     0,   -65,   -45,     0,     0,     0,   -45,   -45,
       0,   -45,   -65,   -65,    93,    94,   -45,   -58,   322,   323,
     -45,   184,   233,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,    89,    90,   -58,   -58,
     -58,   -58,   -39,     0,     0,     0,   -39,   -39,     0,   -39,
       0,     0,     0,     0,   -39,   -58,     0,     0,   -39,     0,
       0,     0,     0,   -37,    91,    92,     0,   -37,   -37,     0,
     -37,     0,     0,     0,     0,   -37,     0,     0,   -44,   -37,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -40,
       0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,    89,    90,   -59,   -59,   -59,   -59,   -44,     0,     0,
       0,   -44,   -44,     0,   -44,     0,     0,     0,     0,   -44,
     -59,     0,     0,   -44,     0,     0,     0,     0,   -40,    91,
      92,     0,   -40,   -40,     0,   -40,     0,     0,     0,     0,
     -40,     0,     0,   -20,   -40,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -18,     0,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,     0,    89,    90,   -60,   -60,
     -60,   -60,   -20,     0,     0,     0,   -20,   -26,     0,   -20,
       0,     0,     0,     0,   -20,   -60,     0,     0,   -20,     0,
       0,     0,     0,   -18,    91,    92,     0,   -18,   -24,     0,
     -18,     0,     0,     0,     0,   -18,     0,     0,   -16,   -18,
     -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,    23,
       0,     2,     3,     4,     5,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,   -16,     0,     0,
       0,   -16,   -22,     0,   -16,     0,     0,     0,     0,   -16,
       0,     0,     0,   -16,     0,     0,     0,     0,    36,     0,
       0,     0,   172,   161,     0,    37,     0,     0,     0,     0,
      38,     0,     0,   -48,    39,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,    23,     0,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,   -48,     0,     0,     0,   -48,   -48,     0,   -48,
       0,     0,     0,     0,   -48,     0,     0,     0,   -48,     0,
       0,     0,     0,    36,     0,     0,     0,   172,   168,     0,
      37,     0,     0,     0,     0,    38,     0,     0,    23,    39,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,   -47,
       0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,   172,   169,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,    39,     0,     0,     0,     0,   -47,     0,
       0,     0,   -47,   -47,     0,   -47,     0,     0,     0,     0,
     -47,     0,     0,   -49,   -47,   -49,   -49,   -49,   -49,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,     0,   -49,     0,     0,     0,   -49,   -49,     0,   -49,
       0,     0,     0,     0,   -49,     0,     0,     0,   -49,     0,
       0,     0,     0,   -34,     0,     0,     0,   -34,   263,     0,
     -34,     0,     0,     0,     0,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,   -34,     0,     0,
       0,   -34,   295,     0,   -34,     0,     0,     0,     0,   -34,
       0,     0,     0,   -34,     0,     0,     0,     0,   -34,     0,
       0,     0,   -34,   390,     0,   -34,     0,     0,     0,     0,
     -34,     0,     0,   -33,   -34,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,    23,     0,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,   -33,     0,     0,     0,   -33,   -33,     0,   -33,
       0,     0,     0,     0,   -33,     0,     0,     0,   -33,     0,
       0,     0,     0,    36,     0,     0,     0,   172,   483,     0,
      37,     0,     0,     0,     0,    38,     0,     0,    23,    39,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    23,
       0,     2,     3,     4,     5,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,   172,   490,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,    39,     0,     0,     0,     0,    36,     0,
       0,     0,   172,   511,     0,    37,     0,     0,     0,     0,
      38,     0,     0,   -35,    39,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,     0,     0,   350,   351,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,   -58,   -35,   -58,   352,   353,   -35,   -35,     0,   -35,
       0,     0,   -84,     0,   -35,     0,     0,   -84,   -35,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -85,     0,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -66,   -66,
     -66,   -66,   -66,   326,   327,   328,   -69,   -69,   -69,   -69,
     -69,   -69,   -86,     0,     0,     0,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -83,   -83,   -83,   -83,   -83,   -83,   -87,     0,     0,
       0,     0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -73,   -73,   -73,   -73,   -73,   -73,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,   359,     0,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -78,   -78,   -78,
     -78,   -78,   -78,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -85,   -78,     0,     0,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,   -83,     0,     0,     0,   -83,   -83,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,   -84,     0,     0,
       0,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -76,   -76,   -76,   -76,
     -76,   -76,   -85,     0,     0,     0,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -73,   -73,   -73,   -73,   -73,   -73,   -86,     0,     0,
       0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -78,   -78,   -78,   -78,
     -78,   -78,   -87,     0,     0,     0,   -87,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -73,   -73,   -73,
     -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -77,   -77,   -77,   -77,   -77,   -77,   389,     0,     0,
       0,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -82,   -82,   -82,   -82,
     -82,   -82,   -78,     0,     0,     0,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   396,   -82,     0,
       0,     0,   397,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
     320,   321,   -59,   -59,   -59,   -59,   -80,   -80,   -80,   -80,
     -80,   -80,   422,     0,     0,     0,     0,   423,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -80,   -59,   322,   323,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -88,     0,     0,     0,     0,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -80,   -80,   -80,   -80,
     -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -74,   -80,     0,     0,     0,
     -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,   -88,   -88,   -88,   -88,   -88,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -67,   -67,   -67,   -67,   -67,
     -67,   -88,     0,     0,     0,   -88,   -88,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -79,   -79,   -79,   -79,
     -79,   -79,   -67,   -67,   -67,   -67,   -67,   326,   327,   328,
     -68,   -68,   -68,   -68,   -68,   -68,   -79,     0,     0,     0,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -81,   -81,   -81,   -81,   -81,   -81,   -68,   -68,   -68,
     -68,   -68,   326,   327,   328,   -70,   -70,   -70,   -70,   -70,
     -70,   -81,     0,     0,     0,     0,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -79,   -79,   -79,   -79,
     -79,   -79,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,   -79,     0,     0,     0,
     -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,   -81,   -81,   -85,   -85,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,   -86,   -86,     0,     0,     0,     0,     0,   -87,
     -87,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -73,    98,     0,     0,     0,     0,
       0,   -78,   -78,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
       0,     0,     0,   -88,   -88,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -79,   -79,
       0,     0,     0,     0,     0,   -81,   -81,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -83,     0,   -83,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,   -72,   -72,   -72,   -84,     0,   -84,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -85,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -80,   -80,   -80,   -80,   -80,
     -80,   -85,     0,   -85,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -88,   -88,   -88,   -88,   -88,   -88,   -86,     0,   -86,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -79,   -79,   -79,   -79,   -79,
     -79,   -87,     0,   -87,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -73,   -73,   -73,   -73,
     -73,   -73,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -81,   -81,   -81,   -81,   -81,   -81,   294,     0,   -73,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -78,   -78,   -78,   -78,   -78,   -78,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -64,   -64,   -64,   -64,   -64,
     -64,   -78,     0,   -78,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -83,   -83,   -83,   -83,
     -83,   -83,   -64,   -64,   -64,   324,   325,   350,   351,   -59,
     -59,   -59,   -59,     0,     0,     0,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -59,     0,   -59,   352,   353,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,   -86,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
     -87,   -73,   -73,   -73,   -73,   -73,   -73,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,   329,   -78,   -78,   -78,   -78,   -78,   -78,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,
     -69,   -69,   -78,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,   -69,   -69,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -75,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   -74,   -74,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -80,     0,   -80,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -88,     0,   -88,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -80,   -80,   -80,   -80,
     -80,   -80,   -65,   -65,   -65,   324,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -88,   -88,   -88,
     -88,   -88,   -88,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -67,   -67,   -67,   -67,   -67,   -67,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   356,   357,   358,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,   -68,   -68,   -68,   -68,   -68,   356,   357,
     358,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,   -67,   -67,   -67,   -67,   386,   387,
     388,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   386,
     387,   388,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,     0,   -70,   -70,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -79,     0,   -79,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -81,     0,
     -81,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -79,   -79,   -79,   -79,   -79,   -79,   -62,
     -62,   -62,   324,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -81,   -81,   -81,   -81,   -81,   -81,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -66,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -66,   -66,   -66,   -66,    95,
      96,    97,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,     0,     0,     0,   -76,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,     0,
     -77,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,     0,
       0,     0,   -74,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,     0,   -68,     0,   -67,   -67,   -67,   -67,
      95,    96,    97,   -68,   -68,   -68,   -68,    95,    96,    97,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,     0,     0,     0,     0,   -71,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -66,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   291,   292,   293,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,   -83,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,   -85,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,     0,     0,     0,
     -87,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -78,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,   -84,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -73,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
     -78,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -77,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -75,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -74,     0,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   291,   292,   293,   -68,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   291,
     292,   293,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,   -80,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -80,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,     0,     0,   -79,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -79,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -64,     0,   -64,   -64,   -64,
     354,   355,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,   -65,     0,   -65,
     -65,   -65,   354,   355,   -62,     0,   -62,   -62,   -62,   354,
     355,   -63,     0,   -63,   -63,   -63,   354,   355,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -62,   -62,     0,     0,   -62,   -62,   384,   385,
     -63,   -63,   -62,     0,   -63,   -63,   384,   385,     0,     0,
       0,   -62,   -62,    93,    94,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -63,   -63,    93,    94,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   289,   290,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   289,   290,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -62,
       0,     0,     0,     0,     0,   -62,   -62,   289,   290,   -63,
       0,     0,     0,     0,     0,   -63,   -63,   289,   290,     0,
     -63,   -63,   -63,   324,   325,   350,   351,   -60,   -60,   -60,
     -60,     0,     0,   285,   286,   -58,   -58,   -58,   -58,     0,
       0,   285,   286,   -59,   -59,   -59,   -59,     0,     0,     0,
     -60,     0,   -60,   352,   353,   -58,     0,     0,     0,     0,
       0,   287,   288,   -59,     0,     0,     0,     0,     0,   287,
     288,   285,   286,   -60,   -60,   -60,   -60,   320,   321,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -60,     0,     0,     0,     0,     0,   287,
     288,     0,     0,     0,   -60,   322,   323
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,   133,   172,     1,     0,     0,    35,     9,
      35,    36,     6,     6,    33,    35,   146,     9,    37,    10,
     150,   266,    35,    42,    42,   193,    53,     1,    22,     3,
       4,     5,     6,    58,     9,    52,    32,     9,    58,    56,
      53,    58,     9,     9,    10,    11,    12,    13,    14,    68,
      69,    70,    71,   298,    20,    21,   301,     1,    58,     3,
       4,     5,     6,    54,    50,     9,    10,    11,    12,    13,
      14,    15,    35,    17,    18,    19,    20,    21,    33,    34,
      35,    36,    35,    36,    58,    35,   331,    53,    50,    35,
      36,    57,    54,    56,   262,    58,    62,     9,    35,    36,
      66,    56,    35,    58,    51,    58,    50,    53,    58,    50,
      54,   105,   131,    57,   133,    35,   361,    35,    62,    56,
     139,    58,    66,    56,   143,    58,    56,   146,    58,   148,
     148,   150,    55,    56,   264,    55,    56,    55,    56,   158,
     159,   159,    57,   162,   162,   141,   142,    33,    34,    35,
      36,    56,   397,    58,    33,    34,    35,    36,    55,    56,
     179,   180,   181,   182,   183,    35,   296,    57,   164,    55,
      56,     9,    10,    11,    12,    13,    14,    56,   423,    58,
      50,   200,    20,    21,    50,    35,    36,    55,    56,   208,
     209,   210,   211,   212,    54,    35,    36,    50,    50,   444,
      50,    35,    36,     9,    10,    11,    12,    13,    14,   228,
     229,   230,   231,   232,    20,    21,    56,    55,    58,    57,
     465,    55,    56,     9,    62,    35,    36,    50,    66,   248,
     249,   250,   251,   252,    53,    35,    36,     9,    10,    11,
      12,    13,    14,    53,    50,   264,   265,   266,    20,    21,
      50,    57,    54,    56,   273,    58,    62,    50,    51,    52,
      66,   391,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,    35,   296,   297,   298,
      58,   300,   301,     9,    17,    57,    58,    50,    58,   308,
      62,    50,    50,    54,    66,    35,    36,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    54,    53,    55,    56,    55,    53,   338,
      33,    34,    35,    36,    56,    50,    58,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,    58,    56,    58,    58,    58,    57,   368,
      33,    34,    35,    36,    56,    54,    58,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,    55,   391,   392,   392,    58,    54,   396,   397,    19,
      20,    21,    55,    33,    34,    35,    36,     9,    10,    11,
      12,    13,    14,    33,    58,   414,   414,    37,    20,    21,
      50,    50,    42,   422,   423,     9,    10,    11,    12,    13,
      14,    50,    33,    34,    35,    36,    20,    21,    50,    33,
      34,    35,    36,    58,   443,   444,    53,    17,    68,    69,
      70,    71,    53,    58,    58,    57,    58,    56,    58,    58,
      62,    55,    56,    58,    66,   464,   465,    58,    33,    34,
      35,    36,    58,    57,    58,    56,    53,    58,    62,    50,
      51,    52,    66,   482,   482,    53,    57,     1,    53,     3,
       4,     5,     6,    53,    58,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    56,    53,
      58,   131,    58,   133,    33,    34,    35,    36,    56,   139,
      58,    53,    56,   143,    58,    56,   146,    58,   148,    17,
     150,    50,     3,     4,     5,     6,    50,    53,   158,   159,
      54,    55,   162,    57,    56,    56,    58,    58,    62,    56,
      53,    58,    66,    31,    32,    33,    34,    35,    36,   179,
     180,   181,   182,   183,    53,     9,    10,    11,    12,    13,
      14,     6,    50,    51,    52,   105,    20,    21,    -1,    57,
     200,    59,    60,    61,    62,    63,    64,    65,   208,   209,
     210,   211,   212,    -1,     9,    10,    11,    12,    13,    14,
      56,    -1,    58,    -1,    -1,    20,    21,    -1,   228,   229,
     230,   231,   232,    57,    58,    -1,    -1,    -1,    62,    -1,
       0,     1,    66,     3,     4,     5,     6,    -1,   248,   249,
     250,   251,   252,     0,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    57,    58,   264,   265,   266,    62,    -1,    -1,
      -1,    66,    -1,   273,    -1,    31,    32,    33,    34,    35,
      36,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,    -1,   296,   297,   298,    -1,
     300,   301,    58,    59,    60,    61,    62,    -1,   308,     0,
       1,    -1,     3,     4,     5,     6,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    -1,    -1,    -1,    -1,     0,     1,   338,     3,
       4,     5,     6,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    -1,    -1,    -1,    -1,     0,     1,   368,     3,
       4,     5,     6,    -1,    -1,    -1,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
      -1,   391,   392,    -1,    -1,    -1,   396,   397,    20,    21,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,   414,    37,    -1,    -1,    -1,    -1,
      51,    52,   422,   423,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     1,    -1,     3,     4,
       5,     6,    -1,   443,   444,    -1,    68,    69,    70,    71,
       0,     1,    -1,     3,     4,     5,     6,    -1,     1,    -1,
       3,     4,     5,     6,   464,   465,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,     1,   482,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    50,    -1,   131,
      -1,    54,    55,    -1,    57,    -1,    -1,   139,    -1,    62,
      -1,   143,    -1,    66,    31,    32,    33,    34,    35,    36,
      50,    -1,    -1,    -1,    54,    55,   158,    57,    -1,    -1,
      -1,    -1,    62,    -1,    51,    52,    66,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,   181,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,   200,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,   210,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    21,   230,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      34,    35,    -1,    37,    38,    39,    -1,    -1,   250,    -1,
      50,    -1,    -1,    -1,    54,    55,     1,    57,     3,     4,
       5,     6,    62,   265,   266,    -1,    66,    -1,    -1,    -1,
      -1,   273,    -1,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,   297,   298,    -1,   300,   301,
      -1,    95,    96,    97,    -1,    -1,   308,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,   330,   331,
      57,    58,    -1,    -1,    -1,    62,   338,   131,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,   143,
      31,    32,    33,    34,    35,    36,    50,    -1,   360,   361,
      54,    55,    -1,    57,   158,    -1,   368,    -1,    62,    -1,
      51,    52,    66,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   179,   180,   181,   182,   183,
      -1,    -1,    -1,    -1,   396,   397,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,   200,    20,    21,    -1,
      -1,    -1,    -1,    -1,   208,   209,   210,   211,   212,    -1,
     422,   423,    31,    32,    33,    34,    35,    36,     9,    10,
      11,    12,    13,    14,   228,   229,   230,   231,   232,    20,
      21,   443,   444,    -1,    57,    58,    55,    56,    -1,    62,
      59,    60,    -1,    66,   248,   249,   250,   251,   252,    -1,
      -1,    -1,   464,   465,     0,     1,    -1,     3,     4,     5,
       6,   265,   266,    -1,    -1,    -1,    57,    58,    -1,   273,
      -1,    62,    -1,    -1,    -1,    66,    -1,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,    -1,    -1,   297,   298,    -1,   300,   301,    -1,    -1,
      -1,    -1,     0,     1,   308,     3,     4,     5,     6,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    -1,    -1,
      -1,    -1,     0,     1,   338,     3,     4,     5,     6,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,     9,    10,
      11,    12,    13,    14,   368,    -1,    -1,    -1,    -1,    20,
      21,    -1,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,    21,    -1,    -1,    -1,
      -1,    -1,   396,   397,    -1,    31,    32,    33,    34,    35,
      36,    -1,    37,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    52,    -1,   422,   423,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    68,    69,    70,    71,    -1,    -1,   443,
     444,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    93,    94,
     464,   465,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,     0,     1,    57,
       3,     4,     5,     6,    62,    -1,   131,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,   158,    62,    -1,    -1,    -1,    66,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,   181,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,   200,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,   210,    -1,    20,    21,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   230,    66,    -1,     0,     1,
      57,     3,     4,     5,     6,    62,    -1,     0,     1,    66,
       3,     4,     5,     6,    57,   250,    -1,    -1,    -1,    62,
      -1,     0,     1,    66,     3,     4,     5,     6,    -1,    -1,
     265,   266,    -1,    -1,    -1,    -1,    -1,    -1,   273,    31,
      32,    33,    34,    35,    36,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    -1,    -1,    50,   294,
      21,    -1,   297,   298,    -1,   300,   301,    59,    60,    61,
      62,    -1,    -1,   308,     0,     1,    37,     3,     4,     5,
       6,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    -1,    -1,    -1,   329,   330,   331,    -1,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,    -1,    68,    69,    70,
      71,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    -1,    -1,    -1,   359,   360,   361,    -1,    89,    90,
      91,    92,    -1,   368,     0,     1,    -1,     3,     4,     5,
       6,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,    -1,    -1,    -1,   389,    31,    32,    33,    34,    35,
      36,   396,   397,    -1,     9,    10,    11,    12,    13,    14,
     131,    -1,    -1,    -1,    -1,    20,    21,    -1,   139,    55,
      56,    -1,   143,    59,    60,    61,    62,   422,   423,    -1,
      31,    32,    33,    34,    35,    36,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,   444,
      -1,    -1,    57,    -1,    55,    56,    -1,    62,    59,    60,
     181,    66,     9,    10,    11,    12,    13,    14,    -1,   464,
     465,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,   200,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,   210,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   230,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,   250,
      -1,    50,    20,    21,    -1,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    62,   265,   266,    -1,    66,    -1,    -1,
      -1,    -1,   273,    -1,    -1,    -1,    21,    -1,    -1,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,    -1,    57,
      -1,    -1,    37,   294,    62,    -1,   297,   298,    66,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,    68,    69,    70,    71,    -1,   329,   330,
     331,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,
      -1,    -1,    87,    88,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,    -1,    -1,    -1,    -1,    -1,   359,   360,
     361,     9,    10,    11,    12,    13,    14,   368,    -1,    -1,
      -1,    -1,    20,    21,    -1,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,   131,    -1,   389,    -1,
      -1,    -1,    -1,    -1,   139,   396,   397,    -1,   143,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    57,
      20,    21,    -1,   158,    62,    -1,    -1,    -1,    66,    -1,
      -1,   422,   423,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,   181,    -1,    -1,    -1,
      -1,    -1,   443,   444,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    55,    56,   200,    66,    59,    60,    61,
      62,    -1,    -1,   464,   465,   210,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,   230,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,   250,    -1,    -1,    20,    21,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    50,
     265,   266,    -1,    54,    55,    -1,    57,    -1,   273,    -1,
      -1,    62,    21,    -1,    53,    66,   281,   282,   283,   284,
      59,    60,    61,    62,    -1,    57,    -1,    -1,    37,   294,
      62,    -1,   297,   298,    66,   300,   301,    -1,    -1,    -1,
      -1,    -1,    -1,   308,     9,    10,    11,    12,    13,    14,
      -1,   316,   317,   318,   319,    20,    21,    -1,    -1,    68,
      69,    70,    71,    -1,   329,   330,   331,    -1,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,    -1,    86,    -1,    -1,
      -1,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,   359,   360,   361,    62,    -1,    -1,
      -1,    66,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   376,   377,   378,   379,    -1,    31,    32,    33,    34,
      35,    36,   131,    -1,   389,    -1,    -1,    -1,    -1,    -1,
     139,   396,   397,    -1,   143,    50,    -1,    31,    32,    33,
      34,    35,    36,    -1,    59,    60,    61,    62,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,   423,    -1,
      -1,    55,    56,    -1,    21,    59,    60,    61,    62,    63,
      64,    65,   181,    -1,    -1,    -1,    -1,    -1,   443,   444,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   464,
     465,   210,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    68,    69,    70,    71,    31,    32,    33,    34,    35,
      36,   230,    -1,    51,    52,    53,    -1,    -1,    85,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      56,   250,    58,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   265,   266,    -1,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    50,    51,    -1,    -1,
      -1,    -1,   281,   282,   131,    59,    60,    61,    62,    63,
      64,    65,   139,    -1,    -1,   294,   143,    -1,   297,   298,
      -1,   300,   301,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,   158,    -1,    -1,    -1,    -1,    -1,   316,   317,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     329,   330,   331,    -1,   181,    -1,    -1,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    55,    56,   346,   347,    59,
      60,    61,    62,   200,    -1,    -1,    -1,    -1,    21,    -1,
     359,   360,   361,   210,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,    37,    -1,    -1,   376,   377,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
     389,    -1,    -1,    -1,    -1,    -1,    -1,   396,   397,    -1,
      -1,    -1,    -1,   250,    -1,    68,    69,    70,    71,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,   265,   266,
      -1,    -1,    -1,   422,   423,    -1,   273,    -1,    50,    51,
      -1,    -1,    -1,    -1,   281,    98,    -1,    59,    60,    61,
      62,    63,    64,    65,   443,   444,    -1,   294,    -1,    -1,
     297,   298,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,   464,   465,    -1,   131,   316,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
     143,    -1,   329,   330,   331,    -1,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,   158,    -1,    -1,    -1,   346,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,   359,   360,   361,    -1,    -1,    -1,   181,    -1,
      -1,   368,    -1,    52,    -1,    -1,    55,    56,    57,   376,
      59,    60,    61,    62,    63,    64,    65,   200,    -1,    -1,
      -1,    -1,   389,    -1,    -1,    -1,    -1,   210,    -1,   396,
     397,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,   230,    -1,    -1,
      50,    -1,    52,    -1,    -1,   422,   423,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    56,   250,    58,    59,
      60,    61,    62,    63,    64,    65,   443,   444,    -1,    -1,
      -1,    -1,   265,   266,    31,    32,    33,    34,    35,    36,
     273,    -1,    -1,    -1,    -1,    -1,    -1,   464,   465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,   294,    59,    60,   297,   298,    -1,   300,   301,     1,
      -1,     3,     4,     5,     6,   308,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,   359,   360,   361,    -1,
      62,    51,    -1,    -1,    66,   368,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,
      -1,    -1,    -1,   396,   397,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,   422,
     423,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
     443,   444,    -1,    50,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    59,    60,    61,    62,    62,    58,    59,    60,
      66,   464,   465,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    31,    32,    33,    34,
      35,    36,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    50,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    59,    60,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,     1,    66,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    31,    32,    33,    34,    35,    36,    50,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      50,    -1,    -1,    66,    -1,    -1,    -1,    -1,    50,    59,
      60,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,     1,    66,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    31,    32,    33,    34,
      35,    36,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    50,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    59,    60,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,     1,    66,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,     1,    66,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,     1,    66,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,     1,    66,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,     1,    66,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,     1,    66,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,     1,    66,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,     1,    66,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    56,    50,    58,    59,    60,    54,    55,    -1,    57,
      -1,    -1,    51,    -1,    62,    -1,    -1,    56,    66,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    52,    53,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    31,    32,    33,    34,
      35,    36,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    51,    58,    59,    60,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    51,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    50,    51,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    50,
      51,    59,    60,    61,    62,    63,    64,    65,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    50,    51,    59,    60,    61,    62,    63,    64,    65,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    50,    51,    59,    60,    61,    62,    63,
      64,    65,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    -1,    -1,    -1,    50,    51,    59,    60,    61,
      62,    63,    64,    65,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    51,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    56,    -1,    58,    59,    60,    51,    31,    32,
      33,    34,    35,    36,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    51,    31,
      32,    33,    34,    35,    36,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      31,    32,    33,    34,    35,    36,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    31,    32,    33,    34,    35,    36,
      58,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    50,    -1,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      59,    60,    61,    62,    63,    64,    65,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    59,    60,    61,    62,    63,    64,    65,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    59,    60,    61,    62,    63,    64,
      65,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    59,    60,    61,    62,
      63,    64,    65,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      59,    60,    61,    62,    63,    64,    65,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    59,    60,    61,    62,    63,    64,    65,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,    60,
      61,    62,    63,    64,    65,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    56,    -1,    58,    59,    60,
      61,    62,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    56,    -1,    58,    59,    60,    61,
      62,    56,    -1,    58,    59,    60,    61,    62,    31,    32,
      33,    34,    35,    36,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    62,
      55,    56,    50,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    59,    60,    61,    62,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    50,    31,    32,    33,    34,    35,
      36,    -1,    -1,    59,    60,    61,    62,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      58,    59,    60,    61,    62,    31,    32,    33,    34,    35,
      36,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    31,    32,    33,    34,    35,    36,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    68,    69,    70,    72,
      99,    50,    54,    81,     0,    69,    50,     9,    55,    82,
      51,    52,    57,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    20,    21,    50,    57,    62,    66,
      70,    81,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    99,    88,    53,
      88,     1,     3,    58,    79,    80,    99,    50,    52,    57,
      57,    57,    81,    88,    95,    96,    95,    88,    95,    95,
      50,    55,    84,    50,    50,    35,    36,    33,    34,    31,
      32,    59,    60,    61,    62,    63,    64,    65,    51,     9,
      51,    53,    58,    58,    54,    56,    58,     9,    88,    58,
      88,    98,    88,    88,    17,    58,    90,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    89,
      10,    54,    54,    75,    78,    80,    54,    52,    53,    56,
      58,    58,    58,    57,    71,    88,    74,    77,    83,    55,
      73,    76,    53,    88,    81,    81,    88,    55,    56,    83,
      55,    55,    83,    55,    16,    58,    55,    88,    55,    55,
      81,    50,    54,     9,    10,    11,    12,    13,    14,    20,
      21,    57,    62,    66,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    54,     9,    10,    11,    12,    13,    14,
      57,    97,     9,    10,    11,    12,    13,    14,    20,    21,
      57,    62,    66,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     9,    10,    11,    12,    13,    14,    20,    21,
      57,    62,    66,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     9,    10,    11,    12,    13,    14,    20,    21,
      57,    62,    66,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    54,    55,    82,    52,    57,     9,    10,    11,
      12,    13,    14,    57,    95,    96,    97,    95,    88,    95,
      95,    35,    36,    33,    34,    31,    32,    59,    60,    61,
      62,    63,    64,    65,    51,    55,    82,    52,    57,    88,
      52,    57,     9,    10,    11,    12,    13,    14,    57,    95,
      96,    97,    95,    88,    95,    95,    35,    36,    33,    34,
      31,    32,    59,    60,    61,    62,    63,    64,    65,    51,
      52,    57,     9,    10,    11,    12,    13,    14,    57,    95,
      96,    97,    95,    88,    95,    95,    35,    36,    33,    34,
      31,    32,    59,    60,    61,    62,    63,    64,    65,    51,
      52,    57,     9,    10,    11,    12,    13,    14,    57,    95,
      96,    97,    95,    88,    95,    95,    35,    36,    33,    34,
      31,    32,    59,    60,    61,    62,    63,    64,    65,    51,
      55,    82,    83,    88,    58,    98,    52,    57,    88,    58,
      90,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    89,    83,    88,    58,    98,    58,    88,
      58,    98,    52,    57,    88,    58,    90,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    89,
      88,    58,    98,    52,    57,    88,    58,    90,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      89,    88,    58,    98,    52,    57,    88,    58,    90,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    89,    83,    55,    53,    58,    88,    58,    98,    58,
      55,    53,    58,    53,    58,    88,    58,    98,    58,    53,
      58,    88,    58,    98,    58,    53,    58,    88,    58,    98,
      58,    55,    53,    58,    53,    58,    53,    58,    53,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    71,    71,    73,    72,    74,    72,
      75,    72,    76,    72,    77,    72,    78,    72,    72,    79,
      79,    80,    80,    81,    82,    81,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    99,    99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     4,
       5,     8,     9,     6,     1,     3,     0,     9,     0,     9,
       0,     8,     0,     8,     0,     8,     0,     7,     5,     1,
       3,     2,     4,     2,     0,     4,     1,     2,     1,     2,
       2,     1,     1,     1,     2,     2,     5,     7,     5,     7,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     1,     4,
       3,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1
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
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2652 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2658 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2664 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2670 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2676 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 56 "src/language.y"
      { free((void*) ((*yyvaluep).sval)); }
#line 2682 "src/parser.c"
        break;

    case 68: /* declaration_list  */
#line 58 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2688 "src/parser.c"
        break;

    case 79: /* argument_list  */
#line 57 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2694 "src/parser.c"
        break;

    case 80: /* argument  */
#line 57 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2700 "src/parser.c"
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
#line 98 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2966 "src/parser.c"
    break;

  case 3:
#line 99 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 2972 "src/parser.c"
    break;

  case 4:
#line 103 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2978 "src/parser.c"
    break;

  case 5:
#line 104 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2984 "src/parser.c"
    break;

  case 6:
#line 105 "src/language.y"
    { (yyval.node) = NULL; }
#line 2990 "src/parser.c"
    break;

  case 7:
#line 106 "src/language.y"
    { (yyval.node) = NULL; }
#line 2996 "src/parser.c"
    break;

  case 8:
#line 110 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free((void*) (yyvsp[0].sval)); }
#line 3002 "src/parser.c"
    break;

  case 9:
#line 111 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval)); }
#line 3008 "src/parser.c"
    break;

  case 10:
#line 112 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free((void*) (yyvsp[-3].sval)); }
#line 3014 "src/parser.c"
    break;

  case 11:
#line 113 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free((void*) (yyvsp[-6].sval)); }
#line 3020 "src/parser.c"
    break;

  case 12:
#line 114 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free((void*) (yyvsp[-7].sval)); }
#line 3026 "src/parser.c"
    break;

  case 13:
#line 115 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free((void*) (yyvsp[-4].sval)); free((void*) (yyvsp[0].sval)); }
#line 3032 "src/parser.c"
    break;

  case 14:
#line 119 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3038 "src/parser.c"
    break;

  case 15:
#line 120 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3044 "src/parser.c"
    break;

  case 16:
#line 124 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3050 "src/parser.c"
    break;

  case 17:
#line 124 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-7].sval)); }
#line 3056 "src/parser.c"
    break;

  case 18:
#line 125 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3062 "src/parser.c"
    break;

  case 19:
#line 125 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-7].sval)); }
#line 3068 "src/parser.c"
    break;

  case 20:
#line 126 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3074 "src/parser.c"
    break;

  case 21:
#line 126 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-6].sval)); }
#line 3080 "src/parser.c"
    break;

  case 22:
#line 127 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3086 "src/parser.c"
    break;

  case 23:
#line 127 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-6].sval)); }
#line 3092 "src/parser.c"
    break;

  case 24:
#line 128 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3098 "src/parser.c"
    break;

  case 25:
#line 128 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-6].sval)); }
#line 3104 "src/parser.c"
    break;

  case 26:
#line 129 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3110 "src/parser.c"
    break;

  case 27:
#line 129 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free((void*) (yyvsp[-5].sval)); }
#line 3116 "src/parser.c"
    break;

  case 28:
#line 130 "src/language.y"
    { (yyval.node) = NULL; free((void*) (yyvsp[-3].sval)); }
#line 3122 "src/parser.c"
    break;

  case 29:
#line 134 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3128 "src/parser.c"
    break;

  case 30:
#line 135 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3134 "src/parser.c"
    break;

  case 31:
#line 139 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free((void*) (yyvsp[0].sval)); }
#line 3140 "src/parser.c"
    break;

  case 32:
#line 140 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval)); }
#line 3146 "src/parser.c"
    break;

  case 33:
#line 144 "src/language.y"
    { (yyval.node) = NULL; }
#line 3152 "src/parser.c"
    break;

  case 34:
#line 145 "src/language.y"
    { begin(NULL); }
#line 3158 "src/parser.c"
    break;

  case 35:
#line 145 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3164 "src/parser.c"
    break;

  case 36:
#line 149 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3170 "src/parser.c"
    break;

  case 37:
#line 150 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3176 "src/parser.c"
    break;

  case 38:
#line 154 "src/language.y"
    { (yyval.node) = NULL; }
#line 3182 "src/parser.c"
    break;

  case 39:
#line 155 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3188 "src/parser.c"
    break;

  case 40:
#line 156 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3194 "src/parser.c"
    break;

  case 41:
#line 157 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3200 "src/parser.c"
    break;

  case 42:
#line 158 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3206 "src/parser.c"
    break;

  case 43:
#line 159 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3212 "src/parser.c"
    break;

  case 44:
#line 160 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3218 "src/parser.c"
    break;

  case 45:
#line 161 "src/language.y"
    { (yyval.node) = NULL; }
#line 3224 "src/parser.c"
    break;

  case 46:
#line 165 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign_context((yyval.node)); }
#line 3230 "src/parser.c"
    break;

  case 47:
#line 166 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3236 "src/parser.c"
    break;

  case 48:
#line 170 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3242 "src/parser.c"
    break;

  case 49:
#line 171 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign_context((yyval.node)); }
#line 3248 "src/parser.c"
    break;

  case 50:
#line 175 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context((yyval.node)); }
#line 3254 "src/parser.c"
    break;

  case 51:
#line 176 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3260 "src/parser.c"
    break;

  case 52:
#line 180 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3266 "src/parser.c"
    break;

  case 53:
#line 181 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3272 "src/parser.c"
    break;

  case 54:
#line 187 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3278 "src/parser.c"
    break;

  case 55:
#line 188 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3284 "src/parser.c"
    break;

  case 56:
#line 192 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3290 "src/parser.c"
    break;

  case 57:
#line 193 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/}
#line 3296 "src/parser.c"
    break;

  case 58:
#line 197 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3302 "src/parser.c"
    break;

  case 59:
#line 198 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3308 "src/parser.c"
    break;

  case 60:
#line 199 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3314 "src/parser.c"
    break;

  case 61:
#line 203 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3320 "src/parser.c"
    break;

  case 62:
#line 204 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3326 "src/parser.c"
    break;

  case 63:
#line 205 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3332 "src/parser.c"
    break;

  case 64:
#line 206 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3338 "src/parser.c"
    break;

  case 65:
#line 207 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3344 "src/parser.c"
    break;

  case 66:
#line 211 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3350 "src/parser.c"
    break;

  case 67:
#line 212 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3356 "src/parser.c"
    break;

  case 68:
#line 213 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3362 "src/parser.c"
    break;

  case 69:
#line 217 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3368 "src/parser.c"
    break;

  case 70:
#line 218 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3374 "src/parser.c"
    break;

  case 71:
#line 219 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3380 "src/parser.c"
    break;

  case 72:
#line 220 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3386 "src/parser.c"
    break;

  case 73:
#line 224 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3392 "src/parser.c"
    break;

  case 74:
#line 225 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3398 "src/parser.c"
    break;

  case 75:
#line 226 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3404 "src/parser.c"
    break;

  case 76:
#line 227 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3410 "src/parser.c"
    break;

  case 77:
#line 228 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3416 "src/parser.c"
    break;

  case 78:
#line 232 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3422 "src/parser.c"
    break;

  case 79:
#line 233 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3428 "src/parser.c"
    break;

  case 80:
#line 234 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call",     ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval));}
#line 3434 "src/parser.c"
    break;

  case 81:
#line 235 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3440 "src/parser.c"
    break;

  case 82:
#line 239 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); retrieve((yyval.node), (yyval.node)->name); }
#line 3446 "src/parser.c"
    break;

  case 83:
#line 240 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, key); free(key); }
#line 3452 "src/parser.c"
    break;

  case 84:
#line 241 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , key); free(key); }
#line 3458 "src/parser.c"
    break;

  case 85:
#line 242 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3464 "src/parser.c"
    break;

  case 86:
#line 243 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3470 "src/parser.c"
    break;

  case 87:
#line 244 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , key); free(key); }
#line 3476 "src/parser.c"
    break;

  case 88:
#line 245 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3482 "src/parser.c"
    break;

  case 89:
#line 249 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3488 "src/parser.c"
    break;

  case 90:
#line 250 "src/language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3494 "src/parser.c"
    break;

  case 91:
#line 254 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3500 "src/parser.c"
    break;

  case 92:
#line 255 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3506 "src/parser.c"
    break;

  case 93:
#line 256 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3512 "src/parser.c"
    break;

  case 94:
#line 257 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3518 "src/parser.c"
    break;


#line 3522 "src/parser.c"

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
#line 260 "src/language.y"


