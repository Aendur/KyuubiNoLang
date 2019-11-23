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
#line 78 "src/language.y"

#include "actions.h"
#include "node-list.h"
#include "arg-list.h"
#include "misc.h"

#include <stdlib.h>
#include <stdio.h>

int yylex (void);
void free_label(const char * str);
extern Node * root;
//extern Nodelist * node_list;


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
#define YYLAST   7413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
       2,     2,     2,    67,     2,     2,     2,    66,     2,     2,
      58,    59,    64,    62,    57,    63,     2,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      60,    54,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   105,   106,   107,   108,   112,   113,
     114,   115,   116,   117,   121,   122,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   136,
     137,   141,   142,   146,   147,   147,   151,   152,   156,   157,
     158,   159,   160,   161,   162,   163,   167,   168,   172,   173,
     177,   178,   182,   183,   189,   190,   194,   195,   199,   200,
     201,   205,   206,   207,   208,   209,   213,   214,   215,   219,
     220,   221,   222,   226,   227,   228,   229,   230,   234,   235,
     236,   237,   241,   242,   243,   244,   245,   246,   247,   251,
     252,   256,   257,   258,   259
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
  "DECLARATION", "INITIALIZATION", "GENERIC_NODE", "';'", "'['", "']'",
  "'='", "'{'", "'}'", "','", "'('", "')'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "$accept", "declaration_list", "declaration",
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
     305,    59,    91,    93,    61,   123,   125,    44,    40,    41,
      60,    62,    43,    45,    42,    47,    37,    33
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
     721,   -24,    17,    59,    60,   150,   826,   879,    72,   936,
     156,   959,    70,   978,  -246,  1173,  1275,    12,  1344,  3736,
     398,  1742,    36,   121,   122,  4365,  4401,  4437,  4473,  4509,
     111,   176,   152,   229,  1781,  1781,  1137,  1804,  1781,  1781,
     166,  1231,  1300,  1573,  2573,  2720,   186,   197,   -13,    26,
     546,  2260,   354,  6211,  6247,  4545,  4581,   244,   222,   233,
     240,   236,    -2,   293,   -40,    46,   362,  2788,  1867,    34,
    1804,  1804,   366,   355,  6254,  6290,  6297,   361,  6333,  6340,
    2855,  1368,  2876,  2941,  2962,  1781,  1781,  1781,  1781,  1781,
    1781,  1781,  1781,  1781,  1781,  1781,  1781,  1781,  1781,   262,
       3,   372,  1482,   358,  3027,   549,   382,     8,   399,  4617,
      56,    79,   385,   396,   404,  4653,   340,   581,  3126,  3212,
     604,   699,  1360,  2297,  6376,  6383,  6419,  6426,  6462,   116,
     416,  1892,  3048,  3736,   433,   118,  3113,   451,  4689,  1968,
    4725,   446,   454,  1804,   -27,   377,  3736,   461,  3134,  1540,
    3736,   473,   149,   231,   465,  3199,   471,   494,   537,  3220,
    1548,  1617,  3285,  1641,   454,   505,   515,   438,  1663,  1837,
    3306,  3371,  3392,  2420,  2370,  4739,  4775,  4789,  4825,  1987,
    1987,  1804,  1987,  1987,   -20,   437,   478,   191,  1136,  6476,
    6499,  4839,  4875,  3457,  3824,  6515,  6522,  6558,  6565,  6601,
    1804,  6608,  2490,  4888,  4924,  4937,  4973,  4986,  2082,  2082,
    1804,  2082,  2082,     0,    63,    73,   224,  2045,  4379,  4415,
    5022,  5035,   732,  3837,  3873,  3886,  3922,  3935,  2105,  2105,
    1804,  2105,  2105,    43,   258,   -25,   840,   502,  5071,  5081,
    3971,  3984,  2611,   290,   639,  1047,  4020,  4033,  2123,  2123,
    1804,  2123,  2123,   144,   179,   114,  2712,  1668,  5117,  5128,
    4069,  4082,  3478,  3543,  3736,  1867,   429,  4118,  6622,  6645,
    6659,  6682,  6696,  1804,  6719,  6733,  6756,  6770,   508,  6793,
    6807,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,
    1987,  1987,  1987,  1987,  1987,   566,  3736,  1867,   564,   527,
    1867,   801,  4133,  4451,  4487,  4523,  4559,  4595,  1804,  4631,
    4667,  4703,  6440,   528,  6816,  6830,  2082,  2082,  2082,  2082,
    2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,  2082,
    1867,   894,  3773,  5164,  5174,  5184,  5220,  5230,  1804,  5240,
    5276,  5286,  5296,   535,  5332,  5342,  2105,  2105,  2105,  2105,
    2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,  2105,
    1867,   913,  3788,  5378,  5389,  5425,  5436,  5472,  1804,  5483,
    5519,  5530,  5566,   543,  5577,  5613,  2123,  2123,  2123,  2123,
    2123,  2123,  2123,  2123,  2123,  2123,  2123,  2123,  2123,  2123,
     835,  3736,  3564,   550,  5627,   261,  1867,   985,   547,  5663,
     462,   491,   981,  2480,  2144,  2787,  7305,  7311,  6852,  6866,
    6889,  6903,  6926,    82,  3629,   552,  6942,   286,  6949,   554,
    5676,   325,  1867,  1320,   559,  5712,    83,   169,  1475,  3299,
    2430,  4127,  7317,  7350,  6963,  6985,  6999,  7007,  7021,    37,
     560,  4169,   335,  1867,  1505,   561,  4182,   400,   162,  1825,
    2869,  2253,  7210,  7217,  7250,  5722,  5758,  5768,  5778,  5814,
     159,   568,  4218,   401,  1867,  1593,   569,  4231,   391,   365,
    2954,  3040,  2189,  7258,  7266,  7299,  5825,  5861,  5872,  5908,
    5919,   397,  3650,  3715,  5955,  5969,   576,  7043,   443,  7057,
     602,  7080,  7101,  6005,  6018,   577,  7094,   448,  7137,  4267,
    4280,   606,  6054,   539,  6064,  4316,  4329,   609,  6100,   542,
    6111,  1210,  7151,  7174,  7159,  7197,  6147,  6157,  6193,  6204
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
    -246,  -246,   628,   104,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,   558,     4,  -168,  -130,   -18,  -246,  -246,
    -246,  2389,  2237,  2053,  1901,  1645,  1389,  1116,   738,   -19,
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
      55,   191,    55,   148,   264,    13,    10,   -91,   348,   349,
     -56,   -56,    10,   130,    55,   281,   159,   105,   220,   106,
     162,   395,    85,    55,    82,   296,   -91,    11,    66,   157,
     158,    12,   -56,   -52,   -56,   316,    72,    61,   -52,    62,
       3,     4,     5,   222,   223,   224,   225,   226,   227,   191,
     240,   220,   220,   417,   228,   229,   421,   103,   131,   -52,
     137,   -54,    86,    -8,    20,   -31,    21,   -31,   -92,   -93,
      22,   -34,   316,   -34,   -34,   -34,   -34,   -54,   346,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   442,   -34,   -34,   -34,
     -34,   -34,   230,   109,   391,    63,   -53,   231,   -54,   317,
     -52,   232,   -52,   -29,     8,   -29,   318,   319,   -56,   -56,
       8,    66,   260,   -89,    55,   -89,   463,   281,   -55,   317,
     240,   -34,   -54,    16,   220,   -34,    18,    55,   -34,    55,
      82,    55,   -56,   -34,   392,   -53,   139,   -34,   140,   260,
      55,    82,   -55,    55,    82,   154,   155,   378,   379,   -56,
     -56,    85,   488,   -82,   -82,   -82,   -82,   -82,   -82,   -94,
     275,   275,   220,   275,   275,    17,   414,   -53,   170,    70,
     -56,   -56,    67,   -82,    68,   -30,   -82,   -30,   497,   376,
      69,   220,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   310,
     310,   220,   310,   310,   346,   348,   349,   -57,   -57,   503,
     -52,   -52,   318,   319,   -57,   -57,   -32,   193,   -32,   340,
     340,   220,   340,   340,   -54,   377,   -53,    80,   -53,   -57,
     509,   -57,   285,   286,   -58,   -58,   -58,   -58,   -57,   370,
     370,   220,   370,   370,    71,   -54,   -54,    83,    24,    25,
      26,    27,    28,    29,   -58,    55,   191,   240,    84,    34,
      35,   287,   288,    99,   220,   320,   321,   -58,   -58,   -58,
     -58,   482,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   100,    55,   191,   240,
     -50,   191,   240,   -58,   322,   323,   101,    37,   -90,   220,
     -90,   -10,    38,   -54,   347,   102,    39,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   191,   240,    -8,    20,   -54,    21,   -54,   139,   220,
     485,   -83,   -83,   -83,   -83,   -83,   -83,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   191,   240,   139,   -83,   492,   -83,   -83,   104,   220,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   107,    55,    55,    82,   -55,    86,   191,   240,    56,
     192,    56,   139,   114,   494,   -61,   -61,   -61,   -61,   -61,
     -61,   -55,   139,    56,   500,    55,    82,   221,   378,   379,
     -57,   -57,    56,   191,   240,   -61,   -51,   173,   174,   175,
     176,   177,   178,   132,   -61,   -61,    93,    94,   179,   180,
     115,   -57,   -57,    -9,   191,   240,   -55,   377,   192,   241,
     221,   221,   376,   -14,   -14,   -55,   347,   136,   222,   223,
     224,   225,   226,   227,   141,   191,   240,   -55,   -55,   228,
     229,    58,   138,   -53,   -53,   142,   181,   -55,   139,   -55,
     506,   182,   143,    55,    82,   183,   -46,   -13,   -46,   -46,
     -46,   -46,   -54,   282,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   164,   -46,   -46,   -46,   -46,   -46,   230,   394,   149,
     -54,   261,   231,    56,   -15,   -15,   232,   -55,   282,   241,
     139,   262,   513,   221,   152,   139,    56,   515,    56,   172,
      56,   283,   284,   -56,   -56,   -55,   -46,   160,   261,    56,
     -46,   -46,    56,   -46,   283,   284,   -57,   -57,   -46,   163,
     165,   -56,   -46,   -61,   -61,   -61,   -61,   -61,   -61,   276,
     276,   221,   276,   276,   -57,   -11,   242,   243,   244,   245,
     246,   247,     2,     3,     4,     5,   171,   248,   249,   -61,
     221,   -61,   -61,   -61,   354,   355,   -12,   399,   311,   311,
     221,   311,   311,   222,   223,   224,   225,   226,   227,    87,
      88,   -56,   -56,   -33,   228,   229,   418,   425,   341,   341,
     221,   341,   341,   166,   446,   250,   139,   -56,   517,   139,
     251,   519,   467,   484,   252,   491,   489,   493,   371,   371,
     221,   371,   371,   499,    87,    88,   -57,   -57,   498,   -35,
     504,   505,   230,   416,    56,   192,   241,   231,   510,   512,
     514,   232,   -57,   221,    15,   -64,   -64,   -64,   -64,   -64,
     -64,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   -64,    56,   192,   241,   516,
     192,   241,   518,   135,   -64,   -64,    93,    94,   221,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     192,   241,     0,   -84,     0,   -84,   -84,     0,   221,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     192,   241,     1,     0,     2,     3,     4,     5,   221,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     -65,    56,    56,     0,     0,     0,   192,   241,   190,   -65,
     -65,    93,    94,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,    74,    76,    56,   219,    78,    79,     0,     0,
       0,     0,   192,   241,   330,     0,   -82,     0,     0,   -82,
     331,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,   192,   241,     0,   190,   239,   219,   219,
     222,   223,   224,   225,   226,   227,     0,     0,     0,     0,
       0,   228,   229,     0,   192,   241,    14,     1,     0,     2,
       3,     4,     5,   126,   127,   128,   -33,     0,   -33,   -33,
     -33,   -33,    56,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   230,
     420,     0,     0,     0,   231,     0,     0,     0,   232,   259,
       0,   350,   351,   -58,   -58,   -58,   -58,   239,     0,    -2,
      -2,   219,    -2,    -2,    -2,    -2,   -33,     0,     0,     0,
     -33,   -33,     0,   -33,     0,     0,   259,   -58,   -33,   -58,
     352,   353,   -33,   222,   223,   224,   225,   226,   227,     0,
       0,     0,     0,     0,   228,   229,     0,   274,   277,   219,
     279,   280,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,   228,   229,     0,    -4,    -4,   219,    -4,
      -4,    -4,    -4,     0,     0,     0,   309,   312,   219,   314,
     315,     0,   230,   441,     0,     0,     0,   231,     0,    -6,
      -6,   232,    -6,    -6,    -6,    -6,   339,   342,   219,   344,
     345,   230,   462,     0,     0,     0,   231,     0,    -7,    -7,
     232,    -7,    -7,    -7,    -7,     0,   369,   372,   219,   374,
     375,     0,     0,     0,   222,   223,   224,   225,   226,   227,
       0,     0,     0,   190,   239,   228,   229,     0,     0,     0,
       0,   219,   285,   286,   -59,   -59,   -59,   -59,     0,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   410,
     411,   412,   190,     0,   -59,   190,   239,     0,   190,   239,
       0,   287,   288,   230,   487,     0,   219,     0,   231,     0,
       0,     0,   232,     0,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   436,   437,   438,   219,   190,   239,
       0,     0,     0,     0,     0,     0,   219,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   457,   458,   459,   239,   190,   239,
       0,   -85,     0,   -85,   -85,     0,   219,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   478,   479,   480,   259,     0,     0,
       0,     0,     0,     0,   190,   239,   189,     0,   -38,     0,
     -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   218,   -38,   -38,   -38,   -38,   -38,     0,
     190,   239,     0,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,    -3,    -3,     0,    -3,    -3,    -3,    -3,
       0,   190,   239,     0,   189,   238,   218,   218,   -38,   -61,
       0,     0,   -38,   -38,     0,   -38,   -61,   -61,   289,   290,
     -38,     0,   190,   239,   -38,     0,     0,     0,     0,   124,
     125,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   258,   -43,   -43,
     -43,   -43,   -43,     0,     0,   238,     0,     0,     0,   218,
       0,   -35,     0,     0,     0,   -35,   -35,     0,   -35,     0,
       0,     0,     0,   -35,   258,    -5,    -5,   -35,    -5,    -5,
      -5,    -5,   -43,     0,     0,     0,   -43,   -43,     0,   -43,
       0,     0,     0,     0,   -43,     0,     0,   218,   -43,     0,
       0,    23,     0,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,   218,    31,    32,    33,
      34,    35,     0,     0,     0,     0,   218,     0,     0,   222,
     223,   224,   225,   226,   227,     0,     0,     0,     0,     0,
     228,   229,     0,     0,   -33,   -33,   218,   -33,   -33,   -33,
     -33,    36,     0,     0,     0,   172,    81,     0,    37,     0,
       0,     0,     0,    38,     0,     0,   218,    39,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,     0,   230,   496,
       0,   189,   238,   231,     0,     0,     0,   232,     0,   218,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   189,   189,   189,
     189,   189,   189,   189,   189,   408,   409,     0,     0,   188,
     189,   -62,     0,   189,   238,     0,   189,   238,     0,     0,
     -62,   -62,    93,    94,   218,     0,   217,     0,     0,     0,
       0,     0,   218,   218,   218,   218,   218,   218,   218,   218,
     434,   435,     0,     0,     0,   218,   189,   238,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   188,   237,   217,
     217,     0,   238,   238,   238,   238,   238,   238,   238,   238,
     455,   456,     0,     0,     0,   238,   189,   238,   120,   121,
     122,   123,   -28,   -28,   218,   -28,   -28,   -28,   -28,     0,
       0,     0,   258,   258,   258,   258,   258,   258,   258,   258,
     476,   477,     0,     0,     0,   258,   320,   321,   -59,   -59,
     -59,   -59,   189,   238,   222,   223,   224,   225,   226,   227,
     257,     0,     0,     0,     0,   228,   229,     0,   237,     0,
       0,     0,   217,     0,   -59,   322,   323,     0,   189,   238,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   257,   -25,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,     0,   189,
     238,     0,     0,   230,   502,     0,     0,     0,   231,     0,
     217,     0,   232,     0,   -36,     0,   -36,   -36,   -36,   -36,
     189,   238,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   217,
     -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,   217,
       0,     0,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,   228,   229,     0,     0,   -21,   -21,   217,
     -21,   -21,   -21,   -21,   -36,     0,     0,     0,   -36,   -36,
       0,   -36,     0,     0,     0,     0,   -36,     0,     0,   217,
     -36,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
       0,   230,   508,     0,   188,   237,   231,     0,     0,     0,
     232,     0,   217,   -19,   -19,   187,   -19,   -19,   -19,   -19,
     188,   188,   188,   188,   404,   405,   406,   407,     0,     0,
       0,     0,   216,   188,     0,     0,   188,   237,     0,   188,
     237,     0,     0,     0,     0,     0,     0,   217,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   217,   217,   217,   217,   430,
     431,   432,   433,   187,   236,   216,   216,     0,   217,   188,
     237,     0,     0,     0,   -61,   -61,     0,   217,   -61,   -61,
     384,   385,   118,   119,     0,   237,   237,   237,   237,   451,
     452,   453,   454,     0,     0,     0,     0,     0,   237,   188,
     237,    24,    25,    26,    27,    28,    29,   217,     0,     0,
       0,     0,    34,    35,     0,   257,   257,   257,   257,   472,
     473,   474,   475,     0,     0,     0,   256,     0,   257,     0,
       0,     0,     0,     0,   236,   188,   237,     0,   216,     0,
     194,   195,   196,   197,   198,   199,     0,     0,     0,     0,
      37,    34,    35,   256,     0,    38,     0,     0,     0,    39,
       0,   188,   237,   202,   203,   204,   205,   206,   207,     0,
       0,     0,     0,     0,   208,   209,   216,     0,     0,     0,
       0,     0,   188,   237,     0,     0,     0,   -17,   -17,   200,
     -17,   -17,   -17,   -17,    38,   216,     0,     0,    39,     0,
       0,     0,     0,   188,   237,   216,   350,   351,   -59,   -59,
     -59,   -59,   210,     0,     0,     0,     0,   211,     0,     0,
       0,   212,     0,     0,     0,   216,   173,   174,   175,   176,
     177,   178,   -59,     0,   -59,   352,   353,   179,   180,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,   242,   243,   244,   245,   246,   247,     0,     0,     0,
     187,   236,   248,   249,     0,     0,     0,     0,   216,     0,
       0,   186,     0,     0,     0,   181,   187,   187,   402,   403,
     182,     0,     0,     0,   183,     0,     0,     0,   215,   187,
       0,     0,   187,   236,     0,   187,   236,     0,     0,     0,
     250,     0,     0,   216,     0,   251,     0,     0,     0,   252,
       0,   216,   216,   428,   429,     0,     0,     0,     0,   186,
     235,   215,   215,     0,   216,   187,   236,   222,   223,   224,
     225,   226,   227,   216,     0,     0,     0,   117,   228,   229,
       0,   236,   236,   449,   450,     0,   267,   268,   269,   270,
     271,   272,     0,     0,   236,   187,   236,   179,   180,     0,
       0,     0,     0,   216,     0,     0,     0,     0,     0,     0,
       0,   256,   256,   470,   471,     0,   230,     0,     0,     0,
       0,   231,   255,     0,   256,   232,     0,     0,     0,     0,
     235,   187,   236,     0,   215,   273,     0,     0,     0,     0,
     182,     0,     0,     0,   183,     0,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,   187,   236,     0,
       0,     0,     0,   185,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   215,     0,     0,     0,     0,     0,   187,   236,
     214,   302,   303,   304,   305,   306,   307,     0,     0,     0,
       0,   215,   208,   209,   -61,   -61,   -61,   324,   325,   187,
     236,   215,     0,     0,   332,   333,   334,   335,   336,   337,
       0,   185,   234,   214,   214,   228,   229,     0,     0,     0,
       0,   215,   362,   363,   364,   365,   366,   367,   116,     0,
     308,     0,     0,   248,   249,   211,     0,     0,     0,   212,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,   186,   235,   231,     0,
       0,     0,   232,     0,   215,   -64,   -64,   -64,   -64,   -64,
     -64,   368,   186,   401,   254,     0,   251,     0,     0,     0,
     252,     0,   234,     0,     0,   186,   214,   -64,   186,   235,
       0,   186,   235,     0,   -64,   -64,   289,   290,     0,   215,
       0,   254,     0,     0,     0,     0,     0,   215,   427,     0,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     215,   186,   235,     0,   214,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     0,   -64,   -64,   235,   448,   -64,
     -64,   384,   385,   214,     0,     0,     0,   184,     0,     0,
     235,   186,   235,   214,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,   213,     0,     0,   255,   469,     0,
       0,     0,     0,   214,   -64,   -64,   -64,   -64,   -64,   -64,
     255,    89,    90,   -58,   -58,   -58,   -58,   186,   235,     0,
       0,     0,     0,   214,     0,   184,   233,   213,   213,     0,
     -64,   -58,   -64,   -64,   -64,   354,   355,     0,   185,   234,
      91,    92,     0,   186,   235,     0,   214,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   400,   129,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   235,     0,   185,   -63,     0,
     185,   234,     0,   185,   234,     0,     0,   -63,   -63,    93,
      94,   214,     0,     0,     0,   186,   235,     0,   253,   426,
       0,     0,     0,     0,     0,     0,   233,     0,     0,     0,
     213,     0,   214,   185,   234,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,   253,     0,     0,     0,   447,
       0,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,    59,
      60,     0,   234,   185,   234,     0,     0,     0,   213,     0,
       0,   214,    73,   -83,   -83,     0,    77,     0,     0,   468,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   213,     0,     0,
       0,     0,   254,     0,     0,     0,     0,   213,     0,   185,
     234,   -82,   -82,   -82,   -82,   -82,   -82,   108,   110,   112,
     113,   -64,   -64,   -64,   -64,   -64,   -64,   213,     0,     0,
       0,     0,   265,   -82,   -82,   185,   234,     0,   266,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   213,     0,   -64,
     -64,   -64,   324,   325,     0,     0,   185,   234,     0,     0,
       0,     0,   184,   233,     0,     0,     0,     0,     0,     0,
     213,   285,   286,   -60,   -60,   -60,   -60,   185,   234,     0,
     145,   -82,   -82,   -82,   -82,   -82,   -82,     0,   153,     0,
       0,   413,   156,   -60,   184,   233,     0,   184,   233,     0,
     287,   288,   300,     0,   -82,   213,     0,   167,   301,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   439,   184,   233,     0,
     278,     0,     0,     0,   -41,   213,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   299,
     -41,   -41,   -41,   -41,   -41,     0,   460,   184,   233,   313,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,   -41,     0,   481,     0,   -41,   -41,
       0,   -41,     0,   184,   233,     0,   -41,     0,     0,   373,
     -41,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   393,   110,     0,     0,     0,   184,
     233,     0,   398,   360,     0,   -82,     0,   -82,   -82,   361,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
     184,   233,     0,     0,     0,     0,   415,   110,     0,   419,
     110,     0,     0,     0,     0,     0,     0,   424,     0,     0,
       0,   184,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   440,
     110,   -42,     0,   -42,   -42,   -42,   -42,   445,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,   380,   381,   -58,   -58,   -58,   -58,   461,
     110,     0,     0,     0,     0,     0,     0,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   -58,
       0,   -42,   382,   383,     0,   -42,   -42,     0,   -42,     0,
       0,     0,     0,   -42,     0,   486,   110,   -42,     0,   -45,
       0,   -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   495,   110,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,     0,
       0,     0,   501,   110,     0,     0,     0,     0,     0,   -45,
     -65,     0,     0,   -45,   -45,     0,   -45,   -65,   -65,   289,
     290,   -45,     0,   507,   110,   -45,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -37,     0,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
     350,   351,   -60,   -60,   -60,   -60,   -39,     0,     0,     0,
     -39,   -39,     0,   -39,     0,     0,     0,     0,   -39,     0,
       0,     0,   -39,     0,     0,     0,   -60,   -37,   -60,   352,
     353,   -37,   -37,     0,   -37,     0,     0,     0,     0,   -37,
       0,     0,   -44,   -37,   -44,   -44,   -44,   -44,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -40,     0,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,   380,   381,   -59,   -59,   -59,
     -59,     0,   -44,     0,     0,     0,   -44,   -44,     0,   -44,
       0,     0,     0,     0,   -44,     0,     0,     0,   -44,     0,
     -59,   -59,     0,   -40,   382,   383,     0,   -40,   -40,     0,
     -40,     0,     0,     0,     0,   -40,     0,     0,   -20,   -40,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
       0,   380,   381,   -60,   -60,   -60,   -60,     0,   -20,     0,
       0,     0,   -20,   -26,     0,   -20,     0,     0,     0,     0,
     -20,     0,     0,     0,   -20,     0,   -60,   -60,     0,   -18,
     382,   383,     0,   -18,   -24,     0,   -18,     0,     0,     0,
       0,   -18,     0,     0,   -16,   -18,   -16,   -16,   -16,   -16,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,   -16,   -16,   -16,    23,     0,     2,     3,     4,
       5,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,     0,    89,    90,   -59,
     -59,   -59,   -59,     0,   -16,     0,     0,     0,   -16,   -22,
       0,   -16,     0,     0,     0,     0,   -16,   -59,     0,     0,
     -16,     0,     0,     0,     0,    36,    91,    92,     0,   172,
     161,     0,    37,     0,     0,     0,     0,    38,     0,     0,
     -48,    39,   -48,   -48,   -48,   -48,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,    23,     0,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,    89,    90,   -60,   -60,   -60,   -60,     0,
     -48,     0,     0,     0,   -48,   -48,     0,   -48,     0,     0,
       0,     0,   -48,   -60,     0,     0,   -48,     0,     0,     0,
       0,    36,    91,    92,     0,   172,   168,     0,    37,     0,
       0,     0,     0,    38,     0,     0,    23,    39,     2,     3,
       4,     5,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,   -47,     0,   -47,
     -47,   -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
     320,   321,   -60,   -60,   -60,   -60,    36,     0,     0,     0,
     172,   169,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,    39,     0,     0,     0,     0,   -47,   -60,   322,
     323,   -47,   -47,     0,   -47,     0,     0,     0,     0,   -47,
       0,     0,   -49,   -47,   -49,   -49,   -49,   -49,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,     0,     0,     0,   -49,   -49,     0,   -49,
       0,     0,     0,     0,   -49,     0,     0,     0,   -49,     0,
       0,     0,     0,   -34,     0,     0,     0,   -34,   263,     0,
     -34,     0,     0,     0,     0,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,     0,
       0,     0,   -34,   295,     0,   -34,     0,     0,     0,     0,
     -34,     0,     0,     0,   -34,     0,     0,     0,     0,   -34,
       0,     0,     0,   -34,   390,     0,   -34,     0,     0,     0,
       0,   -34,     0,     0,   -33,   -34,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,    23,     0,     2,     3,     4,
       5,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,   -33,     0,     0,     0,     0,   -33,     0,     0,     0,
     -33,     0,     0,     0,     0,    36,     0,     0,     0,   172,
     483,     0,    37,     0,     0,     0,     0,    38,     0,     0,
      23,    39,     2,     3,     4,     5,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,    23,     0,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,   172,   490,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,    39,     0,     0,     0,
       0,    36,     0,     0,     0,   172,   511,     0,    37,     0,
       0,     0,     0,    38,     0,     0,   -35,    39,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,    23,     0,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,     0,     0,     0,
     -35,   -35,     0,   -35,     0,     0,     0,     0,   -35,     0,
       0,     0,   -35,     0,     0,     0,     0,    36,     0,     0,
       0,   172,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,    39,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   443,     0,     0,     0,     0,
     -82,   444,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     464,     0,     0,     0,   -82,   -82,   465,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -82,   297,     0,     0,     0,
       0,     0,   298,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,   -84,     0,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,   -86,     0,     0,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,     0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   359,     0,     0,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -78,     0,
       0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,   -86,     0,   -86,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,
     -87,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,   389,     0,   -73,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -78,     0,   -78,   -78,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -82,   -82,   -82,   -82,   -82,   -82,
     396,   -82,     0,     0,     0,     0,   397,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   422,   -65,   -65,   -65,   324,
     325,   423,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -80,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -88,     0,     0,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -80,     0,   -80,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -88,     0,   -88,   -88,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -79,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -81,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -79,     0,   -79,   -79,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -81,     0,   -81,   -81,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -83,     0,     0,   -83,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -66,   -66,
     -66,   -66,   -66,   326,   327,   328,   -69,   -69,   -69,   -69,
     -69,   -69,   -84,     0,     0,   -84,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
       0,   -85,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,   -86,     0,     0,   -86,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,   -87,   -87,   -87,   -87,   -87,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
     -87,     0,     0,   -87,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -73,   -73,   -73,   -73,
     -73,   -73,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,   -73,     0,     0,    98,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -78,     0,     0,   -78,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,
     -80,   -80,   -80,   -80,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -76,   -76,   -76,   -76,   -76,   -76,   -80,     0,
       0,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -73,   -73,
     -73,   -73,   -73,   -73,   -88,     0,     0,   -88,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -79,   -79,   -79,   -79,   -79,   -79,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,
     -79,     0,     0,   -79,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,   -81,
     -81,   -81,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -84,   -84,   -84,   -84,   -84,   -84,   -81,     0,     0,   -81,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -84,   -84,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -85,   -85,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -87,   -87,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -73,   294,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -78,   -78,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,   329,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -78,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   356,   357,   358,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,     0,     0,   -66,   -66,   -66,
     -66,   386,   387,   388,   -69,   -69,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -75,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,   -74,
     -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -80,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,   -88,   -88,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   356,   357,   358,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   356,   357,   358,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -67,   -67,     0,     0,   -67,   -67,   -67,   -67,   386,
     387,   388,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   386,   387,   388,   -70,   -70,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -79,   -79,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -88,   -88,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -81,   -81,   -66,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -66,   -66,   -66,   -66,    95,    96,    97,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -69,     0,
       0,     0,     0,     0,     0,   -76,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,     0,   -77,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
       0,   -74,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,     0,   -68,     0,   -67,   -67,   -67,   -67,
      95,    96,    97,   -68,   -68,   -68,   -68,    95,    96,    97,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -70,   -77,   -77,   -77,   -77,   -77,   -77,   -71,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,   -72,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -66,   -66,   -66,
     -66,   -66,   -66,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -66,
     -69,   -69,   -69,   -69,   -69,   -69,   -66,   -66,   -66,   -66,
     291,   292,   293,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -69,   -84,   -84,   -84,   -84,   -84,   -84,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -83,     0,     0,     0,
       0,     0,     0,   -84,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,   -86,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,   -87,   -83,   -83,   -83,   -83,   -83,   -83,   -78,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -84,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   -86,     0,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -76,   -76,   -76,   -76,   -76,   -76,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -73,   -78,   -78,   -78,
     -78,   -78,   -78,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   -78,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -77,   -75,   -75,   -75,   -75,   -75,   -75,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -67,   -67,   -67,   -67,   -67,   -67,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -67,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   291,   292,   293,   -68,
     -70,   -70,   -70,   -70,   -70,   -70,   -68,   -68,   -68,   -68,
     291,   292,   293,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -72,   -72,   -72,
     -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -72,
     -88,   -88,   -88,   -88,   -88,   -88,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -80,   -67,   -67,   -67,   -67,   -67,   -67,
     -88,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -68,   -68,   -68,   -68,
     -68,   -68,   -67,   -67,   -67,   -67,   -67,   326,   327,   328,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -68,   -68,   -68,   -68,   -68,   326,
     327,   328,   -72,   -72,   -72,   -72,   -72,   -72,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -80,   -80,   -80,   -80,   -80,   -80,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -80,     0,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -88,   -79,   -79,   -79,   -79,   -79,   -79,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,   -81,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -79,   -81,   -81,   -81,   -81,   -81,
     -81,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -65,     0,   -65,
     -65,   -65,   354,   355,   -62,     0,   -62,   -62,   -62,   354,
     355,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,   -63,     0,   -63,
     -63,   -63,   354,   355,   -65,   -65,     0,     0,   -65,   -65,
     384,   385,   -62,   -62,     0,     0,   -62,   -62,   384,   385,
     -63,   -63,   -63,   -63,   -63,   -63,   -62,   -62,   -62,   -62,
     -62,   -62,   -63,   -63,   -63,   -63,   -63,   -63,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -63,   -63,     0,   -62,   -63,
     -63,   384,   385,     0,   -63,   -62,   -62,   289,   290,     0,
       0,   -63,   -63,   289,   290,     0,   -62,   -62,   -62,   324,
     325,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   324,   325
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,   133,   172,     1,     0,     9,    33,    34,
      35,    36,     6,    10,    33,    35,   146,    57,    37,    59,
     150,   266,    35,    42,    42,   193,     9,    51,    22,    56,
      57,    55,    57,    53,    59,    35,    32,     1,    51,     3,
       4,     5,     6,     9,    10,    11,    12,    13,    14,    68,
      69,    70,    71,   298,    20,    21,   301,    59,    55,    59,
      52,    35,    36,    51,    52,    57,    54,    59,     9,     9,
      58,     1,    35,     3,     4,     5,     6,    51,    35,     9,
      10,    11,    12,    13,    14,    15,   331,    17,    18,    19,
      20,    21,    58,    59,   262,    59,    59,    63,    35,    36,
      57,    67,    59,    57,     0,    59,    33,    34,    35,    36,
       6,   105,   131,    57,   133,    59,   361,    35,    35,    36,
     139,    51,    59,    51,   143,    55,    56,   146,    58,   148,
     148,   150,    59,    63,   264,    53,    57,    67,    59,   158,
     159,   159,    59,   162,   162,   141,   142,    33,    34,    35,
      36,    35,   397,    31,    32,    33,    34,    35,    36,     9,
     179,   180,   181,   182,   183,     9,   296,    51,   164,    58,
      56,    57,    51,    51,    52,    57,    54,    59,   423,    35,
      58,   200,    60,    61,    62,    63,    64,    65,    66,   208,
     209,   210,   211,   212,    35,    33,    34,    35,    36,   444,
      56,    57,    33,    34,    35,    36,    57,    55,    59,   228,
     229,   230,   231,   232,    35,    36,    57,    51,    59,    57,
     465,    59,    31,    32,    33,    34,    35,    36,    59,   248,
     249,   250,   251,   252,    58,    56,    57,    51,     9,    10,
      11,    12,    13,    14,    53,   264,   265,   266,    51,    20,
      21,    60,    61,     9,   273,    31,    32,    33,    34,    35,
      36,   391,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,    54,   296,   297,   298,
      51,   300,   301,    59,    60,    61,    53,    58,    57,   308,
      59,    51,    63,    35,    36,    59,    67,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    51,    52,    57,    54,    59,    57,   338,
      59,    31,    32,    33,    34,    35,    36,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,    57,    54,    59,    56,    57,    55,   368,
      60,    61,    62,    63,    64,    65,    66,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,     9,   391,   392,   392,    35,    36,   396,   397,    19,
      20,    21,    57,    17,    59,    31,    32,    33,    34,    35,
      36,    51,    57,    33,    59,   414,   414,    37,    33,    34,
      35,    36,    42,   422,   423,    51,    51,     9,    10,    11,
      12,    13,    14,    55,    60,    61,    62,    63,    20,    21,
      59,    56,    57,    51,   443,   444,    35,    36,    68,    69,
      70,    71,    35,    56,    57,    35,    36,    55,     9,    10,
      11,    12,    13,    14,    59,   464,   465,    56,    57,    20,
      21,    53,    53,    56,    57,    59,    58,    57,    57,    59,
      59,    63,    58,   482,   482,    67,     1,    51,     3,     4,
       5,     6,    35,    36,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    58,    59,    56,
      53,   131,    63,   133,    56,    57,    67,    35,    36,   139,
      57,    55,    59,   143,    53,    57,   146,    59,   148,    55,
     150,    33,    34,    35,    36,    53,    51,    56,   158,   159,
      55,    56,   162,    58,    33,    34,    35,    36,    63,    56,
      59,    53,    67,    31,    32,    33,    34,    35,    36,   179,
     180,   181,   182,   183,    53,    51,     9,    10,    11,    12,
      13,    14,     3,     4,     5,     6,    51,    20,    21,    57,
     200,    59,    60,    61,    62,    63,    51,    59,   208,   209,
     210,   211,   212,     9,    10,    11,    12,    13,    14,    33,
      34,    35,    36,    17,    20,    21,    59,    59,   228,   229,
     230,   231,   232,    56,    59,    58,    57,    51,    59,    57,
      63,    59,    59,    53,    67,    53,    59,    53,   248,   249,
     250,   251,   252,    53,    33,    34,    35,    36,    59,    17,
      59,    53,    58,    59,   264,   265,   266,    63,    59,    53,
      53,    67,    51,   273,     6,    31,    32,    33,    34,    35,
      36,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,    51,   296,   297,   298,    53,
     300,   301,    53,   105,    60,    61,    62,    63,   308,    -1,
      31,    32,    33,    34,    35,    36,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    -1,    54,    -1,    56,    57,    -1,   338,    60,
      61,    62,    63,    64,    65,    66,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,     1,    -1,     3,     4,     5,     6,   368,    -1,
      31,    32,    33,    34,    35,    36,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
      51,   391,   392,    -1,    -1,    -1,   396,   397,    20,    60,
      61,    62,    63,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    34,    35,   414,    37,    38,    39,    -1,    -1,
      -1,    -1,   422,   423,    52,    -1,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,   443,   444,    -1,    68,    69,    70,    71,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,   464,   465,     0,     1,    -1,     3,
       4,     5,     6,    95,    96,    97,     1,    -1,     3,     4,
       5,     6,   482,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    58,
      59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,   131,
      -1,    31,    32,    33,    34,    35,    36,   139,    -1,     0,
       1,   143,     3,     4,     5,     6,    51,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    -1,   158,    57,    63,    59,
      60,    61,    67,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,   179,   180,   181,
     182,   183,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,     0,     1,   200,     3,
       4,     5,     6,    -1,    -1,    -1,   208,   209,   210,   211,
     212,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,     0,
       1,    67,     3,     4,     5,     6,   228,   229,   230,   231,
     232,    58,    59,    -1,    -1,    -1,    63,    -1,     0,     1,
      67,     3,     4,     5,     6,    -1,   248,   249,   250,   251,
     252,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,   265,   266,    20,    21,    -1,    -1,    -1,
      -1,   273,    31,    32,    33,    34,    35,    36,    -1,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,    -1,    53,   297,   298,    -1,   300,   301,
      -1,    60,    61,    58,    59,    -1,   308,    -1,    63,    -1,
      -1,    -1,    67,    -1,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    31,    32,
      33,    34,    35,    36,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      -1,    54,    -1,    56,    57,    -1,   368,    60,    61,    62,
      63,    64,    65,    66,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,    -1,    -1,
      -1,    -1,    -1,    -1,   396,   397,    20,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    37,    17,    18,    19,    20,    21,    -1,
     422,   423,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,     0,     1,    -1,     3,     4,     5,     6,
      -1,   443,   444,    -1,    68,    69,    70,    71,    51,    53,
      -1,    -1,    55,    56,    -1,    58,    60,    61,    62,    63,
      63,    -1,   464,   465,    67,    -1,    -1,    -1,    -1,    93,
      94,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,   131,    17,    18,
      19,    20,    21,    -1,    -1,   139,    -1,    -1,    -1,   143,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,   158,     0,     1,    67,     3,     4,
       5,     6,    51,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,   181,    67,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,   200,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,   210,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,     0,     1,   230,     3,     4,     5,
       6,    51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,   250,    67,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    58,    59,
      -1,   265,   266,    63,    -1,    -1,    -1,    67,    -1,   273,
      -1,    31,    32,    33,    34,    35,    36,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    -1,    -1,    20,
     294,    51,    -1,   297,   298,    -1,   300,   301,    -1,    -1,
      60,    61,    62,    63,   308,    -1,    37,    -1,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,    -1,    -1,    -1,   329,   330,   331,    -1,    -1,
      -1,    -1,    -1,    -1,   338,    -1,    -1,    68,    69,    70,
      71,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,    -1,   359,   360,   361,    89,    90,
      91,    92,     0,     1,   368,     3,     4,     5,     6,    -1,
      -1,    -1,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,    -1,    -1,    -1,   389,    31,    32,    33,    34,
      35,    36,   396,   397,     9,    10,    11,    12,    13,    14,
     131,    -1,    -1,    -1,    -1,    20,    21,    -1,   139,    -1,
      -1,    -1,   143,    -1,    59,    60,    61,    -1,   422,   423,
       0,     1,    -1,     3,     4,     5,     6,   158,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,   443,
     444,    -1,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,
     181,    -1,    67,    -1,     1,    -1,     3,     4,     5,     6,
     464,   465,     9,    10,    11,    12,    13,    14,    15,   200,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,   210,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,     0,     1,   230,
       3,     4,     5,     6,    51,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,   250,
      67,     0,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    58,    59,    -1,   265,   266,    63,    -1,    -1,    -1,
      67,    -1,   273,     0,     1,    20,     3,     4,     5,     6,
     281,   282,   283,   284,   285,   286,   287,   288,    -1,    -1,
      -1,    -1,    37,   294,    -1,    -1,   297,   298,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    31,
      32,    33,    34,    35,    36,   316,   317,   318,   319,   320,
     321,   322,   323,    68,    69,    70,    71,    -1,   329,   330,
     331,    -1,    -1,    -1,    56,    57,    -1,   338,    60,    61,
      62,    63,    87,    88,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,    -1,    -1,    -1,    -1,    -1,   359,   360,
     361,     9,    10,    11,    12,    13,    14,   368,    -1,    -1,
      -1,    -1,    20,    21,    -1,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,   131,    -1,   389,    -1,
      -1,    -1,    -1,    -1,   139,   396,   397,    -1,   143,    -1,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      58,    20,    21,   158,    -1,    63,    -1,    -1,    -1,    67,
      -1,   422,   423,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,   181,    -1,    -1,    -1,
      -1,    -1,   443,   444,    -1,    -1,    -1,     0,     1,    58,
       3,     4,     5,     6,    63,   200,    -1,    -1,    67,    -1,
      -1,    -1,    -1,   464,   465,   210,    31,    32,    33,    34,
      35,    36,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,   230,     9,    10,    11,    12,
      13,    14,    57,    -1,    59,    60,    61,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
     265,   266,    20,    21,    -1,    -1,    -1,    -1,   273,    -1,
      -1,    20,    -1,    -1,    -1,    58,   281,   282,   283,   284,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    37,   294,
      -1,    -1,   297,   298,    -1,   300,   301,    -1,    -1,    -1,
      58,    -1,    -1,   308,    -1,    63,    -1,    -1,    -1,    67,
      -1,   316,   317,   318,   319,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    -1,   329,   330,   331,     9,    10,    11,
      12,    13,    14,   338,    -1,    -1,    -1,    86,    20,    21,
      -1,   346,   347,   348,   349,    -1,     9,    10,    11,    12,
      13,    14,    -1,    -1,   359,   360,   361,    20,    21,    -1,
      -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   376,   377,   378,   379,    -1,    58,    -1,    -1,    -1,
      -1,    63,   131,    -1,   389,    67,    -1,    -1,    -1,    -1,
     139,   396,   397,    -1,   143,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,   423,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    31,    32,    33,    34,
      35,    36,   181,    -1,    -1,    -1,    -1,    -1,   443,   444,
      37,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,   200,    20,    21,    59,    60,    61,    62,    63,   464,
     465,   210,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    68,    69,    70,    71,    20,    21,    -1,    -1,    -1,
      -1,   230,     9,    10,    11,    12,    13,    14,    85,    -1,
      58,    -1,    -1,    20,    21,    63,    -1,    -1,    -1,    67,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,   265,   266,    63,    -1,
      -1,    -1,    67,    -1,   273,    31,    32,    33,    34,    35,
      36,    58,   281,   282,   131,    -1,    63,    -1,    -1,    -1,
      67,    -1,   139,    -1,    -1,   294,   143,    53,   297,   298,
      -1,   300,   301,    -1,    60,    61,    62,    63,    -1,   308,
      -1,   158,    -1,    -1,    -1,    -1,    -1,   316,   317,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
     329,   330,   331,    -1,   181,    -1,    -1,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    56,    57,   346,   347,    60,
      61,    62,    63,   200,    -1,    -1,    -1,    20,    -1,    -1,
     359,   360,   361,   210,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,    37,    -1,    -1,   376,   377,    -1,
      -1,    -1,    -1,   230,    31,    32,    33,    34,    35,    36,
     389,    31,    32,    33,    34,    35,    36,   396,   397,    -1,
      -1,    -1,    -1,   250,    -1,    68,    69,    70,    71,    -1,
      57,    51,    59,    60,    61,    62,    63,    -1,   265,   266,
      60,    61,    -1,   422,   423,    -1,   273,    -1,    31,    32,
      33,    34,    35,    36,   281,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   443,   444,    -1,   294,    51,    -1,
     297,   298,    -1,   300,   301,    -1,    -1,    60,    61,    62,
      63,   308,    -1,    -1,    -1,   464,   465,    -1,   131,   316,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
     143,    -1,   329,   330,   331,    -1,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,   158,    -1,    -1,    -1,   346,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    20,
      21,    -1,   359,   360,   361,    -1,    -1,    -1,   181,    -1,
      -1,   368,    33,    53,    54,    -1,    37,    -1,    -1,   376,
      60,    61,    62,    63,    64,    65,    66,   200,    -1,    -1,
      -1,    -1,   389,    -1,    -1,    -1,    -1,   210,    -1,   396,
     397,    31,    32,    33,    34,    35,    36,    68,    69,    70,
      71,    31,    32,    33,    34,    35,    36,   230,    -1,    -1,
      -1,    -1,    52,    53,    54,   422,   423,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,   250,    -1,    59,
      60,    61,    62,    63,    -1,    -1,   443,   444,    -1,    -1,
      -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,
     273,    31,    32,    33,    34,    35,    36,   464,   465,    -1,
     131,    31,    32,    33,    34,    35,    36,    -1,   139,    -1,
      -1,   294,   143,    53,   297,   298,    -1,   300,   301,    -1,
      60,    61,    52,    -1,    54,   308,    -1,   158,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,    -1,
     181,    -1,    -1,    -1,     1,   338,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,   200,
      17,    18,    19,    20,    21,    -1,   359,   360,   361,   210,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
      -1,    -1,    -1,    -1,    51,    -1,   389,    -1,    55,    56,
      -1,    58,    -1,   396,   397,    -1,    63,    -1,    -1,   250,
      67,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,   265,   266,    -1,    -1,    -1,   422,
     423,    -1,   273,    52,    -1,    54,    -1,    56,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
     443,   444,    -1,    -1,    -1,    -1,   297,   298,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,   464,   465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     331,     1,    -1,     3,     4,     5,     6,   338,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    31,    32,    33,    34,    35,    36,   360,
     361,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    51,    60,    61,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,   396,   397,    67,    -1,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,   422,   423,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   443,   444,    -1,    -1,    -1,    -1,    -1,    51,
      53,    -1,    -1,    55,    56,    -1,    58,    60,    61,    62,
      63,    63,    -1,   464,   465,    67,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    -1,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    57,    51,    59,    60,
      61,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,     1,    67,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    31,    32,    33,    34,    35,
      36,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      56,    57,    -1,    51,    60,    61,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,     1,    67,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    31,    32,    33,    34,    35,    36,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    56,    57,    -1,    51,
      60,    61,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,     1,    67,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    31,    32,    33,
      34,    35,    36,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    51,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    51,    60,    61,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
       1,    67,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    31,    32,    33,    34,    35,    36,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    51,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    51,    60,    61,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,     1,    67,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    -1,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    51,    59,    60,
      61,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,     1,    67,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,     1,    67,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,     1,    67,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
       1,    67,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,     1,    67,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      52,    -1,    -1,    -1,    56,    57,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      54,    -1,    -1,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    54,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    54,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    54,    -1,    56,
      57,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    54,    -1,    56,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    31,    32,    33,    34,    35,    36,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    52,    59,    60,    61,    62,
      63,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    54,    -1,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    54,    -1,    56,    57,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    54,    -1,    -1,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    54,    -1,    56,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    59,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    59,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    59,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    59,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    59,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    59,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    56,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    56,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    56,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    56,
      57,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    56,    57,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      53,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    56,    57,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    56,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    56,    57,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    54,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    56,    57,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    31,    32,    33,    34,    35,    36,    -1,    56,
      57,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      56,    57,    51,    -1,    60,    61,    62,    63,    64,    65,
      66,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    60,    61,    62,
      63,    64,    65,    66,    60,    61,    62,    63,    64,    65,
      66,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      60,    61,    62,    63,    64,    65,    66,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    60,    61,    62,    63,    64,    65,    66,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    60,    61,    62,    63,
      64,    65,    66,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    31,    32,    33,    34,    35,    36,    51,    -1,    60,
      61,    62,    63,    64,    65,    66,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    59,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    53,
      31,    32,    33,    34,    35,    36,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    53,    31,    32,    33,    34,    35,    36,    60,
      61,    62,    63,    64,    65,    66,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    60,    61,    62,    63,    64,
      65,    66,    60,    61,    62,    63,    64,    65,    66,    31,
      32,    33,    34,    35,    36,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    60,    61,
      62,    63,    64,    65,    66,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    31,    32,    33,    34,    35,    36,    51,
      -1,    60,    61,    62,    63,    64,    65,    66,    60,    61,
      62,    63,    64,    65,    66,    53,    31,    32,    33,    34,
      35,    36,    60,    61,    62,    63,    64,    65,    66,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    53,    31,    32,    33,    34,    35,    36,    60,
      61,    62,    63,    64,    65,    66,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    53,
      31,    32,    33,    34,    35,    36,    60,    61,    62,    63,
      64,    65,    66,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    53,    31,    32,    33,
      34,    35,    36,    60,    61,    62,    63,    64,    65,    66,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    53,    31,    32,    33,    34,    35,    36,
      60,    61,    62,    63,    64,    65,    66,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    53,    31,    32,    33,
      34,    35,    36,    60,    61,    62,    63,    64,    65,    66,
      53,    31,    32,    33,    34,    35,    36,    60,    61,    62,
      63,    64,    65,    66,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    31,    32,    33,    34,    35,    36,    59,
      60,    61,    62,    63,    64,    65,    66,    31,    32,    33,
      34,    35,    36,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    53,
      31,    32,    33,    34,    35,    36,    60,    61,    62,    63,
      64,    65,    66,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    53,    31,    32,    33,
      34,    35,    36,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    53,
      31,    32,    33,    34,    35,    36,    60,    61,    62,    63,
      64,    65,    66,    51,    31,    32,    33,    34,    35,    36,
      51,    -1,    60,    61,    62,    63,    64,    65,    66,    60,
      61,    62,    63,    64,    65,    66,    31,    32,    33,    34,
      35,    36,    59,    60,    61,    62,    63,    64,    65,    66,
      31,    32,    33,    34,    35,    36,    -1,    -1,    31,    32,
      33,    34,    35,    36,    59,    60,    61,    62,    63,    64,
      65,    66,    31,    32,    33,    34,    35,    36,    59,    60,
      61,    62,    63,    64,    65,    66,    59,    60,    61,    62,
      63,    64,    65,    66,    31,    32,    33,    34,    35,    36,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      53,    31,    32,    33,    34,    35,    36,    60,    61,    62,
      63,    64,    65,    66,    -1,    31,    32,    33,    34,    35,
      36,    51,    31,    32,    33,    34,    35,    36,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    51,    59,    60,    61,    62,    63,    64,    65,
      66,    60,    61,    62,    63,    64,    65,    66,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      31,    32,    33,    34,    35,    36,    59,    60,    61,    62,
      63,    64,    65,    66,    53,    31,    32,    33,    34,    35,
      36,    60,    61,    62,    63,    64,    65,    66,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    53,    31,    32,
      33,    34,    35,    36,    60,    61,    62,    63,    64,    65,
      66,    31,    32,    33,    34,    35,    36,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    57,    -1,    59,
      60,    61,    62,    63,    57,    -1,    59,    60,    61,    62,
      63,    31,    32,    33,    34,    35,    36,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    61,    62,    63,    56,    57,    -1,    -1,    60,    61,
      62,    63,    56,    57,    -1,    -1,    60,    61,    62,    63,
      31,    32,    33,    34,    35,    36,    31,    32,    33,    34,
      35,    36,    31,    32,    33,    34,    35,    36,    31,    32,
      33,    34,    35,    36,    -1,    56,    57,    -1,    53,    60,
      61,    62,    63,    -1,    53,    60,    61,    62,    63,    -1,
      -1,    60,    61,    62,    63,    -1,    59,    60,    61,    62,
      63,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    69,    70,    71,    73,
     100,    51,    55,    82,     0,    70,    51,     9,    56,    83,
      52,    54,    58,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    20,    21,    51,    58,    63,    67,
      71,    82,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   100,    53,    89,
      89,     1,     3,    59,    80,    81,   100,    51,    52,    58,
      58,    58,    82,    89,    96,    97,    96,    89,    96,    96,
      51,    56,    85,    51,    51,    35,    36,    33,    34,    31,
      32,    60,    61,    62,    63,    64,    65,    66,    54,     9,
      54,    53,    59,    59,    55,    57,    59,     9,    89,    59,
      89,    99,    89,    89,    17,    59,    91,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    96,    96,    96,    90,
      10,    55,    55,    76,    79,    81,    55,    52,    53,    57,
      59,    59,    59,    58,    72,    89,    75,    78,    84,    56,
      74,    77,    53,    89,    82,    82,    89,    56,    57,    84,
      56,    56,    84,    56,    16,    59,    56,    89,    56,    56,
      82,    51,    55,     9,    10,    11,    12,    13,    14,    20,
      21,    58,    63,    67,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    55,     9,    10,    11,    12,    13,    14,
      58,    98,     9,    10,    11,    12,    13,    14,    20,    21,
      58,    63,    67,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     9,    10,    11,    12,    13,    14,    20,    21,
      58,    63,    67,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     9,    10,    11,    12,    13,    14,    20,    21,
      58,    63,    67,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    55,    56,    83,    52,    58,     9,    10,    11,
      12,    13,    14,    58,    96,    97,    98,    96,    89,    96,
      96,    35,    36,    33,    34,    31,    32,    60,    61,    62,
      63,    64,    65,    66,    54,    56,    83,    52,    58,    89,
      52,    58,     9,    10,    11,    12,    13,    14,    58,    96,
      97,    98,    96,    89,    96,    96,    35,    36,    33,    34,
      31,    32,    60,    61,    62,    63,    64,    65,    66,    54,
      52,    58,     9,    10,    11,    12,    13,    14,    58,    96,
      97,    98,    96,    89,    96,    96,    35,    36,    33,    34,
      31,    32,    60,    61,    62,    63,    64,    65,    66,    54,
      52,    58,     9,    10,    11,    12,    13,    14,    58,    96,
      97,    98,    96,    89,    96,    96,    35,    36,    33,    34,
      31,    32,    60,    61,    62,    63,    64,    65,    66,    54,
      56,    83,    84,    89,    59,    99,    52,    58,    89,    59,
      91,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    90,    84,    89,    59,    99,    59,    89,
      59,    99,    52,    58,    89,    59,    91,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    96,    96,    96,    90,
      89,    59,    99,    52,    58,    89,    59,    91,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      90,    89,    59,    99,    52,    58,    89,    59,    91,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      96,    90,    84,    56,    53,    59,    89,    59,    99,    59,
      56,    53,    59,    53,    59,    89,    59,    99,    59,    53,
      59,    89,    59,    99,    59,    53,    59,    89,    59,    99,
      59,    56,    53,    59,    53,    59,    53,    59,    53,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    74,    73,    75,    73,
      76,    73,    77,    73,    78,    73,    79,    73,    73,    80,
      80,    81,    81,    82,    83,    82,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     5,
       4,     8,     9,     6,     1,     3,     0,     9,     0,     9,
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
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2618 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2624 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2630 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2636 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2642 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 57 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2648 "src/parser.c"
        break;

    case 69: /* declaration_list  */
#line 59 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2654 "src/parser.c"
        break;

    case 70: /* declaration  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2660 "src/parser.c"
        break;

    case 71: /* init_declarator  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2666 "src/parser.c"
        break;

    case 72: /* initializer_list  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2672 "src/parser.c"
        break;

    case 73: /* function_definition  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2678 "src/parser.c"
        break;

    case 80: /* argument_list  */
#line 58 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2684 "src/parser.c"
        break;

    case 81: /* argument  */
#line 58 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2690 "src/parser.c"
        break;

    case 82: /* compound_statement  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2696 "src/parser.c"
        break;

    case 84: /* statement_list  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2702 "src/parser.c"
        break;

    case 85: /* statement  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2708 "src/parser.c"
        break;

    case 86: /* conditional_statement  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2714 "src/parser.c"
        break;

    case 87: /* iteration_statement  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2720 "src/parser.c"
        break;

    case 88: /* return_statement  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2726 "src/parser.c"
        break;

    case 89: /* assignment_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2732 "src/parser.c"
        break;

    case 90: /* logical_or_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2738 "src/parser.c"
        break;

    case 91: /* logical_and_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2744 "src/parser.c"
        break;

    case 92: /* equality_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2750 "src/parser.c"
        break;

    case 93: /* relational_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2756 "src/parser.c"
        break;

    case 94: /* additive_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2762 "src/parser.c"
        break;

    case 95: /* multiplicative_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2768 "src/parser.c"
        break;

    case 96: /* unary_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2774 "src/parser.c"
        break;

    case 97: /* postfix_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2780 "src/parser.c"
        break;

    case 98: /* primary_expression  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2786 "src/parser.c"
        break;

    case 99: /* argument_call_list  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2792 "src/parser.c"
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
#line 100 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3058 "src/parser.c"
    break;

  case 3:
#line 101 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3064 "src/parser.c"
    break;

  case 4:
#line 105 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3070 "src/parser.c"
    break;

  case 5:
#line 106 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3076 "src/parser.c"
    break;

  case 6:
#line 107 "src/language.y"
    { (yyval.node) = NULL; }
#line 3082 "src/parser.c"
    break;

  case 7:
#line 108 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3088 "src/parser.c"
    break;

  case 8:
#line 112 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   ,     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3094 "src/parser.c"
    break;

  case 9:
#line 113 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3100 "src/parser.c"
    break;

  case 10:
#line 114 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3106 "src/parser.c"
    break;

  case 11:
#line 115 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free_label((yyvsp[-6].sval)); }
#line 3112 "src/parser.c"
    break;

  case 12:
#line 116 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free_label((yyvsp[-7].sval)); }
#line 3118 "src/parser.c"
    break;

  case 13:
#line 117 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free_label((yyvsp[-4].sval)); free_label((yyvsp[0].sval)); }
#line 3124 "src/parser.c"
    break;

  case 14:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3130 "src/parser.c"
    break;

  case 15:
#line 122 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3136 "src/parser.c"
    break;

  case 16:
#line 126 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3142 "src/parser.c"
    break;

  case 17:
#line 126 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3148 "src/parser.c"
    break;

  case 18:
#line 127 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3154 "src/parser.c"
    break;

  case 19:
#line 127 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3160 "src/parser.c"
    break;

  case 20:
#line 128 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3166 "src/parser.c"
    break;

  case 21:
#line 128 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3172 "src/parser.c"
    break;

  case 22:
#line 129 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3178 "src/parser.c"
    break;

  case 23:
#line 129 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3184 "src/parser.c"
    break;

  case 24:
#line 130 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3190 "src/parser.c"
    break;

  case 25:
#line 130 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3196 "src/parser.c"
    break;

  case 26:
#line 131 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3202 "src/parser.c"
    break;

  case 27:
#line 131 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-5].sval)); }
#line 3208 "src/parser.c"
    break;

  case 28:
#line 132 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3214 "src/parser.c"
    break;

  case 29:
#line 136 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3220 "src/parser.c"
    break;

  case 30:
#line 137 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3226 "src/parser.c"
    break;

  case 31:
#line 141 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3232 "src/parser.c"
    break;

  case 32:
#line 142 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3238 "src/parser.c"
    break;

  case 33:
#line 146 "src/language.y"
    { (yyval.node) = NULL; }
#line 3244 "src/parser.c"
    break;

  case 34:
#line 147 "src/language.y"
    { begin(NULL); }
#line 3250 "src/parser.c"
    break;

  case 35:
#line 147 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3256 "src/parser.c"
    break;

  case 36:
#line 151 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3262 "src/parser.c"
    break;

  case 37:
#line 152 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3268 "src/parser.c"
    break;

  case 38:
#line 156 "src/language.y"
    { (yyval.node) = NULL; }
#line 3274 "src/parser.c"
    break;

  case 39:
#line 157 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3280 "src/parser.c"
    break;

  case 40:
#line 158 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3286 "src/parser.c"
    break;

  case 41:
#line 159 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3292 "src/parser.c"
    break;

  case 42:
#line 160 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3298 "src/parser.c"
    break;

  case 43:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3304 "src/parser.c"
    break;

  case 44:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3310 "src/parser.c"
    break;

  case 45:
#line 163 "src/language.y"
    { (yyval.node) = NULL; }
#line 3316 "src/parser.c"
    break;

  case 46:
#line 167 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3322 "src/parser.c"
    break;

  case 47:
#line 168 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3328 "src/parser.c"
    break;

  case 48:
#line 172 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3334 "src/parser.c"
    break;

  case 49:
#line 173 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3340 "src/parser.c"
    break;

  case 50:
#line 177 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3346 "src/parser.c"
    break;

  case 51:
#line 178 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3352 "src/parser.c"
    break;

  case 52:
#line 182 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3358 "src/parser.c"
    break;

  case 53:
#line 183 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3364 "src/parser.c"
    break;

  case 54:
#line 189 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3370 "src/parser.c"
    break;

  case 55:
#line 190 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3376 "src/parser.c"
    break;

  case 56:
#line 194 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3382 "src/parser.c"
    break;

  case 57:
#line 195 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/}
#line 3388 "src/parser.c"
    break;

  case 58:
#line 199 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3394 "src/parser.c"
    break;

  case 59:
#line 200 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3400 "src/parser.c"
    break;

  case 60:
#line 201 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3406 "src/parser.c"
    break;

  case 61:
#line 205 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3412 "src/parser.c"
    break;

  case 62:
#line 206 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3418 "src/parser.c"
    break;

  case 63:
#line 207 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3424 "src/parser.c"
    break;

  case 64:
#line 208 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3430 "src/parser.c"
    break;

  case 65:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3436 "src/parser.c"
    break;

  case 66:
#line 213 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3442 "src/parser.c"
    break;

  case 67:
#line 214 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3448 "src/parser.c"
    break;

  case 68:
#line 215 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3454 "src/parser.c"
    break;

  case 69:
#line 219 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3460 "src/parser.c"
    break;

  case 70:
#line 220 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3466 "src/parser.c"
    break;

  case 71:
#line 221 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3472 "src/parser.c"
    break;

  case 72:
#line 222 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3478 "src/parser.c"
    break;

  case 73:
#line 226 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3484 "src/parser.c"
    break;

  case 74:
#line 227 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3490 "src/parser.c"
    break;

  case 75:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3496 "src/parser.c"
    break;

  case 76:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3502 "src/parser.c"
    break;

  case 77:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3508 "src/parser.c"
    break;

  case 78:
#line 234 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3514 "src/parser.c"
    break;

  case 79:
#line 235 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3520 "src/parser.c"
    break;

  case 80:
#line 236 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free_label((yyvsp[-2].sval));}
#line 3526 "src/parser.c"
    break;

  case 81:
#line 237 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3532 "src/parser.c"
    break;

  case 82:
#line 241 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name); free_label((yyvsp[0].sval)); }
#line 3538 "src/parser.c"
    break;

  case 83:
#line 242 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3544 "src/parser.c"
    break;

  case 84:
#line 243 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3550 "src/parser.c"
    break;

  case 85:
#line 244 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3556 "src/parser.c"
    break;

  case 86:
#line 245 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3562 "src/parser.c"
    break;

  case 87:
#line 246 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3568 "src/parser.c"
    break;

  case 88:
#line 247 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3574 "src/parser.c"
    break;

  case 89:
#line 251 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3580 "src/parser.c"
    break;

  case 90:
#line 252 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3586 "src/parser.c"
    break;

  case 91:
#line 256 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3592 "src/parser.c"
    break;

  case 92:
#line 257 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3598 "src/parser.c"
    break;

  case 93:
#line 258 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3604 "src/parser.c"
    break;

  case 94:
#line 259 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3610 "src/parser.c"
    break;


#line 3614 "src/parser.c"

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
#line 262 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
