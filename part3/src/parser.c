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
#line 36 "language.y"

#include <stdio.h>
#include "node.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;

#line 103 "src/parser.c"


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
#define YYLAST   6966

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

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
       0,    47,    47,    50,    51,    55,    56,    57,    58,    59,
      63,    64,    68,    69,    70,    74,    75,    76,    80,    81,
      85,    86,    87,    88,    92,    93,    97,    98,   102,   103,
     107,   108,   109,   110,   111,   112,   116,   117,   121,   122,
     126,   127,   131,   132,   136,   137,   141,   142,   146,   147,
     148,   152,   153,   154,   155,   156,   160,   161,   162,   166,
     167,   168,   169,   173,   174,   175,   176,   177,   178,   182,
     183,   184,   185,   186,   190,   191,   195,   196,   197,   198
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
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_declarator",
  "parameter_list", "compound_statement", "statement_list", "statement",
  "conditional_statement", "iteration_statement", "return_statement",
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

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -80

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1418,    75,   -13,     9,    80,    94,   136,   849,  1066,   -24,
      56,   102,   141,  1151,   622,  1209,  -138,  1253,  1265,   422,
    1356,  1379,   325,  2953,   125,   144,   150,   636,  2983,  3013,
    3043,   699,  1386,   645,   157,   861,   895,   970,  1117,   168,
     204,    -3,   170,   450,  6828,  1185,   969,  3073,  3103,   190,
     564,   223,   229,   317,    37,   645,   645,   261,   272,   277,
    1164,  1504,  1241,  1394,  1651,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,  3133,  3163,
     691,   695,    11,   389,   184,   358,   315,   306,   283,    54,
     205,   101,   255,   286,   321,   324,  3193,   288,  4903,   596,
    6834,  6857,  1456,  2032,  6565,  6571,  1842,  6335,  4933,  4963,
    4993,    -1,   356,  3223,   276,   291,   378,   282,   464,   245,
     264,    43,   310,   391,   397,   645,  3253,   717,  3283,   386,
     479,   327,   323,  1771,   374,   334,   397,   411,  1843,  1945,
    1995,  3313,  3343,  3373,  3403,   645,    -8,    16,   557,   922,
     744,  1300,  3433,  3463,  1263,  2263,  2293,  2323,   564,   645,
     498,    93,   147,   933,  6747,  1073,  6251,  2353,  2383,  3493,
    3523,  3553,  3583,   645,   263,   138,   445,  6870,  6596,  6363,
    3613,  3643,   421,  5023,  5053,  5083,  5113,   645,  5143,  2413,
    2443,  2473,  2503,   645,    60,   -10,    59,  1880,  1015,  1422,
    2533,  2563,  5173,  5203,   695,    64,  2033,  2086,   440,  2117,
     420,   733,   733,   733,   733,   733,   733,   733,   733,   733,
     733,   733,   733,   733,  3673,  3703,   733,   695,    86,   531,
     423,   785,   785,   785,   785,   785,   785,   785,   785,   785,
     785,   785,   785,   785,  2593,  2623,   785,   695,    89,   426,
     818,   818,   818,   818,   818,   818,   818,   818,   818,   818,
     818,   818,   818,  3733,  3763,   818,   695,   117,   222,   431,
     461,   909,   909,   909,   909,   909,   909,   909,   909,   909,
     909,   909,   909,   909,  2653,  2683,   909,   695,   120,   467,
    5233,   347,   366,  2148,  2179,  2210,   506,  3793,  5263,  5293,
    5323,  5353,   645,    62,  5383,  5413,   582,  6893,  6899,  6602,
    6627,  6633,  6639,  6371,  6399,  5443,  5473,  5503,   111,   552,
    3823,   350,   535,   549,  2713,  1530,  3853,  3883,  3913,   645,
     382,  3943,  3973,  1160,  6770,  6776,  1681,  1870,  6468,  6476,
    6262,  6290,  4003,  4033,  4063,   155,   554,  2743,   364,  4093,
    5533,  5563,  5593,  5623,   645,   259,  5653,  5683,   828,  6907,
    6930,  6664,  6689,  6714,  6739,  6412,  6440,  5713,  5743,  5773,
     267,   559,  4123,   373,   651,  5803,  2773,  4153,  4183,  4213,
    4243,   645,    -4,  4273,  4303,   346,  6799,  6805,  6501,  6508,
    6533,  6540,  6300,  6328,  4333,  4363,  4393,    70,   563,  2803,
     388,  5833,  5863,   425,  2241,   501,  5893,  5923,   695,   126,
    4423,  4453,   546,   562,  4483,  4513,   695,   142,  2833,  2863,
     587,  5953,  5983,   695,   148,  4543,  4573,   406,   595,   601,
    4603,  4633,   695,   151,  2893,  2923,  6013,   609,  6043,   416,
    4663,   610,  4693,   502,  6073,   612,  6103,   523,   526,  4723,
     616,  4753,   602,  6133,  6163,  4783,  4813,  6193,  6223,  4843,
    4873
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,  -138,   586,    20,   -48,   -18,   472,  -138,  -138,
      -7,  -137,     2,  -138,  -138,  -138,  1786,  1501,  1399,  1328,
    1079,   808,   537,   -14,   266,  -133,    10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    34,    10,    84,    85,    11,    92,
      15,    35,    36,    37,    38,    39,   114,   146,   147,   148,
     149,   150,   151,   152,   188,   115,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    51,    18,   209,    21,    47,    91,   -76,   272,   -44,
      12,   211,   189,    47,   272,   -45,    65,    12,    65,    57,
       9,    47,   -44,   -42,   -44,   -43,   -42,     9,   -45,   -77,
     -45,   190,   191,   192,   212,   -44,   167,    62,    88,   180,
      89,     3,     4,     5,   193,   113,     2,     3,     4,     5,
     -44,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,   108,   109,   110,   182,   189,    98,   180,   200,   293,
     295,    90,   291,   131,   -76,   273,   274,   -46,   -46,   271,
     212,   -45,   -10,    19,   190,   191,   192,   189,   120,   271,
     189,   -46,   -42,   -46,   -42,   321,   -45,   193,   290,   130,
     -78,    13,   -43,   167,   -43,    14,   190,   191,   192,   190,
     191,   192,   231,   200,   -79,   348,   132,   133,   189,   193,
     320,   189,   193,   347,   -42,   -42,    47,   189,    20,   138,
     211,   182,    14,   -24,   373,   -24,    16,   190,   191,   192,
     190,   191,   192,   189,   167,   -43,   190,   191,   192,   189,
     193,   372,   189,   193,   399,   400,   251,   -44,    55,   193,
     438,    22,   190,   191,   192,   232,   -44,   -44,   190,   191,
     192,   190,   191,   192,   231,   193,   442,    56,   -44,   -44,
     140,   193,   446,    60,   193,   451,   -43,   -43,    66,   -44,
     180,   200,    47,    47,    63,    47,   -44,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   315,   316,   317,
      83,    62,   304,   180,   200,   -18,   -18,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   342,   343,   344,
      64,   -21,   331,   180,   200,   -21,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   367,   368,   369,   -11,
     374,   356,   180,   200,   -12,   -15,   -12,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   394,   395,   396,
      95,   -23,   383,   180,   200,   -23,   439,   251,   -45,    47,
      48,    47,   250,   154,   443,    48,   250,   121,   -45,   122,
     -22,   447,   -42,    48,   -22,    62,   -43,    62,   -41,   153,
     452,    48,   155,   156,   157,   130,    66,   -45,   -74,   167,
     -74,    96,   158,   129,   -45,   159,   168,   119,   169,   181,
     123,   153,   153,   127,   -36,   128,   -36,   -36,   -36,   -36,
     -36,   136,   -36,   -36,   -36,   118,   -20,   170,   171,   172,
     -20,   -13,   -13,   -36,   -36,   -36,    86,   181,   201,   -36,
     173,   -12,   -12,    53,   -36,   124,   -36,   125,    54,   -25,
     180,   -25,   273,   274,   -47,   -47,   -75,   -26,   -75,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -47,   127,
     -47,   402,   127,   168,   411,   126,   -26,   -26,   -26,   116,
     117,   153,   -26,   201,   180,   200,   127,   -26,   419,   -26,
     232,   -45,   180,   200,   -16,   127,    48,   426,   137,   180,
     200,   153,   -17,   -45,   -45,   -12,   -12,    53,   180,   200,
     127,   206,   435,    23,   168,   153,   -27,   207,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   139,   -13,   153,
     -13,   268,    28,    29,    30,   -27,   -27,   -27,   127,   -26,
     454,   -27,    50,   153,   297,    33,   -27,   324,   -27,   153,
     349,   252,   253,   -46,   -46,   375,    67,    68,   -46,   -46,
     181,   201,    48,    48,   -46,    48,   -46,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     -14,   -14,   305,   181,   201,   376,   401,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     -19,   -19,   332,   181,   201,   -27,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   -15,
     -15,   357,   181,   201,   127,   436,   456,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     154,    46,   384,   181,   201,   127,    46,   458,   -14,    48,
     -14,    48,   322,   323,    46,   154,   -16,   -16,   153,   155,
     156,   157,    46,   213,   214,   -46,   -46,   -17,   -17,   158,
     412,   410,   159,   418,   155,   156,   157,   166,   425,   168,
     179,   -46,   434,    17,   158,   153,   440,   159,   213,   214,
     -47,   -47,    46,    46,    46,    46,    46,    46,    46,    46,
     106,   107,    67,    68,   -47,   -47,   -47,    46,   179,   199,
     153,   444,   -47,    23,   448,     2,     3,     4,     5,    24,
     229,    25,    26,    27,   127,   449,   460,    23,   453,   455,
     181,   457,    28,    29,    30,   459,   141,   153,    31,     0,
       0,     0,   169,    32,   166,    33,    28,    29,    30,     0,
       0,     0,   -40,     0,   199,   142,   143,   144,     0,    33,
       0,   170,   171,   172,   181,   201,     0,    46,   145,     0,
     427,     0,   181,   201,   173,     0,     0,     0,     0,   181,
     201,     0,   183,     0,     0,   166,   169,     0,   181,   201,
     -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   184,   185,   186,     0,   170,   171,   172,   189,   -30,
     -30,   -30,     0,     0,   187,   -30,     0,     0,   173,     0,
     -30,     0,   -30,     0,   298,     0,     0,   190,   191,   192,
       0,   179,   199,    46,    46,     0,    46,     0,     0,     0,
     193,     0,     0,   299,   300,   301,   313,   314,   -51,   -51,
     -51,   -51,   -51,   -51,   179,   199,   302,     0,   166,   166,
     166,   166,   166,   166,   166,   166,   340,   341,   -51,   -51,
     -51,   219,   220,   166,   179,   199,   325,   179,   179,   179,
     179,   179,   179,   179,   179,   365,   366,     0,     0,     0,
       0,     0,   179,   179,   199,   326,   327,   328,   199,   199,
     199,   199,   199,   199,   199,   199,   392,   393,   329,   350,
       0,     0,    45,   199,   179,   199,     0,    45,     0,     0,
      46,     0,    46,     0,     0,    45,     0,     0,   351,   352,
     353,     0,     0,    45,   252,   253,   -47,   -47,     0,    -2,
       1,   354,     2,     3,     4,     5,     0,   -47,   165,     0,
     166,   178,    23,     0,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    45,    45,    45,    45,   102,   103,   104,
     105,    28,    29,    30,     0,     0,     0,    31,    45,   178,
     198,     0,    61,     0,    33,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,     0,     0,     0,
     377,   179,     0,     0,     0,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,     0,     0,   165,   -28,     0,   -28,   378,
     379,   380,     0,     0,     0,   198,   215,   216,   -48,   -48,
     -48,   -48,   381,     0,     0,   179,   199,     0,    45,   233,
     234,   -46,   -46,   179,   199,     0,   -48,   217,   218,     0,
     179,   199,     0,     0,   -46,   -46,   165,     0,     0,   179,
     199,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -33,   -33,   -33,     0,     0,   -56,   -33,     0,     0,     0,
       0,   -33,     0,   -33,   -56,   -56,   -56,   -56,    75,    76,
      77,     0,   178,   198,    45,    45,     0,    45,     0,     0,
       0,     0,     0,   309,   310,   311,   312,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   178,   198,     0,     0,   165,
     165,   165,   165,   336,   337,   338,   339,   -51,     0,   -51,
     -51,   -51,   279,   280,   165,   178,   198,     0,   178,   178,
     178,   178,   361,   362,   363,   364,    -3,    -3,     0,    -3,
      -3,    -3,    -3,   178,   178,   198,     0,     0,     0,   198,
     198,   198,   198,   388,   389,   390,   391,   -51,   -51,   -51,
     -51,   -51,   -51,    44,   198,   178,   198,     0,    44,     0,
       0,    45,     0,    45,   -51,   -51,    44,     0,   -51,   -51,
     239,   240,     0,     0,    44,     0,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   164,
       0,   165,   177,     0,     0,     0,     0,   -34,   -34,   -34,
       0,     0,     0,   -34,    44,    44,   100,   101,   -34,     0,
     -34,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,    44,
     177,   197,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   233,   234,   -47,   -47,
       0,     0,   178,     0,   -31,   -31,   -31,     0,     0,     0,
     -31,   -47,   -47,     0,     0,   -31,   164,   -31,     0,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   197,     0,     0,    -9,
      -9,   -51,    -9,    -9,    -9,    -9,   178,   198,     0,    44,
     -51,   -51,    73,    74,   178,   198,     0,     0,     0,     0,
       0,   178,   198,     0,     0,     0,     0,   164,     0,     0,
     178,   198,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,    -4,    -4,     0,    -4,    -4,    -4,    -4,
       0,   -29,   -29,   -29,     0,    -7,    -7,   -29,    -7,    -7,
      -7,    -7,   -29,     0,   -29,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   177,   197,    44,    44,     0,    44,     0,
     -73,   -73,   307,   308,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   177,   197,     0,     0,
     164,   164,   334,   335,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,   164,   177,   197,     0,   177,
     177,   359,   360,     0,   -56,   -56,   -56,   -56,   -56,   221,
     222,   223,    43,     0,   177,   177,   197,    43,     0,     0,
     197,   197,   386,   387,     0,    43,    -5,    -5,     0,    -5,
      -5,    -5,    -5,    43,     0,   197,   177,   197,     0,     0,
       0,     0,    44,     0,    44,     0,     0,     0,   163,    -6,
      -6,   176,    -6,    -6,    -6,    -6,   -26,   -26,     0,   -26,
     -26,   -26,   -26,    43,    99,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   164,   -35,   -35,   -35,     0,     0,    43,   176,
     196,     0,     0,    42,   -35,   -35,   -35,     0,    42,     1,
     -35,     2,     3,     4,     5,   -35,    42,   -35,     0,     0,
       0,     0,     0,     0,    42,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,   163,     0,     0,     0,   162,
       0,     0,   175,   177,   -56,   196,   -56,   -56,   -56,   -56,
     -56,   281,   282,   283,    97,     0,     0,     0,    43,     0,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,    42,
     175,   195,   -55,     0,     0,     0,   163,   177,   197,     0,
       0,   -55,   -55,    73,    74,   177,   197,     0,     0,     0,
       0,     0,   177,   197,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   177,   197,     0,     0,    41,   162,     0,     0,     0,
      41,     0,     0,     0,     0,     0,   195,     0,    41,     0,
       0,     0,   176,   196,    43,    43,    41,    43,     0,    42,
     306,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   161,     0,     0,   174,   176,   196,   162,   -73,   163,
     333,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   163,   176,   196,     0,   176,   358,
       0,   111,   174,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   176,   196,     0,     0,     0,   196,
     385,     0,     0,   175,   195,    42,    42,     0,    42,     0,
     303,     0,     0,     0,   196,   176,   196,     0,   161,     0,
       0,    43,     0,    43,     0,     0,   175,   195,   194,     0,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,     0,   162,   175,   195,     0,   355,
       0,   163,   -32,     0,   -32,   -32,   -32,   -32,   -32,   161,
     -32,   -32,   -32,     0,   175,   175,   195,     0,     0,     0,
     382,   -32,   -32,   -32,     0,     0,     0,   -32,     0,     0,
       0,     0,   -32,     0,   -32,   195,   175,   195,     0,     0,
       0,     0,    42,     0,    42,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   176,     0,     0,   174,   194,    41,    41,     0,
      41,     0,   -55,   -55,     0,     0,   -55,   -55,   239,   240,
       0,     0,   162,     0,     0,     0,     0,   318,   174,   194,
       0,     0,     0,     0,     0,     0,   176,   196,     0,     0,
       0,     0,     0,     0,   176,   196,     0,   345,   174,   194,
       0,   176,   196,     0,     0,     0,     0,     0,     0,     0,
     176,   196,     0,     0,     0,     0,   370,   174,   194,     0,
       0,     0,   -38,   175,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,     0,     0,     0,     0,   397,   174,   194,
       0,   -38,   -38,   -38,    41,     0,    41,   -38,     0,     0,
      40,     0,   -38,     0,   -38,    52,     0,   175,   195,     0,
       0,     0,     0,    58,     0,   175,   195,     0,     0,    59,
       0,    40,   175,   195,   161,     0,     0,     0,     0,     0,
       0,   175,   195,     0,     0,     0,   160,     0,     0,    87,
       0,    93,    94,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -57,   -57,   -57,   -57,
     -57,   -57,     0,   -37,   -37,   -37,     0,   112,   -57,   -37,
       0,     0,     0,     0,   -37,   174,   -37,   -57,   -57,   -57,
     -57,    75,    76,    77,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,   275,   276,   -48,   -48,   -48,   -48,
       0,   -54,   -54,   160,     0,   -54,   -54,   239,   240,   174,
     194,   134,   -48,   135,   -48,   277,   278,   174,   194,     0,
       0,     0,     0,     0,   174,   194,    40,     0,     0,     0,
       0,   210,     0,   174,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   230,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,     0,     0,   249,
       0,     0,     0,     0,     0,   -39,   -39,   -39,     0,     0,
       0,   -39,     0,   269,     0,     0,   -39,     0,   -39,   270,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,     0,    40,    40,     0,    40,    23,     0,     2,     3,
       4,     5,    24,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,   319,     0,    28,    29,    30,     0,     0,
       0,    31,     0,     0,     0,     0,   208,     0,    33,     0,
       0,     0,     0,   346,    23,     0,     2,     3,     4,     5,
      24,     0,    25,    26,    27,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   371,    28,    29,    30,     0,     0,   -54,    31,
       0,     0,     0,     0,   292,     0,    33,   -54,   -54,    73,
      74,     0,     0,   398,     0,     0,     0,     0,     0,    40,
       0,    40,     0,     0,     0,     0,     0,    23,   405,     2,
       3,     4,     5,    24,     0,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,   160,
       0,     0,    31,     0,     0,   413,     0,   294,    23,    33,
       2,     3,     4,     5,    24,     0,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
     420,     0,     0,    31,     0,     0,     0,     0,   296,    23,
      33,     2,     3,     4,     5,    24,     0,    25,    26,    27,
     428,     0,     0,     0,     0,     0,     0,   429,    28,    29,
      30,     0,     0,     0,    31,     0,     0,     0,     0,   403,
     -26,    33,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,     0,     0,   437,     0,     0,     0,     0,   -26,
     -26,   -26,   441,     0,     0,   -26,     0,     0,     0,   445,
     -26,    23,   -26,     2,     3,     4,     5,    24,   450,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,     0,     0,     0,    31,     0,     0,     0,
       0,   404,   -27,    33,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,
       0,     0,   -27,     0,   -27,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   244,   245,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
     246,   247,     0,     0,   -59,   -59,   248,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   284,   285,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
     286,   287,     0,     0,     0,   -59,   288,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,    78,    79,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,   -59,
      80,    81,     0,     0,     0,     0,    82,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,     0,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,   -67,
     -67,   -67,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -65,     0,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   224,   225,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
     226,   227,     0,     0,     0,     0,   228,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   263,   264,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
     265,   266,   -59,     0,     0,     0,   267,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   414,   415,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   416,     0,     0,   -59,   -59,   417,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   414,   415,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   416,     0,     0,   -60,   -60,   417,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   414,   415,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   416,     0,     0,   -61,   -61,   417,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   414,   415,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   416,     0,     0,   -62,   -62,   417,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   430,   431,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,   -59,   433,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   430,   431,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,   -60,   433,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   430,   431,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,   -61,   433,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   430,   431,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,   -62,   433,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   202,   203,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,   -59,
       0,   204,     0,     0,     0,     0,   205,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   202,   203,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,   -60,
       0,   204,     0,     0,     0,     0,   205,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   202,   203,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,   -61,
       0,   204,     0,     0,     0,     0,   205,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   202,   203,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,   -62,
       0,   204,     0,     0,     0,     0,   205,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,   -73,
       0,   -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,   -69,
       0,   -69,     0,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,   -71,
       0,   -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
       0,   -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,   -63,
       0,   -63,     0,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,   -67,
       0,   -67,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -68,
       0,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -65,
       0,   -65,     0,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   406,   407,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,   409,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   406,   407,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,   409,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   406,   407,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,   409,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   406,   407,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,   409,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   421,   422,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   423,   -59,     0,     0,     0,   424,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   421,   422,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   423,   -60,     0,     0,     0,   424,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   421,   422,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   423,   -61,     0,     0,     0,   424,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   421,   422,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   423,   -62,     0,     0,     0,   424,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -72,
       0,   -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,   -64,
       0,   -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
       0,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -56,   -56,     0,     0,   -56,   -56,   -56,   -56,
     241,   242,   243,   -57,   -57,     0,     0,   -57,   -57,   -57,
     -57,   241,   242,   243,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
       0,   -58,   -58,     0,     0,   -58,   -58,   -58,   -58,   241,
     242,   243,   -57,     0,   -57,   -57,   -57,   -57,   -57,   281,
     282,   283,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   281,   282,   283,
     -58,   -58,   -58,   -58,    75,    76,    77,   -56,   -56,   -56,
     -56,   -56,   -56,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,     0,   -56,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   260,   261,   262,   -57,   -57,   -57,   -57,   -57,
     221,   222,   223,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,     0,   -58,   -58,   -58,   -58,   -58,   221,   222,
     223,   -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   260,   261,   262,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -58,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   260,
     261,   262,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,   -52,
     -52,     0,     0,   -52,   -52,   239,   240,   -53,   -53,     0,
       0,   -53,   -53,   239,   240,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
       0,     0,     0,   -55,     0,   -55,   -55,   -55,   279,   280,
     -54,     0,   -54,   -54,   -54,   279,   280,   -52,   -52,   -52,
     -52,   -52,   -52,     0,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,   -52,     0,   -52,   -52,   -52,
     279,   280,   -53,     0,   -53,   -53,   -53,   279,   280,   -52,
     -52,   -52,   -52,   -52,   -52,   -53,   -53,   -53,   -53,   -53,
     -53,   -52,     0,     0,     0,     0,     0,   -53,     0,     0,
     -52,   -52,    73,    74,     0,     0,   -53,   -53,    73,    74,
     -51,   -51,   -51,   -51,   -51,   -51,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,   -51,     0,     0,     0,     0,
       0,   -51,   -51,   258,   259,     0,   -55,   -55,   -55,   219,
     220,   -54,   -54,   -54,   -54,   -54,   -54,   -52,   -52,   -52,
     -52,   -52,   -52,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   -54,   -54,   -54,   219,   220,     0,   -52,   -52,   -52,
     219,   220,     0,   -53,   -53,   -53,   219,   220,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -55,     0,     0,     0,     0,     0,   -55,
     -55,   258,   259,   -54,   -54,   -54,   -54,   -54,   -54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -54,     0,
       0,     0,     0,     0,   -54,   -54,   258,   259,   -52,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,     0,     0,     0,     0,     0,   -52,
     -52,   258,   259,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   235,   236,   -48,   -48,   -48,   -48,     0,   -53,     0,
       0,     0,     0,     0,   -53,   -53,   258,   259,   -48,   -48,
       0,     0,   237,   238,   235,   236,   -49,   -49,   -49,   -49,
     235,   236,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,   -49,   -49,     0,     0,   237,   238,   -50,   -50,     0,
       0,   237,   238,   275,   276,   -49,   -49,   -49,   -49,   275,
     276,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,   -49,     0,   -49,   277,   278,     0,   -50,     0,   -50,
     277,   278,    69,    70,   -48,   -48,   -48,   -48,    69,    70,
     -49,   -49,   -49,   -49,   -48,     0,     0,     0,     0,     0,
     -49,     0,     0,    71,    72,     0,     0,     0,     0,    71,
      72,    69,    70,   -50,   -50,   -50,   -50,     0,     0,     0,
       0,     0,     0,   -50,   254,   255,   -48,   -48,   -48,   -48,
       0,     0,    71,    72,     0,     0,     0,     0,     0,   -48,
       0,     0,     0,     0,     0,   256,   257,   215,   216,   -49,
     -49,   -49,   -49,   215,   216,   -50,   -50,   -50,   -50,     0,
       0,   254,   255,   -49,   -49,   -49,   -49,   -49,   217,   218,
       0,     0,     0,   -50,   217,   218,   -49,     0,     0,     0,
       0,     0,   256,   257,   254,   255,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
       0,     0,     0,     0,     0,   256,   257
};

static const yytype_int16 yycheck[] =
{
      14,    19,    26,   140,    11,    19,    54,    20,    18,    19,
       0,    19,     1,    27,    18,    19,    19,     7,    19,    26,
       0,    35,    32,    26,    34,    26,    34,     7,    32,    20,
      34,    20,    21,    22,    18,    19,    50,    35,     1,    53,
       3,     4,     5,     6,    33,    34,     3,     4,     5,     6,
      34,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    54,     1,    80,    81,    82,   206,
     207,    34,   205,   121,    20,    16,    17,    18,    19,    19,
      18,    19,    26,    27,    20,    21,    22,     1,    34,    19,
       1,    32,    32,    34,    34,   228,    34,    33,    34,   117,
      20,    26,    32,   117,    34,    30,    20,    21,    22,    20,
      21,    22,    19,   127,    20,   248,   123,   124,     1,    33,
      34,     1,    33,    34,    31,    32,   140,     1,    26,   136,
      19,   121,    30,    32,   267,    34,     0,    20,    21,    22,
      20,    21,    22,     1,   158,    34,    20,    21,    22,     1,
      33,    34,     1,    33,    34,   288,    18,    19,    33,    33,
      34,    20,    20,    21,    22,    18,    19,    29,    20,    21,
      22,    20,    21,    22,    19,    33,    34,    33,    31,    32,
      30,    33,    34,    26,    33,    34,    31,    32,    18,    19,
     204,   205,   206,   207,    26,   209,    26,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      20,   209,   226,   227,   228,    31,    32,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
      26,    26,   246,   247,   248,    30,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,    26,
      28,   265,   266,   267,    32,    26,    34,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
       9,    26,   286,   287,   288,    30,   409,    18,    19,   293,
      14,   295,    19,     1,   417,    19,    19,    32,    29,    34,
      26,   424,    29,    27,    30,   293,    29,   295,    26,    33,
     433,    35,    20,    21,    22,   323,    18,    19,    32,   323,
      34,    34,    30,    31,    26,    33,    50,    34,     1,    53,
      34,    55,    56,    32,     1,    34,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    29,    26,    20,    21,    22,
      30,    26,    27,    20,    21,    22,    29,    81,    82,    26,
      33,    26,    27,    28,    31,    34,    33,    33,    33,    32,
     374,    34,    16,    17,    18,    19,    32,     1,    34,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    32,    32,
      34,    34,    32,   117,    34,    29,    20,    21,    22,    31,
      32,   125,    26,   127,   408,   409,    32,    31,    34,    33,
      18,    19,   416,   417,    26,    32,   140,    34,    34,   423,
     424,   145,    26,    31,    32,    26,    27,    28,   432,   433,
      32,    30,    34,     1,   158,   159,     1,    30,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    26,    32,   173,
      34,    20,    20,    21,    22,    20,    21,    22,    32,     9,
      34,    26,    30,   187,    34,    33,    31,    34,    33,   193,
      34,    16,    17,    18,    19,    34,    16,    17,    18,    19,
     204,   205,   206,   207,    29,   209,    26,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      26,    27,   226,   227,   228,    34,    29,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
      31,    32,   246,   247,   248,     9,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,    31,
      32,   265,   266,   267,    32,    34,    34,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
       1,    14,   286,   287,   288,    32,    19,    34,    32,   293,
      34,   295,    31,    32,    27,     1,    31,    32,   302,    20,
      21,    22,    35,    16,    17,    18,    19,    31,    32,    30,
      31,    29,    33,    29,    20,    21,    22,    50,    29,   323,
      53,    34,    29,     7,    30,   329,    34,    33,    16,    17,
      18,    19,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    16,    17,    18,    19,    34,    80,    81,    82,
     354,    34,    26,     1,    29,     3,     4,     5,     6,     7,
     158,     9,    10,    11,    32,    34,    34,     1,    29,    29,
     374,    29,    20,    21,    22,    29,     1,   381,    26,    -1,
      -1,    -1,     1,    31,   117,    33,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,   127,    20,    21,    22,    -1,    33,
      -1,    20,    21,    22,   408,   409,    -1,   140,    33,    -1,
      29,    -1,   416,   417,    33,    -1,    -1,    -1,    -1,   423,
     424,    -1,     1,    -1,    -1,   158,     1,    -1,   432,   433,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    20,    21,    22,    -1,    20,    21,    22,     1,    20,
      21,    22,    -1,    -1,    33,    26,    -1,    -1,    33,    -1,
      31,    -1,    33,    -1,     1,    -1,    -1,    20,    21,    22,
      -1,   204,   205,   206,   207,    -1,   209,    -1,    -1,    -1,
      33,    -1,    -1,    20,    21,    22,   219,   220,    14,    15,
      16,    17,    18,    19,   227,   228,    33,    -1,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,    34,    35,
      36,    37,    38,   246,   247,   248,     1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,    -1,    -1,    -1,
      -1,    -1,   265,   266,   267,    20,    21,    22,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,    33,     1,
      -1,    -1,    14,   286,   287,   288,    -1,    19,    -1,    -1,
     293,    -1,   295,    -1,    -1,    27,    -1,    -1,    20,    21,
      22,    -1,    -1,    35,    16,    17,    18,    19,    -1,     0,
       1,    33,     3,     4,     5,     6,    -1,    29,    50,    -1,
     323,    53,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    65,    66,    67,    68,    69,    70,    71,
      72,    20,    21,    22,    -1,    -1,    -1,    26,    80,    81,
      82,    -1,    31,    -1,    33,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
       1,   374,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,   117,    31,    -1,    33,    20,
      21,    22,    -1,    -1,    -1,   127,    14,    15,    16,    17,
      18,    19,    33,    -1,    -1,   408,   409,    -1,   140,    16,
      17,    18,    19,   416,   417,    -1,    34,    35,    36,    -1,
     423,   424,    -1,    -1,    31,    32,   158,    -1,    -1,   432,
     433,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    14,    15,    16,    17,    18,    19,    -1,
      20,    21,    22,    -1,    -1,    26,    26,    -1,    -1,    -1,
      -1,    31,    -1,    33,    35,    36,    37,    38,    39,    40,
      41,    -1,   204,   205,   206,   207,    -1,   209,    -1,    -1,
      -1,    -1,    -1,   215,   216,   217,   218,    -1,    -1,    14,
      15,    16,    17,    18,    19,   227,   228,    -1,    -1,   231,
     232,   233,   234,   235,   236,   237,   238,    32,    -1,    34,
      35,    36,    37,    38,   246,   247,   248,    -1,   250,   251,
     252,   253,   254,   255,   256,   257,     0,     1,    -1,     3,
       4,     5,     6,   265,   266,   267,    -1,    -1,    -1,   271,
     272,   273,   274,   275,   276,   277,   278,    14,    15,    16,
      17,    18,    19,    14,   286,   287,   288,    -1,    19,    -1,
      -1,   293,    -1,   295,    31,    32,    27,    -1,    35,    36,
      37,    38,    -1,    -1,    35,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    50,
      -1,   323,    53,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    65,    66,    67,    68,    31,    -1,
      33,     0,     1,    -1,     3,     4,     5,     6,    -1,    80,
      81,    82,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    16,    17,    18,    19,
      -1,    -1,   374,    -1,    20,    21,    22,    -1,    -1,    -1,
      26,    31,    32,    -1,    -1,    31,   117,    33,    -1,    14,
      15,    16,    17,    18,    19,    -1,   127,    -1,    -1,     0,
       1,    26,     3,     4,     5,     6,   408,   409,    -1,   140,
      35,    36,    37,    38,   416,   417,    -1,    -1,    -1,    -1,
      -1,   423,   424,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     432,   433,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,     0,     1,    -1,     3,     4,     5,     6,
      -1,    20,    21,    22,    -1,     0,     1,    26,     3,     4,
       5,     6,    31,    -1,    33,    12,    13,    14,    15,    16,
      17,    18,    19,   204,   205,   206,   207,    -1,   209,    -1,
      27,    28,   213,   214,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,   227,   228,    -1,    -1,
     231,   232,   233,   234,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,   246,   247,   248,    -1,   250,
     251,   252,   253,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    -1,   265,   266,   267,    19,    -1,    -1,
     271,   272,   273,   274,    -1,    27,     0,     1,    -1,     3,
       4,     5,     6,    35,    -1,   286,   287,   288,    -1,    -1,
      -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    50,     0,
       1,    53,     3,     4,     5,     6,     0,     1,    -1,     3,
       4,     5,     6,    65,    66,     1,    -1,     3,     4,     5,
       6,     7,   323,     9,    10,    11,    -1,    -1,    80,    81,
      82,    -1,    -1,    14,    20,    21,    22,    -1,    19,     1,
      26,     3,     4,     5,     6,    31,    27,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,   117,    -1,    -1,    -1,    50,
      -1,    -1,    53,   374,    32,   127,    34,    35,    36,    37,
      38,    39,    40,    41,    65,    -1,    -1,    -1,   140,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    80,
      81,    82,    26,    -1,    -1,    -1,   158,   408,   409,    -1,
      -1,    35,    36,    37,    38,   416,   417,    -1,    -1,    -1,
      -1,    -1,   423,   424,     0,     1,    -1,     3,     4,     5,
       6,   432,   433,    -1,    -1,    14,   117,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   127,    -1,    27,    -1,
      -1,    -1,   204,   205,   206,   207,    35,   209,    -1,   140,
     212,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    50,    -1,    -1,    53,   227,   228,   158,    28,   231,
     232,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,   246,   247,   248,    -1,   250,   251,
      -1,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   265,   266,   267,    -1,    -1,    -1,   271,
     272,    -1,    -1,   204,   205,   206,   207,    -1,   209,    -1,
     211,    -1,    -1,    -1,   286,   287,   288,    -1,   117,    -1,
      -1,   293,    -1,   295,    -1,    -1,   227,   228,   127,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,   246,   247,   248,    -1,   250,
      -1,   323,     1,    -1,     3,     4,     5,     6,     7,   158,
       9,    10,    11,    -1,   265,   266,   267,    -1,    -1,    -1,
     271,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,   286,   287,   288,    -1,    -1,
      -1,    -1,   293,    -1,   295,    14,    15,    16,    17,    18,
      19,    -1,   374,    -1,    -1,   204,   205,   206,   207,    -1,
     209,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,   323,    -1,    -1,    -1,    -1,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,    -1,   408,   409,    -1,    -1,
      -1,    -1,    -1,    -1,   416,   417,    -1,   246,   247,   248,
      -1,   423,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     432,   433,    -1,    -1,    -1,    -1,   265,   266,   267,    -1,
      -1,    -1,     1,   374,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   286,   287,   288,
      -1,    20,    21,    22,   293,    -1,   295,    26,    -1,    -1,
      14,    -1,    31,    -1,    33,    19,    -1,   408,   409,    -1,
      -1,    -1,    -1,    27,    -1,   416,   417,    -1,    -1,    33,
      -1,    35,   423,   424,   323,    -1,    -1,    -1,    -1,    -1,
      -1,   432,   433,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    56,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    14,    15,    16,    17,
      18,    19,    -1,    20,    21,    22,    -1,    81,    26,    26,
      -1,    -1,    -1,    -1,    31,   374,    33,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    31,    32,   117,    -1,    35,    36,    37,    38,   408,
     409,   125,    32,   127,    34,    35,    36,   416,   417,    -1,
      -1,    -1,    -1,    -1,   423,   424,   140,    -1,    -1,    -1,
      -1,   145,    -1,   432,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   159,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,   187,    -1,    -1,    31,    -1,    33,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,   206,   207,    -1,   209,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,   247,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    14,    15,    16,    17,
      18,    19,   266,    20,    21,    22,    -1,    -1,    26,    26,
      -1,    -1,    -1,    -1,    31,    -1,    33,    35,    36,    37,
      38,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,   293,
      -1,   295,    -1,    -1,    -1,    -1,    -1,     1,   302,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,   323,
      -1,    -1,    26,    -1,    -1,   329,    -1,    31,     1,    33,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
     354,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,     1,
      33,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
     374,    -1,    -1,    -1,    -1,    -1,    -1,   381,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,
       1,    33,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    -1,    -1,    -1,   408,    -1,    -1,    -1,    -1,    20,
      21,    22,   416,    -1,    -1,    26,    -1,    -1,    -1,   423,
      31,     1,    33,     3,     4,     5,     6,     7,   432,     9,
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
      47,    50,    68,    26,    30,    52,     0,    45,    26,    27,
      26,    52,    20,     1,     7,     9,    10,    11,    20,    21,
      22,    26,    31,    33,    46,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    68,
      30,    48,    58,    28,    33,    33,    33,    52,    58,    58,
      26,    31,    54,    26,    26,    19,    18,    16,    17,    14,
      15,    35,    36,    37,    38,    39,    40,    41,    12,    13,
      27,    28,    33,    20,    48,    49,    29,    58,     1,     3,
      34,    47,    51,    58,    58,     9,    34,    60,    65,    61,
      62,    62,    63,    63,    63,    63,    64,    64,    65,    65,
      65,    59,    58,    34,    58,    67,    31,    32,    29,    34,
      34,    32,    34,    34,    34,    33,    29,    32,    34,    31,
      48,    47,    52,    52,    58,    58,     8,    34,    52,    26,
      30,     1,    20,    21,    22,    33,    59,    60,    61,    62,
      63,    64,    65,    66,     1,    20,    21,    22,    30,    33,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     1,
      20,    21,    22,    33,    59,    60,    61,    62,    63,    64,
      65,    66,    68,     1,    20,    21,    22,    33,    66,     1,
      20,    21,    22,    33,    59,    60,    61,    62,    63,    64,
      65,    66,    12,    13,    28,    33,    30,    30,    31,    53,
      58,    19,    18,    16,    17,    14,    15,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    27,    28,    33,    49,
      58,    19,    18,    16,    17,    14,    15,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    27,    28,    33,    58,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    12,    13,    27,    28,    33,    20,    58,
      58,    19,    18,    16,    17,    14,    15,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    27,    28,    33,    58,
      34,    67,    31,    53,    31,    53,    31,    34,     1,    20,
      21,    22,    33,    60,    65,    66,    61,    62,    62,    63,
      63,    63,    63,    64,    64,    65,    65,    65,    59,    58,
      34,    67,    31,    32,    34,     1,    20,    21,    22,    33,
      60,    65,    66,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    65,    65,    59,    58,    34,    67,    34,
       1,    20,    21,    22,    33,    60,    65,    66,    61,    62,
      62,    63,    63,    63,    63,    64,    64,    65,    65,    65,
      59,    58,    34,    67,    28,    34,    34,     1,    20,    21,
      22,    33,    60,    65,    66,    61,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    59,    58,    34,
      67,    29,    34,    31,    31,    58,    12,    13,    28,    33,
      29,    34,    31,    58,    12,    13,    28,    33,    29,    34,
      58,    12,    13,    28,    33,    29,    34,    29,    58,    58,
      12,    13,    28,    33,    29,    34,    34,    58,    34,    67,
      34,    58,    34,    67,    34,    58,    34,    67,    29,    34,
      58,    34,    67,    29,    34,    29,    34,    29,    34,    29,
      34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    46,    47,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    67,    67,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     4,     5,     1,     3,     4,     1,     3,
       5,     4,     5,     5,     1,     3,     2,     3,     1,     2,
       1,     2,     2,     1,     1,     2,     5,     7,     5,     7,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     3,     4,     2,     2,     1,
       1,     1,     3,     1,     1,     3,     1,     1,     1,     1
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
  YYUSE (yytype);
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
#line 47 "language.y"
    { root = (yyvsp[0].node); }
#line 2744 "src/parser.c"
    break;

  case 4:
#line 51 "language.y"
    { (yyval.node) = node_init('L', "decl-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2750 "src/parser.c"
    break;

  case 5:
#line 55 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2756 "src/parser.c"
    break;

  case 6:
#line 56 "language.y"
    { (yyval.node) = node_init('F', "fdefn", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2762 "src/parser.c"
    break;

  case 7:
#line 57 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2768 "src/parser.c"
    break;

  case 8:
#line 58 "language.y"
    { fprintf(stderr, "HANDLE DECL1 ERROR\n"); }
#line 2774 "src/parser.c"
    break;

  case 9:
#line 59 "language.y"
    { fprintf(stderr, "HANDLE DECL2 ERROR\n"); }
#line 2780 "src/parser.c"
    break;

  case 11:
#line 64 "language.y"
    { (yyval.node) = node_init('=', "=", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2786 "src/parser.c"
    break;

  case 12:
#line 68 "language.y"
    { (yyval.node) = node_init('D', "decl-var", (yyvsp[-1].node), (yyvsp[0].node)    , NULL); }
#line 2792 "src/parser.c"
    break;

  case 13:
#line 69 "language.y"
    { (yyval.node) = node_init('D', "decl-arr", (yyvsp[-3].node), (yyvsp[-2].node)    , NULL); }
#line 2798 "src/parser.c"
    break;

  case 14:
#line 70 "language.y"
    { (yyval.node) = node_init('D', "decl-arr", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2804 "src/parser.c"
    break;

  case 16:
#line 75 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2810 "src/parser.c"
    break;

  case 17:
#line 76 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2816 "src/parser.c"
    break;

  case 19:
#line 81 "language.y"
    { (yyval.node) = node_init('L', "init-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2822 "src/parser.c"
    break;

  case 20:
#line 85 "language.y"
    { (yyval.node) = node_init('F', "fdecl", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2828 "src/parser.c"
    break;

  case 21:
#line 86 "language.y"
    { (yyval.node) = node_init('F', "fdecl", (yyvsp[-3].node), (yyvsp[-2].node),     NULL); }
#line 2834 "src/parser.c"
    break;

  case 22:
#line 87 "language.y"
    { (yyval.node) = node_init('F', "fdecl", (yyvsp[-4].node), (yyvsp[-3].node),     NULL); }
#line 2840 "src/parser.c"
    break;

  case 23:
#line 88 "language.y"
    { fprintf(stderr, "HANDLE ARG LIST ERROR\n"); }
#line 2846 "src/parser.c"
    break;

  case 25:
#line 93 "language.y"
    { (yyval.node) = node_init('L', "par-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2852 "src/parser.c"
    break;

  case 26:
#line 97 "language.y"
    { }
#line 2858 "src/parser.c"
    break;

  case 27:
#line 98 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2864 "src/parser.c"
    break;

  case 29:
#line 103 "language.y"
    { (yyval.node) = node_init('L', "stm-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2870 "src/parser.c"
    break;

  case 30:
#line 107 "language.y"
    { }
#line 2876 "src/parser.c"
    break;

  case 36:
#line 116 "language.y"
    { (yyval.node) = node_init(IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL); }
#line 2882 "src/parser.c"
    break;

  case 37:
#line 117 "language.y"
    { (yyval.node) = node_init(ELSE, "if-else", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2888 "src/parser.c"
    break;

  case 38:
#line 121 "language.y"
    { (yyval.node) = node_init(WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2894 "src/parser.c"
    break;

  case 39:
#line 122 "language.y"
    { (yyval.node) = node_init(DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL); }
#line 2900 "src/parser.c"
    break;

  case 40:
#line 126 "language.y"
    { (yyval.node) = node_init(RETURN, "return",     NULL); }
#line 2906 "src/parser.c"
    break;

  case 41:
#line 127 "language.y"
    { (yyval.node) = node_init(RETURN, "return", (yyvsp[0].node), NULL); }
#line 2912 "src/parser.c"
    break;

  case 43:
#line 132 "language.y"
    { (yyval.node) = node_init('=', "=", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2918 "src/parser.c"
    break;

  case 45:
#line 137 "language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2924 "src/parser.c"
    break;

  case 47:
#line 142 "language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2930 "src/parser.c"
    break;

  case 49:
#line 147 "language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2936 "src/parser.c"
    break;

  case 50:
#line 148 "language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2942 "src/parser.c"
    break;

  case 52:
#line 153 "language.y"
    { (yyval.node) = node_init('<'  , "<" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2948 "src/parser.c"
    break;

  case 53:
#line 154 "language.y"
    { (yyval.node) = node_init('>'  , ">" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2954 "src/parser.c"
    break;

  case 54:
#line 155 "language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2960 "src/parser.c"
    break;

  case 55:
#line 156 "language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2966 "src/parser.c"
    break;

  case 57:
#line 161 "language.y"
    { (yyval.node) = node_init('+', "+", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2972 "src/parser.c"
    break;

  case 58:
#line 162 "language.y"
    { (yyval.node) = node_init('-', "-", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2978 "src/parser.c"
    break;

  case 60:
#line 167 "language.y"
    { (yyval.node) = node_init('*', "*", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2984 "src/parser.c"
    break;

  case 61:
#line 168 "language.y"
    { (yyval.node) = node_init('/', "/", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2990 "src/parser.c"
    break;

  case 62:
#line 169 "language.y"
    { (yyval.node) = node_init('%', "%", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2996 "src/parser.c"
    break;

  case 64:
#line 174 "language.y"
    { (yyval.node) = node_init('V'   , "vec"  , (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 3002 "src/parser.c"
    break;

  case 65:
#line 175 "language.y"
    { (yyval.node) = node_init('C'   , "fcall", (yyvsp[-2].node)    , NULL); }
#line 3008 "src/parser.c"
    break;

  case 66:
#line 176 "language.y"
    { (yyval.node) = node_init('C'   , "fcall", (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 3014 "src/parser.c"
    break;

  case 67:
#line 177 "language.y"
    { (yyval.node) = node_init(OP_INC, "++"   , (yyvsp[-1].node)    , NULL); }
#line 3020 "src/parser.c"
    break;

  case 68:
#line 178 "language.y"
    { (yyval.node) = node_init(OP_DEC, "--"   , (yyvsp[-1].node)    , NULL); }
#line 3026 "src/parser.c"
    break;

  case 72:
#line 185 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3032 "src/parser.c"
    break;

  case 73:
#line 186 "language.y"
    { fprintf(stderr, "HANDLE EXPR ERROR\n"); }
#line 3038 "src/parser.c"
    break;

  case 75:
#line 191 "language.y"
    { (yyval.node) = node_init('L', "arg-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 3044 "src/parser.c"
    break;


#line 3048 "src/parser.c"

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
#line 201 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "%d %d: %s\n", nline, ncol0, msg);
}
