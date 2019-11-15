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
#define YYLAST   7751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

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
     314,   207,    20,    28,    41,   101,    16,   536,   620,    -8,
     852,   129,   962,  1300,   984,  -269,  1004,  1100,    26,  1199,
    3770,    96,  1316,    35,    59,   132,  2153,  1992,  4647,  4682,
    4689,  4724,   133,   144,   156,    61,  1390,  1390,  1617,  1531,
    1390,  1390,   170,  2565,  2661,  2729,  2750,  2814,   210,   236,
     -22,    58,   382,   121,  2323,  6427,  6462,  4731,  4766,   214,
    1274,   244,   231,   263,   265,    -1,   303,    78,   232,   349,
    2835,  1589,   164,  1531,  1531,   359,   327,  6469,  6504,  6511,
     342,  6546,  6553,  2899,  1340,  2920,  2984,  3005,  1390,  1390,
    1390,  1390,  1390,  1390,  1390,  1390,  1390,  1390,  1390,  1390,
    1390,  1390,   118,    13,   328,  1364,   365,  3069,   249,   374,
     237,   385,  4773,   266,   290,   387,   388,   392,  4808,   394,
     389,   420,  2147,  2660,  7547,  7553,  7560,  6588,  6595,  6630,
    6637,  6672,   228,   410,  1648,  3090,  3770,   395,   291,  3154,
     415,  4815,  1768,  4850,   409,   440,  1531,   104,   173,  3770,
     441,  3175,  1508,  3770,   443,   294,   326,   472,  3239,   406,
     445,   230,  3260,  1574,  1689,  3324,  1721,   440,   450,   451,
     242,  1751,  1861,  3345,  3409,  3430,  2398,  4871,  4906,  4941,
    4976,  5011,  1806,  1806,  1531,  1806,  1806,   -13,   108,   292,
     866,  7592,  6685,  6720,  5046,  5081,  3494,  3841,  6727,  6762,
    6769,  6804,  6811,  1531,  6846,  2447,  5116,  5137,  5158,  5179,
    5200,  1830,  1830,  1531,  1830,  1830,     0,    63,    70,  1354,
    4990,  3820,  3890,  5221,  5242,  1133,  3876,  3911,  3946,  3981,
    4016,  1894,  1894,  1531,  1894,  1894,   -15,    33,   -24,   552,
    1501,  2457,  5256,  4051,  4086,  2107,  4121,  4156,  4191,  4226,
    4261,  1918,  1918,  1531,  1918,  1918,   190,    84,   153,  1362,
    2216,  2042,  5291,  4296,  4331,  3515,  3579,  3770,  1589,   400,
    4345,  6859,  6894,  6907,  6942,  6955,  1531,  6990,  7003,  7038,
    7051,   444,  7086,  7099,  1806,  1806,  1806,  1806,  1806,  1806,
    1806,  1806,  1806,  1806,  1806,  1806,  1806,  1806,   487,  3770,
    1589,   547,   448,  1589,   762,  4380,  3925,  3960,  3995,  4030,
    4065,  1531,  4100,  4135,  4170,  4205,   449,  4240,  4275,  1830,
    1830,  1830,  1830,  1830,  1830,  1830,  1830,  1830,  1830,  1830,
    1830,  1830,  1830,  1589,   830,  2577,  5301,  5336,  5346,  5381,
    5391,  1531,  5426,  5436,  5471,  5481,   452,  5516,  5526,  1894,
    1894,  1894,  1894,  1894,  1894,  1894,  1894,  1894,  1894,  1894,
    1894,  1894,  1894,  1589,   920,  3806,  5561,  5572,  5607,  5618,
    5653,  1531,  5664,  5699,  5710,  5745,   455,  5756,  5791,  1918,
    1918,  1918,  1918,  1918,  1918,  1918,  1918,  1918,  1918,  1918,
    1918,  1918,  1918,   861,  3770,  3600,   464,  5806,   331,  1589,
     940,   460,  5841,   171,   320,  1007,  7691,  7602,  7634,  7644,
    7676,  7134,  7147,  7182,  7195,  7230,    77,  3664,   466,  7237,
     332,  7272,   467,  5876,   337,  1589,  1011,   463,  5897,    89,
     169,  2086,  2666,  5025,  5060,  5095,  5855,  4310,  4444,  4479,
    4514,  4549,    55,   470,  4395,   338,  1589,  1117,   473,  4430,
      44,    51,  5127,  7683,  2307,  7420,  7452,  7459,  5911,  5946,
    5956,  5991,  6001,     3,   479,  4465,   343,  1589,  1205,   475,
    4500,   181,   163,  1535,  2500,  7467,  7499,  7507,  7515,  6036,
    6047,  6082,  6093,  6128,   203,  3685,  3749,  6143,  6178,   482,
    7285,   375,  7320,   491,  7327,  7362,  6213,  6234,   490,  4584,
     403,  4885,  4535,  4570,   497,  6248,   411,  6283,  4605,  4640,
     498,  6294,   416,  6329,  1236,  7375,  7410,  4920,  4955,  6339,
    6374,  6385,  6420
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
    -269,  -269,  -269,   537,    18,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,   446,     5,  -170,  -132,   -14,  -269,
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
      57,   398,    57,   194,   151,   267,    14,    11,   -93,   351,
     352,   -58,   -58,    88,    11,    57,    15,   162,     9,   223,
     349,   165,   284,   133,    57,     9,   299,    21,   -54,   -93,
      85,    69,   -58,   420,   -58,   319,   424,   -94,   349,    75,
     -54,   -54,    17,   -54,   176,   177,   178,   179,   180,   181,
     -95,   194,   243,   223,   223,   182,   183,   106,   -54,   -55,
      64,   -55,    65,     3,     4,     5,   445,   134,   -56,   350,
      26,    27,    28,    29,    30,    31,    -9,    22,    23,   -57,
     350,    36,    37,    24,   351,   352,   -59,   -59,    62,   -56,
     319,   -56,   184,   -56,    89,   394,   466,   185,   -56,   320,
     -57,   186,   -57,   321,   322,   -58,   -58,   -59,   -56,   -59,
     -96,   -52,   284,   -55,   263,    69,    57,    66,    39,   -56,
     380,   -56,   243,    40,   -57,   320,   223,    41,   -58,    57,
     -55,    57,   491,    57,   108,   395,   109,    85,    18,   -56,
     -56,   263,    57,   -56,   285,    57,    60,   -57,    85,   157,
     158,    85,    92,    93,   -60,   -60,   -60,   -60,   500,   160,
     161,   -56,   278,   278,   223,   278,   278,   417,    -9,    22,
      23,   -60,   173,   225,   226,   227,   228,   229,   230,   506,
      94,    95,    70,   223,   231,   232,   381,   382,   -58,   -58,
      73,   313,   313,   223,   313,   313,   381,   382,   -59,   -59,
     512,    74,   321,   322,   -59,   -59,   -57,   285,   -58,   -58,
     196,   343,   343,   223,   343,   343,   -57,   380,   -59,   -59,
      83,   233,   112,   102,   -57,   379,   234,   -59,   -15,   -15,
     235,   373,   373,   223,   373,   373,   -57,   -57,   379,   245,
     246,   247,   248,   249,   250,   -54,   -54,    57,   194,   243,
     251,   252,     2,     3,     4,     5,   223,    12,   -55,   -55,
      86,    13,   485,    88,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   -55,    57,
     194,   243,   103,   194,   243,   169,    87,   253,   -31,   140,
     -31,   223,   254,   -33,   -10,   -33,   255,   -16,   -16,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   194,   243,     1,   104,     2,     3,     4,
       5,   223,   -91,   105,   -91,   286,   287,   -58,   -58,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   194,   243,   -58,   142,   -32,   143,   -32,
     -34,   223,   -34,   286,   287,   -59,   -59,   107,   110,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   -59,    57,    57,   117,   -53,   -11,   194,
     243,    85,   -92,    58,   -92,    58,   195,   142,   142,   488,
     495,    61,    63,   142,   142,   497,   503,    57,    58,   142,
     118,   509,   224,    85,    76,   194,   243,    58,    80,   225,
     226,   227,   228,   229,   230,    90,    91,   -58,   -58,   135,
     231,   232,    90,    91,   -59,   -59,   194,   243,   139,   -57,
      89,   142,   -58,   516,   195,   244,   224,   224,   141,   -59,
     111,   113,   115,   116,   -57,   144,   145,   194,   243,   146,
     152,    92,    93,   -61,   -61,   -61,   -61,   233,   397,   142,
     -14,   518,   234,   265,   168,    57,   235,   142,   155,   520,
     -61,    85,   142,   -48,   522,   -48,   -48,   -48,   -48,    94,
      95,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   167,   -48,
     -48,   -48,   -48,   -48,   175,   -12,   163,   264,   166,    58,
     174,   -13,   402,   148,   -35,   244,   421,   428,   -37,   224,
     449,   156,    58,   470,    58,   159,    58,   487,   492,   494,
     496,   501,   -48,   502,   264,    58,   -48,   -48,    58,   -48,
     170,   507,   508,   513,   -48,   515,    -2,     1,   -48,     2,
       3,     4,     5,   517,    16,   279,   279,   224,   279,   279,
     519,   521,     0,   281,   138,     0,   225,   226,   227,   228,
     229,   230,     0,     0,     0,     0,   224,   231,   232,     0,
       0,     0,   302,     0,   314,   314,   224,   314,   314,     0,
       0,     0,   316,   353,   354,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,     0,   344,   344,   224,   344,   344,     0,
       0,     0,   346,     0,   233,   419,     0,     0,   -60,   234,
     -60,   355,   356,   235,   374,   374,   224,   374,   374,     0,
      -3,    -3,   376,    -3,    -3,    -3,    -3,     0,     0,     0,
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
       0,   225,   226,   227,   228,   229,   230,     0,     0,     0,
      58,     0,   231,   232,   193,     0,     0,     0,   195,   244,
       0,     0,     0,     0,   498,   113,     0,    77,    79,     0,
     222,    81,    82,     0,     0,     0,     0,     0,     0,   195,
     244,     0,     0,     0,     0,   504,   113,     0,     0,   233,
     423,     0,     0,     0,   234,     0,     0,     0,   235,     0,
     195,   244,   193,   242,   222,   222,   510,   113,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,    58,     0,
     231,   232,    -5,    -5,     0,    -5,    -5,    -5,    -5,   129,
     130,   131,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   233,   444,     0,
       0,     0,   234,     0,     0,   262,   235,   288,   289,   -60,
     -60,   -60,   -60,   242,     0,     0,     0,   222,     0,     0,
       0,   -35,     0,     0,     0,   -35,   -35,     0,   -35,   -60,
       0,     0,   262,   -35,     0,   290,   291,   -35,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,     0,
     231,   232,     0,   277,   280,   222,   282,   283,     0,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,     0,
     231,   232,    -7,    -7,   222,    -7,    -7,    -7,    -7,     0,
       0,     0,   312,   315,   222,   317,   318,   233,   465,     0,
       0,     0,   234,     0,    -8,    -8,   235,    -8,    -8,    -8,
      -8,     0,   342,   345,   222,   347,   348,   233,   490,     0,
       0,     0,   234,     0,    -4,    -4,   235,    -4,    -4,    -4,
      -4,     0,   372,   375,   222,   377,   378,     0,     0,     0,
     225,   226,   227,   228,   229,   230,     0,     0,     0,   193,
     242,   231,   232,     0,     0,     0,     0,   222,   288,   289,
     -61,   -61,   -61,   -61,     0,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   413,   414,   415,   193,     0,
     -61,   193,   242,     0,   193,   242,   290,   291,   233,   499,
       0,     0,   222,   234,     0,     0,     0,   235,     0,     0,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     439,   440,   441,   222,   193,   242,     0,     0,     0,     0,
      -6,    -6,   222,    -6,    -6,    -6,    -6,     0,     0,     0,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     460,   461,   462,   242,   193,   242,   225,   226,   227,   228,
     229,   230,   222,     0,     0,     0,     0,   231,   232,     0,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     481,   482,   483,   262,     0,     0,     0,     0,     0,     0,
     193,   242,   192,     0,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,   233,   505,     0,     0,   221,   234,
       0,     0,     0,   235,   -84,   333,   193,   242,     0,   -84,
     334,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,   193,   242,     0,
     192,   241,   221,   221,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,     0,   231,   232,     0,   193,   242,
       0,     0,     0,     0,     0,   127,   128,   -37,     0,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   233,   511,     0,     0,     0,   234,     0,     0,
       0,   235,     0,   261,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   241,     0,     0,     0,   221,   -37,     0,     0,     0,
     -37,   -37,     0,   -37,     0,     0,     0,     0,   -37,     0,
     261,   -36,   -37,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   221,     0,    26,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,    36,    37,     0,     0,
     -37,   -37,   221,   -37,   -37,   -37,   -37,     0,     0,     0,
     -36,     0,   221,     0,   -36,    19,     0,   -36,     0,     0,
       0,     0,   -36,     0,   -29,   -29,   -36,   -29,   -29,   -29,
     -29,     0,   221,    39,     0,     0,     0,     0,    40,     0,
       0,     0,    41,     0,     0,   323,   324,   -60,   -60,   -60,
     -60,     0,   221,   383,   384,   -60,   -60,   -60,   -60,   197,
     198,   199,   200,   201,   202,     0,     0,   192,   241,     0,
      36,    37,   -60,   325,   326,   221,     0,   -60,   -60,     0,
       0,   385,   386,   192,   192,   192,   192,   192,   192,   192,
     192,   411,   412,     0,     0,   191,   192,     0,     0,   192,
     241,     0,   192,   241,     0,     0,     0,   203,     0,     0,
     221,   220,    40,     0,     0,     0,    41,     0,   221,   221,
     221,   221,   221,   221,   221,   221,   437,   438,     0,     0,
       0,   221,   192,   241,     0,     0,     0,     0,     0,     0,
     221,     0,     0,   191,   240,   220,   220,     0,   241,   241,
     241,   241,   241,   241,   241,   241,   458,   459,     0,     0,
       0,   241,   192,   241,   123,   124,   125,   126,   -28,   -28,
     221,   -28,   -28,   -28,   -28,     0,     0,     0,   261,   261,
     261,   261,   261,   261,   261,   261,   479,   480,     0,     0,
       0,   261,   -63,   -63,   -63,   -63,   -63,   -63,   192,   241,
     205,   206,   207,   208,   209,   210,   260,     0,     0,     0,
       0,   211,   212,     0,   240,     0,     0,   -63,   220,   -63,
     -63,   -63,   357,   358,   192,   241,   383,   384,   -61,   -61,
     -61,   -61,     0,   260,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,   192,   241,     0,   213,     0,
     -61,   -61,     0,   214,   385,   386,   220,   215,   176,   177,
     178,   179,   180,   181,     0,     0,   192,   241,     0,   182,
     183,     0,     0,     0,     0,   220,     0,     0,   -40,     0,
     -40,   -40,   -40,   -40,     0,   220,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   220,   184,     0,     0,     0,
       0,   185,     0,     0,     0,   186,     0,   245,   246,   247,
     248,   249,   250,     0,     0,   220,     0,   -40,   251,   252,
       0,   -40,   -40,     0,   -40,     0,     0,     0,     0,   -40,
     191,   240,     0,   -40,     0,     0,     0,     0,   220,   -22,
     -22,   190,   -22,   -22,   -22,   -22,   191,   191,   191,   191,
     407,   408,   409,   410,     0,   253,     0,   219,     0,   191,
     254,     0,   191,   240,   255,   191,   240,     0,     0,     0,
       0,   -24,   -24,   220,   -24,   -24,   -24,   -24,     0,     0,
       0,   220,   220,   220,   220,   433,   434,   435,   436,   190,
     239,   219,   219,     0,   220,   191,   240,     0,     0,     0,
       0,   -20,   -20,   220,   -20,   -20,   -20,   -20,   121,   122,
       0,   240,   240,   240,   240,   454,   455,   456,   457,     0,
       0,     0,     0,     0,   240,   191,   240,   225,   226,   227,
     228,   229,   230,   220,     0,     0,     0,     0,   231,   232,
       0,   260,   260,   260,   260,   475,   476,   477,   478,     0,
       0,     0,   259,     0,   260,     0,     0,     0,     0,     0,
     239,   191,   240,     0,   219,   270,   271,   272,   273,   274,
     275,     0,     0,     0,     0,   233,   182,   183,     0,   259,
     234,     0,     0,     0,   235,     0,     0,   191,   240,   305,
     306,   307,   308,   309,   310,     0,     0,     0,     0,     0,
     211,   212,   219,     0,     0,     0,     0,     0,   191,   240,
       0,   -18,   -18,   276,   -18,   -18,   -18,   -18,   185,     0,
       0,   219,   186,     0,     0,     0,     0,     0,     0,   191,
     240,   219,     0,     0,     0,     0,     0,   311,     0,     0,
       0,     0,   214,     0,     0,     0,   215,     0,     0,     0,
       0,   219,     0,   335,   336,   337,   338,   339,   340,     0,
       0,     0,     0,     0,   231,   232,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,   365,   366,   367,
     368,   369,   370,     0,     0,     0,   190,   239,   251,   252,
       0,     0,     0,     0,   219,     0,     0,   189,     0,     0,
       0,   341,   190,   190,   405,   406,   234,     0,     0,     0,
     235,     0,     0,   218,     0,   190,     0,     0,   190,   239,
       0,   190,   239,     0,     0,   371,     0,     0,     0,   219,
     254,     0,     0,     0,   255,     0,     0,   219,   219,   431,
     432,     0,     0,     0,     0,   189,   238,   218,   218,     0,
     219,   190,   239,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,   120,     0,     0,     0,   239,   239,   452,
     453,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     239,   190,   239,     0,     0,     0,     0,     0,     0,   219,
       0,     0,   -85,   -85,     0,     0,     0,   259,   259,   473,
     474,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   258,     0,
     259,     0,     0,     0,     0,     0,   238,   190,   239,     0,
     218,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,   258,     0,     0,     0,     0,
       0,     0,     0,   190,   239,     0,     0,   -68,   -68,     0,
     188,   -68,   -68,   -68,   -68,   389,   390,   391,   218,     0,
       0,     0,     0,     0,   190,   239,   217,   323,   324,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,   190,   239,   218,   -84,   -84,
     -84,   -84,   -84,   -84,   -61,   325,   326,     0,   188,   237,
     217,   217,     0,     0,     0,     0,     0,   218,   -84,   363,
       0,     0,   -84,   -84,   364,   119,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   218,    92,    93,
     -62,   -62,   -62,   -62,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   189,   238,     0,     0,     0,   -62,     0,     0,
     218,     0,     0,   -84,   -84,    71,    94,    95,   189,   404,
      72,   257,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   237,
       0,   189,     0,   217,   189,   238,     0,   189,   238,     0,
       0,     0,     0,     0,     0,   218,     0,     0,   257,     0,
       0,     0,     0,   218,   430,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   218,   189,   238,     0,
       0,   217,     0,     0,     0,   218,     0,     0,     0,     0,
       0,   -63,   -63,   238,   451,   -63,   -63,   387,   388,     0,
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
     386,   187,   236,     0,   187,   236,   -45,     0,   -45,   -45,
     -45,   -45,   216,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,   442,   187,   236,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -45,     0,     0,     0,   -45,
     -45,     0,   -45,   463,   187,   236,     0,   -45,     0,   446,
       0,   -45,   216,   -84,   447,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   484,     0,     0,     0,     0,     0,     0,
     187,   236,    25,     0,     2,     3,     4,     5,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,     0,     0,     0,   187,   236,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   323,   324,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,   187,   236,     0,
     -66,    38,     0,     0,     0,   175,    84,     0,    39,   -66,
     -66,    96,    97,    40,   -62,   325,   326,    41,   187,   236,
     -38,     0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,     0,   -38,
       0,     0,     0,   -38,   -38,     0,   -38,     0,     0,     0,
       0,   -38,     0,     0,     0,   -38,     0,     0,     0,     0,
     -43,     0,     0,     0,   -43,   -43,     0,   -43,     0,     0,
       0,     0,   -43,     0,     0,   -44,   -43,   -44,   -44,   -44,
     -44,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -47,     0,   -47,   -47,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,     0,   -44,   -44,
       0,   -44,     0,     0,     0,     0,   -44,     0,     0,     0,
     -44,     0,     0,     0,     0,   -47,     0,     0,     0,   -47,
     -47,     0,   -47,     0,     0,     0,     0,   -47,     0,     0,
     -41,   -47,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,   -41,
       0,     0,     0,   -41,   -41,     0,   -41,     0,     0,     0,
       0,   -41,     0,     0,     0,   -41,     0,     0,     0,     0,
     -39,     0,     0,     0,   -39,   -39,     0,   -39,     0,     0,
       0,     0,   -39,     0,     0,   -46,   -39,   -46,   -46,   -46,
     -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -42,     0,   -42,   -42,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,     0,   -46,     0,     0,     0,   -46,   -46,
       0,   -46,     0,     0,     0,     0,   -46,     0,     0,     0,
     -46,     0,     0,     0,     0,   -42,     0,     0,     0,   -42,
     -42,     0,   -42,     0,     0,     0,     0,   -42,     0,     0,
     -21,   -42,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,     0,     0,     0,     0,     0,     0,     0,   -21,
       0,     0,     0,   -21,   -27,     0,   -21,     0,     0,     0,
       0,   -21,     0,     0,     0,   -21,     0,     0,     0,     0,
     -19,     0,     0,     0,   -19,   -25,     0,   -19,     0,     0,
       0,     0,   -19,     0,     0,   -17,   -19,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,    25,     0,     2,     3,
       4,     5,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,   -17,     0,     0,     0,   -17,   -23,
       0,   -17,     0,     0,     0,     0,   -17,     0,     0,     0,
     -17,     0,     0,     0,     0,    38,     0,     0,     0,   175,
     164,     0,    39,     0,     0,     0,     0,    40,     0,     0,
     -50,    41,   -50,   -50,   -50,   -50,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,    25,     0,     2,     3,     4,     5,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,   -50,
       0,     0,     0,   -50,   -50,     0,   -50,     0,     0,     0,
       0,   -50,     0,     0,     0,   -50,     0,     0,     0,     0,
      38,     0,     0,     0,   175,   171,     0,    39,     0,     0,
       0,     0,    40,     0,     0,    25,    41,     2,     3,     4,
       5,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,   -49,     0,   -49,   -49,
     -49,   -49,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   175,   172,
       0,    39,     0,     0,     0,     0,    40,     0,     0,     0,
      41,     0,     0,     0,     0,   -49,     0,     0,     0,   -49,
     -49,     0,   -49,     0,     0,     0,     0,   -49,     0,     0,
     -51,   -49,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,   -51,
       0,     0,     0,   -51,   -51,     0,   -51,     0,     0,     0,
       0,   -51,     0,     0,     0,   -51,     0,     0,     0,     0,
     -36,     0,     0,     0,   -36,   266,     0,   -36,     0,     0,
       0,     0,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,   -36,     0,     0,     0,   -36,   298,
       0,   -36,     0,     0,     0,     0,   -36,     0,     0,     0,
     -36,     0,     0,     0,     0,   -36,     0,     0,     0,   -36,
     393,     0,   -36,     0,     0,     0,     0,   -36,     0,     0,
     -35,   -36,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,    25,     0,     2,     3,     4,     5,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,   -35,
       0,     0,     0,   -35,   -35,     0,   -35,     0,     0,     0,
       0,   -35,     0,     0,     0,   -35,     0,     0,     0,     0,
      38,     0,     0,     0,   175,   486,     0,    39,     0,     0,
       0,     0,    40,     0,     0,    25,    41,     2,     3,     4,
       5,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    25,     0,     2,     3,
       4,     5,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   175,   493,
       0,    39,     0,     0,     0,     0,    40,     0,     0,     0,
      41,     0,     0,     0,     0,    38,     0,     0,     0,   175,
     514,     0,    39,     0,     0,     0,     0,    40,     0,     0,
     -37,    41,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,    25,     0,     2,     3,     4,     5,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,   -37,
       0,     0,     0,   -37,   -37,     0,   -37,     0,     0,     0,
       0,   -37,     0,     0,     0,   -37,     0,     0,     0,     0,
      38,     0,     0,     0,   175,     0,     0,    39,     0,     0,
       0,     0,    40,     0,     0,     0,    41,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,   467,     0,
       0,   -84,   -84,   468,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -68,   -68,
     -68,   -68,   -68,   329,   330,   331,     0,     0,     0,     0,
       0,   -84,     0,   300,     0,     0,     0,     0,   301,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -85,     0,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,     0,     0,     0,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,
     -87,   -87,   -87,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,
       0,     0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,     0,     0,     0,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -89,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,     0,
       0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   362,     0,     0,     0,     0,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,
     -80,   -80,   -80,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -78,   -78,   -78,   -78,   -78,   -78,   -80,     0,     0,
       0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -85,   -85,   -85,   -85,   -85,   -85,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -75,   -75,   -75,   -75,
     -75,   -75,   -85,     0,     0,     0,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -80,   -80,   -80,   -80,   -80,   -80,   -86,     0,     0,
       0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,
     -79,   -79,   -87,     0,     0,     0,   -87,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -77,   -77,   -77,   -77,   -77,   -77,   -88,     0,     0,
       0,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,   -76,   -76,
     -76,   -76,   -89,     0,     0,     0,   -89,   -89,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -69,   -69,   -69,   -69,   -69,   -69,   392,     0,     0,
       0,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,   -69,   -69,
     -69,   -69,   -69,   329,   330,   331,   -84,   -84,   -84,   -84,
     -84,   -84,   -80,     0,     0,     0,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   399,   -84,     0,
       0,     0,   400,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   425,     0,     0,     0,     0,   426,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -82,     0,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -90,     0,     0,     0,     0,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,
     -82,   -82,   -70,   -70,   -70,   -70,   -70,   329,   330,   331,
     -72,   -72,   -72,   -72,   -72,   -72,   -82,     0,     0,     0,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,   -90,   -90,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,
     -73,   -90,     0,     0,     0,   -90,   -90,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,   -81,
     -81,   -81,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,   -81,     0,     0,     0,
       0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,     0,     0,     0,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
     -81,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,   -83,   -83,   -86,   -86,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,     0,     0,     0,   -88,
     -88,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,   -89,   -89,     0,     0,     0,     0,
       0,   -75,   101,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
       0,     0,     0,   -82,   -82,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -90,   -90,
       0,     0,     0,     0,     0,   -81,   -81,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -90,   -90,   -90,   -90,
     -90,   -90,   -85,     0,   -85,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -81,   -81,   -81,   -81,   -81,   -81,   -86,     0,   -86,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,   -87,     0,   -87,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -63,   -63,   -63,   -63,   -63,   -63,   -88,     0,   -88,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -63,   -63,
     -63,   327,   328,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -89,     0,   -89,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,   -75,
     -75,   -75,   -75,   -66,   -66,   -66,   327,   328,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   297,     0,   -75,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,   -67,   -67,
     -67,   327,   328,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -80,     0,   -80,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -85,   -85,   -85,
     -85,   -85,   -85,   -64,   -64,   -64,   327,   328,   353,   354,
     -61,   -61,   -61,   -61,     0,     0,     0,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -61,     0,   -61,   355,   356,   -86,   -87,
     -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
     -88,   -89,   -89,   -89,   -89,   -89,   -89,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,   -89,   -75,   -75,   -75,   -75,   -75,   -75,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
       0,     0,   332,   -80,   -80,   -80,   -80,   -80,   -80,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -71,   -71,   -71,
     -71,   -71,   -71,   -80,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -80,   -80,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   -76,   -76,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -82,     0,   -82,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -90,     0,   -90,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,   -82,
     -82,   -82,   -82,   -65,   -65,   -65,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -90,   -90,
     -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -69,   -69,   -69,   -69,   -69,   -69,   -90,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   359,   360,   361,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   359,
     360,   361,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   389,
     390,   391,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,
     389,   390,   391,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -81,     0,   -81,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,   -83,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -83,   -83,   -83,   -83,   -83,
     -83,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -81,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -68,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -68,   -68,   -68,   -68,
      98,    99,   100,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,     0,     0,     0,   -78,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
       0,   -79,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
       0,     0,     0,   -76,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,   -69,     0,
       0,     0,     0,     0,     0,   -70,     0,   -69,   -69,   -69,
     -69,    98,    99,   100,   -70,   -70,   -70,   -70,    98,    99,
     100,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,     0,     0,     0,     0,   -73,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -68,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   294,   295,
     296,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,   -85,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,     0,     0,     0,   -87,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
       0,   -89,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -85,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,   -86,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,   -88,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,   -78,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -75,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -77,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -76,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   -69,     0,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   294,   295,   296,
     -70,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     294,   295,   296,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -72,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,     0,     0,     0,   -82,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -90,     0,     0,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,     0,     0,     0,   -81,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -67,     0,   -67,   -67,
     -67,   357,   358,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -64,     0,
     -64,   -64,   -64,   357,   358,   -65,     0,   -65,   -65,   -65,
     357,   358,   -66,   -66,     0,     0,   -66,   -66,   387,   388,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -67,   -67,     0,     0,   -67,   -67,
     387,   388,   -64,   -64,     0,     0,   -64,   -64,   387,   388,
     -65,   -65,     0,     0,   -65,   -65,   387,   388,   -67,   -67,
     -67,   -67,   -67,   -67,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -67,     0,     0,
       0,     0,     0,   -64,     0,     0,   -67,   -67,    96,    97,
     -65,     0,   -64,   -64,    96,    97,     0,     0,     0,   -65,
     -65,    96,    97,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,   -63,     0,     0,     0,     0,
       0,   -63,   -63,   292,   293,   -66,     0,     0,     0,     0,
       0,   -66,   -66,   292,   293,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -67,   -67,   292,   293,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   292,   293,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   353,   354,   -62,   -62,   -62,   -62,
       0,     0,   288,   289,   -62,   -62,   -62,   -62,     0,   -65,
       0,     0,     0,     0,     0,   -65,   -65,   292,   293,   -62,
       0,   -62,   355,   356,   -62,     0,     0,     0,     0,     0,
     290,   291
};

static const yytype_int16 yycheck[] =
{
      20,   269,    22,    23,   136,   175,     1,     0,     9,    33,
      34,    35,    36,    35,     7,    35,     0,   149,     0,    39,
      35,   153,    35,    10,    44,     7,   196,     1,    50,     9,
      44,    24,    56,   301,    58,    35,   304,     9,    35,    34,
      53,    56,    50,    58,     9,    10,    11,    12,    13,    14,
       9,    71,    72,    73,    74,    20,    21,    58,    58,    56,
       1,    58,     3,     4,     5,     6,   334,    54,    35,    36,
       9,    10,    11,    12,    13,    14,    50,    51,    52,    35,
      36,    20,    21,    57,    33,    34,    35,    36,    53,    56,
      35,    58,    57,    35,    36,   265,   364,    62,    35,    36,
      56,    66,    58,    33,    34,    35,    36,    56,    50,    58,
       9,    50,    35,    58,   134,   108,   136,    58,    57,    35,
      36,    58,   142,    62,    35,    36,   146,    66,    58,   149,
      53,   151,   400,   153,    56,   267,    58,   151,     9,    55,
      56,   161,   162,    35,    36,   165,    50,    58,   162,   144,
     145,   165,    31,    32,    33,    34,    35,    36,   426,    55,
      56,    53,   182,   183,   184,   185,   186,   299,    50,    51,
      52,    50,   167,     9,    10,    11,    12,    13,    14,   447,
      59,    60,    50,   203,    20,    21,    33,    34,    35,    36,
      57,   211,   212,   213,   214,   215,    33,    34,    35,    36,
     468,    57,    33,    34,    35,    36,    35,    36,    55,    56,
      54,   231,   232,   233,   234,   235,    35,    36,    55,    56,
      50,    57,    58,     9,    53,    35,    62,    58,    55,    56,
      66,   251,   252,   253,   254,   255,    55,    56,    35,     9,
      10,    11,    12,    13,    14,    55,    56,   267,   268,   269,
      20,    21,     3,     4,     5,     6,   276,    50,    55,    56,
      50,    54,   394,    35,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    50,   299,
     300,   301,    51,   303,   304,    55,    50,    57,    56,    52,
      58,   311,    62,    56,    50,    58,    66,    55,    56,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,     1,    53,     3,     4,     5,
       6,   341,    56,    58,    58,    33,    34,    35,    36,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    53,    56,    56,    58,    58,
      56,   371,    58,    33,    34,    35,    36,    54,     9,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,    53,   394,   395,    17,    50,    50,   399,
     400,   395,    56,    20,    58,    22,    23,    56,    56,    58,
      58,    22,    23,    56,    56,    58,    58,   417,    35,    56,
      58,    58,    39,   417,    35,   425,   426,    44,    39,     9,
      10,    11,    12,    13,    14,    33,    34,    35,    36,    54,
      20,    21,    33,    34,    35,    36,   446,   447,    54,    35,
      36,    56,    50,    58,    71,    72,    73,    74,    53,    50,
      71,    72,    73,    74,    50,    58,    58,   467,   468,    57,
      55,    31,    32,    33,    34,    35,    36,    57,    58,    56,
      50,    58,    62,    54,    58,   485,    66,    56,    53,    58,
      50,   485,    56,     1,    58,     3,     4,     5,     6,    59,
      60,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    54,    50,    55,   134,    55,   136,
      50,    50,    58,   134,    17,   142,    58,    58,    17,   146,
      58,   142,   149,    58,   151,   146,   153,    53,    58,    53,
      53,    58,    50,    53,   161,   162,    54,    55,   165,    57,
     161,    58,    53,    58,    62,    53,     0,     1,    66,     3,
       4,     5,     6,    53,     7,   182,   183,   184,   185,   186,
      53,    53,    -1,   184,   108,    -1,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,   203,    20,    21,    -1,
      -1,    -1,   203,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   213,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,   231,   232,   233,   234,   235,    -1,
      -1,    -1,   233,    -1,    57,    58,    -1,    -1,    56,    62,
      58,    59,    60,    66,   251,   252,   253,   254,   255,    -1,
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
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
     417,    -1,    20,    21,    23,    -1,    -1,    -1,   425,   426,
      -1,    -1,    -1,    -1,   425,   426,    -1,    36,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   446,
     447,    -1,    -1,    -1,    -1,   446,   447,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
     467,   468,    71,    72,    73,    74,   467,   468,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,   485,    -1,
      20,    21,     0,     1,    -1,     3,     4,     5,     6,    98,
      99,   100,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,   134,    66,    31,    32,    33,
      34,    35,    36,   142,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,    53,
      -1,    -1,   161,    62,    -1,    59,    60,    66,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,   182,   183,   184,   185,   186,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,     0,     1,   203,     3,     4,     5,     6,    -1,
      -1,    -1,   211,   212,   213,   214,   215,    57,    58,    -1,
      -1,    -1,    62,    -1,     0,     1,    66,     3,     4,     5,
       6,    -1,   231,   232,   233,   234,   235,    57,    58,    -1,
      -1,    -1,    62,    -1,     0,     1,    66,     3,     4,     5,
       6,    -1,   251,   252,   253,   254,   255,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,   268,
     269,    20,    21,    -1,    -1,    -1,    -1,   276,    31,    32,
      33,    34,    35,    36,    -1,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,    -1,
      53,   300,   301,    -1,   303,   304,    59,    60,    57,    58,
      -1,    -1,   311,    62,    -1,    -1,    -1,    66,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
       0,     1,   341,     3,     4,     5,     6,    -1,    -1,    -1,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,     9,    10,    11,    12,
      13,    14,   371,    -1,    -1,    -1,    -1,    20,    21,    -1,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,    -1,    -1,    -1,    -1,    -1,    -1,
     399,   400,    23,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    39,    62,
      -1,    -1,    -1,    66,    51,    52,   425,   426,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       1,    -1,     3,     4,     5,     6,    -1,   446,   447,    -1,
      71,    72,    73,    74,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,   467,   468,
      -1,    -1,    -1,    -1,    -1,    96,    97,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,   134,     0,     1,    -1,     3,     4,     5,
       6,   142,    -1,    -1,    -1,   146,    50,    -1,    -1,    -1,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
     161,     1,    66,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,   184,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
       0,     1,   203,     3,     4,     5,     6,    -1,    -1,    -1,
      50,    -1,   213,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,     0,     1,    66,     3,     4,     5,
       6,    -1,   233,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,   253,    31,    32,    33,    34,    35,    36,     9,
      10,    11,    12,    13,    14,    -1,    -1,   268,   269,    -1,
      20,    21,    58,    59,    60,   276,    -1,    55,    56,    -1,
      -1,    59,    60,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,    -1,    23,   297,    -1,    -1,   300,
     301,    -1,   303,   304,    -1,    -1,    -1,    57,    -1,    -1,
     311,    39,    62,    -1,    -1,    -1,    66,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
      -1,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    71,    72,    73,    74,    -1,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,    -1,    -1,
      -1,   362,   363,   364,    92,    93,    94,    95,     0,     1,
     371,     3,     4,     5,     6,    -1,    -1,    -1,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,    -1,    -1,
      -1,   392,    31,    32,    33,    34,    35,    36,   399,   400,
       9,    10,    11,    12,    13,    14,   134,    -1,    -1,    -1,
      -1,    20,    21,    -1,   142,    -1,    -1,    56,   146,    58,
      59,    60,    61,    62,   425,   426,    31,    32,    33,    34,
      35,    36,    -1,   161,     0,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   446,   447,    -1,    57,    -1,
      55,    56,    -1,    62,    59,    60,   184,    66,     9,    10,
      11,    12,    13,    14,    -1,    -1,   467,   468,    -1,    20,
      21,    -1,    -1,    -1,    -1,   203,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,   213,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,   253,    -1,    50,    20,    21,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
     268,   269,    -1,    66,    -1,    -1,    -1,    -1,   276,     0,
       1,    23,     3,     4,     5,     6,   284,   285,   286,   287,
     288,   289,   290,   291,    -1,    57,    -1,    39,    -1,   297,
      62,    -1,   300,   301,    66,   303,   304,    -1,    -1,    -1,
      -1,     0,     1,   311,     3,     4,     5,     6,    -1,    -1,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,    71,
      72,    73,    74,    -1,   332,   333,   334,    -1,    -1,    -1,
      -1,     0,     1,   341,     3,     4,     5,     6,    90,    91,
      -1,   349,   350,   351,   352,   353,   354,   355,   356,    -1,
      -1,    -1,    -1,    -1,   362,   363,   364,     9,    10,    11,
      12,    13,    14,   371,    -1,    -1,    -1,    -1,    20,    21,
      -1,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
      -1,    -1,   134,    -1,   392,    -1,    -1,    -1,    -1,    -1,
     142,   399,   400,    -1,   146,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    57,    20,    21,    -1,   161,
      62,    -1,    -1,    -1,    66,    -1,    -1,   425,   426,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,   184,    -1,    -1,    -1,    -1,    -1,   446,   447,
      -1,     0,     1,    57,     3,     4,     5,     6,    62,    -1,
      -1,   203,    66,    -1,    -1,    -1,    -1,    -1,    -1,   467,
     468,   213,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,   233,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,   268,   269,    20,    21,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    23,    -1,    -1,
      -1,    57,   284,   285,   286,   287,    62,    -1,    -1,    -1,
      66,    -1,    -1,    39,    -1,   297,    -1,    -1,   300,   301,
      -1,   303,   304,    -1,    -1,    57,    -1,    -1,    -1,   311,
      62,    -1,    -1,    -1,    66,    -1,    -1,   319,   320,   321,
     322,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,
     332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,
      -1,    -1,    -1,    89,    -1,    -1,    -1,   349,   350,   351,
     352,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
     362,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      -1,    -1,    50,    51,    -1,    -1,    -1,   379,   380,   381,
     382,    59,    60,    61,    62,    63,    64,    65,   134,    -1,
     392,    -1,    -1,    -1,    -1,    -1,   142,   399,   400,    -1,
     146,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   425,   426,    -1,    -1,    55,    56,    -1,
      23,    59,    60,    61,    62,    63,    64,    65,   184,    -1,
      -1,    -1,    -1,    -1,   446,   447,    39,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,   468,   213,    31,    32,
      33,    34,    35,    36,    58,    59,    60,    -1,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,   233,    51,    52,
      -1,    -1,    55,    56,    57,    88,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,   253,    31,    32,
      33,    34,    35,    36,    31,    32,    33,    34,    35,    36,
      -1,    -1,   268,   269,    -1,    -1,    -1,    50,    -1,    -1,
     276,    -1,    -1,    50,    51,    52,    59,    60,   284,   285,
      57,   134,    59,    60,    61,    62,    63,    64,    65,   142,
      -1,   297,    -1,   146,   300,   301,    -1,   303,   304,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   161,    -1,
      -1,    -1,    -1,   319,   320,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,   332,   333,   334,    -1,
      -1,   184,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    55,    56,   349,   350,    59,    60,    61,    62,    -1,
     203,    -1,    -1,    -1,    23,    -1,   362,   363,   364,    -1,
     213,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      39,    -1,    -1,   379,   380,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,
      -1,    -1,    -1,   399,   400,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    71,    72,    73,    74,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,   268,   269,    -1,    -1,   425,
     426,    -1,    -1,   276,    31,    32,    33,    34,    35,    36,
      -1,   284,   101,    56,    -1,    58,    59,    60,    61,    62,
     446,   447,    -1,    50,   297,    -1,    -1,   300,   301,    -1,
     303,   304,    59,    60,    61,    62,    -1,    -1,   311,    -1,
      -1,   467,   468,    -1,    -1,   134,   319,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,   146,    -1,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,   161,    -1,    -1,    -1,   349,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,   362,
     363,   364,    -1,    -1,    -1,   184,    -1,    -1,   371,    51,
      52,    53,    -1,    -1,    -1,    57,   379,    59,    60,    61,
      62,    63,    64,    65,   203,    -1,    -1,    -1,    -1,   392,
      -1,    -1,    -1,    -1,   213,    -1,   399,   400,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,   233,    -1,    -1,    -1,    51,    52,
      -1,    -1,   425,   426,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    56,   253,    58,    59,    60,    61,    62,
      63,    64,    65,   446,   447,    -1,    -1,    -1,    -1,   268,
     269,    31,    32,    33,    34,    35,    36,   276,    -1,    -1,
      -1,    -1,    -1,    -1,   467,   468,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,   297,    59,
      60,   300,   301,    -1,   303,   304,     1,    -1,     3,     4,
       5,     6,   311,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,   362,   363,   364,    -1,    62,    -1,    52,
      -1,    66,   371,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,
     399,   400,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    -1,   425,   426,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,   446,   447,    -1,
      50,    50,    -1,    -1,    -1,    54,    55,    -1,    57,    59,
      60,    61,    62,    62,    58,    59,    60,    66,   467,   468,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,    66,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
       1,    66,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    51,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    31,    32,    33,    34,    35,    36,    -1,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    31,    32,    33,    34,
      35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    51,    31,    32,
      33,    34,    35,    36,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    56,    -1,    58,    59,    60,    51,    31,
      32,    33,    34,    35,    36,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      31,    32,    33,    34,    35,    36,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    31,    32,    33,    34,    35,    36,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    31,    32,    33,    34,    35,    36,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    31,    32,    33,    34,    35,    36,    58,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    31,    32,
      33,    34,    35,    36,    58,    59,    60,    61,    62,    63,
      64,    65,    31,    32,    33,    34,    35,    36,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    56,    -1,    58,
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
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    31,    32,    33,    34,    35,
      36,    58,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    50,    -1,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    59,    60,    61,    62,    63,    64,    65,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    59,    60,    61,    62,    63,    64,    65,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    59,    60,    61,    62,    63,
      64,    65,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    59,    60,    61,
      62,    63,    64,    65,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    59,    60,    61,    62,    63,    64,    65,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    59,    60,    61,    62,    63,    64,    65,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    50,    -1,    59,
      60,    61,    62,    63,    64,    65,    59,    60,    61,    62,
      63,    64,    65,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    56,    -1,    58,    59,
      60,    61,    62,    31,    32,    33,    34,    35,    36,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    56,    -1,    58,    59,    60,
      61,    62,    55,    56,    -1,    -1,    59,    60,    61,    62,
      31,    32,    33,    34,    35,    36,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      61,    62,    55,    56,    -1,    -1,    59,    60,    61,    62,
      55,    56,    -1,    -1,    59,    60,    61,    62,    31,    32,
      33,    34,    35,    36,    31,    32,    33,    34,    35,    36,
      -1,    31,    32,    33,    34,    35,    36,    50,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    59,    60,    61,    62,
      50,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    59,
      60,    61,    62,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    56,
      -1,    58,    59,    60,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    68,    69,    70,    71,
      73,   100,    50,    54,    82,     0,    70,    50,     9,    55,
      83,     1,    51,    52,    57,     1,     9,    10,    11,    12,
      13,    14,    15,    17,    18,    19,    20,    21,    50,    57,
      62,    66,    71,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   100,
      50,    89,    53,    89,     1,     3,    58,    80,    81,   100,
      50,    52,    57,    57,    57,    82,    89,    96,    97,    96,
      89,    96,    96,    50,    55,    85,    50,    50,    35,    36,
      33,    34,    31,    32,    59,    60,    61,    62,    63,    64,
      65,    51,     9,    51,    53,    58,    58,    54,    56,    58,
       9,    89,    58,    89,    99,    89,    89,    17,    58,    91,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    90,    10,    54,    54,    76,    79,    81,    54,
      52,    53,    56,    58,    58,    58,    57,    72,    89,    75,
      78,    84,    55,    74,    77,    53,    89,    82,    82,    89,
      55,    56,    84,    55,    55,    84,    55,    16,    58,    55,
      89,    55,    55,    82,    50,    54,     9,    10,    11,    12,
      13,    14,    20,    21,    57,    62,    66,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    54,     9,    10,    11,
      12,    13,    14,    57,    98,     9,    10,    11,    12,    13,
      14,    20,    21,    57,    62,    66,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     9,    10,    11,    12,    13,
      14,    20,    21,    57,    62,    66,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     9,    10,    11,    12,    13,
      14,    20,    21,    57,    62,    66,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    54,    55,    83,    52,    57,
       9,    10,    11,    12,    13,    14,    57,    96,    97,    98,
      96,    89,    96,    96,    35,    36,    33,    34,    31,    32,
      59,    60,    61,    62,    63,    64,    65,    51,    55,    83,
      52,    57,    89,    52,    57,     9,    10,    11,    12,    13,
      14,    57,    96,    97,    98,    96,    89,    96,    96,    35,
      36,    33,    34,    31,    32,    59,    60,    61,    62,    63,
      64,    65,    51,    52,    57,     9,    10,    11,    12,    13,
      14,    57,    96,    97,    98,    96,    89,    96,    96,    35,
      36,    33,    34,    31,    32,    59,    60,    61,    62,    63,
      64,    65,    51,    52,    57,     9,    10,    11,    12,    13,
      14,    57,    96,    97,    98,    96,    89,    96,    96,    35,
      36,    33,    34,    31,    32,    59,    60,    61,    62,    63,
      64,    65,    51,    55,    83,    84,    89,    58,    99,    52,
      57,    89,    58,    91,    92,    93,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    90,    84,    89,    58,
      99,    58,    89,    58,    99,    52,    57,    89,    58,    91,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    90,    89,    58,    99,    52,    57,    89,    58,
      91,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    90,    89,    58,    99,    52,    57,    89,
      58,    91,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    90,    84,    55,    53,    58,    89,
      58,    99,    58,    55,    53,    58,    53,    58,    89,    58,
      99,    58,    53,    58,    89,    58,    99,    58,    53,    58,
      89,    58,    99,    58,    55,    53,    58,    53,    58,    53,
      58,    53,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    74,    73,    75,
      73,    76,    73,    77,    73,    78,    73,    79,    73,    73,
      73,    80,    80,    81,    81,    82,    83,    82,    84,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   100,   100
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
#line 2948 "src/parser.c"
    break;

  case 3:
#line 104 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2954 "src/parser.c"
    break;

  case 4:
#line 105 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 2960 "src/parser.c"
    break;

  case 5:
#line 109 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2966 "src/parser.c"
    break;

  case 6:
#line 110 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2972 "src/parser.c"
    break;

  case 7:
#line 111 "language.y"
    { (yyval.node) = NULL; }
#line 2978 "src/parser.c"
    break;

  case 8:
#line 112 "language.y"
    { (yyval.node) = NULL; }
#line 2984 "src/parser.c"
    break;

  case 9:
#line 116 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); }
#line 2990 "src/parser.c"
    break;

  case 10:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); }
#line 2996 "src/parser.c"
    break;

  case 11:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval)); }
#line 3002 "src/parser.c"
    break;

  case 12:
#line 119 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval)); }
#line 3008 "src/parser.c"
    break;

  case 13:
#line 120 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval)); }
#line 3014 "src/parser.c"
    break;

  case 14:
#line 121 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECLARATION, "declaration", ENDARG)); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval)); }
#line 3020 "src/parser.c"
    break;

  case 15:
#line 125 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3026 "src/parser.c"
    break;

  case 16:
#line 126 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3032 "src/parser.c"
    break;

  case 17:
#line 130 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3038 "src/parser.c"
    break;

  case 18:
#line 130 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3044 "src/parser.c"
    break;

  case 19:
#line 131 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3050 "src/parser.c"
    break;

  case 20:
#line 131 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3056 "src/parser.c"
    break;

  case 21:
#line 132 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3062 "src/parser.c"
    break;

  case 22:
#line 132 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3068 "src/parser.c"
    break;

  case 23:
#line 133 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3074 "src/parser.c"
    break;

  case 24:
#line 133 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3080 "src/parser.c"
    break;

  case 25:
#line 134 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3086 "src/parser.c"
    break;

  case 26:
#line 134 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3092 "src/parser.c"
    break;

  case 27:
#line 135 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3098 "src/parser.c"
    break;

  case 28:
#line 135 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); }
#line 3104 "src/parser.c"
    break;

  case 29:
#line 136 "language.y"
    { (yyval.node) = NULL; }
#line 3110 "src/parser.c"
    break;

  case 30:
#line 137 "language.y"
    { (yyval.node) = NULL; }
#line 3116 "src/parser.c"
    break;

  case 31:
#line 141 "language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3122 "src/parser.c"
    break;

  case 32:
#line 142 "language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3128 "src/parser.c"
    break;

  case 33:
#line 146 "language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); }
#line 3134 "src/parser.c"
    break;

  case 34:
#line 147 "language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); }
#line 3140 "src/parser.c"
    break;

  case 35:
#line 151 "language.y"
    { (yyval.node) = NULL; }
#line 3146 "src/parser.c"
    break;

  case 36:
#line 152 "language.y"
    { begin(NULL); }
#line 3152 "src/parser.c"
    break;

  case 37:
#line 152 "language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3158 "src/parser.c"
    break;

  case 38:
#line 156 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3164 "src/parser.c"
    break;

  case 39:
#line 157 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3170 "src/parser.c"
    break;

  case 40:
#line 161 "language.y"
    { (yyval.node) = NULL; }
#line 3176 "src/parser.c"
    break;

  case 41:
#line 162 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3182 "src/parser.c"
    break;

  case 42:
#line 163 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3188 "src/parser.c"
    break;

  case 43:
#line 164 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3194 "src/parser.c"
    break;

  case 44:
#line 165 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3200 "src/parser.c"
    break;

  case 45:
#line 166 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3206 "src/parser.c"
    break;

  case 46:
#line 167 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3212 "src/parser.c"
    break;

  case 47:
#line 168 "language.y"
    { (yyval.node) = NULL; }
#line 3218 "src/parser.c"
    break;

  case 48:
#line 172 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign_context((yyval.node)); }
#line 3224 "src/parser.c"
    break;

  case 49:
#line 173 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3230 "src/parser.c"
    break;

  case 50:
#line 177 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3236 "src/parser.c"
    break;

  case 51:
#line 178 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign_context((yyval.node)); }
#line 3242 "src/parser.c"
    break;

  case 52:
#line 182 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign_context((yyval.node)); }
#line 3248 "src/parser.c"
    break;

  case 53:
#line 183 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3254 "src/parser.c"
    break;

  case 54:
#line 187 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3260 "src/parser.c"
    break;

  case 55:
#line 188 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3266 "src/parser.c"
    break;

  case 56:
#line 192 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3272 "src/parser.c"
    break;

  case 57:
#line 193 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3278 "src/parser.c"
    break;

  case 58:
#line 197 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3284 "src/parser.c"
    break;

  case 59:
#line 198 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node));}
#line 3290 "src/parser.c"
    break;

  case 60:
#line 202 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3296 "src/parser.c"
    break;

  case 61:
#line 203 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3302 "src/parser.c"
    break;

  case 62:
#line 204 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3308 "src/parser.c"
    break;

  case 63:
#line 208 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3314 "src/parser.c"
    break;

  case 64:
#line 209 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3320 "src/parser.c"
    break;

  case 65:
#line 210 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3326 "src/parser.c"
    break;

  case 66:
#line 211 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3332 "src/parser.c"
    break;

  case 67:
#line 212 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3338 "src/parser.c"
    break;

  case 68:
#line 216 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3344 "src/parser.c"
    break;

  case 69:
#line 217 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3350 "src/parser.c"
    break;

  case 70:
#line 218 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3356 "src/parser.c"
    break;

  case 71:
#line 222 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3362 "src/parser.c"
    break;

  case 72:
#line 223 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3368 "src/parser.c"
    break;

  case 73:
#line 224 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3374 "src/parser.c"
    break;

  case 74:
#line 225 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3380 "src/parser.c"
    break;

  case 75:
#line 229 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3386 "src/parser.c"
    break;

  case 76:
#line 230 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3392 "src/parser.c"
    break;

  case 77:
#line 231 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3398 "src/parser.c"
    break;

  case 78:
#line 232 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3404 "src/parser.c"
    break;

  case 79:
#line 233 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); typecheck_lazy((yyval.node)); }
#line 3410 "src/parser.c"
    break;

  case 80:
#line 237 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3416 "src/parser.c"
    break;

  case 81:
#line 238 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3422 "src/parser.c"
    break;

  case 82:
#line 239 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call",     ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free((void*) (yyvsp[-2].sval));}
#line 3428 "src/parser.c"
    break;

  case 83:
#line 240 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG)); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free((void*) (yyvsp[-3].sval));}
#line 3434 "src/parser.c"
    break;

  case 84:
#line 244 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); retrieve((yyval.node), (yyval.node)->name); }
#line 3440 "src/parser.c"
    break;

  case 85:
#line 245 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, key); free(key); }
#line 3446 "src/parser.c"
    break;

  case 86:
#line 246 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , key); free(key); }
#line 3452 "src/parser.c"
    break;

  case 87:
#line 247 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3458 "src/parser.c"
    break;

  case 88:
#line 248 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , key); free(key); }
#line 3464 "src/parser.c"
    break;

  case 89:
#line 249 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign_context((yyval.node)); free((void*) (yyvsp[0].sval)); char * key = str_ptr("node", (yyval.node), NULL); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , key); free(key); }
#line 3470 "src/parser.c"
    break;

  case 90:
#line 250 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3476 "src/parser.c"
    break;

  case 91:
#line 254 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3482 "src/parser.c"
    break;

  case 92:
#line 255 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign_context((yyval.node)); }
#line 3488 "src/parser.c"
    break;

  case 93:
#line 259 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3494 "src/parser.c"
    break;

  case 94:
#line 260 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3500 "src/parser.c"
    break;

  case 95:
#line 261 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3506 "src/parser.c"
    break;

  case 96:
#line 262 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3512 "src/parser.c"
    break;


#line 3516 "src/parser.c"

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
