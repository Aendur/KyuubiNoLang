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
#define YYLAST   6322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  444

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
     113,   113,   123,   124,   128,   129,   130,   131,   132,   133,
     134,   135,   139,   140,   140,   144,   145,   149,   150,   154,
     155,   159,   160,   164,   165,   169,   170,   171,   175,   176,
     177,   178,   179,   183,   184,   185,   189,   190,   191,   192,
     196,   197,   198,   199,   200,   204,   205,   206,   207,   211,
     212,   213,   214,   219,   220,   224,   225,   226,   227
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
     275,   276,   277,   278,   279,   280,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
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
     719,    49,   -10,    73,    76,   100,    90,   300,   637,   112,
      32,   134,   141,   713,  1999,   805,  -248,   836,   890,    85,
     936,   975,   219,  1025,  2968,   452,   452,  3137,  3165,  3193,
     335,   747,   452,   452,   115,   170,   196,   121,   461,  1497,
    1693,  5209,  5237,  4061,  3221,    88,    15,   225,   166,   242,
     269,   409,  2082,   299,  2128,  2168,  2208,  2248,  2288,   304,
     307,   320,  5265,  4089,  5293,    80,   276,   302,  5321,  5349,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   779,   433,   452,   327,   317,   325,    -7,
     223,    46,   305,   349,  2328,   747,   747,   374,   394,  2368,
    1086,  2408,  2448,  2488,   435,   412,    30,  3249,   201,   567,
    1926,  1941,  6092,  6117,  6123,  6148,  5377,  5405,  5433,  5461,
    5489,   411,  4117,   347,   352,   252,   379,   224,   247,   220,
     250,     5,   407,   415,   426,   443,   392,  4145,   810,  4173,
     418,   483,   446,   453,   747,   436,   459,   455,   406,  2528,
     458,   465,   490,   476,   453,  2568,  2608,  2648,  4201,  4229,
    4257,   747,   910,   910,  1137,  1188,  1458,   335,   747,   910,
     910,   402,    97,   140,    38,   529,  1240,  1366,  4817,  3277,
    1531,   913,   913,  3305,  3333,  3361,   747,   913,   913,    28,
     147,   492,   159,   118,  5502,  5530,  4285,  3389,  1001,  1001,
    3417,  3445,  3473,   747,  1001,  1001,   -12,    16,   573,  1638,
    6161,  5543,  5571,  4313,  3501,  2688,  1061,  1061,   173,  2997,
    3025,   747,  1061,  1061,    70,   348,     6,   867,  1319,  4827,
    4855,  3529,  3053,  2728,  2768,  2968,   480,  3557,  3585,  3613,
     747,  4866,  3641,  4894,   496,   485,  4905,  4933,   910,   910,
     910,   910,   910,   910,   910,   910,   910,   910,   910,   910,
     910,   779,   517,   910,  4341,  4369,  4397,   747,  5579,  4425,
    5607,   506,  5615,  5643,   913,   913,   913,   913,   913,   913,
     913,   913,   913,   913,   913,   913,   913,   779,   575,   913,
    4453,  4481,  4509,   747,  5656,  4537,  5684,   523,  5712,  5740,
    1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,  1001,
    1001,  1001,  1001,   779,   658,  1001,   557,  2968,  3669,  3697,
    3725,   747,  4943,  3753,  4971,   560,  4981,  5009,  1061,  1061,
    1061,  1061,  1061,  1061,  1061,  1061,  1061,  1061,  1061,  1061,
    1061,   779,   673,  1061,   744,  2968,  2808,  4565,   580,   521,
      61,  3081,   310,   344,  1647,  1831,  1858,  5988,  5996,  6021,
    5020,  5048,  5059,  5087,  5098,   586,  3781,   481,   151,   584,
    3809,   316,   515,  1286,  1785,  1583,  5251,  5279,  5307,  5748,
    5776,  5784,  5812,  5820,   587,  4593,   488,    52,   601,  3837,
     199,   582,  2046,  6286,  6186,  6211,  6236,  6261,  5848,  5876,
    5904,  5932,  5960,   610,  4621,   524,    95,  2848,   611,  3109,
     353,    12,  1416,  1886,  6028,  6053,  6060,  6085,  5126,  5136,
    5164,  5174,  5202,   615,  3865,   578,   424,  2888,  2928,  3893,
     531,  3921,  3949,  4649,  4677,  4705,  4733,  4761,  4789,   654,
    3977,  4005,  4033,  1602
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
    -248,  -248,  -248,   639,   272,  -248,   -18,   499,  -248,  -248,
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
      44,    34,    12,   346,    15,    44,   101,   300,   235,    12,
     -85,   180,   197,   -85,    21,   367,    88,   -49,    89,     3,
       4,     5,   330,   331,   -53,   -53,   214,   128,   330,   331,
     -54,   -54,    44,   141,   301,   -51,    44,   -26,   -53,   -26,
     -53,   386,   162,   163,   -54,   -51,   -54,   274,    93,    90,
     164,   165,   166,    97,   250,   251,   -53,   -53,   -10,    19,
     167,   135,   -49,   168,   214,   232,   317,   405,   169,   -53,
     -53,   274,   170,   162,   163,    13,   197,   197,   129,    14,
     130,   164,   165,   166,   345,   407,   -50,   180,   136,   328,
      16,   167,   430,   -86,   168,   425,   -87,    25,    26,   169,
     198,   199,   -49,   170,   -49,    27,    28,    29,   200,   201,
     202,   -18,   -18,   427,   300,    30,   248,    86,    31,   232,
     -88,   203,   214,    32,   -50,   197,   204,    33,   -49,   -49,
     205,    93,   -58,   -58,   -58,   -58,   -58,   -58,    18,    71,
     -51,   -11,   197,   242,   242,   148,   149,   -51,   180,   197,
     242,   242,   -58,   -58,   -58,   282,   283,   156,   249,   -51,
      20,    22,   269,   269,    14,   275,   -51,   197,   269,   269,
     248,   -51,   -51,   278,   279,   -55,   -55,   -55,   -55,   295,
     295,   -51,   -50,   -50,   197,   295,   295,   -79,   -79,   -79,
     -79,   -79,   -79,   -55,   280,   281,   -15,   323,   323,    95,
     -79,   -79,   197,   323,   323,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,    70,    44,   301,   -52,    71,
     -52,   197,   -49,     2,     3,     4,     5,   -52,   -52,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   214,   232,   242,   -12,   -12,    45,   197,   -21,
     -23,    94,    46,   -21,   -23,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   214,   232,
     269,    70,     9,   -22,   197,    96,   -20,   -22,   -50,     9,
     -20,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   214,   232,   295,   101,    44,   215,
      -2,     1,   197,     2,     3,     4,     5,   105,   106,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   214,   232,   323,    99,    44,    44,   249,   -52,
     102,   180,   136,   103,   275,   -52,   107,   -24,    42,   -24,
     104,   -52,   -52,    42,    62,    64,   126,   162,   163,   178,
     -52,    68,    69,   -13,   -13,   164,   165,   166,   101,   127,
     250,   251,   -54,   -54,   212,   167,   329,   -51,   168,   131,
      42,   329,   -52,   169,    42,   -54,   -54,   170,   101,   -83,
     -51,   -83,   -51,   134,   138,   -52,   139,   -52,    44,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   118,
     119,   120,   212,   230,    42,   -14,   -14,   -42,    44,   -42,
     -42,   -42,   -42,   -42,   -43,   -42,   -42,   -42,   -42,   -42,
     -48,    25,    26,   -19,   -19,   178,   -42,   -42,   -42,    27,
      28,    29,   -42,   -15,   -15,   -47,   -42,   -42,   -16,   -42,
     137,   142,    31,   328,   -42,   216,   217,    32,   -42,   143,
     -25,    33,   -25,   218,   219,   220,   -50,   230,   -50,   144,
     212,   -12,   -12,    45,    25,    26,   221,   122,   -84,   -17,
     -84,   222,   158,   159,   160,   223,   233,    72,    73,   -53,
     -53,   241,   243,   157,   151,   161,   178,   -53,   246,   247,
      32,   -27,   153,   -27,    33,   198,   199,   -28,   154,   -28,
     268,   270,   155,   200,   201,   202,   272,   273,   276,   277,
     -53,   -53,   146,   138,   347,   432,   203,   294,   296,   351,
     138,   204,   435,   298,   299,   205,   -53,   349,   350,   216,
     217,   276,   277,   -54,   -54,   322,   324,   218,   219,   220,
     370,   326,   327,   252,   253,   -55,   -55,   -55,   -55,   -54,
     221,   366,   -16,   -16,    42,   222,   138,   389,   438,   223,
     -55,   -55,   -17,   -17,   254,   255,   -29,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   362,   363,   364,
     212,   230,   178,    72,    73,   -54,   -54,   216,   217,   302,
     303,   -53,   -53,   -54,   409,   218,   219,   220,   302,   303,
     -54,   -54,   -53,   381,   382,   383,   212,   230,   221,   385,
     138,   -54,   442,   222,   429,   431,   434,   223,   433,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   400,
     401,   402,   212,   230,   212,   436,    42,    -3,    -3,   437,
      -3,    -3,    -3,    -3,   441,   440,    17,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   420,   421,   422,
     212,   230,   230,   -31,    42,    42,   244,   140,     0,   178,
     216,   217,     0,     0,     0,     0,    43,     0,   218,   219,
     220,    43,    43,    43,     0,   216,   217,   179,     0,    43,
      43,   221,   404,   218,   219,   220,   222,     0,     0,     0,
     223,     0,   213,     0,     0,     0,   221,   424,    43,     0,
       0,   222,    43,    -8,    -8,   223,    -8,    -8,    -8,    -8,
       1,     0,     2,     3,     4,     5,    42,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
     213,   231,    43,     0,     0,   -29,    42,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   181,
     182,     0,     0,   179,   -29,   -29,   -29,   183,   184,   185,
     -29,     0,     0,     0,   -29,   -29,     0,   -29,     0,     0,
     186,     0,   -29,     0,     0,   187,   -29,     0,     0,   188,
       0,   198,   199,     0,     0,   231,     0,     0,   213,   200,
     201,   202,    36,     0,     0,    -9,    -9,    36,    -9,    -9,
      -9,    -9,   203,   172,     0,     0,     0,   204,     0,   179,
     179,   205,   216,   217,   179,     0,   179,   179,   206,     0,
     218,   219,   220,     0,    36,     0,    -4,    -4,    36,    -4,
      -4,    -4,    -4,   221,     0,     0,     0,     0,   222,     0,
       0,     0,   223,     0,     0,   213,   213,     0,     0,     0,
       0,   213,   213,     0,     0,     0,   206,   224,   125,     0,
       0,     0,     0,   231,   231,     0,     0,     0,     0,   231,
     231,   332,   333,   -55,   -55,   -55,   -55,     0,     0,   172,
      -7,    -7,    43,    -7,    -7,    -7,    -7,     0,     0,   -55,
       0,   -55,   334,   335,     0,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   213,   231,
     179,   224,   162,   163,   206,   181,   182,     0,     0,     0,
     237,   238,   239,   264,   265,   266,    -5,    -5,     0,    -5,
      -5,    -5,    -5,   240,   213,   231,   267,     0,   169,     0,
     172,   187,   170,     0,     0,   188,     0,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   231,   213,     0,    43,    -6,    -6,     0,    -6,    -6,
      -6,    -6,     0,     0,     0,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   213,   231,
     231,    41,    43,    43,     0,     0,    41,   179,     0,     0,
       0,     0,   177,   198,   199,     0,     0,     0,    36,     0,
       0,   290,   291,   292,     0,   -29,   -29,   211,   -29,   -29,
     -29,   -29,     0,    41,   293,     0,     0,    41,     0,   204,
       0,     0,     0,   205,   206,   224,   368,     0,     0,     0,
       0,     0,    41,    41,    41,    41,    41,    41,    41,    41,
     116,   117,     0,     0,    43,   211,   229,    41,     0,     0,
     206,   224,   387,   216,   217,     0,     0,     0,     0,     0,
       0,   318,   319,   320,    43,     0,   -31,   -31,   177,   -31,
     -31,   -31,   -31,     0,   321,     0,   206,   224,   406,   222,
      36,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,   211,   206,   224,   426,     0,    36,    36,
       0,    40,     0,   172,     0,     0,    40,     0,     0,     0,
       0,     0,   176,     0,     0,     0,     0,     0,     0,   177,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   210,     0,     0,
       0,     0,     0,    40,   -79,   -79,     0,    40,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,    40,    40,    40,    40,   112,   113,   114,   115,
      36,     0,     0,     0,     0,   210,   228,    40,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
      36,     0,     0,     0,     0,   -81,   -81,    41,   176,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     177,   177,   177,   177,   177,   177,   177,   177,   360,   361,
       0,     0,     0,   211,   229,   177,     0,     0,     0,     0,
     228,     0,     0,   210,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,   379,   380,     0,     0,     0,   211,
     229,   -58,   -58,     0,     0,   -58,   -58,   256,   257,   176,
       0,     0,   211,   211,   211,   211,   211,   211,   211,   211,
     398,   399,     0,     0,     0,   211,   229,   211,     0,    41,
     278,   279,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
     229,   229,   229,   229,   229,   229,   229,   229,   418,   419,
     -56,   280,   281,   211,   229,   229,     0,    41,    41,     0,
       0,     0,   177,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,   -58,     0,   -58,   -58,   -58,   336,   337,     0,     0,
     176,   176,   176,   176,   356,   357,   358,   359,     0,     0,
       0,     0,     0,   210,   228,   176,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,    41,
     375,   376,   377,   378,     0,     0,     0,   -63,   -63,   210,
     228,   -63,   -63,   -63,   -63,   258,   259,   260,     0,    41,
       0,     0,   210,   210,   210,   210,   394,   395,   396,   397,
       0,     0,     0,     0,     0,   210,   228,   210,     0,    40,
     332,   333,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
     228,   228,   228,   228,   414,   415,   416,   417,   -56,     0,
     -56,   334,   335,   210,   228,   228,    39,    40,    40,     0,
       0,    39,   176,     0,     0,     0,     0,   175,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   209,     0,     0,   -80,   -80,     0,    39,   -80,
     -80,   -80,    39,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,    39,    39,   110,
     111,    74,    75,   -55,   -55,   -55,   -55,     0,     0,    40,
     209,   227,    39,   -55,     0,     0,     0,     0,     0,    38,
       0,     0,    76,    77,    38,     0,     0,     0,     0,    40,
     174,     0,     0,   175,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   208,     0,     0,   263,   -75,
       0,    38,   -75,   -75,   -75,    38,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,   227,     0,     0,   209,     0,
      38,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   226,    38,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -31,   175,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   174,   -62,   -62,   -62,
     282,   283,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
       0,     0,   -31,   -31,     0,   -31,     0,     0,     0,     0,
     -31,     0,     0,     0,   -31,     0,     0,     0,   226,     0,
       0,   208,   304,   305,   -55,   -55,   -55,   -55,     0,     0,
       0,   252,   253,   -56,   -56,   -56,   -56,   -55,     0,     0,
      37,     0,    39,   306,   307,    37,     0,   174,   -56,   -56,
       0,   173,   254,   255,     0,   175,   175,   354,   355,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   209,   227,
     175,     0,    37,     0,     0,     0,    37,   -58,   -58,   -58,
     -58,   -58,   -58,   373,   374,     0,     0,     0,     0,   -58,
       0,   108,     0,     0,   209,   227,     0,     0,   -58,   -58,
      78,    79,     0,     0,   207,   225,    37,   209,   209,   392,
     393,     0,     0,     0,     0,    38,     0,     0,     0,     0,
     209,   227,   209,     0,    39,     0,     0,   173,   174,   353,
       0,     0,     0,     0,     0,   227,   227,   412,   413,     0,
       0,   208,   226,   174,     0,     0,     0,     0,   209,   227,
     227,     0,    39,    39,     0,   372,     0,   175,     0,   225,
       0,     0,   207,     0,     0,     0,     0,   208,   226,   278,
     279,   -57,   -57,   -57,   -57,    35,     0,     0,     0,     0,
     208,   391,     0,     0,     0,     0,   171,    67,   173,   -57,
     280,   281,     0,   208,   226,   208,     0,    38,     0,     0,
       0,    87,     0,     0,     0,     0,     0,    98,   226,   411,
       0,     0,     0,     0,    39,   252,   253,   -57,   -57,   -57,
     -57,   208,   226,   226,     0,    38,    38,     0,     0,     0,
     174,     0,   -57,   -57,    39,     0,   254,   255,     0,   121,
     123,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   132,   133,     0,     0,     0,    37,     0,     0,   -62,
     -62,     0,   171,   -62,   -62,   256,   257,     0,     0,   352,
     332,   333,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,   207,   225,   173,     0,     0,    38,   -57,     0,
     -57,   334,   335,     0,   145,   371,     0,   147,     0,     0,
     150,     0,     0,     0,     0,     0,     0,    38,   207,   225,
      74,    75,   -56,   -56,   -56,   -56,     0,   236,     0,     0,
       0,   390,   -56,   171,   245,    74,    75,   -57,   -57,   -57,
     -57,    76,    77,     0,   207,   225,   207,   -57,    37,     0,
       0,     0,   271,     0,     0,     0,    76,    77,     0,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   297,
       0,     0,   207,   225,   225,     0,    37,    37,     0,     0,
     -30,   173,   -30,   -30,   -30,   -30,   -30,   325,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,     0,     0,     0,   -30,   348,     0,     0,   -30,
      23,     0,   -30,     0,     0,     0,     0,   -30,     0,     0,
       0,   -30,     0,     0,     0,     0,     0,   365,   123,     0,
       0,     0,     0,   369,     0,     0,     0,     0,    37,     0,
     304,   305,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,     0,   384,   123,   -56,     0,     0,    37,   388,
       0,   306,   307,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,   403,
     123,     0,   -34,   -34,   -34,     0,     0,   408,   -34,     0,
       0,     0,   -34,   -34,     0,   -34,     0,     0,     0,     0,
     -34,     0,     0,     0,   -34,     0,     0,   423,   123,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   171,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,     0,     0,     0,   -39,     0,     0,     0,   -39,   -39,
       0,   -39,     0,     0,     0,     0,   -39,     0,     0,    47,
     -39,     2,     3,     4,     5,    48,     0,    49,    50,    51,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,     0,    52,     0,     0,     0,   157,   100,
       0,    31,     0,     0,     0,     0,    32,     0,     0,   -32,
      33,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,     0,     0,     0,   -32,     0,     0,     0,   -32,   -32,
       0,   -32,     0,     0,     0,     0,   -32,     0,     0,   -37,
     -32,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,     0,     0,     0,   -37,     0,     0,     0,   -37,   -37,
       0,   -37,     0,     0,     0,     0,   -37,     0,     0,   -38,
     -37,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,     0,     0,     0,   -38,     0,     0,     0,   -38,   -38,
       0,   -38,     0,     0,     0,     0,   -38,     0,     0,   -41,
     -38,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,     0,     0,   -41,   -41,
       0,   -41,     0,     0,     0,     0,   -41,     0,     0,   -35,
     -41,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,     0,     0,   -35,     0,     0,     0,   -35,   -35,
       0,   -35,     0,     0,     0,     0,   -35,     0,     0,   -33,
     -35,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,   -33,     0,     0,     0,     0,   -33,     0,     0,   -40,
     -33,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -40,     0,     0,     0,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,     0,     0,     0,   -40,     0,     0,   -36,
     -40,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,     0,     0,   -36,   -36,
       0,   -36,     0,     0,     0,     0,   -36,     0,     0,   -45,
     -36,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,     0,     0,     0,   -45,     0,     0,     0,   -45,   -45,
       0,   -45,     0,     0,     0,     0,   -45,     0,     0,   -46,
     -45,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,   -46,   -46,
     -46,     0,     0,     0,   -46,     0,     0,     0,   -46,   -46,
       0,   -46,     0,     0,     0,     0,   -46,     0,     0,   -44,
     -46,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,     0,     0,     0,   -44,     0,     0,     0,   -44,   -44,
       0,   -44,     0,     0,     0,     0,   -44,     0,     0,   -30,
     -44,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,     0,     0,   -30,     0,     0,     0,   -30,   234,
       0,   -30,     0,     0,     0,     0,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,     0,     0,   -30,     0,     0,     0,   -30,   316,
       0,   -30,     0,     0,     0,     0,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,     0,     0,   -30,     0,     0,     0,   -30,   344,
       0,   -30,     0,     0,     0,     0,   -30,     0,     0,   -29,
     -30,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,   -29,   -29,
     -29,     0,     0,     0,   -29,     0,     0,     0,   -29,   -29,
       0,   -29,     0,     0,     0,     0,   -29,     0,     0,    47,
     -29,     2,     3,     4,     5,    48,     0,    49,    50,    51,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,     0,    52,     0,     0,     0,   157,   428,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    47,
      33,     2,     3,     4,     5,    48,     0,    49,    50,    51,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,     0,    52,     0,     0,     0,   157,   439,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    47,
      33,     2,     3,     4,     5,    48,     0,    49,    50,    51,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,     0,    52,     0,     0,     0,   157,   443,
       0,    31,     0,     0,     0,     0,    32,     0,     0,   -31,
      33,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,     0,     0,   -31,   -31,
       0,   -31,     0,     0,     0,     0,   -31,     0,     0,    47,
     -31,     2,     3,     4,     5,    48,     0,    49,    50,    51,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,     0,     0,     0,    52,     0,     0,     0,   157,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,     0,
      33,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
     343,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
       0,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,     0,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,   -75,    85,   -75,
       0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,     0,   -70,   -70,
     262,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,   289,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,     0,     0,     0,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,   -81,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,     0,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   315,   -75,
     -75,     0,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     0,     0,
       0,   -70,   342,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,     0,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,   -82,   -82,   -82,     0,     0,     0,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,   -70,     0,    83,
       0,     0,     0,     0,    84,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,   -75,     0,   -75,     0,     0,
       0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -77,     0,   -77,     0,     0,     0,     0,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -76,     0,   -76,     0,     0,     0,     0,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,   -78,
       0,   -78,     0,     0,     0,     0,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,   -79,     0,   -79,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,   -81,     0,   -81,     0,     0,
       0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,   -80,     0,   -80,     0,     0,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,   287,     0,     0,     0,     0,   288,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   313,   -70,     0,     0,     0,   314,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,     0,     0,     0,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,     0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,     0,
       0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,     0,     0,     0,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,   -82,     0,   -82,     0,     0,     0,     0,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
     -77,     0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,     0,     0,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,     0,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -66,   -66,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   338,   339,   340,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -74,   -74,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   258,
     259,   260,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -65,
     -65,     0,     0,   -65,   -65,   -65,   -65,   258,   259,   260,
     -67,   -67,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -68,   -68,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   338,   339,   340,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   338,   339,   340,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,     0,   -69,   -63,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -63,   -63,   -63,   -63,    80,    81,
      82,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,   -66,     0,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,
     -73,   -73,   -73,   -73,   -73,   -61,   -61,   -61,   282,   283,
       0,   -73,     0,   -59,   -59,   -59,   -59,   -59,   -59,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,
     -74,   -74,   -74,   -59,   -59,   -59,   282,   283,     0,   -74,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,   -72,   -72,
     -72,   -60,   -60,   -60,   282,   283,     0,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,    80,    81,    82,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,    80,    81,    82,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,   -67,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,   -69,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   284,   285,   286,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -63,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   310,   311,   312,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -66,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -71,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -64,   -64,   -64,   -64,   -64,   284,   285,   286,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   284,   285,   286,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   310,   311,   312,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   310,   311,   312,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,   -61,
     -61,     0,     0,   -61,   -61,   256,   257,   -59,   -59,     0,
       0,   -59,   -59,   256,   257,   -60,   -60,   -60,   -60,   -60,
     -60,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -60,   -60,     0,     0,   -60,   -60,   256,   257,
     -62,     0,   -62,   -62,   -62,   336,   337,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,     0,     0,     0,   -61,     0,   -61,   -61,   -61,
     336,   337,   -59,     0,   -59,   -59,   -59,   336,   337,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,   -60,   -62,   -60,
     -60,   -60,   336,   337,     0,     0,     0,   -62,   -62,    78,
      79,   -61,   -61,   -61,   -61,   -61,   -61,   -59,   -59,   -59,
     -59,   -59,   -59,   -61,     0,     0,     0,     0,     0,   -59,
       0,     0,   -61,   -61,    78,    79,     0,     0,   -59,   -59,
      78,    79,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,     0,     0,     0,   -60,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -60,   -60,    78,    79,     0,     0,     0,
     -58,     0,     0,     0,     0,     0,   -58,   -58,   308,   309,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,     0,     0,     0,     0,
       0,   -62,   -62,   308,   309,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -61,     0,     0,     0,     0,     0,   -61,   -61,   308,   309,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,     0,     0,     0,     0,
       0,   -59,   -59,   308,   309,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   308,   309,
     304,   305,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,   306,   307
};

static const yytype_int16 yycheck[] =
{
      19,    19,     0,   235,     1,    24,    55,    19,   157,     7,
      20,    30,    31,    20,    11,   262,     1,    29,     3,     4,
       5,     6,    16,    17,    18,    19,    45,    34,    16,    17,
      18,    19,    51,    28,    18,    19,    55,    32,    32,    34,
      34,   288,    12,    13,    32,    29,    34,    19,    46,    34,
      20,    21,    22,    50,    16,    17,    18,    19,    26,    27,
      30,    31,    34,    33,    83,    84,   215,   314,    38,    31,
      32,    19,    42,    12,    13,    26,    95,    96,    32,    30,
      34,    20,    21,    22,   233,   317,    34,   106,   106,    19,
       0,    30,    31,    20,    33,   342,    20,    12,    13,    38,
      12,    13,    32,    42,    34,    20,    21,    22,    20,    21,
      22,    31,    32,   345,    19,    30,    19,    29,    33,   138,
      20,    33,   141,    38,    29,   144,    38,    42,    31,    32,
      42,   129,    14,    15,    16,    17,    18,    19,    26,    18,
      19,    26,   161,   162,   163,   142,   143,    26,   167,   168,
     169,   170,    34,    35,    36,    37,    38,   154,    18,    19,
      26,    20,   181,   182,    30,    18,    19,   186,   187,   188,
      19,    31,    32,    14,    15,    16,    17,    18,    19,   198,
     199,    34,    31,    32,   203,   204,   205,    14,    15,    16,
      17,    18,    19,    34,    35,    36,    26,   216,   217,    33,
      27,    28,   221,   222,   223,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    19,   235,    18,    19,    18,
      19,   240,    26,     3,     4,     5,     6,    26,    29,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    26,    27,    28,   267,    26,
      26,    26,    33,    30,    30,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,    19,     0,    26,   293,    33,    26,    30,    26,     7,
      30,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   346,   317,    30,
       0,     1,   321,     3,     4,     5,     6,    31,    32,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    26,   345,   346,    18,    19,
      26,   350,   350,    26,    18,    19,    34,    32,    19,    34,
      20,    31,    32,    24,    25,    26,    29,    12,    13,    30,
      34,    32,    33,    26,    27,    20,    21,    22,   407,    34,
      16,    17,    18,    19,    45,    30,    18,    19,    33,    20,
      51,    18,    19,    38,    55,    31,    32,    42,   427,    32,
      32,    34,    34,     9,    32,    32,    34,    34,   407,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    26,    27,     1,   427,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      26,    12,    13,    31,    32,   106,    20,    21,    22,    20,
      21,    22,    26,    31,    32,    26,    30,    31,    26,    33,
      29,    34,    33,    19,    38,    12,    13,    38,    42,    34,
      32,    42,    34,    20,    21,    22,    32,   138,    34,    33,
     141,    26,    27,    28,    12,    13,    33,    34,    32,    26,
      34,    38,    20,    21,    22,    42,    30,    16,    17,    18,
      19,   162,   163,    30,    29,    33,   167,    26,   169,   170,
      38,    32,    34,    34,    42,    12,    13,    32,     8,    34,
     181,   182,    26,    20,    21,    22,   187,   188,    16,    17,
      18,    19,    29,    32,    34,    34,    33,   198,   199,    34,
      32,    38,    34,   204,   205,    42,    34,    31,    32,    12,
      13,    16,    17,    18,    19,   216,   217,    20,    21,    22,
      34,   222,   223,    14,    15,    16,    17,    18,    19,    34,
      33,    34,    31,    32,   235,    38,    32,    34,    34,    42,
      31,    32,    31,    32,    35,    36,     9,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    16,    17,    18,    19,    12,    13,    16,
      17,    18,    19,    26,    34,    20,    21,    22,    16,    17,
      18,    19,    29,   284,   285,   286,   287,   288,    33,    34,
      32,    29,    34,    38,    34,    29,    29,    42,    34,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,    34,   317,     0,     1,    29,
       3,     4,     5,     6,    29,    34,     7,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,     9,   345,   346,   167,   129,    -1,   350,
      12,    13,    -1,    -1,    -1,    -1,    19,    -1,    20,    21,
      22,    24,    25,    26,    -1,    12,    13,    30,    -1,    32,
      33,    33,    34,    20,    21,    22,    38,    -1,    -1,    -1,
      42,    -1,    45,    -1,    -1,    -1,    33,    34,    51,    -1,
      -1,    38,    55,     0,     1,    42,     3,     4,     5,     6,
       1,    -1,     3,     4,     5,     6,   407,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,     1,   427,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    12,
      13,    -1,    -1,   106,    20,    21,    22,    20,    21,    22,
      26,    -1,    -1,    -1,    30,    31,    -1,    33,    -1,    -1,
      33,    -1,    38,    -1,    -1,    38,    42,    -1,    -1,    42,
      -1,    12,    13,    -1,    -1,   138,    -1,    -1,   141,    20,
      21,    22,    19,    -1,    -1,     0,     1,    24,     3,     4,
       5,     6,    33,    30,    -1,    -1,    -1,    38,    -1,   162,
     163,    42,    12,    13,   167,    -1,   169,   170,    45,    -1,
      20,    21,    22,    -1,    51,    -1,     0,     1,    55,     3,
       4,     5,     6,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,   198,   199,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    -1,   216,   217,    -1,    -1,    -1,    -1,   222,
     223,    14,    15,    16,    17,    18,    19,    -1,    -1,   106,
       0,     1,   235,     3,     4,     5,     6,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   138,    12,    13,   141,    12,    13,    -1,    -1,    -1,
      20,    21,    22,    20,    21,    22,     0,     1,    -1,     3,
       4,     5,     6,    33,   287,   288,    33,    -1,    38,    -1,
     167,    38,    42,    -1,    -1,    42,    -1,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,    -1,   317,     0,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    19,   345,   346,    -1,    -1,    24,   350,    -1,    -1,
      -1,    -1,    30,    12,    13,    -1,    -1,    -1,   235,    -1,
      -1,    20,    21,    22,    -1,     0,     1,    45,     3,     4,
       5,     6,    -1,    51,    33,    -1,    -1,    55,    -1,    38,
      -1,    -1,    -1,    42,   261,   262,   263,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,   407,    83,    84,    85,    -1,    -1,
     287,   288,   289,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,   427,    -1,     0,     1,   106,     3,
       4,     5,     6,    -1,    33,    -1,   313,   314,   315,    38,
     317,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,   141,   341,   342,   343,    -1,   345,   346,
      -1,    19,    -1,   350,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    14,    15,    16,    17,    18,    19,    45,    -1,    -1,
      -1,    -1,    -1,    51,    27,    28,    -1,    55,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
     407,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    27,    28,   235,   106,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
      -1,    -1,    -1,   261,   262,   263,    -1,    -1,    -1,    -1,
     138,    -1,    -1,   141,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,   282,   283,    -1,    -1,    -1,   287,
     288,    31,    32,    -1,    -1,    35,    36,    37,    38,   167,
      -1,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    -1,    -1,    -1,   313,   314,   315,    -1,   317,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      34,    35,    36,   341,   342,   343,    -1,   345,   346,    -1,
      -1,    -1,   350,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,   255,    -1,    -1,
      -1,    -1,    -1,   261,   262,   263,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,   407,
     278,   279,   280,   281,    -1,    -1,    -1,    31,    32,   287,
     288,    35,    36,    37,    38,    39,    40,    41,    -1,   427,
      -1,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    -1,    -1,    -1,    -1,   313,   314,   315,    -1,   317,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,    32,    -1,
      34,    35,    36,   341,   342,   343,    19,   345,   346,    -1,
      -1,    24,   350,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    27,    28,    -1,    51,    31,
      32,    33,    55,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    14,    15,    16,    17,    18,    19,    -1,    -1,   407,
      83,    84,    85,    26,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    35,    36,    24,    -1,    -1,    -1,    -1,   427,
      30,    -1,    -1,   106,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    45,    -1,    -1,    27,    28,
      -1,    51,    31,    32,    33,    55,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,   138,    -1,    -1,   141,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    -1,    14,    15,    16,
      17,    18,    19,     1,   167,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   106,    34,    35,    36,
      37,    38,    20,    21,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,   138,    -1,
      -1,   141,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    29,    -1,    -1,
      19,    -1,   235,    35,    36,    24,    -1,   167,    31,    32,
      -1,    30,    35,    36,    -1,   248,   249,   250,   251,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   261,   262,
     263,    -1,    51,    -1,    -1,    -1,    55,    14,    15,    16,
      17,    18,    19,   276,   277,    -1,    -1,    -1,    -1,    26,
      -1,    70,    -1,    -1,   287,   288,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    83,    84,    85,   300,   301,   302,
     303,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
     313,   314,   315,    -1,   317,    -1,    -1,   106,   248,   249,
      -1,    -1,    -1,    -1,    -1,   328,   329,   330,   331,    -1,
      -1,   261,   262,   263,    -1,    -1,    -1,    -1,   341,   342,
     343,    -1,   345,   346,    -1,   275,    -1,   350,    -1,   138,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   287,   288,    14,
      15,    16,    17,    18,    19,    19,    -1,    -1,    -1,    -1,
     300,   301,    -1,    -1,    -1,    -1,    30,    31,   167,    34,
      35,    36,    -1,   313,   314,   315,    -1,   317,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,   328,   329,
      -1,    -1,    -1,    -1,   407,    14,    15,    16,    17,    18,
      19,   341,   342,   343,    -1,   345,   346,    -1,    -1,    -1,
     350,    -1,    31,    32,   427,    -1,    35,    36,    -1,    83,
      84,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,   235,    -1,    -1,    31,
      32,    -1,   106,    35,    36,    37,    38,    -1,    -1,   248,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,   261,   262,   263,    -1,    -1,   407,    32,    -1,
      34,    35,    36,    -1,   138,   274,    -1,   141,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   427,   287,   288,
      14,    15,    16,    17,    18,    19,    -1,   161,    -1,    -1,
      -1,   300,    26,   167,   168,    14,    15,    16,    17,    18,
      19,    35,    36,    -1,   313,   314,   315,    26,   317,    -1,
      -1,    -1,   186,    -1,    -1,    -1,    35,    36,    -1,   328,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   341,   342,   343,    -1,   345,   346,    -1,    -1,
       1,   350,     3,     4,     5,     6,     7,   221,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    26,   240,    -1,    -1,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,   261,   262,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,   407,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   287,   288,    29,    -1,    -1,   427,   293,
      -1,    35,    36,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,   313,
     314,    -1,    20,    21,    22,    -1,    -1,   321,    26,    -1,
      -1,    -1,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    -1,   341,   342,     1,
      -1,     3,     4,     5,     6,     7,   350,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,
      42,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    32,    26,    34,    35,    36,    37,
      38,    39,    40,    41,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    14,    15,    16,    17,    18,
      19,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    34,    35,    36,    37,    38,
      -1,    26,    -1,    14,    15,    16,    17,    18,    19,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    34,    35,    36,    37,    38,    -1,    26,
      -1,    14,    15,    16,    17,    18,    19,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    34,    35,    36,    37,    38,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    26,    14,    15,    16,    17,
      18,    19,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    34,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
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
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    37,    38,    31,    32,    -1,
      -1,    35,    36,    37,    38,    14,    15,    16,    17,    18,
      19,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    35,    36,    37,    38,
      32,    -1,    34,    35,    36,    37,    38,    14,    15,    16,
      17,    18,    19,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    32,    -1,    34,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    32,    26,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    35,    36,    37,
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
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    44,    45,    46,    47,
      48,    51,    73,    26,    30,    54,     0,    46,    26,    27,
      26,    54,    20,    31,    55,    12,    13,    20,    21,    22,
      30,    33,    38,    42,    49,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    28,    33,     1,     7,     9,
      10,    11,    26,    47,    54,    56,    57,    58,    60,    61,
      62,    73,    69,    71,    69,    49,    50,    62,    69,    69,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    28,    33,    27,    29,    62,     1,     3,
      34,    52,    53,    73,    26,    33,    33,    54,    62,    26,
      31,    57,    26,    26,    20,    31,    32,    34,    64,    65,
      66,    66,    67,    67,    67,    67,    68,    68,    69,    69,
      69,    62,    34,    62,    72,    63,    29,    34,    34,    32,
      34,    20,    62,    62,     9,    31,    49,    29,    32,    34,
      53,    28,    34,    34,    33,    62,    29,    62,    54,    54,
      62,    29,    59,    34,     8,    26,    54,    30,    20,    21,
      22,    33,    12,    13,    20,    21,    22,    30,    33,    38,
      42,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    12,    13,    20,    21,    22,    33,    38,    42,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    12,    13,
      20,    21,    22,    33,    38,    42,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    30,    12,    13,    20,    21,
      22,    33,    38,    42,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    30,    31,    55,    62,    20,    21,    22,
      33,    69,    71,    69,    50,    62,    69,    69,    19,    18,
      16,    17,    14,    15,    35,    36,    37,    38,    39,    40,
      41,    28,    33,    27,    20,    21,    22,    33,    69,    71,
      69,    62,    69,    69,    19,    18,    16,    17,    14,    15,
      35,    36,    37,    38,    39,    40,    41,    28,    33,    27,
      20,    21,    22,    33,    69,    71,    69,    62,    69,    69,
      19,    18,    16,    17,    14,    15,    35,    36,    37,    38,
      39,    40,    41,    28,    33,    27,    31,    55,    20,    21,
      22,    33,    69,    71,    69,    62,    69,    69,    19,    18,
      16,    17,    14,    15,    35,    36,    37,    38,    39,    40,
      41,    28,    33,    27,    31,    55,    56,    34,    62,    31,
      32,    34,    64,    65,    66,    66,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    62,    34,    72,    63,    62,
      34,    64,    65,    66,    66,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    62,    34,    72,    63,    62,    34,
      64,    65,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    62,    34,    72,    63,    56,    62,    34,
      64,    65,    66,    66,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    62,    34,    72,    63,    56,    31,    34,
      31,    29,    34,    34,    29,    34,    34,    29,    34,    31,
      34,    29,    34,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    53,    53,    54,
      55,    54,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    59,    58,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    73,    73,    73,    73
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
#line 55 "language.y"
    { root = (yyvsp[0].node); }
#line 2625 "src/parser.c"
    break;

  case 4:
#line 60 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2631 "src/parser.c"
    break;

  case 6:
#line 65 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-definition", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); enclose((yyvsp[0].node), add_symbol_fun((yyval.node))); }
#line 2637 "src/parser.c"
    break;

  case 8:
#line 67 "language.y"
    { }
#line 2643 "src/parser.c"
    break;

  case 9:
#line 68 "language.y"
    { }
#line 2649 "src/parser.c"
    break;

  case 11:
#line 73 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2655 "src/parser.c"
    break;

  case 12:
#line 77 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); assign((yyval.node)); add_symbol_var((yyval.node)); }
#line 2661 "src/parser.c"
    break;

  case 13:
#line 78 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2667 "src/parser.c"
    break;

  case 14:
#line 79 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2673 "src/parser.c"
    break;

  case 16:
#line 84 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2679 "src/parser.c"
    break;

  case 17:
#line 85 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2685 "src/parser.c"
    break;

  case 19:
#line 90 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2691 "src/parser.c"
    break;

  case 20:
#line 94 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2697 "src/parser.c"
    break;

  case 21:
#line 95 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-3].node), (yyvsp[-2].node),     NULL)); assign((yyval.node)); }
#line 2703 "src/parser.c"
    break;

  case 22:
#line 96 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node),     NULL)); assign((yyval.node)); }
#line 2709 "src/parser.c"
    break;

  case 23:
#line 97 "language.y"
    { }
#line 2715 "src/parser.c"
    break;

  case 25:
#line 102 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2721 "src/parser.c"
    break;

  case 26:
#line 106 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); /*assign($$);*/ }
#line 2727 "src/parser.c"
    break;

  case 27:
#line 107 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); /*assign($$);*/ }
#line 2733 "src/parser.c"
    break;

  case 28:
#line 108 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); /*assign($$);*/ }
#line 2739 "src/parser.c"
    break;

  case 29:
#line 112 "language.y"
    { }
#line 2745 "src/parser.c"
    break;

  case 30:
#line 113 "language.y"
    {
				Table * t =  ts_push(context_stack, table_init(16));
				printf("enter scope (new context %p)\n", (void*) t);
	}
#line 2754 "src/parser.c"
    break;

  case 31:
#line 116 "language.y"
    {
				(yyval.node) = (yyvsp[-1].node);
				printf("exit scope\n");
	}
#line 2763 "src/parser.c"
    break;

  case 33:
#line 124 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2769 "src/parser.c"
    break;

  case 34:
#line 128 "language.y"
    { }
#line 2775 "src/parser.c"
    break;

  case 39:
#line 133 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = (yyvsp[0].node); }
#line 2781 "src/parser.c"
    break;

  case 41:
#line 135 "language.y"
    { }
#line 2787 "src/parser.c"
    break;

  case 42:
#line 139 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL)); assign((yyval.node)); }
#line 2793 "src/parser.c"
    break;

  case 43:
#line 140 "language.y"
    { enclose((yyvsp[0].node),NULL); }
#line 2799 "src/parser.c"
    break;

  case 44:
#line 140 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else", (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2805 "src/parser.c"
    break;

  case 45:
#line 144 "language.y"
    { enclose((yyvsp[0].node),NULL); (yyval.node) = nl_push(node_list, node_init(WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2811 "src/parser.c"
    break;

  case 46:
#line 145 "language.y"
    { enclose((yyvsp[-5].node),NULL); (yyval.node) = nl_push(node_list, node_init(DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL)); assign((yyval.node)); }
#line 2817 "src/parser.c"
    break;

  case 47:
#line 149 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return",     NULL)); assign((yyval.node)); }
#line 2823 "src/parser.c"
    break;

  case 48:
#line 150 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2829 "src/parser.c"
    break;

  case 50:
#line 155 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2835 "src/parser.c"
    break;

  case 52:
#line 160 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2841 "src/parser.c"
    break;

  case 54:
#line 165 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2847 "src/parser.c"
    break;

  case 56:
#line 170 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2853 "src/parser.c"
    break;

  case 57:
#line 171 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2859 "src/parser.c"
    break;

  case 59:
#line 176 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2865 "src/parser.c"
    break;

  case 60:
#line 177 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2871 "src/parser.c"
    break;

  case 61:
#line 178 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2877 "src/parser.c"
    break;

  case 62:
#line 179 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2883 "src/parser.c"
    break;

  case 64:
#line 184 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2889 "src/parser.c"
    break;

  case 65:
#line 185 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2895 "src/parser.c"
    break;

  case 67:
#line 190 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2901 "src/parser.c"
    break;

  case 68:
#line 191 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2907 "src/parser.c"
    break;

  case 69:
#line 192 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2913 "src/parser.c"
    break;

  case 71:
#line 197 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('!'   , "'!'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2919 "src/parser.c"
    break;

  case 72:
#line 198 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-'   , "'-'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2925 "src/parser.c"
    break;

  case 73:
#line 199 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "'++'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2931 "src/parser.c"
    break;

  case 74:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "'--'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2937 "src/parser.c"
    break;

  case 76:
#line 205 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('V'   , "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2943 "src/parser.c"
    break;

  case 77:
#line 206 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('C'   , "function-call", (yyvsp[-2].node)    , NULL)); assign((yyval.node)); }
#line 2949 "src/parser.c"
    break;

  case 78:
#line 207 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('C'   , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2955 "src/parser.c"
    break;

  case 82:
#line 214 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2961 "src/parser.c"
    break;

  case 84:
#line 220 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('L', "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2967 "src/parser.c"
    break;


#line 2971 "src/parser.c"

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
#line 230 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

