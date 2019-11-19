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
#line 76 "language.y"

#include "actions.h"
int yylex (void);

#line 98 "src/parser.c"


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
#define YYLAST   7572

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  521

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
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    87,    88,    92,    93,    94,    95,    99,
     100,   101,   102,   103,   104,   108,   109,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     124,   125,   129,   130,   134,   135,   135,   139,   140,   144,
     145,   146,   147,   148,   149,   150,   151,   155,   156,   160,
     161,   165,   166,   170,   171,   175,   176,   180,   181,   185,
     186,   187,   191,   192,   193,   194,   195,   199,   200,   201,
     205,   206,   207,   208,   212,   213,   214,   215,   216,   220,
     221,   222,   223,   227,   228,   229,   230,   231,   232,   233,
     237,   238,   242,   243,   244,   245
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
  "\"+\"", "OP_NEG", "\"-\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"",
  "\"==\"", "\"!=\"", "\"||\"", "\"&&\"", "\"=\"", "UNRECOGNIZED_TOKEN",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      59,    61,    91,    93,   123,   125,    44,    40,    41,    60,
      62,    43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -247

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-247)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     491,   -35,    -2,     4,    35,    38,    10,   600,   613,    13,
     669,    95,   696,   940,   726,  -247,   795,   810,   398,  1204,
      56,  1493,   162,    29,    58,   502,  2326,  2478,  4497,  4532,
    4539,    94,   102,   113,    71,  1507,  1507,  1046,  1705,  1507,
    1507,   130,  1412,  1480,  1791,  2059,  2738,   138,   158,    53,
      43,   350,  2915,  1558,  6288,  6323,  4574,  4581,   212,   194,
     225,   230,   226,     0,   234,   160,   262,   283,  2834,  1763,
     228,  1705,  1705,   300,   271,  6330,  6365,  6372,   264,  6407,
    6414,  2902,  1252,  2923,  2987,  3008,  1507,  1507,  1507,  1507,
    1507,  1507,  1507,  1507,  1507,  1507,  1507,  1507,  1507,  1507,
     146,     1,   275,  1282,   272,  3072,   247,   296,   235,   302,
    4616,   289,   290,   298,   317,   319,  4623,   391,   386,  3000,
    3085,  2833,  7366,  7372,  7404,  6449,  6456,  6491,  6498,  6533,
     103,   332,  1822,  3093,    56,   339,   381,  3157,   348,  4658,
    1942,  4665,   357,   364,  1705,   171,   204,    56,   368,  3178,
    1548,    56,   383,   401,   410,   466,  3242,   376,   392,   378,
    3263,  1557,  1571,  3327,  1624,   364,   393,   397,   258,  1684,
    1748,  3348,  3412,  3433,  2282,  4700,  4735,  4770,  4805,  4840,
    1980,  1980,  1705,  1980,  1980,    19,    54,   318,    66,  2071,
    6546,  6581,  4875,  4910,  3497,  2620,  6588,  6623,  6630,  6665,
    6672,  1705,  6707,  1059,  4945,  4966,  4987,  5008,  5029,  2078,
    2078,  1705,  2078,  2078,    74,   100,     6,  2839,   604,  3810,
    3845,  5050,  5071,   729,  2750,  3761,  3796,  3831,  3866,  2145,
    2145,  1705,  2145,  2145,   -27,   -10,   121,  2195,  2294,  2630,
    5085,  3901,  3936,   853,  3971,  4006,  4041,  4076,  4111,  2236,
    2236,  1705,  2236,  2236,   -18,   260,   114,  1131,  1674,  5120,
    5131,  4146,  4181,  3518,  3582,    56,  1763,   396,  4195,  6720,
    6755,  6768,  6803,  6816,  1705,  6851,  6864,  6899,  6912,   394,
    6947,  6960,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,
    1980,  1980,  1980,  1980,  1980,  1980,   434,    56,  1763,   536,
     402,  1763,   565,  4230,  3880,  3915,  3950,  3985,  4020,  1705,
    4055,  4090,  4125,  4160,   403,  4294,  4329,  2078,  2078,  2078,
    2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,
    2078,  1763,   912,  1315,  5166,  5176,  5211,  5221,  5256,  1705,
    5266,  5301,  5311,  5346,   407,  5356,  5391,  2145,  2145,  2145,
    2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,  2145,
    2145,  1763,  1013,  2571,  5402,  5437,  5448,  5483,  5494,  1705,
    5529,  5540,  5575,  5586,   415,  5621,  5632,  2236,  2236,  2236,
    2236,  2236,  2236,  2236,  2236,  2236,  2236,  2236,  2236,  2236,
    2236,   817,    56,  3603,   421,  5667,   432,  1763,  1127,   431,
    5702,   169,   379,  7498,  7506,  7414,  7424,  7456,  7466,  6995,
    7008,  7043,  7056,  7091,    70,  3667,   448,  7098,   442,  7133,
     464,  5737,   446,  1763,  1159,   471,  5758,   159,   222,  4239,
    7512,  4924,  5681,  5716,  6053,  4364,  4399,  4434,  4714,  4749,
     107,   477,  4245,   449,  1763,  1299,   473,  4280,    59,   167,
    3745,  4956,  7281,  7313,  7320,  7327,  5772,  5807,  5817,  5852,
    5862,   -13,   498,  4315,   453,  1763,  1382,   486,  4350,   288,
     151,  1709,  2673,  1988,  2244,  2390,  7359,  5897,  5908,  5943,
    5954,  5989,   179,  3688,  3752,  6004,  6039,   505,  7146,   456,
    7181,   439,  7188,  7223,  6074,  6095,   520,  4784,   457,  4819,
    4385,  4420,   527,  6109,   468,  6144,  4455,  4490,   528,  6155,
     469,  6190,   840,  7236,  7271,  4854,  4889,  6200,  6235,  6246,
    6281
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,  -247,   548,   236,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,   476,     3,  -167,  -131,   -19,  -247,
    -247,  -247,   737,  2436,  2252,  2100,  1844,  1588,  1314,   945,
     -20,   359,  -246,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    41,   145,    10,   151,   147,   134,
     152,   148,   135,    65,    66,    42,    20,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      76,   202,   112,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    56,   192,   149,    14,    11,   265,   -92,   347,   -92,
      15,   131,    11,   -93,    56,    12,   160,   377,   221,    13,
     163,   396,   347,    56,    83,   -55,   348,   297,    67,   -53,
      62,   -53,    63,     3,     4,     5,    73,   -53,   -53,   319,
     320,   -57,   -57,   -54,   -94,   -54,   -55,   -95,   -55,   192,
     241,   221,   221,   418,   282,   132,   422,    24,   104,     2,
       3,     4,     5,    17,   -57,    25,    26,    27,    28,    29,
      30,    31,   -53,    32,    33,    34,    35,    36,   -55,    87,
      25,    26,    27,    28,    29,    30,   443,    64,    86,   -55,
     283,    35,    36,   -55,   -56,   348,   392,   286,   287,   -59,
     -59,   -59,   -59,   -53,    18,   282,    37,   -55,    68,   317,
     173,    67,   261,    38,    56,   -56,   464,   -56,    39,   -59,
     241,   -51,    40,   -54,   221,   288,   289,    56,    38,    56,
      83,    56,   -53,    39,   393,   -55,   318,    40,    86,   261,
      56,    83,   317,    56,    83,   155,   156,   379,   380,   -57,
     -57,    71,   489,   -54,   349,   350,   -57,   -57,   -55,    72,
     276,   276,   221,   276,   276,   -54,   415,   194,   171,   -57,
     -57,   174,   175,   176,   177,   178,   179,   -57,   498,   -57,
      81,   221,   180,   181,   379,   380,   -58,   -58,    84,   311,
     311,   221,   311,   311,   -56,   318,    -9,    21,    22,   504,
     349,   350,   -58,   -58,   -56,   283,   -58,   -58,    85,   341,
     341,   221,   341,   341,   377,    60,   106,   -56,   107,   182,
     510,   100,   -56,   -58,   183,   -58,   158,   159,   184,   371,
     371,   221,   371,   371,   -54,   -54,     9,   223,   224,   225,
     226,   227,   228,     9,   -10,    56,   192,   241,   229,   230,
       2,     3,     4,     5,   221,   319,   320,   -58,   -58,   -15,
     -15,   483,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   101,    56,   192,   241,
     -58,   192,   241,   102,   103,   231,   110,   138,   105,   221,
     232,   -32,   108,   -32,   233,   -55,   378,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   192,   241,   -16,   -16,   -55,   -55,   115,   -30,   221,
     -30,   -52,   116,   -56,   378,   -11,   133,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   192,   241,   -56,   -56,   -90,   140,   -90,   141,   221,
     137,   284,   285,   -57,   -57,   139,   142,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   -57,    56,    56,    83,   143,   144,   192,   241,    57,
      57,   193,   -14,    88,    89,   -57,   -57,   243,   244,   245,
     246,   247,   248,    57,   150,    56,    83,   222,   249,   250,
     -57,   153,    57,   192,   241,   223,   224,   225,   226,   227,
     228,   263,   284,   285,   -58,   -58,   229,   230,   173,    88,
      89,   -58,   -58,   161,   192,   241,   -56,    87,   193,   242,
     222,   222,   -58,   167,   166,   251,   -58,   -31,   164,   -31,
     252,   -56,   -12,   172,   253,   192,   241,   -13,    -9,    21,
      22,   -34,   400,   231,   395,    23,   -36,   -33,   232,   -33,
     419,   426,   233,    56,    83,   447,   -91,   -47,   -91,   -47,
     -47,   -47,   -47,   468,   485,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   165,   -47,   -47,   -47,   -47,   -47,   140,   490,
     486,   262,     1,    57,     2,     3,     4,     5,   140,   242,
     493,   492,   140,   222,   495,   140,    57,   501,    57,   140,
      57,   507,   140,   140,   514,   516,   -47,   494,   262,    57,
     -47,   -47,    57,   -47,   140,   140,   518,   520,   -47,   499,
     500,   505,   -47,   -83,   -83,   -83,   -83,   -83,   -83,   277,
     277,   222,   277,   277,   511,   223,   224,   225,   226,   227,
     228,   506,   -83,   -83,    69,    16,   229,   230,   513,    70,
     222,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   312,   312,
     222,   312,   312,   515,   223,   224,   225,   226,   227,   228,
     517,   519,   136,     0,     0,   229,   230,     0,   342,   342,
     222,   342,   342,   231,   417,     0,     0,     0,   232,     0,
      -2,     1,   233,     2,     3,     4,     5,     0,   372,   372,
     222,   372,   372,    -3,    -3,     0,    -3,    -3,    -3,    -3,
       0,     0,   231,   421,    57,   193,   242,   232,     0,     0,
       0,   233,     0,   222,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,     0,    57,   193,   242,     0,
     193,   242,   -62,   -62,   -62,   325,   326,     0,   222,    -5,
      -5,     0,    -5,    -5,    -5,    -5,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     193,   242,     0,     0,     0,     0,    -7,    -7,   222,    -7,
      -7,    -7,    -7,     0,     0,     0,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     193,   242,     0,     0,     0,     0,    -8,    -8,   222,    -8,
      -8,    -8,    -8,     0,     0,     0,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
       0,    57,    57,     0,     0,     0,   193,   242,    59,    61,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,    74,     0,     0,    57,    78,     0,     0,     0,     0,
     -83,   331,   193,   242,     0,   -83,   332,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,    -4,    -4,     0,    -4,    -4,
      -4,    -4,     0,   193,   242,     0,   109,   111,   113,   114,
      -6,    -6,     0,    -6,    -6,    -6,    -6,     0,   -34,     0,
     -34,   -34,   -34,   -34,   193,   242,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -36,    57,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,   -34,     0,   146,
       0,   -34,   -34,     0,   -34,     0,     0,   154,     0,   -34,
       0,   157,     0,   -34,   -83,   -83,   -83,   -83,   -83,   -83,
     -36,     0,     0,     0,   -36,   -36,   168,   -36,     0,     0,
       0,     0,   -36,     0,   -83,   361,   -36,     0,   -83,   -83,
     362,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   279,
       0,   223,   224,   225,   226,   227,   228,     0,     0,     0,
       0,     0,   229,   230,     0,     0,     0,     0,   300,     0,
       0,   -35,     0,   -35,   -35,   -35,   -35,     0,   314,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   191,   344,   231,
     442,     0,     0,     0,   232,     0,     0,     0,   233,     0,
      75,    77,     0,   220,    79,    80,     0,     0,   374,     0,
     -35,     0,     0,     0,   -35,    19,     0,   -35,     0,     0,
       0,     0,   -35,   394,   111,     0,   -35,     0,     0,     0,
       0,   399,     0,     0,   191,   240,   220,   220,     0,     0,
       0,     0,   223,   224,   225,   226,   227,   228,     0,     0,
       0,     0,     0,   229,   230,   416,   111,     0,   420,   111,
       0,   127,   128,   129,     0,     0,   425,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   441,   111,
     231,   463,     0,     0,     0,   232,   446,   260,     0,   233,
       0,     0,     0,     0,     0,   240,     0,     0,     0,   220,
     -83,   -83,   -83,   -83,   -83,   -83,   -39,     0,   462,   111,
     -39,   -39,     0,   -39,   260,     0,   467,     0,   -39,     0,
     -83,   301,   -39,     0,     0,     0,   302,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   275,   278,   220,   280,   281,
       0,     0,     0,     0,   487,   111,   223,   224,   225,   226,
     227,   228,     0,     0,     0,     0,   220,   229,   230,     0,
       0,     0,     0,     0,   310,   313,   220,   315,   316,     0,
     496,   111,   381,   382,   -59,   -59,   -59,   -59,   223,   224,
     225,   226,   227,   228,   340,   343,   220,   345,   346,   229,
     230,   502,   111,     0,   231,   488,   -59,   -59,     0,   232,
     383,   384,     0,   233,   370,   373,   220,   375,   376,     0,
       0,     0,   508,   111,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   191,   240,     0,     0,     0,   231,   497,     0,   220,
       0,   232,     0,     0,     0,   233,     0,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   411,   412,   413,
     191,     0,     0,   191,   240,     0,   191,   240,     0,     0,
       0,     0,   -36,   -36,   220,   -36,   -36,   -36,   -36,     0,
       0,     0,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   437,   438,   439,   220,   191,   240,     0,     0,
       0,     0,   -29,   -29,   220,   -29,   -29,   -29,   -29,     0,
       0,     0,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   458,   459,   460,   240,   191,   240,   223,   224,
     225,   226,   227,   228,   220,     0,     0,     0,     0,   229,
     230,     0,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   479,   480,   481,   260,   190,     0,     0,     0,
       0,     0,   191,   240,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   219,     0,     0,     0,   231,   503,     0,     0,
       0,   232,     0,     0,     0,   233,     0,   444,   191,   240,
       0,   -83,   445,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   190,   239,   219,   219,     0,     0,   191,
     240,   223,   224,   225,   226,   227,   228,     0,     0,     0,
       0,     0,   229,   230,     0,     0,     0,     0,   125,   126,
     191,   240,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   231,
     509,     0,     0,     0,   232,     0,   259,     0,   233,     0,
       0,     0,     0,     0,   239,     0,     0,     0,   219,     0,
       0,     0,   -44,     0,     0,     0,   -44,   -44,     0,   -44,
       0,     0,     0,   259,   -44,     0,     0,     0,   -44,     0,
       0,    24,     0,     2,     3,     4,     5,     0,     0,    25,
      26,    27,    28,    29,    30,    31,   219,    32,    33,    34,
      35,    36,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    35,    36,   219,   195,   196,   197,   198,
     199,   200,     0,     0,     0,   219,     0,    35,    36,     0,
      37,     0,     0,     0,   173,    82,     0,    38,     0,     0,
       0,     0,    39,     0,     0,   219,    40,     0,   -28,   -28,
      38,   -28,   -28,   -28,   -28,    39,     0,   -26,   -26,    40,
     -26,   -26,   -26,   -26,   201,   219,     0,     0,     0,    39,
       0,   -22,   -22,    40,   -22,   -22,   -22,   -22,     0,     0,
     190,   239,     0,     0,     0,     0,     0,     0,   219,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   190,   190,   190,   190,
     190,   190,   190,   190,   409,   410,     0,     0,   -62,   190,
     189,     0,   190,   239,     0,   190,   239,   -62,   -62,    94,
      95,     0,     0,   219,   -24,   -24,   218,   -24,   -24,   -24,
     -24,   219,   219,   219,   219,   219,   219,   219,   219,   435,
     436,     0,     0,     0,   219,   190,   239,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,   189,   238,   218,
     218,   239,   239,   239,   239,   239,   239,   239,   239,   456,
     457,     0,     0,     0,   239,   190,   239,     0,   121,   122,
     123,   124,     0,   219,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   259,   259,   259,   259,   259,   259,   259,   259,   477,
     478,     0,     0,     0,   259,   -62,   -62,   -62,   -62,   -62,
     -62,   190,   239,     0,   203,   204,   205,   206,   207,   208,
     258,     0,     0,     0,     0,   209,   210,     0,   238,   -62,
     -62,     0,   218,   -62,   -62,   385,   386,   190,   239,     0,
     381,   382,   -60,   -60,   -60,   -60,     0,   258,   -18,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,     0,   190,   239,
       0,     0,   211,     0,   -60,   -60,     0,   212,   383,   384,
     218,   213,   174,   175,   176,   177,   178,   179,     0,   190,
     239,     0,     0,   180,   181,     0,     0,     0,     0,   218,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,   218,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,     0,   218,
     182,     0,     0,     0,     0,   183,     0,     0,     0,   184,
       0,   243,   244,   245,   246,   247,   248,     0,     0,   218,
       0,   -37,   249,   250,     0,   -37,   -37,     0,   -37,     0,
       0,     0,     0,   -37,   189,   238,     0,   -37,     0,     0,
       0,     0,   218,     0,     0,     0,   188,     0,     0,     0,
     189,   189,   189,   189,   405,   406,   407,   408,     0,   251,
       0,     0,   217,   189,   252,     0,   189,   238,   253,   189,
     238,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,   218,   218,   218,   218,   431,
     432,   433,   434,   188,   237,   217,   217,     0,   218,   189,
     238,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,   119,   120,     0,   238,   238,   238,   238,   452,
     453,   454,   455,     0,     0,     0,     0,     0,   238,   189,
     238,   223,   224,   225,   226,   227,   228,   218,     0,     0,
       0,     0,   229,   230,     0,   258,   258,   258,   258,   473,
     474,   475,   476,     0,     0,     0,   257,     0,   258,     0,
       0,     0,     0,     0,   237,   189,   238,     0,   217,   268,
     269,   270,   271,   272,   273,     0,     0,     0,     0,   231,
     180,   181,     0,   257,   232,     0,     0,     0,   233,     0,
       0,   189,   238,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   217,     0,     0,     0,
       0,     0,   189,   238,     0,     0,     0,   274,     0,     0,
       0,     0,   183,   -65,   -65,   217,   184,   -65,   -65,   385,
     386,     0,     0,   189,   238,   217,     0,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   217,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,   303,   304,   305,
     306,   307,   308,     0,     0,   217,     0,     0,   209,   210,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -42,
     188,   237,     0,   -42,   -42,     0,   -42,     0,   217,     0,
       0,   -42,   187,     0,   -62,   -42,   188,   188,   403,   404,
     -62,   -62,   290,   291,     0,   309,     0,     0,   216,   188,
     212,     0,   188,   237,   213,   188,   237,     0,     0,     0,
       0,     0,     0,   217,   333,   334,   335,   336,   337,   338,
       0,   217,   217,   429,   430,   229,   230,     0,     0,   187,
     236,   216,   216,     0,   217,   188,   237,     0,     0,     0,
       0,     0,     0,   217,     0,     0,     0,   118,     0,     0,
       0,   237,   237,   450,   451,     0,     0,     0,     0,     0,
       0,     0,   339,     0,   237,   188,   237,   232,     0,     0,
       0,   233,     0,   217,     0,     0,     0,     0,     0,     0,
       0,   257,   257,   471,   472,     0,   351,   352,   -59,   -59,
     -59,   -59,   256,     0,   257,     0,     0,     0,     0,     0,
     236,   188,   237,     0,   216,   363,   364,   365,   366,   367,
     368,   -59,     0,   -59,   353,   354,   249,   250,     0,   256,
       0,     0,     0,     0,     0,     0,     0,   188,   237,     0,
       0,     0,     0,     0,   186,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   216,     0,     0,     0,     0,     0,   188,   237,
     215,     0,     0,   369,     0,     0,     0,     0,   252,   -66,
     -66,   216,   253,   -66,   -66,   385,   386,     0,     0,   188,
     237,   216,     0,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,   186,   235,   215,   215,   -62,   -62,   -62,   -62,   -62,
     -62,   216,     0,   -83,   266,   -83,     0,     0,   117,   267,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
     -62,   216,   -62,   -62,   -62,   355,   356,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,   187,   236,     0,     0,
       0,     0,     0,     0,   216,     0,   -84,   -84,     0,     0,
       0,     0,   187,   402,   255,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   235,     0,     0,   187,   215,     0,   187,   236,
       0,   187,   236,     0,     0,     0,     0,     0,     0,   216,
       0,   255,     0,     0,     0,     0,     0,   216,   428,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
     216,   187,   236,     0,   215,     0,     0,     0,     0,   216,
       0,     0,     0,     0,     0,   -63,   -63,   236,   449,   -63,
     -63,   385,   386,   215,     0,     0,     0,     0,   185,     0,
     236,   187,   236,   215,     0,     0,     0,     0,     0,   216,
       0,     0,     0,     0,   214,     0,     0,   256,   470,     0,
       0,     0,     0,   215,     0,     0,     0,     0,     0,     0,
     256,     0,     0,     0,     0,     0,     0,   187,   236,     0,
       0,     0,     0,   215,     0,   185,   234,   214,   214,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,   186,   235,
       0,     0,     0,   187,   236,     0,   215,     0,   -85,   -85,
       0,     0,     0,     0,   401,   130,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   187,   236,     0,   186,     0,     0,
     186,   235,     0,   186,   235,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,   187,   236,     0,   254,   427,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     214,     0,   215,   186,   235,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,   254,     0,     0,     0,   448,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,   235,   186,   235,     0,     0,     0,   214,     0,
       0,   215,     0,   465,     0,     0,   -83,   -83,   466,   469,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   214,     0,     0,
       0,     0,   255,     0,     0,     0,     0,   214,     0,   186,
     235,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   214,     0,     0,
     -83,     0,   298,     0,     0,   186,   235,   299,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -67,   214,   -67,   -67,
     -67,   -67,   -67,   357,   358,   359,   186,   235,     0,     0,
       0,     0,   185,   234,   381,   382,   -61,   -61,   -61,   -61,
     214,     0,     0,     0,     0,     0,     0,   186,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,   -61,
       0,   414,   383,   384,   185,   234,     0,   185,   234,   -43,
       0,   -43,   -43,   -43,   -43,   214,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,   440,   185,   234,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -43,     0,
       0,     0,   -43,   -43,     0,   -43,   461,   185,   234,     0,
     -43,   -84,     0,     0,   -43,   214,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   482,     0,     0,     0,
       0,     0,     0,   185,   234,   -46,     0,   -46,   -46,   -46,
     -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,   185,
     234,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     321,   322,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
     185,   234,     0,   -65,   -46,     0,     0,     0,   -46,   -46,
       0,   -46,   -65,   -65,    94,    95,   -46,   -59,   323,   324,
     -46,   185,   234,   -40,     0,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,    90,    91,   -59,   -59,
     -59,   -59,   -40,     0,     0,     0,   -40,   -40,     0,   -40,
       0,     0,     0,     0,   -40,   -59,     0,     0,   -40,     0,
       0,     0,     0,   -38,    92,    93,     0,   -38,   -38,     0,
     -38,     0,     0,     0,     0,   -38,     0,     0,   -45,   -38,
     -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -41,
       0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,    90,    91,   -60,   -60,   -60,   -60,   -45,     0,     0,
       0,   -45,   -45,     0,   -45,     0,     0,     0,     0,   -45,
     -60,     0,     0,   -45,     0,     0,     0,     0,   -41,    92,
      93,     0,   -41,   -41,     0,   -41,     0,     0,     0,     0,
     -41,     0,     0,   -21,   -41,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,    90,    91,   -61,   -61,
     -61,   -61,   -21,     0,     0,     0,   -21,   -27,     0,   -21,
       0,     0,     0,     0,   -21,   -61,     0,     0,   -21,     0,
       0,     0,     0,   -19,    92,    93,     0,   -19,   -25,     0,
     -19,     0,     0,     0,     0,   -19,     0,     0,   -17,   -19,
     -17,   -17,   -17,   -17,     0,     0,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,    24,
       0,     2,     3,     4,     5,     0,     0,    25,    26,    27,
      28,    29,    30,    31,     0,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,   -17,     0,     0,
       0,   -17,   -23,     0,   -17,     0,     0,     0,     0,   -17,
       0,     0,     0,   -17,     0,     0,     0,     0,    37,     0,
       0,     0,   173,   162,     0,    38,     0,     0,     0,     0,
      39,     0,     0,   -49,    40,   -49,   -49,   -49,   -49,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   -49,   -49,   -49,    24,     0,     2,     3,     4,     5,
       0,     0,    25,    26,    27,    28,    29,    30,    31,     0,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,   -49,     0,     0,     0,   -49,   -49,     0,   -49,
       0,     0,     0,     0,   -49,     0,     0,     0,   -49,     0,
       0,     0,     0,    37,     0,     0,     0,   173,   169,     0,
      38,     0,     0,     0,     0,    39,     0,     0,    24,    40,
       2,     3,     4,     5,     0,     0,    25,    26,    27,    28,
      29,    30,    31,     0,    32,    33,    34,    35,    36,   -48,
       0,   -48,   -48,   -48,   -48,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,   173,   170,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,    40,     0,     0,     0,     0,   -48,     0,
       0,     0,   -48,   -48,     0,   -48,     0,     0,     0,     0,
     -48,     0,     0,   -50,   -48,   -50,   -50,   -50,   -50,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -35,     0,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,     0,   -50,     0,     0,     0,   -50,   -50,     0,   -50,
       0,     0,     0,     0,   -50,     0,     0,     0,   -50,     0,
       0,     0,     0,   -35,     0,     0,     0,   -35,   264,     0,
     -35,     0,     0,     0,     0,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,     0,
       0,   -35,   296,     0,   -35,     0,     0,     0,     0,   -35,
       0,     0,     0,   -35,     0,     0,     0,     0,   -35,     0,
       0,     0,   -35,   391,     0,   -35,     0,     0,     0,     0,
     -35,     0,     0,   -34,   -35,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,    24,     0,     2,     3,     4,     5,
       0,     0,    25,    26,    27,    28,    29,    30,    31,     0,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,   -34,     0,     0,     0,   -34,   -34,     0,   -34,
       0,     0,     0,     0,   -34,     0,     0,     0,   -34,     0,
       0,     0,     0,    37,     0,     0,     0,   173,   484,     0,
      38,     0,     0,     0,     0,    39,     0,     0,    24,    40,
       2,     3,     4,     5,     0,     0,    25,    26,    27,    28,
      29,    30,    31,     0,    32,    33,    34,    35,    36,    24,
       0,     2,     3,     4,     5,     0,     0,    25,    26,    27,
      28,    29,    30,    31,     0,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,   173,   491,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,    40,     0,     0,     0,     0,    37,     0,
       0,     0,   173,   512,     0,    38,     0,     0,     0,     0,
      39,     0,     0,   -36,    40,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,   351,   352,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,   -60,   -36,   -60,   353,   354,   -36,   -36,     0,   -36,
       0,     0,   -85,     0,   -36,     0,     0,   -85,   -36,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -86,     0,     0,
       0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -67,   -67,
     -67,   -67,   -67,   327,   328,   329,   -70,   -70,   -70,   -70,
     -70,   -70,   -87,     0,     0,     0,     0,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -84,   -84,   -84,   -84,   -84,   -84,   -88,     0,     0,
       0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -74,   -74,   -74,   -74,   -74,   -74,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,   360,     0,     0,     0,     0,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -79,   -79,   -79,
     -79,   -79,   -79,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,   -79,     0,     0,
       0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -84,   -84,   -84,   -84,   -84,   -84,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -84,     0,     0,     0,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,   -85,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -77,   -77,   -77,   -77,
     -77,   -77,   -86,     0,     0,     0,   -86,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -74,   -74,   -74,   -74,   -74,   -74,   -87,     0,     0,
       0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -79,   -79,   -79,   -79,
     -79,   -79,   -88,     0,     0,     0,   -88,   -88,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -74,   -74,   -74,
     -74,   -74,   -74,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -78,   -78,   -78,   -78,   -78,   -78,   390,     0,     0,
       0,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -83,   -83,   -83,   -83,
     -83,   -83,   -79,     0,     0,     0,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   397,   -83,     0,
       0,     0,   398,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
     321,   322,   -60,   -60,   -60,   -60,   -81,   -81,   -81,   -81,
     -81,   -81,   423,     0,     0,     0,     0,   424,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -81,   -60,   323,   324,
       0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -89,     0,     0,     0,     0,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -81,   -81,   -81,   -81,
     -81,   -81,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -75,   -75,   -75,   -75,   -75,   -75,   -81,     0,     0,     0,
     -81,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -68,   -68,   -68,   -68,   -68,
     -68,   -89,     0,     0,     0,   -89,   -89,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,
     -80,   -80,   -68,   -68,   -68,   -68,   -68,   327,   328,   329,
     -69,   -69,   -69,   -69,   -69,   -69,   -80,     0,     0,     0,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,   -82,   -82,   -82,   -82,   -82,   -69,   -69,   -69,
     -69,   -69,   327,   328,   329,   -71,   -71,   -71,   -71,   -71,
     -71,   -82,     0,     0,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -80,   -80,   -80,   -80,
     -80,   -80,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
     -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,   -82,   -82,   -86,   -86,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,     0,     0,     0,   -88,
     -88,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -74,    99,     0,     0,     0,     0,
       0,   -79,   -79,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,   -81,   -81,     0,     0,
       0,     0,     0,   -89,   -89,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,     0,     0,     0,   -82,   -82,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -84,     0,   -84,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,   -85,     0,   -85,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -81,   -81,   -81,   -81,   -81,
     -81,   -86,     0,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -89,   -89,   -89,   -89,   -89,   -89,   -87,     0,   -87,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,     0,   -88,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -74,   -74,   -74,   -74,
     -74,   -74,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -82,   -82,   -82,   -82,   -82,   -82,   295,     0,   -74,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -79,   -79,   -79,   -79,   -79,   -79,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -65,   -65,   -65,   -65,   -65,
     -65,   -79,     0,   -79,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -84,   -84,   -84,   -84,
     -84,   -84,   -65,   -65,   -65,   325,   326,   351,   352,   -61,
     -61,   -61,   -61,     0,     0,     0,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -61,     0,   -61,   353,   354,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,   -86,   -87,
     -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
     -88,   -74,   -74,   -74,   -74,   -74,   -74,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,   330,   -79,   -79,   -79,   -79,   -79,   -79,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -70,   -70,   -70,   -70,
     -70,   -70,   -79,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,   -67,   -67,     0,     0,   -67,
     -67,   -67,   -67,   387,   388,   389,   -70,   -70,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -84,   -84,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -74,   -74,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -75,   -75,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -81,     0,
     -81,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,   -66,
     -66,   -66,   325,   326,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -89,     0,   -89,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -81,   -81,
     -81,   -81,   -81,   -81,   -63,   -63,   -63,   325,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -89,
     -89,   -89,   -89,   -89,   -89,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -68,   -68,   -68,   -68,   -68,   -68,   -89,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   357,   358,   359,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     357,   358,   359,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,
     387,   388,   389,   -69,   -69,     0,     0,   -69,   -69,   -69,
     -69,   387,   388,   389,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -73,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -80,     0,   -80,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -82,     0,   -82,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -80,   -80,   -80,   -80,   -80,
     -80,   -64,   -64,   -64,   325,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -82,   -82,   -82,   -82,
     -82,   -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -81,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -67,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -67,   -67,   -67,
     -67,    96,    97,    98,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,     0,     0,
     -77,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,     0,   -78,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,     0,     0,     0,   -75,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,     0,     0,   -69,     0,   -68,   -68,
     -68,   -68,    96,    97,    98,   -69,   -69,   -69,   -69,    96,
      97,    98,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,   -72,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -67,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   292,
     293,   294,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,   -84,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,     0,     0,
     -86,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,   -88,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -84,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -85,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,   -87,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -74,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -79,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -75,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   292,   293,
     294,   -69,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   292,   293,   294,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -71,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,   -81,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -81,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,     0,   -80,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -80,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -65,     0,   -65,
     -65,   -65,   355,   356,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,   -66,
       0,   -66,   -66,   -66,   355,   356,   -63,     0,   -63,   -63,
     -63,   355,   356,   -64,     0,   -64,   -64,   -64,   355,   356,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,     0,   -64,   -64,   -66,     0,   -64,   -64,
     385,   386,   -63,     0,     0,   -66,   -66,    94,    95,     0,
       0,   -63,   -63,    94,    95,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -64,   -64,    94,    95,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   290,   291,   -66,     0,     0,
       0,     0,     0,   -66,   -66,   290,   291,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -63,
       0,     0,     0,     0,     0,   -63,   -63,   290,   291,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   290,   291,   286,
     287,   -60,   -60,   -60,   -60,     0,     0,   286,   287,   -61,
     -61,   -61,   -61,   321,   322,   -61,   -61,   -61,   -61,     0,
       0,   -60,     0,     0,     0,     0,     0,   288,   289,   -61,
       0,     0,     0,     0,     0,   288,   289,     0,     0,     0,
     -61,   323,   324
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,   134,     1,     0,   173,     9,    35,     9,
       0,    10,     7,     9,    34,    50,   147,    35,    38,    54,
     151,   267,    35,    43,    43,    35,    36,   194,    23,    56,
       1,    58,     3,     4,     5,     6,    33,    55,    56,    33,
      34,    35,    36,    56,     9,    58,    56,     9,    58,    69,
      70,    71,    72,   299,    35,    54,   302,     1,    58,     3,
       4,     5,     6,    50,    58,     9,    10,    11,    12,    13,
      14,    15,    53,    17,    18,    19,    20,    21,    35,    36,
       9,    10,    11,    12,    13,    14,   332,    58,    35,    35,
      36,    20,    21,    50,    35,    36,   263,    31,    32,    33,
      34,    35,    36,    50,     9,    35,    50,    53,    50,    35,
      54,   106,   132,    57,   134,    56,   362,    58,    62,    53,
     140,    50,    66,    53,   144,    59,    60,   147,    57,   149,
     149,   151,    58,    62,   265,    35,    36,    66,    35,   159,
     160,   160,    35,   163,   163,   142,   143,    33,    34,    35,
      36,    57,   398,    50,    33,    34,    35,    36,    58,    57,
     180,   181,   182,   183,   184,    58,   297,    54,   165,    55,
      56,     9,    10,    11,    12,    13,    14,    56,   424,    58,
      50,   201,    20,    21,    33,    34,    35,    36,    50,   209,
     210,   211,   212,   213,    35,    36,    50,    51,    52,   445,
      33,    34,    35,    36,    35,    36,    55,    56,    50,   229,
     230,   231,   232,   233,    35,    53,    56,    58,    58,    57,
     466,     9,    53,    56,    62,    58,    55,    56,    66,   249,
     250,   251,   252,   253,    55,    56,     0,     9,    10,    11,
      12,    13,    14,     7,    50,   265,   266,   267,    20,    21,
       3,     4,     5,     6,   274,    33,    34,    35,    36,    55,
      56,   392,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,    51,   297,   298,   299,
      58,   301,   302,    53,    58,    57,    58,    52,    54,   309,
      62,    56,     9,    58,    66,    35,    36,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    55,    56,    55,    56,    17,    56,   339,
      58,    50,    58,    35,    36,    50,    54,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,    55,    56,    56,    56,    58,    58,   369,
      54,    33,    34,    35,    36,    53,    58,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,    53,   392,   393,   393,    58,    57,   397,   398,    20,
      21,    22,    50,    33,    34,    35,    36,     9,    10,    11,
      12,    13,    14,    34,    55,   415,   415,    38,    20,    21,
      50,    53,    43,   423,   424,     9,    10,    11,    12,    13,
      14,    54,    33,    34,    35,    36,    20,    21,    54,    33,
      34,    35,    36,    55,   444,   445,    35,    36,    69,    70,
      71,    72,    53,    55,    58,    57,    50,    56,    55,    58,
      62,    50,    50,    50,    66,   465,   466,    50,    50,    51,
      52,    17,    58,    57,    58,    57,    17,    56,    62,    58,
      58,    58,    66,   483,   483,    58,    56,     1,    58,     3,
       4,     5,     6,    58,    53,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    56,    58,
      58,   132,     1,   134,     3,     4,     5,     6,    56,   140,
      58,    53,    56,   144,    58,    56,   147,    58,   149,    56,
     151,    58,    56,    56,    58,    58,    50,    53,   159,   160,
      54,    55,   163,    57,    56,    56,    58,    58,    62,    58,
      53,    58,    66,    31,    32,    33,    34,    35,    36,   180,
     181,   182,   183,   184,    58,     9,    10,    11,    12,    13,
      14,    53,    50,    51,    52,     7,    20,    21,    53,    57,
     201,    59,    60,    61,    62,    63,    64,    65,   209,   210,
     211,   212,   213,    53,     9,    10,    11,    12,    13,    14,
      53,    53,   106,    -1,    -1,    20,    21,    -1,   229,   230,
     231,   232,   233,    57,    58,    -1,    -1,    -1,    62,    -1,
       0,     1,    66,     3,     4,     5,     6,    -1,   249,   250,
     251,   252,   253,     0,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    57,    58,   265,   266,   267,    62,    -1,    -1,
      -1,    66,    -1,   274,    -1,    31,    32,    33,    34,    35,
      36,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,    -1,   297,   298,   299,    -1,
     301,   302,    58,    59,    60,    61,    62,    -1,   309,     0,
       1,    -1,     3,     4,     5,     6,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,     0,     1,   339,     3,
       4,     5,     6,    -1,    -1,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,    -1,    -1,    -1,    -1,     0,     1,   369,     3,
       4,     5,     6,    -1,    -1,    -1,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
      -1,   392,   393,    -1,    -1,    -1,   397,   398,    21,    22,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,   415,    38,    -1,    -1,    -1,    -1,
      51,    52,   423,   424,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     1,    -1,     3,     4,
       5,     6,    -1,   444,   445,    -1,    69,    70,    71,    72,
       0,     1,    -1,     3,     4,     5,     6,    -1,     1,    -1,
       3,     4,     5,     6,   465,   466,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,     1,   483,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    50,    -1,   132,
      -1,    54,    55,    -1,    57,    -1,    -1,   140,    -1,    62,
      -1,   144,    -1,    66,    31,    32,    33,    34,    35,    36,
      50,    -1,    -1,    -1,    54,    55,   159,    57,    -1,    -1,
      -1,    -1,    62,    -1,    51,    52,    66,    -1,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,   182,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,   201,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,   211,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    22,   231,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      35,    36,    -1,    38,    39,    40,    -1,    -1,   251,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,   266,   267,    -1,    66,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,   298,   299,    -1,   301,   302,
      -1,    96,    97,    98,    -1,    -1,   309,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,   331,   332,
      57,    58,    -1,    -1,    -1,    62,   339,   132,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,   144,
      31,    32,    33,    34,    35,    36,    50,    -1,   361,   362,
      54,    55,    -1,    57,   159,    -1,   369,    -1,    62,    -1,
      51,    52,    66,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   180,   181,   182,   183,   184,
      -1,    -1,    -1,    -1,   397,   398,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,   201,    20,    21,    -1,
      -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,    -1,
     423,   424,    31,    32,    33,    34,    35,    36,     9,    10,
      11,    12,    13,    14,   229,   230,   231,   232,   233,    20,
      21,   444,   445,    -1,    57,    58,    55,    56,    -1,    62,
      59,    60,    -1,    66,   249,   250,   251,   252,   253,    -1,
      -1,    -1,   465,   466,     0,     1,    -1,     3,     4,     5,
       6,   266,   267,    -1,    -1,    -1,    57,    58,    -1,   274,
      -1,    62,    -1,    -1,    -1,    66,    -1,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    -1,    -1,   298,   299,    -1,   301,   302,    -1,    -1,
      -1,    -1,     0,     1,   309,     3,     4,     5,     6,    -1,
      -1,    -1,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
      -1,    -1,     0,     1,   339,     3,     4,     5,     6,    -1,
      -1,    -1,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,     9,    10,
      11,    12,    13,    14,   369,    -1,    -1,    -1,    -1,    20,
      21,    -1,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,    22,    -1,    -1,    -1,
      -1,    -1,   397,   398,    -1,    -1,    31,    32,    33,    34,
      35,    36,    38,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    52,   423,   424,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    69,    70,    71,    72,    -1,    -1,   444,
     445,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    94,    95,
     465,   466,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,   132,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,   159,    62,    -1,    -1,    -1,    66,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,   182,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,   201,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,   211,    -1,    20,    21,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   231,    66,    -1,     0,     1,
      57,     3,     4,     5,     6,    62,    -1,     0,     1,    66,
       3,     4,     5,     6,    57,   251,    -1,    -1,    -1,    62,
      -1,     0,     1,    66,     3,     4,     5,     6,    -1,    -1,
     266,   267,    -1,    -1,    -1,    -1,    -1,    -1,   274,    31,
      32,    33,    34,    35,    36,    -1,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,    -1,    -1,    50,   295,
      22,    -1,   298,   299,    -1,   301,   302,    59,    60,    61,
      62,    -1,    -1,   309,     0,     1,    38,     3,     4,     5,
       6,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,    -1,    -1,    -1,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    69,    70,    71,
      72,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,    -1,    -1,    -1,   360,   361,   362,    -1,    90,    91,
      92,    93,    -1,   369,     0,     1,    -1,     3,     4,     5,
       6,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,    -1,    -1,    -1,   390,    31,    32,    33,    34,    35,
      36,   397,   398,    -1,     9,    10,    11,    12,    13,    14,
     132,    -1,    -1,    -1,    -1,    20,    21,    -1,   140,    55,
      56,    -1,   144,    59,    60,    61,    62,   423,   424,    -1,
      31,    32,    33,    34,    35,    36,    -1,   159,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   444,   445,
      -1,    -1,    57,    -1,    55,    56,    -1,    62,    59,    60,
     182,    66,     9,    10,    11,    12,    13,    14,    -1,   465,
     466,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,   201,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,   211,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,   251,
      -1,    50,    20,    21,    -1,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    62,   266,   267,    -1,    66,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    22,    -1,    -1,    -1,
     282,   283,   284,   285,   286,   287,   288,   289,    -1,    57,
      -1,    -1,    38,   295,    62,    -1,   298,   299,    66,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,    69,    70,    71,    72,    -1,   330,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    88,    89,    -1,   347,   348,   349,   350,   351,
     352,   353,   354,    -1,    -1,    -1,    -1,    -1,   360,   361,
     362,     9,    10,    11,    12,    13,    14,   369,    -1,    -1,
      -1,    -1,    20,    21,    -1,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,    -1,   132,    -1,   390,    -1,
      -1,    -1,    -1,    -1,   140,   397,   398,    -1,   144,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    57,
      20,    21,    -1,   159,    62,    -1,    -1,    -1,    66,    -1,
      -1,   423,   424,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,   182,    -1,    -1,    -1,
      -1,    -1,   444,   445,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    55,    56,   201,    66,    59,    60,    61,
      62,    -1,    -1,   465,   466,   211,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,   231,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,   251,    -1,    -1,    20,    21,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    50,
     266,   267,    -1,    54,    55,    -1,    57,    -1,   274,    -1,
      -1,    62,    22,    -1,    53,    66,   282,   283,   284,   285,
      59,    60,    61,    62,    -1,    57,    -1,    -1,    38,   295,
      62,    -1,   298,   299,    66,   301,   302,    -1,    -1,    -1,
      -1,    -1,    -1,   309,     9,    10,    11,    12,    13,    14,
      -1,   317,   318,   319,   320,    20,    21,    -1,    -1,    69,
      70,    71,    72,    -1,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   347,   348,   349,   350,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,   360,   361,   362,    62,    -1,    -1,
      -1,    66,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   377,   378,   379,   380,    -1,    31,    32,    33,    34,
      35,    36,   132,    -1,   390,    -1,    -1,    -1,    -1,    -1,
     140,   397,   398,    -1,   144,     9,    10,    11,    12,    13,
      14,    56,    -1,    58,    59,    60,    20,    21,    -1,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   424,    -1,
      -1,    -1,    -1,    -1,    22,    31,    32,    33,    34,    35,
      36,    -1,   182,    -1,    -1,    -1,    -1,    -1,   444,   445,
      38,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    55,
      56,   201,    66,    59,    60,    61,    62,    -1,    -1,   465,
     466,   211,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    69,    70,    71,    72,    31,    32,    33,    34,    35,
      36,   231,    -1,    51,    52,    53,    -1,    -1,    86,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      56,   251,    58,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   266,   267,    -1,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    50,    51,    -1,    -1,
      -1,    -1,   282,   283,   132,    59,    60,    61,    62,    63,
      64,    65,   140,    -1,    -1,   295,   144,    -1,   298,   299,
      -1,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,   159,    -1,    -1,    -1,    -1,    -1,   317,   318,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
     330,   331,   332,    -1,   182,    -1,    -1,    -1,    -1,   339,
      -1,    -1,    -1,    -1,    -1,    55,    56,   347,   348,    59,
      60,    61,    62,   201,    -1,    -1,    -1,    -1,    22,    -1,
     360,   361,   362,   211,    -1,    -1,    -1,    -1,    -1,   369,
      -1,    -1,    -1,    -1,    38,    -1,    -1,   377,   378,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     390,    -1,    -1,    -1,    -1,    -1,    -1,   397,   398,    -1,
      -1,    -1,    -1,   251,    -1,    69,    70,    71,    72,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,   266,   267,
      -1,    -1,    -1,   423,   424,    -1,   274,    -1,    50,    51,
      -1,    -1,    -1,    -1,   282,    99,    -1,    59,    60,    61,
      62,    63,    64,    65,   444,   445,    -1,   295,    -1,    -1,
     298,   299,    -1,   301,   302,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,   465,   466,    -1,   132,   317,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
     144,    -1,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
      -1,   339,    -1,    -1,    -1,   159,    -1,    -1,    -1,   347,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,   360,   361,   362,    -1,    -1,    -1,   182,    -1,
      -1,   369,    -1,    52,    -1,    -1,    55,    56,    57,   377,
      59,    60,    61,    62,    63,    64,    65,   201,    -1,    -1,
      -1,    -1,   390,    -1,    -1,    -1,    -1,   211,    -1,   397,
     398,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,   231,    -1,    -1,
      50,    -1,    52,    -1,    -1,   423,   424,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    56,   251,    58,    59,
      60,    61,    62,    63,    64,    65,   444,   445,    -1,    -1,
      -1,    -1,   266,   267,    31,    32,    33,    34,    35,    36,
     274,    -1,    -1,    -1,    -1,    -1,    -1,   465,   466,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,   295,    59,    60,   298,   299,    -1,   301,   302,     1,
      -1,     3,     4,     5,     6,   309,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,   330,   331,   332,    -1,
      -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    50,    -1,
      -1,    -1,    54,    55,    -1,    57,   360,   361,   362,    -1,
      62,    51,    -1,    -1,    66,   369,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,    -1,
      -1,    -1,    -1,   397,   398,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,   423,
     424,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
     444,   445,    -1,    50,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    59,    60,    61,    62,    62,    58,    59,    60,
      66,   465,   466,     1,    -1,     3,     4,     5,     6,    -1,
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
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    55,    56,    -1,    -1,    59,
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
      -1,    -1,    31,    32,    33,    34,    35,    36,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    31,
      32,    33,    34,    35,    36,    58,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    31,    32,    33,    34,
      35,    36,    58,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    50,    -1,
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
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      59,    60,    61,    62,    63,    64,    65,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,
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
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
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
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,
      59,    60,    61,    62,    63,    64,    65,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,
      59,    60,    61,    62,    63,    64,    65,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    56,    -1,    58,
      59,    60,    61,    62,    31,    32,    33,    34,    35,    36,
      -1,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    56,    -1,    58,    59,
      60,    61,    62,    56,    -1,    58,    59,    60,    61,    62,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    55,    56,    50,    -1,    59,    60,
      61,    62,    50,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    59,    60,    61,    62,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    50,    31,    32,    33,    34,    35,
      36,    -1,    -1,    59,    60,    61,    62,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    31,
      32,    33,    34,    35,    36,    -1,    -1,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    68,    69,    70,    71,
      73,   100,    50,    54,    82,     0,    70,    50,     9,    55,
      83,    51,    52,    57,     1,     9,    10,    11,    12,    13,
      14,    15,    17,    18,    19,    20,    21,    50,    57,    62,
      66,    71,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   100,    89,
      53,    89,     1,     3,    58,    80,    81,   100,    50,    52,
      57,    57,    57,    82,    89,    96,    97,    96,    89,    96,
      96,    50,    55,    85,    50,    50,    35,    36,    33,    34,
      31,    32,    59,    60,    61,    62,    63,    64,    65,    51,
       9,    51,    53,    58,    58,    54,    56,    58,     9,    89,
      58,    89,    99,    89,    89,    17,    58,    91,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      90,    10,    54,    54,    76,    79,    81,    54,    52,    53,
      56,    58,    58,    58,    57,    72,    89,    75,    78,    84,
      55,    74,    77,    53,    89,    82,    82,    89,    55,    56,
      84,    55,    55,    84,    55,    16,    58,    55,    89,    55,
      55,    82,    50,    54,     9,    10,    11,    12,    13,    14,
      20,    21,    57,    62,    66,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    54,     9,    10,    11,    12,    13,
      14,    57,    98,     9,    10,    11,    12,    13,    14,    20,
      21,    57,    62,    66,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     9,    10,    11,    12,    13,    14,    20,
      21,    57,    62,    66,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     9,    10,    11,    12,    13,    14,    20,
      21,    57,    62,    66,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    54,    55,    83,    52,    57,     9,    10,
      11,    12,    13,    14,    57,    96,    97,    98,    96,    89,
      96,    96,    35,    36,    33,    34,    31,    32,    59,    60,
      61,    62,    63,    64,    65,    51,    55,    83,    52,    57,
      89,    52,    57,     9,    10,    11,    12,    13,    14,    57,
      96,    97,    98,    96,    89,    96,    96,    35,    36,    33,
      34,    31,    32,    59,    60,    61,    62,    63,    64,    65,
      51,    52,    57,     9,    10,    11,    12,    13,    14,    57,
      96,    97,    98,    96,    89,    96,    96,    35,    36,    33,
      34,    31,    32,    59,    60,    61,    62,    63,    64,    65,
      51,    52,    57,     9,    10,    11,    12,    13,    14,    57,
      96,    97,    98,    96,    89,    96,    96,    35,    36,    33,
      34,    31,    32,    59,    60,    61,    62,    63,    64,    65,
      51,    55,    83,    84,    89,    58,    99,    52,    57,    89,
      58,    91,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    90,    84,    89,    58,    99,    58,
      89,    58,    99,    52,    57,    89,    58,    91,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      90,    89,    58,    99,    52,    57,    89,    58,    91,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      96,    90,    89,    58,    99,    52,    57,    89,    58,    91,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    90,    84,    55,    53,    58,    89,    58,    99,
      58,    55,    53,    58,    53,    58,    89,    58,    99,    58,
      53,    58,    89,    58,    99,    58,    53,    58,    89,    58,
      99,    58,    55,    53,    58,    53,    58,    53,    58,    53,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    74,    73,    75,
      73,    76,    73,    77,    73,    78,    73,    79,    73,    73,
      80,    80,    81,    81,    82,    83,    82,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    93,    93,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     5,     8,     9,     6,     1,     3,     0,     9,     0,
       9,     0,     8,     0,     8,     0,     8,     0,     7,     5,
       1,     3,     2,     4,     2,     0,     4,     1,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     5,     7,     5,
       7,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     1,
       4,     3,     4,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1
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
#line 83 "language.y"
    { root = (yyvsp[0].node); }
#line 2898 "src/parser.c"
    break;

  case 3:
#line 87 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2904 "src/parser.c"
    break;

  case 4:
#line 88 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 2910 "src/parser.c"
    break;

  case 5:
#line 92 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2916 "src/parser.c"
    break;

  case 6:
#line 93 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2922 "src/parser.c"
    break;

  case 7:
#line 94 "language.y"
    { (yyval.node) = NULL; }
#line 2928 "src/parser.c"
    break;

  case 8:
#line 95 "language.y"
    { (yyval.node) = NULL; }
#line 2934 "src/parser.c"
    break;

  case 9:
#line 99 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); }
#line 2940 "src/parser.c"
    break;

  case 10:
#line 100 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); }
#line 2946 "src/parser.c"
    break;

  case 11:
#line 101 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval)); }
#line 2952 "src/parser.c"
    break;

  case 12:
#line 102 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval)); }
#line 2958 "src/parser.c"
    break;

  case 13:
#line 103 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval)); }
#line 2964 "src/parser.c"
    break;

  case 14:
#line 104 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval)); }
#line 2970 "src/parser.c"
    break;

  case 15:
#line 108 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2976 "src/parser.c"
    break;

  case 16:
#line 109 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 2982 "src/parser.c"
    break;

  case 17:
#line 113 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 2988 "src/parser.c"
    break;

  case 18:
#line 113 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 2994 "src/parser.c"
    break;

  case 19:
#line 114 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3000 "src/parser.c"
    break;

  case 20:
#line 114 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3006 "src/parser.c"
    break;

  case 21:
#line 115 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3012 "src/parser.c"
    break;

  case 22:
#line 115 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3018 "src/parser.c"
    break;

  case 23:
#line 116 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3024 "src/parser.c"
    break;

  case 24:
#line 116 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3030 "src/parser.c"
    break;

  case 25:
#line 117 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3036 "src/parser.c"
    break;

  case 26:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3042 "src/parser.c"
    break;

  case 27:
#line 118 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3048 "src/parser.c"
    break;

  case 28:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3054 "src/parser.c"
    break;

  case 29:
#line 119 "language.y"
    { (yyval.node) = NULL; }
#line 3060 "src/parser.c"
    break;

  case 30:
#line 124 "language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3066 "src/parser.c"
    break;

  case 31:
#line 125 "language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3072 "src/parser.c"
    break;

  case 32:
#line 129 "language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); }
#line 3078 "src/parser.c"
    break;

  case 33:
#line 130 "language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); }
#line 3084 "src/parser.c"
    break;

  case 34:
#line 134 "language.y"
    { (yyval.node) = NULL; }
#line 3090 "src/parser.c"
    break;

  case 35:
#line 135 "language.y"
    { begin(NULL); }
#line 3096 "src/parser.c"
    break;

  case 36:
#line 135 "language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3102 "src/parser.c"
    break;

  case 37:
#line 139 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3108 "src/parser.c"
    break;

  case 38:
#line 140 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3114 "src/parser.c"
    break;

  case 39:
#line 144 "language.y"
    { (yyval.node) = NULL; }
#line 3120 "src/parser.c"
    break;

  case 40:
#line 145 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3126 "src/parser.c"
    break;

  case 41:
#line 146 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3132 "src/parser.c"
    break;

  case 42:
#line 147 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3138 "src/parser.c"
    break;

  case 43:
#line 148 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3144 "src/parser.c"
    break;

  case 44:
#line 149 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3150 "src/parser.c"
    break;

  case 45:
#line 150 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3156 "src/parser.c"
    break;

  case 46:
#line 151 "language.y"
    { (yyval.node) = NULL; }
#line 3162 "src/parser.c"
    break;

  case 47:
#line 155 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign_context((yyval.node)); }
#line 3168 "src/parser.c"
    break;

  case 48:
#line 156 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3174 "src/parser.c"
    break;

  case 49:
#line 160 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3180 "src/parser.c"
    break;

  case 50:
#line 161 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign_context((yyval.node)); }
#line 3186 "src/parser.c"
    break;

  case 51:
#line 165 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context((yyval.node)); }
#line 3192 "src/parser.c"
    break;

  case 52:
#line 166 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3198 "src/parser.c"
    break;

  case 53:
#line 170 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3204 "src/parser.c"
    break;

  case 54:
#line 171 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3210 "src/parser.c"
    break;

  case 55:
#line 175 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3216 "src/parser.c"
    break;

  case 56:
#line 176 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3222 "src/parser.c"
    break;

  case 57:
#line 180 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3228 "src/parser.c"
    break;

  case 58:
#line 181 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node));}
#line 3234 "src/parser.c"
    break;

  case 59:
#line 185 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3240 "src/parser.c"
    break;

  case 60:
#line 186 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3246 "src/parser.c"
    break;

  case 61:
#line 187 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3252 "src/parser.c"
    break;

  case 62:
#line 191 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3258 "src/parser.c"
    break;

  case 63:
#line 192 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3264 "src/parser.c"
    break;

  case 64:
#line 193 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3270 "src/parser.c"
    break;

  case 65:
#line 194 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3276 "src/parser.c"
    break;

  case 66:
#line 195 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3282 "src/parser.c"
    break;

  case 67:
#line 199 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3288 "src/parser.c"
    break;

  case 68:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3294 "src/parser.c"
    break;

  case 69:
#line 201 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3300 "src/parser.c"
    break;

  case 70:
#line 205 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3306 "src/parser.c"
    break;

  case 71:
#line 206 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3312 "src/parser.c"
    break;

  case 72:
#line 207 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3318 "src/parser.c"
    break;

  case 73:
#line 208 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3324 "src/parser.c"
    break;

  case 74:
#line 212 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3330 "src/parser.c"
    break;

  case 75:
#line 213 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3336 "src/parser.c"
    break;

  case 76:
#line 214 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3342 "src/parser.c"
    break;

  case 77:
#line 215 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3348 "src/parser.c"
    break;

  case 78:
#line 216 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3354 "src/parser.c"
    break;

  case 79:
#line 220 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3360 "src/parser.c"
    break;

  case 80:
#line 221 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3366 "src/parser.c"
    break;

  case 81:
#line 222 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call",     ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval));}
#line 3372 "src/parser.c"
    break;

  case 82:
#line 223 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3378 "src/parser.c"
    break;

  case 83:
#line 227 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); retrieve((yyval.node), (yyval.node)->name); }
#line 3384 "src/parser.c"
    break;

  case 84:
#line 228 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, key); free(key); }
#line 3390 "src/parser.c"
    break;

  case 85:
#line 229 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , key); free(key); }
#line 3396 "src/parser.c"
    break;

  case 86:
#line 230 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3402 "src/parser.c"
    break;

  case 87:
#line 231 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3408 "src/parser.c"
    break;

  case 88:
#line 232 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , key); free(key); }
#line 3414 "src/parser.c"
    break;

  case 89:
#line 233 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3420 "src/parser.c"
    break;

  case 90:
#line 237 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3426 "src/parser.c"
    break;

  case 91:
#line 238 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3432 "src/parser.c"
    break;

  case 92:
#line 242 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3438 "src/parser.c"
    break;

  case 93:
#line 243 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3444 "src/parser.c"
    break;

  case 94:
#line 244 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3450 "src/parser.c"
    break;

  case 95:
#line 245 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3456 "src/parser.c"
    break;


#line 3460 "src/parser.c"

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
#line 248 "language.y"


void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

