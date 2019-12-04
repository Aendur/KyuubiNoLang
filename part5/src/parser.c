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
#line 91 "src/language.y"

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

#line 108 "src/parser.c"


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
#define YYLAST   7760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  525

#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
       2,     2,     2,    72,     2,     2,     2,    71,     2,     2,
      63,    64,    69,    67,    60,    68,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
      65,    57,    66,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   113,   114,   115,   120,   121,   122,
     123,   124,   125,   129,   133,   134,   138,   139,   143,   144,
     148,   149,   150,   154,   155,   159,   160,   164,   165,   165,
     169,   170,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   186,   189,   193,   193,   197,   197,   198,   202,   202,
     202,   203,   203,   207,   208,   212,   213,   217,   218,   222,
     223,   227,   228,   229,   233,   234,   235,   236,   237,   241,
     242,   243,   247,   248,   249,   250,   254,   255,   256,   257,
     258,   259,   263,   264,   265,   266,   270,   271,   272,   273,
     274,   275,   276,   280,   281,   285,   286,   287,   288
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
  "DO", "RETURN", "ASM", "\"=\"", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"",
  "\"<\"", "\"<=\"", "\">=\"", "\">\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\"%\"", "OP_POS", "OP_NEG", "\"!\"", "\"++\"", "\"--\"",
  "UNRECOGNIZED_TOKEN", "INVALID_IDENTIFIER", "INVALID_CHAR_CONST",
  "COMPOUND_STATEMENT", "LIST", "VARIABLE", "CONSTANT", "ARRAY",
  "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL", "VAR_DECL", "VAR_INIT",
  "ARR_DECL", "ARR_INIT", "GENERIC_NODE", "';'", "'='", "'{'", "'}'",
  "','", "'['", "']'", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "$accept", "declaration_list", "declaration",
  "init_declarator", "var_declarator", "arr_declarator",
  "initializer_list", "function_definition", "function_declarator",
  "argument_list", "argument", "compound_statement", "$@1",
  "statement_list", "statement", "inline_asm", "conditional_statement",
  "if_statement", "$@2", "else_statement", "$@3", "iteration_statement",
  "$@4", "$@5", "$@6", "return_statement", "assignment_expression",
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
     305,   306,   307,   308,   309,   310,    59,    61,   123,   125,
      44,    91,    93,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -266

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-266)))

#define YYTABLE_NINF -99

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     731,   -19,   106,   109,   111,   137,   674,   705,    11,   150,
     349,   765,    32,   148,   816,  -266,   839,  1019,   766,     7,
    1374,   334,    18,   112,   175,  1168,  1480,  4547,   949,   949,
     970,   949,   949,   949,    97,   -12,    -2,   271,   496,   585,
      -9,  6328,  4583,  4599,   120,  2117,   134,   146,   155,   143,
     390,   165,  1802,  2538,  1040,   170,  2569,  2655,  2725,   183,
    2756,    93,  2826,   191,   193,   289,   502,  1150,  2149,   429,
    6335,  6351,  6358,   236,  6408,  6415,  6431,   949,   949,   949,
     949,   949,   949,   949,   949,   949,   949,   949,   949,   949,
     949,   353,   419,  2857,   970,   262,   273,   306,   411,  2927,
    3735,  2958,  1069,  3028,  3059,   369,  3129,  3160,  3230,   265,
     479,   267,   392,    -1,    81,    95,   424,   402,  4606,   195,
     319,  4656,   326,   525,  1806,  4075,   888,  7536,  7543,  7550,
    6438,  6488,  6495,  6511,  6518,    58,   415,   865,   409,   970,
     482,   443,  3261,   467,   488,   470,   484,   444,   493,   434,
    4663,  2221,  4679,   475,   523,   495,   507,   497,   510,  3331,
    3362,   321,   511,   362,   526,   537,   970,   399,   471,   467,
     541,  3432,   555,  3463,  3822,  6568,  6575,  6591,  6598,  6648,
     970,  6655,  3753,   717,  4715,  4730,  4746,  4796,  2296,  2296,
     970,  2296,  2296,  2296,    79,    13,     0,   328,  6344,  2682,
    2783,  4811,  4827,  2443,  3872,  3887,  3937,  3952,  4002,  2333,
    2333,   970,  2333,  2333,  2333,   355,    70,   395,  1711,  2500,
    4877,  4890,  4017,  4067,  3772,  4905,  4941,  4956,  4972,  4992,
    2411,  2411,   970,  2411,  2411,  2411,     4,   207,   295,     6,
    7597,  6665,  6675,  5008,  5023,  2620,  4082,  4132,  4147,  4163,
    4213,  2419,  2419,   970,  2419,  2419,  2419,   -11,    94,   163,
    1063,  1303,  5044,  5059,  4228,  4244,  3533,  3564,  2149,   576,
     552,  2149,   990,  4294,  2884,  2985,  3086,  3187,  3288,   970,
    3389,  3490,  3591,  3692,   560,  6725,  6733,  6741,  2296,  2296,
    2296,  2296,  2296,  2296,  2296,  2296,  2296,  2296,  2296,  2296,
    2296,  2296,  2149,  1054,   197,  5073,  5123,  5136,  5149,  5199,
     970,  5212,  5225,  5275,  5288,   561,  5301,  5351,  5364,  2333,
    2333,  2333,  2333,  2333,  2333,  2333,  2333,  2333,  2333,  2333,
    2333,  2333,  2333,  2149,  1406,  4305,  6751,  6801,  6811,  6821,
    6831,   970,  6881,  6891,  6901,  6911,   562,  6961,  6971,  6981,
    2411,  2411,  2411,  2411,  2411,  2411,  2411,  2411,  2411,  2411,
    2411,  2411,  2411,  2411,  2149,  1544,  3803,  5376,  5426,  5438,
    5450,  5500,   970,  5512,  5524,  5574,  5586,   566,  5598,  5648,
    5660,  2419,  2419,  2419,  2419,  2419,  2419,  2419,  2419,  2419,
    2419,  2419,  2419,  2419,  2419,   614,  3735,   880,  3735,   570,
    6988,   401,  7038,   571,  5675,   440,  2149,  1715,   572,  5725,
     100,   103,  7687,  7694,  6424,  6504,  6584,  7604,  7046,  7054,
    7062,  7073,  7123,   125,   580,  4320,   442,  2149,  1787,   582,
    4370,   385,   569,  2144,  7680,  7397,  7444,  7454,  7464,  5738,
    5751,  5801,  5814,  5827,   365,   587,  5877,   462,  2149,  1867,
     583,  5892,   268,   336,  2113,  3743,  7611,  7618,  7625,  7633,
    7133,  7143,  7153,  7203,  7213,    33,   608,  4385,   473,  2149,
    2040,   607,  4435,   188,   264,  1383,  2008,  1683,  7473,  7520,
    7529,  5904,  5928,  5954,  5978,  6004,   144,  3634,  3665,  7220,
    7236,  6028,  6054,   610,  7229,   503,  7286,  4450,  4466,   611,
    6078,   508,  6104,  6128,  6154,   619,  7296,   542,  7306,  4516,
    4531,   620,  6178,   563,  6190,   666,  1242,  7314,  7364,  6204,
    6254,  7374,  7384,  6266,  6278
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,   678,   138,  -266,  -266,  -266,  -266,  -266,  -266,
     554,   -91,   337,   -99,   -51,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  2228,  2049,  1905,  1695,
    1595,  1272,  1132,   780,   -18,   366,  -265,     3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    55,     9,    10,    91,    11,    12,   114,
     115,    56,   100,    57,    58,    59,    60,    61,   164,   106,
     143,    62,    95,   169,    96,    63,   119,   194,   195,   196,
     197,   198,   199,   200,    71,   181,   120,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   142,    42,    13,   401,   140,   103,   405,   -95,    13,
      77,   381,   201,   -69,   -69,   -69,   -69,    44,   -69,   -69,
     -57,    78,   -59,   -59,   290,   291,   350,   222,   -61,   -61,
     -61,   -61,    42,   354,   355,   -57,   289,    14,   426,    42,
     -86,   -86,   -86,   -86,   -55,   -86,   -86,   -69,   243,   -55,
     243,   264,   160,   -55,   -57,   350,   -69,   -69,   -69,   -69,
      87,    88,    89,   146,   -59,    45,   -55,    17,   -61,   447,
     116,   356,   357,   168,   -86,   -86,   201,   -57,   171,    68,
      77,    69,    42,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
      20,   103,   -57,   320,   -47,   -56,   -47,   -47,   -47,   -47,
     468,   288,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   105,
     -47,   -47,   -47,   -47,   -56,   -95,   -57,   382,   -96,   222,
     -97,   201,   -58,   289,    42,   -60,   -60,   290,   291,   -57,
     -57,   -47,   -47,   264,   -87,   -87,   -87,   -87,     8,   -87,
     -87,   147,   495,   -55,     8,   148,   -98,   288,   201,   -47,
     116,   -47,   -47,    -9,   -57,   -23,   -47,    21,   -57,   -23,
     -47,   -47,   201,   501,   -58,   -47,   381,   -60,   -87,   -87,
     281,   281,   201,   281,   281,   281,   -12,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   507,   -59,   -59,   383,   384,   -56,
      93,   312,   312,   201,   312,   312,   312,   -88,   -88,   -88,
     -88,   -51,   -88,   -88,   -56,   513,    -7,    18,   -56,    94,
     -58,   382,   343,   343,   201,   343,   343,   343,   -48,   -86,
     -86,   -86,   -86,   -59,   -86,   -86,   101,   -59,    98,   -57,
     351,   -88,   -88,   374,   374,   201,   374,   374,   374,   104,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   107,   -58,   108,
     243,   264,   -58,   243,   264,   -93,   -86,   -86,   427,   -93,
     428,   201,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -57,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   243,   264,   -60,   -60,   383,   384,
     -58,   351,   201,   -59,   -59,    79,    80,   487,   109,   488,
     121,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   243,   264,   -59,   -59,   352,
     353,   -13,   -13,   201,   -60,   139,    66,   -59,   -60,   144,
     -58,   266,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   243,   264,   -58,    78,
     -61,   -61,   -61,   -61,   201,   292,   293,   -59,   -60,   -60,
     352,   353,   -54,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   319,    42,   151,
      42,   -24,   -58,   152,    43,   -24,    43,   319,   243,   264,
     -13,   -13,   -61,   294,   295,    66,   202,    67,   -60,    22,
      23,    24,    25,    26,    27,    -8,    19,   -58,   320,   243,
     264,   223,   136,   137,   -55,   -55,    43,   -59,   -59,   321,
     322,   141,   -94,    43,   -56,   -56,   -94,   -45,    28,    29,
     243,   264,   244,   149,   244,   265,   103,   103,   245,   246,
     247,   248,   249,   250,   -58,   -58,   -53,     2,     3,     4,
       5,   243,   264,    30,   -59,   -59,   145,    31,    32,   -26,
     202,   151,    33,   -26,   150,   490,    43,   251,   252,    42,
      42,   -10,   -44,   155,   -44,   -44,   -44,   -44,   -16,   -16,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   253,   118,   -25,   162,   254,   255,   -25,   157,
     151,   256,   151,   223,   492,   202,   498,   158,    43,   -44,
     -44,   224,   225,   226,   227,   228,   229,   265,   -61,   -61,
     -61,   -61,   151,    81,    82,    53,   504,   -44,   -22,   -44,
     -44,   -11,   202,   151,   -44,   -15,   -15,   510,   -44,   -44,
     230,   231,   -21,   -44,   -14,   -14,   202,   -60,   -60,    79,
      80,   -20,   -61,   -43,   282,   282,   202,   282,   282,   282,
     166,    83,    84,   151,   110,   232,   -41,   518,   151,   233,
     234,   165,   520,   167,   235,   313,   313,   202,   313,   313,
     313,   -60,   -17,   -17,   267,   245,   246,   247,   248,   249,
     250,   -60,   -60,   321,   322,   -49,   344,   344,   202,   344,
     344,   344,   151,   396,   398,   172,   522,   -64,   -64,   -64,
     -64,   173,   -64,   -64,   251,   252,   402,   375,   375,   202,
     375,   375,   375,   151,   409,   430,   451,   524,   -60,   -60,
     472,   -27,   489,   491,   244,   265,   496,   244,   265,   253,
     400,   -64,   497,   254,   255,   202,   502,   508,   256,   503,
     -64,   -64,    85,    86,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   244,   265,
     509,   514,   517,   519,    15,     1,   202,     2,     3,     4,
       5,   521,   523,   -29,    16,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   244,
     265,   161,     0,     0,     0,    -2,    -2,   202,    -2,    -2,
      -2,    -2,     0,     0,     0,     0,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     244,   265,     1,     0,     2,     3,     4,     5,   202,   -87,
     -87,   -87,   -87,     0,   -87,   -87,     0,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,     0,    43,     0,    43,    -4,    -4,     0,    -4,    -4,
      -4,    -4,   244,   265,   -87,    22,    23,    24,    25,    26,
      27,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,   244,   265,     0,     0,     0,    41,     0,
      41,     0,     0,     0,    28,    29,     0,     0,    70,    72,
       0,    74,    75,    76,   244,   265,    -6,    -6,     0,    -6,
      -6,    -6,    -6,     0,     0,   221,     0,     0,     0,    30,
      41,     0,     0,    31,    32,   244,   265,    41,    33,    -3,
      -3,     0,    -3,    -3,    -3,    -3,   242,     0,   242,   263,
       0,     0,     0,    43,    43,     0,     0,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,   132,   133,   134,
      41,     0,     0,     0,   203,   204,   205,   206,   207,   208,
      41,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   209,   210,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   221,   -27,   -27,
       0,     0,    41,     0,   153,     0,     0,     0,   211,     0,
       0,   263,   212,   213,     0,     0,   -27,   214,   -27,   -27,
       0,     0,     0,   -27,   -67,     0,     0,   -27,   -27,     0,
       0,     0,   -27,   -67,   -67,    85,    86,     0,   174,   175,
     176,   177,   178,   179,     0,     0,     0,     0,   280,   283,
       0,   285,   286,   287,     0,     0,     0,     0,     0,   182,
     183,   184,   185,   186,   187,     0,     0,    28,    29,   311,
     314,     0,   316,   317,   318,     0,     0,     0,     0,   245,
     246,   247,   248,   249,   250,     0,     0,     0,   188,   189,
     342,   345,   180,   347,   348,   349,    31,    32,     0,    -5,
      -5,    33,    -5,    -5,    -5,    -5,     0,     0,   251,   252,
       0,   373,   376,   190,   378,   379,   380,   191,   192,     0,
     -19,   -19,   193,   -19,   -19,   -19,   -19,     0,   242,   263,
       0,   242,   263,   253,   404,     0,     0,   254,   255,     0,
       0,     0,   256,   245,   246,   247,   248,   249,   250,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,     0,   420,   421,
     422,     0,   242,   263,     0,   -61,   -61,   -61,   -61,     0,
     385,   386,   251,   252,     0,     0,     0,     0,     0,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   441,
     442,   443,   221,   242,   263,     0,     0,   253,   425,     0,
       0,   254,   255,   -61,     0,     0,   256,   -61,   387,   388,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     462,   463,   464,   242,   242,   263,     0,     0,     0,     0,
      40,   112,    40,   113,     3,     4,     5,     0,     0,     0,
       0,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   483,   484,   485,   263,     0,    41,   220,    41,     0,
       0,     0,    40,     0,     0,     0,   242,   263,     0,    40,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,   241,     0,
     241,   262,     0,     0,     0,     0,     0,   242,   263,    40,
      40,    40,    40,    40,    40,    40,    40,   130,   131,     0,
       0,     0,    40,     0,   -89,   -89,     0,     0,   242,   263,
       0,     0,    40,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,   242,
     263,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,    41,    41,   220,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
     -29,   -29,     0,   262,     0,     0,     0,     0,     0,     0,
      39,     0,    39,     0,     0,     0,     0,     0,   -29,     0,
     -29,   -29,     0,     0,     0,   -29,     0,     0,     0,   -29,
     -29,     0,     0,     0,   -29,     0,     0,   219,     0,     0,
       0,     0,    39,     0,     0,   -64,   -64,   -64,   -64,    39,
     -64,   -64,     0,     0,     0,     0,     0,     0,   240,     0,
     240,   261,     0,     0,     0,     0,     0,     0,     0,    39,
      39,    39,    39,   126,   127,   128,   129,     0,     0,     0,
       0,     0,    39,   -64,     0,     0,     0,   -64,   -64,   -64,
     389,   390,    39,     0,     0,    46,     0,     2,     3,     4,
       5,     0,     0,    22,    23,    24,    25,    26,    27,    47,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
     241,   262,     0,   241,   262,   -62,   -62,   -62,   -62,   219,
     385,   386,    28,    29,    39,   245,   246,   247,   248,   249,
     250,     0,     0,   261,     0,     0,     0,     0,   418,   419,
      52,     0,    53,    54,   241,   262,     0,    30,     0,     0,
       0,    31,    32,   -62,   251,   252,    33,   -62,   387,   388,
       0,   220,   220,   220,   220,   220,   220,   220,   220,   439,
     440,     0,     0,     0,   220,   241,   262,     0,     0,   253,
     446,     0,     0,   254,   255,     0,     0,     0,   256,     0,
       0,     0,   241,   241,   241,   241,   241,   241,   241,   241,
     460,   461,     0,     0,     0,   241,   241,   262,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,
       0,     0,     0,   262,   262,   262,   262,   262,   262,   262,
     262,   481,   482,     0,     0,     0,   262,     0,    40,     0,
      40,     0,     0,     0,     0,     0,   -90,   -90,   241,   262,
     240,   261,     0,   240,   261,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   245,   246,   247,   248,   249,   250,   241,
     262,     0,     0,     0,   414,   415,   416,   417,     0,     0,
       0,     0,     0,     0,   240,   261,     0,     0,     0,     0,
     241,   262,   251,   252,     0,     0,     0,     0,     0,     0,
       0,   219,   219,   219,   219,   435,   436,   437,   438,     0,
       0,   241,   262,     0,   219,   240,   261,   253,   467,     0,
       0,   254,   255,    38,     0,    38,   256,     0,     0,    40,
      40,     0,   240,   240,   240,   240,   456,   457,   458,   459,
       0,     0,     0,     0,     0,   240,   240,   261,     0,     0,
     218,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    38,   261,   261,   261,   261,   477,   478,   479,
     480,   239,     0,   239,   260,     0,   261,     0,    39,     0,
      39,     0,    38,    38,   124,   125,     0,     0,   240,   261,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,   240,
     261,     0,     0,     0,     0,   -67,   -67,   -67,   -67,     0,
     -67,   -67,     0,    37,     0,    37,     0,     0,     0,     0,
     240,   261,     0,     0,   245,   246,   247,   248,   249,   250,
       0,     0,   218,   -61,   -61,   -61,   -61,    38,   323,   324,
     217,   240,   261,   -67,     0,    37,   260,   -67,   -67,   -67,
     389,   390,    37,   251,   252,     0,     0,     0,     0,    39,
      39,   238,     0,   238,   259,     0,     0,     0,     0,     0,
     -61,   -61,    37,   123,     0,     0,   325,   326,   253,   494,
       0,     0,   254,   255,     0,    37,     0,   256,     0,     0,
       0,     0,     0,     0,     0,    37,   245,   246,   247,   248,
     249,   250,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,   251,   252,     0,   -62,   -62,
     -62,   -62,   217,    81,    82,     0,     0,    37,     0,     0,
     -32,   -32,     0,     0,     0,     0,   259,     0,     0,     0,
     253,   500,     0,     0,   254,   255,     0,     0,   -32,   256,
     -32,   -32,   -62,   239,   260,   -32,   239,   260,     0,   -32,
     -32,    83,    84,     0,   -32,     0,   245,   246,   247,   248,
     249,   250,     0,     0,     0,   412,   413,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,   260,     0,
       0,     0,     0,     0,     0,   251,   252,     0,     0,     0,
       0,     0,     0,     0,   218,   218,   433,   434,     0,     0,
       0,     0,     0,    36,     0,    36,     0,   218,   239,   260,
     253,   506,     0,     0,   254,   255,     0,     0,     0,   256,
       0,     0,     0,     0,     0,   239,   239,   454,   455,     0,
     216,     0,     0,     0,     0,    36,     0,     0,   239,   239,
     260,     0,    36,   238,   259,     0,   238,   259,     0,     0,
       0,   237,     0,   237,   258,     0,   260,   260,   475,   476,
       0,     0,   122,     0,   411,     0,     0,     0,     0,   260,
       0,    38,     0,    38,     0,    36,     0,   238,   259,     0,
       0,   239,   260,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   432,     0,     0,     0,     0,
       0,     0,   239,   260,     0,     0,     0,   217,   238,   259,
     -63,   -63,   -63,   -63,     0,   385,   386,     0,     0,     0,
       0,     0,   216,   239,   260,   238,   453,    36,     0,   245,
     246,   247,   248,   249,   250,     0,   258,     0,   238,   238,
     259,     0,     0,     0,   239,   260,     0,    35,   -63,    35,
       0,     0,   -63,   387,   388,     0,   259,   474,   251,   252,
       0,     0,    38,    38,     0,     0,     0,     0,     0,   259,
       0,    37,     0,    37,   215,     0,     0,     0,     0,    35,
       0,   238,   259,   253,   512,     0,    35,   254,   255,     0,
       0,     0,   256,     0,     0,   236,     0,   236,   257,     0,
       0,     0,   238,   259,     0,     0,   203,   204,   205,   206,
     207,   208,     0,     0,     0,   -62,   -62,   -62,   -62,   135,
     354,   355,     0,   238,   259,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,   209,   210,     0,   224,   225,
     226,   227,   228,   229,   238,   259,   -62,   -62,   -62,   -62,
       0,   323,   324,   237,   258,   -62,   237,   258,   356,   357,
     211,     0,    37,    37,   212,   213,   215,   230,   231,   214,
       0,    35,     0,   410,     0,     0,     0,     0,     0,     0,
     257,     0,     0,   -62,   -62,     0,     0,   237,   258,   325,
     326,     0,   232,     0,     0,     0,   233,   234,     0,     0,
       0,   235,     0,     0,   431,     0,     0,     0,     0,     0,
     245,   246,   247,   248,   249,   250,     0,   216,   237,   258,
       0,     0,     0,     0,     0,     0,    34,     0,    64,     0,
       0,     0,     0,     0,     0,   452,     0,     0,    73,   251,
     252,     0,     0,     0,     0,     0,     0,     0,   237,   237,
     258,     0,     0,    92,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   253,    64,   473,     0,   254,   255,
       0,     0,     0,   256,   111,     0,   117,     0,     0,   258,
       0,    36,     0,    36,     0,   273,   274,   275,   276,   277,
     278,   237,   258,     0,     0,     0,     0,   236,   257,     0,
     236,   257,   138,     0,     0,     0,     0,     0,    64,     0,
       0,     0,   237,   258,   188,   189,     0,     0,     0,     0,
       0,     0,   304,   305,   306,   307,   308,   309,     0,     0,
     423,   236,   257,   237,   258,     0,     0,     0,     0,   279,
       0,     0,     0,   191,   192,   154,     0,   156,   193,     0,
      64,   209,   210,     0,   237,   258,     0,     0,     0,   163,
       0,   444,   236,   257,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    36,   170,     0,   310,     0,     0,     0,
     212,   213,     0,     0,     0,   214,     0,     0,   270,     0,
       0,     0,   465,   236,   257,     0,     0,     0,   284,     0,
     335,   336,   337,   338,   339,   340,     0,     0,   366,   367,
     368,   369,   370,   371,     0,     0,     0,     0,     0,   315,
       0,     0,     0,   486,     0,    35,     0,    35,     0,   230,
     231,     0,     0,     0,     0,   236,   257,   251,   252,     0,
     346,     0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,
     -86,   -86,     0,     0,   341,     0,   236,   257,   233,   234,
       0,   377,   372,   235,     0,     0,   254,   255,     0,     0,
       0,   256,     0,     0,     0,     0,   399,   236,   257,   403,
     -86,     0,   -86,   -86,   302,     0,   303,   408,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   236,   257,
       0,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,     0,
     424,     0,     0,     0,     0,     0,    35,    35,   429,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -64,
     -64,   445,     0,     0,     0,   -64,   -64,   327,   328,   450,
     -37,     0,   -37,   -37,   -37,   -37,   -28,   -28,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,   466,     0,   -28,     0,   -28,    99,     0,     0,
     471,   -28,     0,     0,     0,   -28,   -28,   -37,   -37,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,   -37,    64,   -37,   -37,     0,
       0,     0,   -37,     0,   493,     0,   -37,   -37,     0,     0,
       0,   -37,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,     0,     0,     0,   499,    46,     0,     2,     3,
       4,     5,     0,     0,    22,    23,    24,    25,    26,    27,
      47,     0,    48,    49,    50,    51,   505,   -86,     0,     0,
     -86,   364,     0,   365,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,    28,    29,     0,     0,   511,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,    52,     0,    53,   102,    64,    64,     0,    30,     0,
       0,     0,    31,    32,     0,     0,   -30,    33,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -69,   -69,   -69,   -69,
     -69,   298,   299,   300,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -30,   -30,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,   -30,     0,   -30,   -30,     0,     0,     0,   -30,     0,
       0,     0,   -30,   -30,   -35,   -35,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -35,     0,   -35,   -35,     0,     0,     0,   -35,
       0,     0,     0,   -35,   -35,     0,     0,   -36,   -35,   -36,
     -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -40,     0,
     -40,   -40,   -40,   -40,   -36,   -36,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -36,     0,   -36,   -36,     0,     0,     0,   -36,
       0,     0,     0,   -36,   -36,   -40,   -40,     0,   -36,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -40,     0,   -40,   -40,     0,     0,     0,
     -40,     0,     0,     0,   -40,   -40,     0,     0,   -27,   -40,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -27,   -27,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,   -27,     0,   -27,   -27,     0,     0,     0,
     -27,     0,     0,     0,   -27,   -27,   -33,   -33,     0,   -27,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -33,     0,   -33,   -33,     0,     0,
       0,   -33,     0,     0,     0,   -33,   -33,     0,     0,   -31,
     -33,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -31,   -31,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,   -31,     0,   -31,   -31,     0,     0,
       0,   -31,     0,     0,     0,   -31,   -31,   -39,   -39,     0,
     -31,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -39,     0,   -39,   -39,     0,
       0,     0,   -39,     0,     0,     0,   -39,   -39,     0,     0,
     -42,   -39,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -42,   -42,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,   -42,     0,   -42,   -42,     0,
       0,     0,   -42,     0,     0,     0,   -42,   -42,   -38,   -38,
       0,   -42,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -38,     0,   -38,   -38,
       0,     0,     0,   -38,     0,     0,     0,   -38,   -38,     0,
       0,   -34,   -38,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,    46,     0,     2,     3,     4,     5,   -34,   -34,
      22,    23,    24,    25,    26,    27,    47,     0,    48,    49,
      50,    51,     0,     0,     0,     0,   -34,     0,   -34,   -34,
       0,     0,     0,   -34,     0,     0,     0,   -34,   -34,    28,
      29,     0,   -34,     0,     0,     0,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,     0,   -91,   -91,    52,     0,    53,
     159,     0,     0,     0,    30,     0,     0,     0,    31,    32,
       0,     0,   -29,    33,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,   -46,     0,   -46,   -46,   -46,   -46,   -29,
     -29,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -29,     0,   -29,
     -29,     0,     0,     0,   -29,     0,     0,     0,   -29,   -29,
     -46,   -46,     0,   -29,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -46,     0,
     -46,   -46,     0,     0,     0,   -46,     0,     0,     0,   -46,
     -46,     0,     0,   -50,   -46,   -50,   -50,   -50,   -50,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,
     -50,   -50,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,   -50,     0,
     -50,   -50,     0,     0,     0,   -50,     0,     0,     0,   -50,
     -50,   -52,   -52,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -52,
       0,   -52,   -52,     0,     0,     0,   -52,     0,     0,     0,
     -52,   -52,     0,     0,   -28,   -52,   -28,   -28,   -28,   -28,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,
       0,   -28,   395,     0,     0,     0,   -28,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,   -28,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -28,     0,   -28,   397,     0,     0,     0,   -28,     0,     0,
       0,   -28,   -28,     0,     0,    46,   -28,     2,     3,     4,
       5,     0,     0,    22,    23,    24,    25,    26,    27,    47,
       0,    48,    49,    50,    51,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,    46,     0,     2,     3,
       4,     5,    28,    29,    22,    23,    24,    25,    26,    27,
      47,     0,    48,    49,    50,    51,     0,     0,     0,     0,
      52,     0,    53,   515,     0,     0,     0,    30,     0,     0,
       0,    31,    32,    28,    29,     0,    33,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,    52,     0,    53,   516,     0,     0,     0,    30,     0,
       0,     0,    31,    32,     0,     0,    46,    33,     2,     3,
       4,     5,     0,     0,    22,    23,    24,    25,    26,    27,
      47,     0,    48,    49,    50,    51,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -63,   -63,   -63,   -63,     0,
     354,   355,     0,    28,    29,   -86,   -86,   -86,   -86,     0,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    53,   -86,   -86,   -86,   -86,    30,   -86,
     -86,     0,    31,    32,     0,   -63,     0,    33,   356,   357,
     -86,     0,     0,     0,   271,     0,   272,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   333,   -86,   334,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   469,     0,   470,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -86,     0,
       0,     0,     0,   268,     0,   269,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,     0,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,   -87,   -87,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,     0,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,     0,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
       0,   -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -91,   -91,   -91,   -91,     0,   -91,
     -91,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -91,
       0,   -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   332,     0,   -76,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,   -63,   -63,   -63,
     -63,     0,    81,    82,   -87,   -87,   -87,   -87,     0,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,   -82,   -82,     0,     0,
       0,   -63,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -87,
      83,    84,   -87,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -88,
     -90,   -90,   -88,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,     0,     0,   -89,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -90,     0,     0,   -90,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -91,   -91,   -91,   -91,     0,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -91,   -82,   -82,   -91,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   394,     0,     0,   -76,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -82,     0,     0,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,     0,     0,   406,     0,   407,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   448,   -86,   449,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -84,     0,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -92,     0,   -92,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -84,     0,     0,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -92,   -92,
     -92,     0,   -92,   -92,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -92,   -85,   -85,   -92,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -83,     0,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -85,     0,   -85,   -85,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -83,   -91,   -91,   -83,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
       0,   -85,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -91,   -91,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,   -76,
      90,     0,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -82,   -82,     0,     0,     0,
       0,     0,   -84,   -84,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,   -92,   -92,     0,     0,     0,     0,     0,   -83,
     -83,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -85,   -85,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -88,   -90,   -90,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -90,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -91,   -82,   -82,     0,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   301,     0,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -82,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -69,
     -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,     0,   -69,   -69,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   329,   330,   331,   -72,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -87,   -88,   -88,   -88,   -88,   -87,   -88,   -88,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -89,   -89,
     -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -88,   -90,
     -90,     0,     0,   -88,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -89,   -91,   -91,   -91,   -91,   -89,   -91,
     -91,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -90,
     -76,   -76,   -76,   -76,   -90,   -76,   -76,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -82,   -82,   -82,   -82,   -91,
     -82,   -82,     0,     0,   -91,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   363,   -69,   -69,   -69,   -69,
     -76,   -69,   -69,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -82,   -72,   -72,   -72,   -72,   -82,   -72,   -72,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,     0,   -69,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   391,   392,   393,     0,     0,     0,   -72,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -87,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,
     -88,   -88,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,
       0,     0,   -88,   -88,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -89,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -90,   -90,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,     0,   -91,   -91,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -76,   -76,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,
       0,     0,     0,     0,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,   -78,   -78,   -78,     0,   -78,   -78,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,     0,
     -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -79,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -87,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,   -88,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
       0,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
     -91,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -80,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -81,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,   -78,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -84,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -92,   -92,
     -92,     0,   -92,   -92,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,
       0,     0,   -92,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -70,   -70,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   329,   330,   331,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     329,   330,   331,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,
     -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,     0,   -92,
     -92,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,     0,   -84,     0,     0,     0,     0,   -84,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,
     -71,   -71,   -71,   -71,   -92,   -71,   -71,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -70,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   391,   392,   393,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   391,   392,   393,
     -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,   -83,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -92,   -92,   -92,   -92,
       0,   -92,   -92,     0,     0,     0,     0,   -84,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,   -92,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,   -83,     0,     0,     0,     0,
     -83,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,   -85,   -92,   -92,   -92,   -92,   -85,   -92,   -92,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,     0,     0,   -84,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -92,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -83,   -83,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -85,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -83,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -81,   -81,   -81,   -81,   -72,   -81,   -81,     0,     0,     0,
       0,   -80,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -76,   -64,   -64,
     -64,   296,   297,     0,   -81,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -78,   -78,   -78,
     -78,     0,   -78,   -78,     0,     0,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -70,   -70,   -70,   -70,   -77,   -70,   -70,     0,     0,     0,
       0,   -78,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -67,   -67,
     -67,   296,   297,     0,   -70,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -70,   -70,   -70,   -70,    87,    88,    89,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -73,   -73,   -73,
     -73,     0,   -73,   -73,     0,     0,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -75,   -75,   -75,   -75,   -71,   -75,   -75,     0,     0,     0,
       0,   -73,     0,   -71,   -71,   -71,   -71,    87,    88,    89,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -68,   -68,
     -68,   296,   297,     0,   -75,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -90,   -90,   -90,   -90,   -87,   -90,   -90,     0,     0,     0,
       0,   -88,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -65,   -65,
     -65,   296,   297,     0,   -90,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,     0,     0,     0,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -91,     0,     0,     0,     0,     0,
       0,   -82,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -69,     0,     0,
     -69,   -69,   -69,   -69,   360,   361,   362,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,   -78,   -78,   -78,   -78,     0,
     -78,   -78,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,     0,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,
       0,     0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,
       0,     0,     0,   -88,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -91,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -80,   -80,   -80,   -80,     0,   -80,   -80,
       0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,   -80,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -76,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -81,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -77,   -77,   -77,   -77,     0,   -77,   -77,
       0,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -79,   -84,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -92,   -92,   -92,   -92,     0,   -92,   -92,     0,   -70,   -70,
     -70,   -70,     0,   -70,   -70,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,     0,     0,   -92,   -74,   -74,   -74,   -74,     0,
     -74,   -74,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -70,   -70,   -70,   -70,   -70,   298,   299,   300,   -71,   -71,
     -71,   -71,   -71,   298,   299,   300,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,     0,
     -75,   -75,     0,     0,     0,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,     0,   -71,   -71,   -71,   -71,     0,
     -71,   -71,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -70,     0,     0,   -70,   -70,
     -70,   -70,   360,   361,   362,   -71,     0,     0,   -71,   -71,
     -71,   -71,   360,   361,   362,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,     0,
     -74,   -74,     0,     0,     0,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,   -83,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -92,   -92,
     -92,   -92,     0,   -92,   -92,     0,     0,     0,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,   -92,   -92,
     -92,   -92,     0,   -92,   -92,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -84,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -83,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   327,   328,   -68,   -68,   -68,   -68,
       0,   -68,   -68,     0,     0,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,     0,     0,     0,   -66,   -66,   -66,   -66,
       0,   -66,   -66,     0,     0,   -68,   -68,   -68,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,   -68,
     -68,   327,   328,   -65,   -65,     0,     0,     0,     0,   -65,
     -65,   327,   328,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   327,   328,   -68,     0,     0,     0,   -68,   -68,   -68,
     389,   390,   -65,   -65,   -65,   -65,     0,   -65,   -65,     0,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,
     -65,     0,     0,     0,   -65,   -65,   -65,   389,   390,   -66,
       0,     0,   -68,   -66,   -66,   -66,   389,   390,     0,   -65,
       0,   -68,   -68,    85,    86,     0,   -66,     0,   -65,   -65,
      85,    86,     0,     0,     0,   -66,   -66,    85,    86,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -65,   -65,   -65,
     -65,     0,   -65,   -65,     0,   -66,   -66,   -66,   -66,   -64,
     -66,   -66,   -64,   -64,   358,   359,     0,     0,   -66,   -66,
     -66,   296,   297,   -67,     0,     0,   -67,   -67,   358,   359,
     -68,     0,     0,   -68,   -68,   358,   359,   -65,     0,     0,
     -65,   -65,   358,   359,     0,   -66,     0,     0,   -66,   -66,
     358,   359,   -63,   -63,   -63,   -63,     0,   323,   324,   -62,
     -62,   -62,   -62,     0,   292,   293,   -63,   -63,   -63,   -63,
       0,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -63,     0,     0,     0,     0,   325,   326,     0,     0,     0,
       0,   -62,   294,   295,     0,     0,     0,     0,   -63,   294,
     295
};

static const yytype_int16 yycheck[] =
{
      18,   100,    20,     0,   269,    96,    57,   272,     9,     6,
      22,    22,    30,    22,    23,    24,    25,    10,    27,    28,
      22,    23,    22,    23,    24,    25,    22,    45,    22,    23,
      24,    25,    50,    27,    28,    22,    23,    56,   303,    57,
      22,    23,    24,    25,    56,    27,    28,    56,    66,    60,
      68,    69,   143,    64,    56,    22,    65,    66,    67,    68,
      69,    70,    71,    64,    64,    58,    62,    56,    62,   334,
      67,    65,    66,   164,    56,    57,    94,    64,   169,    61,
      22,    63,   100,    65,    66,    67,    68,    69,    70,    71,
      58,   142,    22,    23,     1,    62,     3,     4,     5,     6,
     365,    22,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    56,     9,    22,    23,     9,   137,
       9,   139,    22,    23,   142,    22,    23,    24,    25,    59,
      60,    38,    39,   151,    22,    23,    24,    25,     0,    27,
      28,    60,   407,    64,     6,    64,     9,    22,   166,    56,
     147,    58,    59,    56,    60,    60,    63,     9,    64,    64,
      67,    68,   180,   428,    64,    72,    22,    64,    56,    57,
     188,   189,   190,   191,   192,   193,    56,    65,    66,    67,
      68,    69,    70,    71,   449,    22,    23,    24,    25,    64,
      56,   209,   210,   211,   212,   213,   214,    22,    23,    24,
      25,    58,    27,    28,    60,   470,    56,    57,    64,    63,
      22,    23,   230,   231,   232,   233,   234,   235,    63,    22,
      23,    24,    25,    60,    27,    28,    56,    64,    63,    22,
      23,    56,    57,   251,   252,   253,   254,   255,   256,    56,
      65,    66,    67,    68,    69,    70,    71,    56,    60,    56,
     268,   269,    64,   271,   272,    60,    59,    60,    61,    64,
      63,   279,    65,    66,    67,    68,    69,    70,    71,    62,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    22,    23,    24,    25,
      22,    23,   310,    22,    23,    24,    25,   396,     9,   398,
      64,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    22,    23,    24,
      25,    56,    57,   341,    60,    63,    61,    56,    64,    62,
      62,    58,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    22,    23,
      22,    23,    24,    25,   372,    27,    28,    62,    22,    23,
      24,    25,    56,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,    22,   396,    60,
     398,    60,    56,    64,    18,    64,    20,    22,   406,   407,
      56,    57,    64,    65,    66,    61,    30,    63,    62,     9,
      10,    11,    12,    13,    14,    56,    57,    22,    23,   427,
     428,    45,    59,    60,    59,    60,    50,    22,    23,    24,
      25,    10,    60,    57,    59,    60,    64,    58,    38,    39,
     448,   449,    66,     9,    68,    69,   487,   488,     9,    10,
      11,    12,    13,    14,    59,    60,    56,     3,     4,     5,
       6,   469,   470,    63,    59,    60,    64,    67,    68,    60,
      94,    60,    72,    64,    62,    64,   100,    38,    39,   487,
     488,    56,     1,    64,     3,     4,     5,     6,    59,    60,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    63,    64,    60,    61,    67,    68,    64,    17,
      60,    72,    60,   137,    64,   139,    64,    64,   142,    38,
      39,     9,    10,    11,    12,    13,    14,   151,    22,    23,
      24,    25,    60,    27,    28,    58,    64,    56,    58,    58,
      59,    56,   166,    60,    63,    56,    57,    64,    67,    68,
      38,    39,    58,    72,    56,    57,   180,    22,    23,    24,
      25,    58,    56,    58,   188,   189,   190,   191,   192,   193,
      63,    65,    66,    60,    62,    63,    56,    64,    60,    67,
      68,    64,    64,    62,    72,   209,   210,   211,   212,   213,
     214,    56,    59,    60,    58,     9,    10,    11,    12,    13,
      14,    22,    23,    24,    25,    58,   230,   231,   232,   233,
     234,   235,    60,   266,   267,    64,    64,    22,    23,    24,
      25,    56,    27,    28,    38,    39,    64,   251,   252,   253,
     254,   255,   256,    60,    64,    64,    64,    64,    59,    60,
      64,    17,    62,    62,   268,   269,    64,   271,   272,    63,
      64,    56,    62,    67,    68,   279,    64,    64,    72,    62,
      65,    66,    67,    68,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
      62,    64,    62,    62,     0,     1,   310,     3,     4,     5,
       6,    62,    62,    17,     6,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   147,    -1,    -1,    -1,     0,     1,   341,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,     1,    -1,     3,     4,     5,     6,   372,    22,
      23,    24,    25,    -1,    27,    28,    -1,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,    -1,   396,    -1,   398,     0,     1,    -1,     3,     4,
       5,     6,   406,   407,    57,     9,    10,    11,    12,    13,
      14,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,   427,   428,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    38,    39,    -1,    -1,    28,    29,
      -1,    31,    32,    33,   448,   449,     0,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    45,    -1,    -1,    -1,    63,
      50,    -1,    -1,    67,    68,   469,   470,    57,    72,     0,
       1,    -1,     3,     4,     5,     6,    66,    -1,    68,    69,
      -1,    -1,    -1,   487,   488,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
     100,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,   137,    38,    39,
      -1,    -1,   142,    -1,    59,    -1,    -1,    -1,    63,    -1,
      -1,   151,    67,    68,    -1,    -1,    56,    72,    58,    59,
      -1,    -1,    -1,    63,    56,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    65,    66,    67,    68,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,   188,   189,
      -1,   191,   192,   193,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    38,    39,   209,
     210,    -1,   212,   213,   214,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    38,    39,
     230,   231,    63,   233,   234,   235,    67,    68,    -1,     0,
       1,    72,     3,     4,     5,     6,    -1,    -1,    38,    39,
      -1,   251,   252,    63,   254,   255,   256,    67,    68,    -1,
       0,     1,    72,     3,     4,     5,     6,    -1,   268,   269,
      -1,   271,   272,    63,    64,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,     9,    10,    11,    12,    13,    14,     0,
       1,    -1,     3,     4,     5,     6,    -1,    -1,   298,   299,
     300,    -1,   302,   303,    -1,    22,    23,    24,    25,    -1,
      27,    28,    38,    39,    -1,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    60,    -1,    -1,    72,    64,    65,    66,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    -1,    -1,    -1,    -1,
      18,     1,    20,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,    -1,   396,    45,   398,    -1,
      -1,    -1,    50,    -1,    -1,    -1,   406,   407,    -1,    57,
      22,    23,    24,    25,    -1,    27,    28,    -1,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,   427,   428,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    90,    -1,    56,    57,    -1,    -1,   448,   449,
      -1,    -1,   100,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,   469,
     470,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,   487,   488,   137,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    22,    23,    24,    25,    57,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,   100,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
     268,   269,    -1,   271,   272,    22,    23,    24,    25,   137,
      27,    28,    38,    39,   142,     9,    10,    11,    12,    13,
      14,    -1,    -1,   151,    -1,    -1,    -1,    -1,   296,   297,
      56,    -1,    58,    59,   302,   303,    -1,    63,    -1,    -1,
      -1,    67,    68,    60,    38,    39,    72,    64,    65,    66,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,    -1,    -1,    -1,   332,   333,   334,    -1,    -1,    63,
      64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    -1,    -1,    -1,   363,   364,   365,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,    -1,    -1,    -1,   394,    -1,   396,    -1,
     398,    -1,    -1,    -1,    -1,    -1,    56,    57,   406,   407,
     268,   269,    -1,   271,   272,    65,    66,    67,    68,    69,
      70,    71,    -1,     9,    10,    11,    12,    13,    14,   427,
     428,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,   302,   303,    -1,    -1,    -1,    -1,
     448,   449,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,   469,   470,    -1,   332,   333,   334,    63,    64,    -1,
      -1,    67,    68,    18,    -1,    20,    72,    -1,    -1,   487,
     488,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
      -1,    -1,    -1,    -1,    -1,   363,   364,   365,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,   381,   382,   383,   384,   385,   386,   387,
     388,    66,    -1,    68,    69,    -1,   394,    -1,   396,    -1,
     398,    -1,    77,    78,    79,    80,    -1,    -1,   406,   407,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,   427,
     428,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
     448,   449,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,   137,    22,    23,    24,    25,   142,    27,    28,
      45,   469,   470,    60,    -1,    50,   151,    64,    65,    66,
      67,    68,    57,    38,    39,    -1,    -1,    -1,    -1,   487,
     488,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      59,    60,    77,    78,    -1,    -1,    65,    66,    63,    64,
      -1,    -1,    67,    68,    -1,    90,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,     9,    10,    11,    12,
      13,    14,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    38,    39,    -1,    22,    23,
      24,    25,   137,    27,    28,    -1,    -1,   142,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      63,    64,    -1,    -1,    67,    68,    -1,    -1,    56,    72,
      58,    59,    56,   268,   269,    63,   271,   272,    -1,    67,
      68,    65,    66,    -1,    72,    -1,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,   290,   291,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,   320,   321,   322,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,   332,   333,   334,
      63,    64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,   350,   351,   352,   353,    -1,
      45,    -1,    -1,    -1,    -1,    50,    -1,    -1,   363,   364,
     365,    -1,    57,   268,   269,    -1,   271,   272,    -1,    -1,
      -1,    66,    -1,    68,    69,    -1,   381,   382,   383,   384,
      -1,    -1,    77,    -1,   289,    -1,    -1,    -1,    -1,   394,
      -1,   396,    -1,   398,    -1,    90,    -1,   302,   303,    -1,
      -1,   406,   407,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,
      -1,    -1,   427,   428,    -1,    -1,    -1,   332,   333,   334,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,   137,   448,   449,   350,   351,   142,    -1,     9,
      10,    11,    12,    13,    14,    -1,   151,    -1,   363,   364,
     365,    -1,    -1,    -1,   469,   470,    -1,    18,    60,    20,
      -1,    -1,    64,    65,    66,    -1,   381,   382,    38,    39,
      -1,    -1,   487,   488,    -1,    -1,    -1,    -1,    -1,   394,
      -1,   396,    -1,   398,    45,    -1,    -1,    -1,    -1,    50,
      -1,   406,   407,    63,    64,    -1,    57,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,    66,    -1,    68,    69,    -1,
      -1,    -1,   427,   428,    -1,    -1,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    22,    23,    24,    25,    90,
      27,    28,    -1,   448,   449,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,     9,    10,
      11,    12,    13,    14,   469,   470,    22,    23,    24,    25,
      -1,    27,    28,   268,   269,    62,   271,   272,    65,    66,
      63,    -1,   487,   488,    67,    68,   137,    38,    39,    72,
      -1,   142,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    59,    60,    -1,    -1,   302,   303,    65,
      66,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    -1,   332,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    30,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
     365,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    63,    57,   381,    -1,    67,    68,
      -1,    -1,    -1,    72,    66,    -1,    68,    -1,    -1,   394,
      -1,   396,    -1,   398,    -1,     9,    10,    11,    12,    13,
      14,   406,   407,    -1,    -1,    -1,    -1,   268,   269,    -1,
     271,   272,    94,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,   427,   428,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
     301,   302,   303,   448,   449,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,   137,    -1,   139,    72,    -1,
     142,    38,    39,    -1,   469,   470,    -1,    -1,    -1,   151,
      -1,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   487,   488,   166,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,   180,    -1,
      -1,    -1,   363,   364,   365,    -1,    -1,    -1,   190,    -1,
       9,    10,    11,    12,    13,    14,    -1,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,   394,    -1,   396,    -1,   398,    -1,    38,
      39,    -1,    -1,    -1,    -1,   406,   407,    38,    39,    -1,
     232,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    63,    -1,   427,   428,    67,    68,
      -1,   253,    63,    72,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,   268,   448,   449,   271,
      57,    -1,    59,    60,    61,    -1,    63,   279,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,   469,   470,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
     302,    -1,    -1,    -1,    -1,    -1,   487,   488,   310,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    59,
      60,   333,    -1,    -1,    -1,    65,    66,    67,    68,   341,
       1,    -1,     3,     4,     5,     6,    38,    39,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,   364,    -1,    56,    -1,    58,    59,    -1,    -1,
     372,    63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   396,    56,   398,    58,    59,    -1,
      -1,    -1,    63,    -1,   406,    -1,    67,    68,    -1,    -1,
      -1,    72,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,   427,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,   448,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    38,    39,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    56,    -1,    58,    59,   487,   488,    -1,    63,    -1,
      -1,    -1,    67,    68,    -1,    -1,     1,    72,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    38,    39,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    38,    39,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    56,    -1,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    56,    -1,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    -1,    -1,     1,    72,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    38,    39,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    56,    -1,    58,    59,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,     1,
      72,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    38,    39,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    56,    -1,    58,    59,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
       1,    72,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    38,    39,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    56,    -1,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,     1,    72,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    38,    39,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    38,
      39,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    56,    -1,    58,
      59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,     1,    72,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    38,
      39,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      38,    39,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    56,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,     1,    72,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    38,    39,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    56,
      -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,     1,    72,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    38,    39,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      56,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,     1,    72,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    38,    39,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    38,    39,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    56,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    -1,    -1,     1,    72,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    38,    39,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    22,    23,    24,    25,    63,    27,
      28,    -1,    67,    68,    -1,    62,    -1,    72,    65,    66,
      57,    -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    57,
      27,    28,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    56,    65,    66,    67,    68,    69,    70,    71,    57,
      65,    66,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    57,
      27,    28,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    57,    -1,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      57,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      57,    27,    28,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    57,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    57,    27,    28,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    57,    -1,
      -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    56,    57,    22,    23,    24,    25,    -1,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    56,    57,    -1,    -1,    -1,
      -1,    -1,    56,    57,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    56,
      57,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    57,    22,    23,    24,
      25,    -1,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    22,    23,    24,    25,    62,    27,    28,
      65,    66,    67,    68,    69,    70,    71,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    57,    27,
      28,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    57,    22,    23,    24,    25,    62,    27,
      28,    65,    66,    67,    68,    69,    70,    71,    -1,    57,
      22,    23,    24,    25,    62,    27,    28,    65,    66,    67,
      68,    69,    70,    71,    -1,    22,    23,    24,    25,    57,
      27,    28,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    57,    22,    23,    24,    25,
      62,    27,    28,    65,    66,    67,    68,    69,    70,    71,
      57,    22,    23,    24,    25,    62,    27,    28,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    57,
      22,    23,    24,    25,    62,    27,    28,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    57,    22,    23,    24,    25,    62,    27,    28,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    64,    65,
      66,    67,    68,    -1,    56,    -1,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    64,    65,
      66,    67,    68,    -1,    56,    -1,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    64,    65,
      66,    67,    68,    -1,    56,    -1,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    64,    65,
      66,    67,    68,    -1,    56,    -1,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    64,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    56,    -1,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    56,    22,    23,    24,    25,    -1,
      27,    28,    -1,    65,    66,    67,    68,    69,    70,    71,
      64,    65,    66,    67,    68,    69,    70,    71,    64,    65,
      66,    67,    68,    69,    70,    71,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    62,    56,    -1,    65,    66,
      67,    68,    69,    70,    71,    65,    66,    67,    68,    69,
      70,    71,    56,    64,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    60,
      -1,    -1,    56,    64,    65,    66,    67,    68,    -1,    56,
      -1,    65,    66,    67,    68,    -1,    56,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    65,    66,    67,    68,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    62,
      27,    28,    65,    66,    67,    68,    -1,    -1,    64,    65,
      66,    67,    68,    62,    -1,    -1,    65,    66,    67,    68,
      62,    -1,    -1,    65,    66,    67,    68,    62,    -1,    -1,
      65,    66,    67,    68,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    64,    65,
      66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    74,    75,    76,    77,
      78,    80,    81,   110,    56,     0,    75,    56,    57,    57,
      58,     9,     9,    10,    11,    12,    13,    14,    38,    39,
      63,    67,    68,    72,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    10,    58,     1,    15,    17,    18,
      19,    20,    56,    58,    59,    76,    84,    86,    87,    88,
      89,    90,    94,    98,    99,   110,    61,    63,    61,    63,
     106,   107,   106,    99,   106,   106,   106,    22,    23,    24,
      25,    27,    28,    65,    66,    67,    68,    69,    70,    71,
      57,    79,    99,    56,    63,    95,    97,    99,    63,    59,
      85,    56,    59,    87,    56,    16,    92,    56,    56,     9,
      62,    99,     1,     3,    82,    83,   110,    99,    64,    99,
     109,    64,   101,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   100,    59,    60,    99,    63,
      84,    10,    86,    93,    62,    64,    64,    60,    64,     9,
      62,    60,    64,    59,    99,    64,    99,    17,    64,    59,
      84,    83,    61,    99,    91,    64,    63,    62,    84,    96,
      99,    84,    64,    56,     9,    10,    11,    12,    13,    14,
      63,   108,     9,    10,    11,    12,    13,    14,    38,    39,
      63,    67,    68,    72,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     9,    10,    11,    12,    13,    14,    38,
      39,    63,    67,    68,    72,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     9,    10,    11,    12,    13,    14,
      38,    39,    63,    67,    68,    72,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     9,    10,    11,    12,    13,
      14,    38,    39,    63,    67,    68,    72,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    58,    58,    61,    63,
      99,    61,    63,     9,    10,    11,    12,    13,    14,    63,
     106,   107,   108,   106,    99,   106,   106,   106,    22,    23,
      24,    25,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    57,    61,    63,     9,    10,    11,    12,    13,    14,
      63,   106,   107,   108,   106,    99,   106,   106,   106,    22,
      23,    24,    25,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    57,    61,    63,     9,    10,    11,    12,    13,
      14,    63,   106,   107,   108,   106,    99,   106,   106,   106,
      22,    23,    24,    25,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    57,    61,    63,     9,    10,    11,    12,
      13,    14,    63,   106,   107,   108,   106,    99,   106,   106,
     106,    22,    23,    24,    25,    27,    28,    65,    66,    67,
      68,    69,    70,    71,    57,    59,    85,    59,    85,    99,
      64,   109,    64,    99,    64,   109,    61,    63,    99,    64,
     101,   102,   103,   103,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   100,    99,    64,   109,    61,    63,    99,
      64,   101,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   106,   106,   100,    99,    64,   109,    61,    63,
      99,    64,   101,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   100,    99,    64,   109,    61,
      63,    99,    64,   101,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   106,   106,   100,    86,    86,    62,
      64,    62,    64,    99,    64,   109,    64,    62,    64,    99,
      64,   109,    64,    62,    64,    99,    64,   109,    64,    62,
      64,    99,    64,   109,    64,    59,    59,    62,    64,    62,
      64,    62,    64,    62,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    85,    84,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    89,    91,    90,    93,    92,    92,    95,    96,
      94,    97,    94,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   110,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     1,     3,
       5,     6,     3,     2,     5,     4,     1,     3,     4,     3,
       5,     5,     5,     1,     3,     2,     4,     2,     0,     4,
       1,     2,     1,     2,     2,     1,     1,     1,     2,     2,
       2,     4,     2,     0,     6,     0,     3,     0,     0,     0,
       7,     0,     8,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     1,     4,     3,     4,     1,     1,     1,     1,
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
  switch (yytype)
    {
    case 9: /* IDENTIFIER  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2695 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2701 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2707 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2713 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2719 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2725 "src/parser.c"
        break;

    case 74: /* declaration_list  */
#line 70 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2731 "src/parser.c"
        break;

    case 75: /* declaration  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2737 "src/parser.c"
        break;

    case 76: /* init_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2743 "src/parser.c"
        break;

    case 77: /* var_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2749 "src/parser.c"
        break;

    case 78: /* arr_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2755 "src/parser.c"
        break;

    case 79: /* initializer_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2761 "src/parser.c"
        break;

    case 80: /* function_definition  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2767 "src/parser.c"
        break;

    case 81: /* function_declarator  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2773 "src/parser.c"
        break;

    case 82: /* argument_list  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2779 "src/parser.c"
        break;

    case 83: /* argument  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2785 "src/parser.c"
        break;

    case 84: /* compound_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2791 "src/parser.c"
        break;

    case 86: /* statement_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2797 "src/parser.c"
        break;

    case 87: /* statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2803 "src/parser.c"
        break;

    case 89: /* conditional_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2809 "src/parser.c"
        break;

    case 94: /* iteration_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2815 "src/parser.c"
        break;

    case 98: /* return_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2821 "src/parser.c"
        break;

    case 99: /* assignment_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2827 "src/parser.c"
        break;

    case 100: /* logical_or_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2833 "src/parser.c"
        break;

    case 101: /* logical_and_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2839 "src/parser.c"
        break;

    case 102: /* equality_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2845 "src/parser.c"
        break;

    case 103: /* relational_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2851 "src/parser.c"
        break;

    case 104: /* additive_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2857 "src/parser.c"
        break;

    case 105: /* multiplicative_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2863 "src/parser.c"
        break;

    case 106: /* unary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2869 "src/parser.c"
        break;

    case 107: /* postfix_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2875 "src/parser.c"
        break;

    case 108: /* primary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2881 "src/parser.c"
        break;

    case 109: /* argument_call_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2887 "src/parser.c"
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
#line 108 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3153 "src/parser.c"
    break;

  case 3:
#line 109 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3159 "src/parser.c"
    break;

  case 4:
#line 113 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3165 "src/parser.c"
    break;

  case 5:
#line 114 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3171 "src/parser.c"
    break;

  case 6:
#line 115 "src/language.y"
    { (yyval.node) = NULL; }
#line 3177 "src/parser.c"
    break;

  case 7:
#line 120 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3183 "src/parser.c"
    break;

  case 8:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3189 "src/parser.c"
    break;

  case 9:
#line 122 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3195 "src/parser.c"
    break;

  case 10:
#line 123 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3201 "src/parser.c"
    break;

  case 11:
#line 124 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3207 "src/parser.c"
    break;

  case 12:
#line 125 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3213 "src/parser.c"
    break;

  case 13:
#line 129 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval),false); free_label((yyvsp[0].sval)); }
#line 3219 "src/parser.c"
    break;

  case 14:
#line 133 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval),-1); free_label((yyvsp[-3].sval)); tc_arr_decl((yyval.node)); }
#line 3225 "src/parser.c"
    break;

  case 15:
#line 134 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-3].ival),(yyvsp[-2].sval),-1); free_label((yyvsp[-2].sval)); }
#line 3231 "src/parser.c"
    break;

  case 16:
#line 138 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3237 "src/parser.c"
    break;

  case 17:
#line 139 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3243 "src/parser.c"
    break;

  case 18:
#line 143 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-3].sval)); assign_context((yyval.node)); free_label((yyvsp[-3].sval)); }
#line 3249 "src/parser.c"
    break;

  case 19:
#line 144 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-2].sval)); assign_context((yyval.node)); free_label((yyvsp[-2].sval)); }
#line 3255 "src/parser.c"
    break;

  case 20:
#line 148 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-1].al));   }
#line 3261 "src/parser.c"
    break;

  case 21:
#line 149 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3267 "src/parser.c"
    break;

  case 22:
#line 150 "src/language.y"
    { (yyval.sval) = NULL; free_label((yyvsp[-3].sval)); }
#line 3273 "src/parser.c"
    break;

  case 23:
#line 154 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3279 "src/parser.c"
    break;

  case 24:
#line 155 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3285 "src/parser.c"
    break;

  case 25:
#line 159 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3291 "src/parser.c"
    break;

  case 26:
#line 160 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3297 "src/parser.c"
    break;

  case 27:
#line 164 "src/language.y"
    { (yyval.node) = NULL; }
#line 3303 "src/parser.c"
    break;

  case 28:
#line 165 "src/language.y"
    { begin(); }
#line 3309 "src/parser.c"
    break;

  case 29:
#line 165 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); finish(); }
#line 3315 "src/parser.c"
    break;

  case 30:
#line 169 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3321 "src/parser.c"
    break;

  case 31:
#line 170 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3327 "src/parser.c"
    break;

  case 32:
#line 174 "src/language.y"
    { (yyval.node) = NULL; }
#line 3333 "src/parser.c"
    break;

  case 33:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3339 "src/parser.c"
    break;

  case 34:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3345 "src/parser.c"
    break;

  case 35:
#line 177 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3351 "src/parser.c"
    break;

  case 36:
#line 178 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3357 "src/parser.c"
    break;

  case 37:
#line 179 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3363 "src/parser.c"
    break;

  case 38:
#line 180 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3369 "src/parser.c"
    break;

  case 39:
#line 181 "src/language.y"
    { (yyval.node) = NULL; }
#line 3375 "src/parser.c"
    break;

  case 40:
#line 182 "src/language.y"
    { (yyval.node) = NULL; }
#line 3381 "src/parser.c"
    break;

  case 41:
#line 186 "src/language.y"
    { tc_asm((yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3387 "src/parser.c"
    break;

  case 42:
#line 189 "src/language.y"
    { (yyval.node) = NULL; tc_free_if((yyvsp[0].ival)); }
#line 3393 "src/parser.c"
    break;

  case 43:
#line 193 "src/language.y"
    { tc_init_if((yyvsp[-1].node), "if_", NULL); }
#line 3399 "src/parser.c"
    break;

  case 44:
#line 193 "src/language.y"
    { node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3405 "src/parser.c"
    break;

  case 45:
#line 197 "src/language.y"
    { tc_init_else(); }
#line 3411 "src/parser.c"
    break;

  case 46:
#line 197 "src/language.y"
    { (yyval.ival) = true; node_free_recursive(&(yyvsp[0].node)); }
#line 3417 "src/parser.c"
    break;

  case 47:
#line 198 "src/language.y"
    { (yyval.ival) = false; }
#line 3423 "src/parser.c"
    break;

  case 48:
#line 202 "src/language.y"
    { tc_init_while("while_", NULL); }
#line 3429 "src/parser.c"
    break;

  case 49:
#line 202 "src/language.y"
    { tc_jump_while((yyvsp[-1].node)); }
#line 3435 "src/parser.c"
    break;

  case 50:
#line 202 "src/language.y"
    { (yyval.node) = NULL; tc_free_while(); node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3441 "src/parser.c"
    break;

  case 51:
#line 203 "src/language.y"
    { tc_init_while("do_", NULL)   ; }
#line 3447 "src/parser.c"
    break;

  case 52:
#line 203 "src/language.y"
    { (yyval.node) = NULL; tc_free_do((yyvsp[-2].node)) ; node_free_recursive(&(yyvsp[-5].node)); node_free_recursive(&(yyvsp[-2].node)); }
#line 3453 "src/parser.c"
    break;

  case 53:
#line 207 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3459 "src/parser.c"
    break;

  case 54:
#line 208 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3465 "src/parser.c"
    break;

  case 55:
#line 212 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3471 "src/parser.c"
    break;

  case 56:
#line 213 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3477 "src/parser.c"
    break;

  case 57:
#line 217 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3483 "src/parser.c"
    break;

  case 58:
#line 218 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3489 "src/parser.c"
    break;

  case 59:
#line 222 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3495 "src/parser.c"
    break;

  case 60:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3501 "src/parser.c"
    break;

  case 61:
#line 227 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3507 "src/parser.c"
    break;

  case 62:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3513 "src/parser.c"
    break;

  case 63:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3519 "src/parser.c"
    break;

  case 64:
#line 233 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3525 "src/parser.c"
    break;

  case 65:
#line 234 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3531 "src/parser.c"
    break;

  case 66:
#line 235 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3537 "src/parser.c"
    break;

  case 67:
#line 236 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3543 "src/parser.c"
    break;

  case 68:
#line 237 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3549 "src/parser.c"
    break;

  case 69:
#line 241 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3555 "src/parser.c"
    break;

  case 70:
#line 242 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3561 "src/parser.c"
    break;

  case 71:
#line 243 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3567 "src/parser.c"
    break;

  case 72:
#line 247 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3573 "src/parser.c"
    break;

  case 73:
#line 248 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3579 "src/parser.c"
    break;

  case 74:
#line 249 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3585 "src/parser.c"
    break;

  case 75:
#line 250 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3591 "src/parser.c"
    break;

  case 76:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3597 "src/parser.c"
    break;

  case 77:
#line 255 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3603 "src/parser.c"
    break;

  case 78:
#line 256 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3609 "src/parser.c"
    break;

  case 79:
#line 257 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3615 "src/parser.c"
    break;

  case 80:
#line 258 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3621 "src/parser.c"
    break;

  case 81:
#line 259 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3627 "src/parser.c"
    break;

  case 82:
#line 263 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3633 "src/parser.c"
    break;

  case 83:
#line 264 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY)   ; free_label((yyvsp[-3].sval)); }
#line 3639 "src/parser.c"
    break;

  case 84:
#line 265 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval)); tc_fcall((yyval.node), NULL); }
#line 3645 "src/parser.c"
    break;

  case 85:
#line 266 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval)); tc_fcall((yyval.node), (yyvsp[-1].node)); }
#line 3651 "src/parser.c"
    break;

  case 86:
#line 270 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3657 "src/parser.c"
    break;

  case 87:
#line 271 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(STRING_LITERAL, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3663 "src/parser.c"
    break;

  case 88:
#line 272 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_FLOAT, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3669 "src/parser.c"
    break;

  case 89:
#line 273 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_INT  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3675 "src/parser.c"
    break;

  case 90:
#line 274 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_HEX  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3681 "src/parser.c"
    break;

  case 91:
#line 275 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_CHAR , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3687 "src/parser.c"
    break;

  case 92:
#line 276 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3693 "src/parser.c"
    break;

  case 93:
#line 280 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); tc_fcall_args(NULL, (yyvsp[0].node)); }
#line 3699 "src/parser.c"
    break;

  case 94:
#line 281 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_fcall_args((yyvsp[-2].node), (yyvsp[0].node)); }
#line 3705 "src/parser.c"
    break;

  case 95:
#line 285 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3711 "src/parser.c"
    break;

  case 96:
#line 286 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3717 "src/parser.c"
    break;

  case 97:
#line 287 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3723 "src/parser.c"
    break;

  case 98:
#line 288 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3729 "src/parser.c"
    break;


#line 3733 "src/parser.c"

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
#line 291 "src/language.y"

void free_label(const char * str) {
	free((void*) str);
}
