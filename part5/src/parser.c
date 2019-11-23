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
#line 79 "src/language.y"

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
#define YYLAST   7541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
       2,     2,     2,    68,     2,     2,     2,    67,     2,     2,
      59,    60,    65,    63,    58,    64,     2,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
      61,    55,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   106,   107,   108,   109,   113,   114,
     115,   116,   117,   118,   122,   123,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   137,
     138,   142,   143,   147,   148,   148,   152,   153,   157,   158,
     159,   160,   161,   162,   163,   164,   168,   169,   173,   174,
     178,   179,   183,   184,   190,   191,   195,   196,   200,   201,
     202,   206,   207,   208,   209,   210,   214,   215,   216,   220,
     221,   222,   223,   227,   228,   229,   230,   231,   232,   236,
     237,   238,   239,   243,   244,   245,   246,   247,   248,   249,
     253,   254,   258,   259,   260,   261
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
  "\"+\"", "\"-\"", "OP_NEG", "OP_POS", "\"<\"", "\">\"", "\"<=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"||\"", "\"&&\"", "\"=\"",
  "UNRECOGNIZED_TOKEN", "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST",
  "VARIABLE", "CONSTANT", "ARRAY", "ARRAY_INDEX", "FUNCTION",
  "FUNCTION_CALL", "DECLARATION", "INITIALIZATION", "GENERIC_NODE", "';'",
  "'['", "']'", "'='", "'{'", "'}'", "','", "'('", "')'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept", "declaration_list",
  "declaration", "init_declarator", "initializer_list",
  "function_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "argument_list", "argument", "compound_statement", "$@7",
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
     305,   306,    59,    91,    93,    61,   123,   125,    44,    40,
      41,    60,    62,    43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -265

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-265)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     786,    97,     1,    26,    33,   108,   632,   717,   -25,   828,
     116,   856,  1225,  1417,  -265,  1537,  1581,   566,  1697,    76,
     236,   583,    55,    56,   516,  1795,  4409,  4445,  4481,  4517,
       5,   102,   112,   408,  1747,  1747,  1505,  1915,  1747,  1747,
    1747,   129,  1781,  2443,  2593,  2663,  2684,   139,   150,   -20,
      82,   475,  2012,   363,  6266,  6302,  4553,  4589,   203,   165,
     170,   175,   168,     2,   198,   -45,   -35,   233,  2752,  2165,
      91,  1915,  1915,   238,   206,  6309,  6345,  6352,   199,  6388,
    6395,  6431,  2773,  1876,  2839,  2860,  2926,  1747,  1747,  1747,
    1747,  1747,  1747,  1747,  1747,  1747,  1747,  1747,  1747,  1747,
    1747,   426,    -1,   235,  2143,   247,  2947,   710,   273,   351,
     240,  4625,   264,   268,   293,   297,   306,  4661,   411,   565,
    2327,  2585,   905,  1233,  1270,  1513,  6438,  6474,  6481,  6517,
    6524,    94,   314,  2323,  3013,    76,   334,   294,  3034,   347,
    4697,  2469,  4733,   352,   356,  1915,    16,    99,    76,   366,
    3100,  2195,    76,   389,   303,   391,   479,  3121,   393,   402,
     162,  3187,  2216,  2231,  3208,  2255,   356,   417,   422,   141,
    2283,  2416,  3274,  3295,  3361,  3817,  4747,  4783,  4797,  4833,
    4847,  2566,  2566,  1915,  2566,  2566,  2566,    73,   353,   396,
    2079,  1999,  6538,  6561,  4883,  4897,  3382,  3868,  6577,  6584,
    6620,  6627,  6663,  1915,  6670,  3832,  4933,  4946,  4982,  4995,
    5031,  3656,  3656,  1915,  3656,  3656,  3656,    -3,    47,     3,
     231,   622,  4423,  4459,  5044,  5080,  3766,  2481,  3881,  3917,
    3930,  3966,  3716,  3716,  1915,  3716,  3716,  3716,   -29,   100,
     -15,   171,   749,  5090,  5126,  3979,  4015,  3781,   788,   941,
    4028,  4064,  4077,  3729,  3729,  1915,  3729,  3729,  3729,   328,
     186,   143,   298,  1367,  1880,  5137,  4113,  4126,  3448,  3469,
      76,  2165,   552,  4162,  6684,  6707,  6721,  6744,  6758,  1915,
    6781,  6795,  6818,  6832,   427,  6855,  6869,  6892,  2566,  2566,
    2566,  2566,  2566,  2566,  2566,  2566,  2566,  2566,  2566,  2566,
    2566,  2566,   460,    76,  2165,   735,   441,  2165,   865,  4177,
    4495,  4531,  4567,  4603,  4639,  1915,  4675,  4711,  6878,  6915,
     447,  6928,  6936,  6972,  3656,  3656,  3656,  3656,  3656,  3656,
    3656,  3656,  3656,  3656,  3656,  3656,  3656,  3656,  2165,  1017,
    1403,  5173,  5183,  5193,  5229,  5239,  1915,  5249,  5285,  5295,
    5305,   456,  5341,  5351,  5361,  3716,  3716,  3716,  3716,  3716,
    3716,  3716,  3716,  3716,  3716,  3716,  3716,  3716,  3716,  2165,
    1054,  1678,  5397,  5408,  5444,  5455,  5491,  1915,  5502,  5538,
    5549,  5585,   469,  5596,  5632,  5643,  3729,  3729,  3729,  3729,
    3729,  3729,  3729,  3729,  3729,  3729,  3729,  3729,  3729,  3729,
    1122,    76,  3535,   432,  5679,   401,  2165,  1086,   472,  5693,
     421,   468,  2765,  2852,  2127,  7415,  7421,  7454,  6986,  7009,
    7023,  7046,  7060,    84,  3556,   491,  7083,   410,  7104,   506,
    5729,   455,  2165,  1437,   480,  5742,   261,    32,   870,  1967,
    4171,  7460,  7466,  7477,  7097,  7140,  7148,  7156,  7192,    63,
     513,  4213,   459,  2165,  1468,   510,  4226,   265,    12,   404,
     861,  2235,  7361,  7368,  7401,  5778,  5788,  5798,  5834,  5844,
      18,   520,  4262,   466,  2165,  1662,   530,  4275,   204,   152,
    1134,  1306,  1586,  1957,  2068,  7409,  5880,  5891,  5927,  5938,
    5974,   345,  3622,  3643,  5988,  6024,   537,  7206,   470,  7229,
     503,  7245,  7252,  6037,  6073,   544,  7266,   481,  7288,  4311,
    4324,   559,  6083,   486,  6119,  4360,  4373,   560,  6130,   564,
    6166,  1196,  7302,  7325,  7310,  7348,  6176,  6212,  6223,  6259
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,   617,    65,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,   527,     4,  -170,  -118,   -40,  -265,  -265,
    -265,  2285,  2097,  1939,  1751,  1563,  1300,  1020,   655,   -19,
     373,  -264,     6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    41,   146,     9,   152,   148,   135,   153,
     149,   136,    65,    66,    42,    19,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    76,
     204,   113,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,   194,    56,    84,   270,    13,    10,   355,   405,   132,
     -92,   -92,    10,   107,    56,   108,    87,   150,   224,   357,
     358,   -56,   -56,   -29,    56,   -29,   303,    16,    67,   -52,
     161,   -52,   -52,   324,   164,   -93,    73,   326,   327,   -56,
     -56,   427,   -94,   -56,   431,   -56,   357,   358,   -57,   -57,
     194,   245,   224,   224,   355,   133,    62,   -52,    63,     3,
       4,     5,   105,   -56,    71,     8,   326,   327,   -57,   -57,
     -57,     8,   -57,   159,   160,   452,   -53,    23,   -53,     2,
       3,     4,     5,   -54,   325,    24,    25,    26,    27,    28,
      29,    30,   -57,    31,    32,    33,    34,    35,   401,   324,
     226,   227,   228,   229,   230,   231,   473,   -54,    68,   288,
      84,   232,   233,    67,   266,    64,    56,   -95,   -54,    88,
     288,    84,   245,   -53,    84,    17,   224,   -52,    36,    56,
      87,    56,   174,    56,   -54,    37,   -54,   356,   -53,    38,
      39,   266,    56,   498,    40,    56,   -53,   156,   157,    11,
     234,   111,   402,    12,   235,   236,   -14,   -14,   -54,   237,
     -54,    72,   281,   281,   224,   281,   281,   281,   196,   507,
     172,   247,   248,   249,   250,   251,   252,   388,   389,   -56,
     -56,    82,   253,   254,   224,   424,   388,   389,   -57,   -57,
     513,    85,   317,   317,   224,   317,   317,   317,   -15,   -15,
     -56,   -56,    86,   359,   360,   -58,   -58,   -58,   -58,   -57,
     -57,   519,   101,   348,   348,   224,   348,   348,   348,   168,
     102,   255,   -54,   387,   103,   256,   257,   -10,   104,   -58,
     258,   -58,   361,   362,   379,   379,   224,   379,   379,   379,
     -55,   387,   109,   -54,   -54,   175,   176,   177,   178,   179,
     180,    56,   194,   245,   106,   116,   181,   182,   -51,   117,
     224,   -55,   -55,   328,   329,   -58,   -58,   -58,   -58,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   492,    56,   194,   245,    -9,   194,   245,
      59,   -58,   330,   331,   140,   183,   224,   -55,   325,   184,
     185,   -55,   356,   134,   186,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   194,
     245,   -55,   -90,   -55,   -90,   -55,   141,   224,   142,   138,
     390,   391,   -58,   -58,   -58,   -58,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     194,   245,   -30,   143,   -30,   -58,   -58,   144,   224,   392,
     393,   -32,    84,   -32,   386,   145,   -13,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   386,    56,    56,    84,   -52,   -52,   194,   245,   -54,
     289,   151,    57,   195,    57,   -61,   -61,   -61,   -61,   -61,
     -61,   154,   -53,   -53,   139,    56,    57,   -54,   268,   -31,
     225,   -31,   174,   194,   245,   -61,    57,    24,    25,    26,
      27,    28,    29,   162,   -61,   -61,    95,    96,    34,    35,
     290,   291,   -56,   -56,   194,   245,   359,   360,   -59,   -59,
     -59,   -59,   195,   246,   225,   225,   165,   -55,    88,   -91,
     -56,   -91,    84,   167,   -11,   194,   245,   -55,   289,   141,
     -50,   495,   -59,   -55,   -59,   361,   362,    37,   141,   173,
     502,    38,    39,    56,   -12,   -55,    40,   -33,    -8,    20,
     -46,    21,   -46,   -46,   -46,   -46,   494,   409,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   166,   -46,   -46,   -46,   -46,
     -46,   428,   290,   291,   -57,   -57,   267,   435,    57,    89,
      90,   -56,   -56,   141,   246,   504,   456,   141,   225,   510,
     -35,    57,   -57,    57,   141,    57,   516,   -56,   141,   477,
     523,   -46,   499,   267,    57,   -46,   -46,    57,   -46,   141,
     508,   525,   -46,   -46,   141,   501,   527,   -46,   -83,   -83,
     -83,   -83,   -83,   -83,   282,   282,   225,   282,   282,   282,
     503,   226,   227,   228,   229,   230,   231,   509,   -83,    69,
     514,   -83,   232,   233,   515,    70,   225,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   318,   318,   225,   318,   318,   318,
     520,   522,    24,    25,    26,    27,    28,    29,   524,    89,
      90,   -57,   -57,    34,    35,   349,   349,   225,   349,   349,
     349,   234,   404,   526,   528,   235,   236,   -57,    -8,    20,
     237,    21,   141,    15,   529,    22,   380,   380,   225,   380,
     380,   380,    14,     1,   137,     2,     3,     4,     5,     0,
       0,     0,    37,    57,   195,   246,    38,    39,     0,     0,
       0,    40,   225,     0,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   193,    57,   195,   246,     0,
     195,   246,   -61,   -61,   -61,   332,   333,     0,   225,    75,
      77,     0,   223,    79,    80,    81,     0,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   195,   246,     2,     3,     4,     5,    -2,    -2,   225,
      -2,    -2,    -2,    -2,   193,   244,   223,   223,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   195,   246,   226,   227,   228,   229,   230,   231,
     225,     0,   128,   129,   130,   232,   233,     0,     0,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,     0,    57,    57,     0,     0,     0,   195,
     246,   -61,   -61,   -61,   -61,   -61,   -61,     1,   265,     2,
       3,     4,     5,     0,   234,   426,   244,    57,   235,   236,
     223,     0,     0,   237,     0,   195,   246,   -61,     0,   -61,
     -61,   -61,   363,   364,     0,   265,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   195,   246,    -4,    -4,
       0,    -4,    -4,    -4,    -4,     0,   280,   283,   223,   285,
     286,   287,     0,   -84,     0,   -84,   -84,   195,   246,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,    -6,    -6,   223,    -6,
      -6,    -6,    -6,     0,     0,    57,   316,   319,   223,   321,
     322,   323,     0,     0,   226,   227,   228,   229,   230,   231,
       0,     0,     0,     0,     0,   232,   233,   347,   350,   223,
     352,   353,   354,   359,   360,   -60,   -60,   -60,   -60,     0,
       0,     0,   328,   329,   -59,   -59,   -59,   -59,   378,   381,
     223,   383,   384,   385,     0,     0,     0,     0,     0,   -60,
       0,   -60,   361,   362,   234,   430,   193,   244,   235,   236,
     -59,   330,   331,   237,   223,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   420,   421,   422,   193,   -64,     0,   193,
     244,     0,   193,   244,     0,     0,   -64,   -64,    95,    96,
     223,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   446,
     447,   448,   223,   193,   244,     0,   -85,     0,   -85,   -85,
       0,   223,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     467,   468,   469,   244,   193,   244,   226,   227,   228,   229,
     230,   231,   223,     0,     0,     0,     0,   232,   233,     0,
     192,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   488,   489,   490,   265,     0,     0,   222,     0,     0,
       0,   193,   244,   226,   227,   228,   229,   230,   231,     0,
       0,     0,     0,     0,   232,   233,   234,   451,     0,     0,
     235,   236,     0,     0,     0,   237,     0,   193,   244,   192,
     243,   222,   222,     0,     0,   226,   227,   228,   229,   230,
     231,     0,     0,     0,     0,     0,   232,   233,   193,   244,
       0,     0,     0,   234,   472,   126,   127,   235,   236,     0,
       0,     0,   237,   -33,     0,   -33,   -33,   -33,   -33,   193,
     244,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   234,   497,     0,     0,   235,
     236,     0,     0,   264,   237,     0,     0,     0,     0,     0,
       0,   243,     0,     0,     0,   222,   390,   391,   -59,   -59,
     -59,   -59,     0,     0,   -33,     0,     0,     0,   -33,   -33,
     264,   -33,     0,     0,     0,   -33,   -33,     0,     0,     0,
     -33,   -59,   -59,     0,     0,   392,   393,   -35,     0,   -35,
     -35,   -35,   -35,   222,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,     0,   222,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,   222,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -35,     0,
       0,     0,   -35,   -35,   222,   -35,     0,     0,     0,   -35,
     -35,     0,     0,     0,   -35,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   222,     0,   -34,     0,     0,
       0,   -34,    18,     0,   -34,   -65,     0,     0,   -34,   -34,
       0,   192,   243,   -34,   -65,   -65,    95,    96,     0,   222,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   192,   192,
     192,   192,   192,   192,   192,   192,   418,   419,     0,     0,
     191,   192,   -62,     0,   192,   243,     0,   192,   243,     0,
       0,   -62,   -62,    95,    96,   222,     0,   221,   390,   391,
     -60,   -60,   -60,   -60,   222,   222,   222,   222,   222,   222,
     222,   222,   444,   445,     0,     0,     0,   222,   192,   243,
       0,     0,     0,   -60,   -60,     0,   222,   392,   393,   191,
     242,   221,   221,     0,     0,   243,   243,   243,   243,   243,
     243,   243,   243,   465,   466,     0,     0,     0,   243,   192,
     243,   122,   123,   124,   125,     0,     0,   222,     0,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   264,   264,   264,   264,
     264,   264,   264,   264,   486,   487,     0,    -7,    -7,   264,
      -7,    -7,    -7,    -7,   -61,   -61,   192,   243,   -61,   -61,
     394,   395,     0,   263,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   242,     0,     0,     0,   221,   226,   227,   228,   229,
     230,   231,   192,   243,     0,     0,   453,   232,   233,     0,
     263,   -83,   454,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   192,   243,     0,     0,   226,   227,   228,
     229,   230,   231,   221,     0,     0,     0,     0,   232,   233,
       0,     0,     0,     0,   192,   243,   234,   506,     0,     0,
     235,   236,     0,   221,     0,   237,   -38,     0,   -38,   -38,
     -38,   -38,     0,   221,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,   234,   512,     0,
       0,   235,   236,     0,   221,     0,   237,    -3,    -3,     0,
      -3,    -3,    -3,    -3,     0,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   221,     0,   -38,     0,     0,
       0,   -38,   -38,     0,   -38,   -63,     0,     0,   -38,   -38,
       0,   191,   242,   -38,   -63,   -63,    95,    96,     0,   221,
       0,    -5,    -5,   190,    -5,    -5,    -5,    -5,   191,   191,
     191,   191,   414,   415,   416,   417,     0,     0,     0,     0,
     220,   191,     0,     0,   191,   242,     0,   191,   242,     0,
       0,     0,     0,     0,     0,   221,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   221,   221,   221,   221,   440,   441,
     442,   443,   190,   241,   220,   220,     0,   221,   191,   242,
       0,     0,     0,   -64,   -64,     0,   221,   -64,   -64,   394,
     395,     0,   120,   121,     0,   242,   242,   242,   242,   461,
     462,   463,   464,     0,     0,     0,     0,     0,   242,   191,
     242,   226,   227,   228,   229,   230,   231,   221,     0,     0,
       0,     0,   232,   233,     0,     0,   263,   263,   263,   263,
     482,   483,   484,   485,     0,     0,   262,   -33,   -33,   263,
     -33,   -33,   -33,   -33,   241,     0,   191,   242,   220,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,   234,   518,   262,     0,   235,   236,     0,     0,     0,
     237,   474,   191,   242,     0,   -83,   -83,   475,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   220,     0,     0,     0,
       0,     0,     0,   191,   242,     0,   197,   198,   199,   200,
     201,   202,     0,     0,     0,     0,   220,    34,    35,     0,
       0,   189,     0,     0,   191,   242,   220,     0,     0,     0,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   219,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   220,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,   203,     0,     0,     0,
      38,    39,     0,     0,     0,    40,     0,     0,   220,     0,
     189,   240,   219,   219,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -43,   190,   241,     0,   -43,   -43,   119,
     -43,     0,   220,     0,   -43,   -43,     0,   -84,     0,   -43,
     -84,   190,   190,   412,   413,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   190,     0,     0,   190,   241,     0,
     190,   241,     0,     0,     0,     0,   -35,   -35,   220,   -35,
     -35,   -35,   -35,     0,   261,     0,     0,   220,   220,   438,
     439,     0,   240,     0,     0,     0,   219,     0,     0,     0,
     220,   190,   241,     0,     0,     0,     0,     0,     0,   220,
       0,   261,   -66,   -66,   -66,   -66,   -66,   -66,   241,   241,
     459,   460,     0,     0,   205,   206,   207,   208,   209,   210,
       0,   241,   190,   241,   219,   211,   212,   -66,   -66,     0,
     220,   -66,   -66,   -66,   -66,   396,   397,   398,     0,   262,
     262,   480,   481,     0,   219,     0,     0,     0,     0,   188,
       0,     0,   262,     0,   219,     0,     0,     0,     0,   190,
     241,     0,     0,     0,   213,     0,   218,     0,   214,   215,
       0,     0,     0,   216,     0,   219,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   190,   241,     0,     0,   328,
     329,   -60,   -60,   -60,   -60,     0,   219,     0,   188,   239,
     218,   218,     0,     0,   -65,   -65,   190,   241,   -65,   -65,
     394,   395,   189,   240,     0,     0,   118,   -60,   330,   331,
     219,   -61,   -61,   -61,   -61,   -61,   -61,   190,   241,   189,
     411,     0,     0,     0,    91,    92,   -58,   -58,   -58,   -58,
       0,     0,   189,   -61,     0,   189,   240,     0,   189,   240,
     -61,   -61,   296,   297,   -58,     0,   219,     0,     0,     0,
       0,     0,   260,    93,    94,   219,   437,     0,     0,     0,
     239,     0,     0,     0,   218,     0,     0,     0,   219,   189,
     240,     0,     0,     0,     0,     0,     0,   219,     0,   260,
     -62,   -62,   -62,   -62,   -62,   -62,   240,   458,     0,     0,
       0,   292,   293,   -58,   -58,   -58,   -58,   187,     0,   240,
     189,   240,   218,     0,     0,   -62,   -62,     0,   219,   -62,
     -62,   394,   395,   -58,   217,     0,     0,   261,   479,     0,
     294,   295,   218,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     261,     0,   218,     0,     0,     0,     0,   189,   240,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   187,   238,   217,   217,
       0,     0,     0,   218,   175,   176,   177,   178,   179,   180,
       0,   -64,     0,   189,   240,   181,   182,     0,   -64,   -64,
     296,   297,     0,     0,   218,   -27,   -27,   131,   -27,   -27,
     -27,   -27,     0,     0,   189,   240,     0,     0,     0,     0,
     188,   239,     0,     0,     0,     0,   -25,   -25,   218,   -25,
     -25,   -25,   -25,     0,   183,   189,   240,   410,   184,   185,
     259,   -21,   -21,   186,   -21,   -21,   -21,   -21,   238,     0,
     188,     0,   217,   188,   239,     0,   188,   239,     0,     0,
       0,     0,     0,     0,   218,   -23,   -23,   259,   -23,   -23,
     -23,   -23,     0,   436,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   218,   188,   239,     0,
     217,     0,     0,   -19,   -19,   218,   -19,   -19,   -19,   -19,
       0,     0,     0,   -64,   457,   -64,   -64,   -64,   363,   364,
     217,     0,     0,     0,     0,    60,    61,   239,   188,   239,
     217,     0,     0,     0,     0,     0,   218,     0,    74,     0,
       0,     0,    78,     0,     0,   478,     0,     0,     0,     0,
       0,   217,   247,   248,   249,   250,   251,   252,   260,     0,
       0,     0,     0,   253,   254,   188,   239,     0,     0,     0,
       0,     0,   217,     0,   110,   112,   114,   115,     0,    91,
      92,   -59,   -59,   -59,   -59,     0,     0,     0,   187,   238,
       0,   188,   239,     0,     0,     0,   217,     0,     0,   -59,
       0,     0,   255,     0,     0,     0,   256,   257,    93,    94,
       0,   258,   188,   239,     0,     0,     0,     0,   423,     0,
       0,   187,   238,     0,   187,   238,     0,     0,     0,     0,
       0,     0,   217,   188,   239,     0,   -17,   -17,   147,   -17,
     -17,   -17,   -17,     0,     0,     0,   155,     0,     0,     0,
     158,     0,     0,     0,   449,   187,   238,     0,     0,     0,
       0,     0,     0,   217,    23,   169,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,   470,   187,   238,   284,     0,
       0,     0,     0,     0,   217,     0,     0,     0,   226,   227,
     228,   229,   230,   231,     0,     0,     0,     0,   306,   232,
     233,     0,     0,     0,     0,    36,   491,     0,   320,   174,
      83,     0,    37,   187,   238,     0,    38,    39,     0,     0,
       0,    40,     0,   -84,   -84,   -84,   -84,   -84,   -84,   351,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   187,
     238,     0,   235,   236,     0,     0,   -84,   237,     0,   -84,
     382,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     187,   238,     0,     0,     0,     0,   403,   112,     0,     0,
       0,     0,     0,     0,   408,     0,     0,     0,     0,     0,
       0,   187,   238,     0,     0,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,     0,   181,   182,     0,   425,
     112,     0,   429,   112,   -36,     0,   -36,   -36,   -36,   -36,
     434,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,    91,    92,   -60,
     -60,   -60,   -60,   450,   112,   279,     0,     0,     0,   184,
     185,   455,     0,     0,   186,     0,     0,   -60,     0,     0,
       0,     0,     0,     0,     0,   -36,    93,    94,     0,   -36,
     -36,     0,   -36,     0,   471,   112,   -36,   -36,     0,     0,
       0,   -36,   476,     0,   -41,     0,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -42,     0,   -42,   -42,   -42,
     -42,   496,   112,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,     0,   505,   112,   -41,
     -41,     0,   -41,     0,     0,     0,   -41,   -41,     0,     0,
       0,   -41,     0,     0,     0,     0,   -42,     0,   511,   112,
     -42,   -42,     0,   -42,     0,     0,     0,   -42,   -42,     0,
       0,     0,   -42,   -45,     0,   -45,   -45,   -45,   -45,   517,
     112,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,     0,   292,   293,   -59,
     -59,   -59,   -59,     0,   -45,     0,     0,     0,   -45,   -45,
       0,   -45,     0,     0,     0,   -45,   -45,     0,     0,   -59,
     -45,     0,     0,     0,     0,   -39,   294,   295,     0,   -39,
     -39,     0,   -39,     0,     0,     0,   -39,   -39,     0,     0,
     -37,   -39,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,   292,   293,   -60,   -60,   -60,   -60,
       0,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
       0,     0,   -37,   -37,     0,     0,   -60,   -37,     0,     0,
       0,     0,   -44,   294,   295,     0,   -44,   -44,     0,   -44,
       0,     0,     0,   -44,   -44,     0,     0,   -40,   -44,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,     0,
       0,     0,   -40,   -40,     0,   -40,     0,     0,     0,   -40,
     -40,     0,     0,     0,   -40,     0,     0,     0,     0,   -20,
       0,     0,     0,   -20,   -26,     0,   -20,     0,     0,     0,
     -20,   -20,     0,     0,   -18,   -20,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -16,     0,   -16,   -16,   -16,
     -16,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -18,     0,     0,     0,   -18,
     -24,     0,   -18,     0,     0,     0,   -18,   -18,     0,     0,
       0,   -18,     0,     0,     0,     0,   -16,     0,     0,     0,
     -16,   -22,     0,   -16,     0,     0,     0,   -16,   -16,     0,
       0,    23,   -16,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,   -48,     0,   -48,   -48,   -48,   -48,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,   174,   163,     0,    37,
       0,     0,     0,    38,    39,     0,     0,     0,    40,     0,
       0,     0,     0,   -48,     0,     0,     0,   -48,   -48,     0,
     -48,     0,     0,     0,   -48,   -48,     0,     0,    23,   -48,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    23,
       0,     2,     3,     4,     5,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,   174,   170,     0,    37,     0,     0,     0,
      38,    39,     0,     0,     0,    40,     0,     0,     0,     0,
      36,     0,     0,     0,   174,   171,     0,    37,     0,     0,
       0,    38,    39,     0,     0,   -47,    40,   -47,   -47,   -47,
     -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -49,     0,   -49,   -49,
     -49,   -49,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -47,     0,     0,     0,
     -47,   -47,     0,   -47,     0,     0,     0,   -47,   -47,     0,
       0,     0,   -47,     0,     0,     0,     0,   -49,     0,     0,
       0,   -49,   -49,     0,   -49,     0,     0,     0,   -49,   -49,
       0,     0,   -34,   -49,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,     0,     0,     0,   -34,   269,     0,
     -34,     0,     0,     0,   -34,   -34,     0,     0,     0,   -34,
       0,     0,     0,     0,   -34,     0,     0,     0,   -34,   302,
       0,   -34,     0,     0,     0,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,     0,     0,     0,   -34,   400,     0,   -34,     0,     0,
       0,   -34,   -34,     0,     0,     0,   -34,     0,     0,     0,
       0,   -33,     0,     0,     0,   -33,   -33,     0,   -33,     0,
       0,     0,   -33,   -33,     0,     0,    23,   -33,     2,     3,
       4,     5,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,    23,     0,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,   174,   493,     0,    37,     0,     0,     0,    38,    39,
       0,     0,     0,    40,     0,     0,     0,     0,    36,     0,
       0,     0,   174,   500,     0,    37,     0,     0,     0,    38,
      39,     0,     0,    23,    40,     2,     3,     4,     5,     0,
       0,    24,    25,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,   -35,     0,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   309,   310,   311,   312,   313,
     314,     0,     0,     0,    36,     0,   211,   212,   174,   521,
       0,    37,     0,     0,     0,    38,    39,     0,     0,     0,
      40,     0,     0,     0,     0,   -35,     0,     0,     0,   -35,
     -35,     0,   -35,     0,     0,     0,   -35,   -35,     0,     0,
       0,   -35,     0,     0,     0,   315,     0,     0,     0,   214,
     215,     0,     0,     0,   216,   340,   341,   342,   343,   344,
     345,     0,     0,     0,     0,     0,   232,   233,   371,   372,
     373,   374,   375,   376,     0,     0,     0,     0,     0,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   346,     0,     0,     0,   235,
     236,     0,     0,     0,   237,     0,     0,     0,   377,     0,
       0,     0,   256,   257,     0,     0,     0,   258,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   338,
       0,   -83,     0,     0,   -83,   339,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   369,     0,   -83,     0,   -83,   -83,
     370,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     271,   -83,   -83,     0,     0,     0,   272,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   307,     0,   -83,     0,     0,
       0,   308,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -83,   304,     0,     0,     0,     0,     0,   305,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,     0,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -86,     0,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -88,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   368,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -79,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -86,     0,   -86,   -86,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,   -87,
       0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   399,     0,
     -73,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -79,     0,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -83,
     -83,   -83,   -83,   -83,   -83,   406,   -83,     0,     0,     0,
       0,   407,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     432,   -64,   -64,   -64,   332,   333,   433,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -81,     0,
       0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -81,     0,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -89,     0,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,   -80,     0,     0,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
       0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -80,     0,   -80,   -80,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,     0,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -85,     0,     0,   -85,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,   -66,   -66,   -66,   -66,   -66,   334,   335,
     336,   -69,   -69,   -69,   -69,   -69,   -69,   -86,     0,     0,
     -86,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,   -84,
     -84,   -84,   -84,   -87,     0,     0,   -87,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,   -88,
       0,     0,   -88,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -73,   -73,   -73,   -73,   -73,
     -73,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,   -73,     0,     0,   100,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -79,   -79,   -79,   -79,   -79,   -79,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -79,     0,     0,   -79,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,   -81,   -81,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,   -88,   -88,   -81,     0,     0,
     -81,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -77,   -77,   -77,
     -77,   -77,   -77,   -89,     0,     0,   -89,     0,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,
     -80,   -80,   -80,   -80,   -80,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -73,   -73,   -73,   -73,   -73,   -73,   -80,
       0,     0,   -80,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,
     -82,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -84,
     -84,   -84,   -84,   -84,   -84,   -82,     0,     0,   -82,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -84,   -84,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -85,   -85,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   -87,   -87,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -73,   301,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -79,   -79,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   337,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   365,   366,   367,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,   -88,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -81,   -81,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,   -89,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   365,   366,   367,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   365,   366,   367,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   396,   397,   398,   -68,   -68,
       0,     0,   -68,   -68,   -68,   -68,   396,   397,   398,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -71,   -71,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -80,   -80,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -82,   -82,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -81,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -66,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -66,   -66,   -66,
     -66,    97,    98,    99,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -69,     0,     0,     0,     0,     0,
       0,   -77,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,     0,     0,   -78,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -74,   -74,   -74,   -74,   -74,   -74,     0,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,     0,   -75,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,     0,
     -67,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,
     -67,   -67,   -67,    97,    98,    99,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,   -68,     0,     0,     0,
       0,     0,     0,   -70,     0,   -68,   -68,   -68,   -68,    97,
      98,    99,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -71,
     -66,   -66,   -66,   -66,   -66,   -66,   -72,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -66,   -69,   -69,   -69,   -69,   -69,   -69,   -66,
     -66,   -66,   -66,   298,   299,   300,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -69,   -85,   -85,   -85,   -85,
     -85,   -85,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,
       0,     0,     0,     0,     0,     0,   -85,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,     0,     0,     0,   -87,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -88,   -84,   -84,   -84,   -84,
     -84,   -84,   -79,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -85,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -87,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -77,   -77,   -77,   -77,   -77,   -77,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,   -77,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,
     -79,   -79,   -79,   -79,   -79,   -79,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -79,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -78,   -74,   -74,   -74,
     -74,   -74,   -74,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -74,
     -79,   -79,   -79,   -79,   -79,   -79,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,   -76,   -76,   -76,   -76,   -76,   -76,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -76,   -78,   -78,   -78,
     -78,   -78,   -78,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -67,   -67,   -67,
     -67,   298,   299,   300,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -68,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   298,   299,   300,   -70,   -71,   -71,
     -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
     -71,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -81,   -81,   -81,   -81,   -81,
     -81,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -81,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,   -89,   -67,   -67,   -67,
     -67,   -67,   334,   335,   336,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   334,   335,   336,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -81,   -89,   -89,   -89,   -89,   -89,   -89,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -89,   -82,   -82,   -82,   -82,   -82,   -82,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,   -81,   -81,
     -81,   -81,   -81,   -81,   -82,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -89,   -89,   -89,   -89,   -89,   -89,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -80,   -82,   -82,   -82,
     -82,   -82,   -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -65,
       0,   -65,   -65,   -65,   363,   364,   -62,     0,   -62,   -62,
     -62,   363,   364,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,
     -65,   -65,   -65,   -62,   -62,   -62,   -62,   -62,   -62,   -63,
       0,   -63,   -63,   -63,   363,   364,   -63,   -63,     0,   -65,
     -63,   -63,   394,   395,     0,   -62,   -65,   -65,   296,   297,
       0,     0,   -62,   -62,   296,   297,   -63,   -63,   -63,   -63,
     -63,   -63,   -65,   -65,   -65,   -65,   -65,   -65,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   296,   297,     0,
     -65,   -65,   -65,   332,   333,     0,   -62,   -62,   -62,   332,
     333,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     332,   333
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    43,   174,     1,     0,    36,   272,    10,
       9,     9,     6,    58,    33,    60,    36,   135,    37,    34,
      35,    36,    37,    58,    43,    60,   196,    52,    22,    58,
     148,    60,    52,    36,   152,     9,    32,    34,    35,    36,
      37,   305,     9,    58,   308,    60,    34,    35,    36,    37,
      69,    70,    71,    72,    36,    56,     1,    60,     3,     4,
       5,     6,    60,    60,    59,     0,    34,    35,    36,    37,
      58,     6,    60,    57,    58,   339,    58,     1,    60,     3,
       4,     5,     6,    36,    37,     9,    10,    11,    12,    13,
      14,    15,    60,    17,    18,    19,    20,    21,   268,    36,
       9,    10,    11,    12,    13,    14,   370,    60,    52,    36,
     150,    20,    21,   107,   133,    60,   135,     9,    36,    37,
      36,   161,   141,    60,   164,     9,   145,    54,    52,   148,
      36,   150,    56,   152,    52,    59,    36,    37,    54,    63,
      64,   160,   161,   407,    68,   164,    52,   143,   144,    52,
      59,    60,   270,    56,    63,    64,    57,    58,    58,    68,
      60,    59,   181,   182,   183,   184,   185,   186,    56,   433,
     166,     9,    10,    11,    12,    13,    14,    34,    35,    36,
      37,    52,    20,    21,   203,   303,    34,    35,    36,    37,
     454,    52,   211,   212,   213,   214,   215,   216,    57,    58,
      57,    58,    52,    32,    33,    34,    35,    36,    37,    57,
      58,   475,     9,   232,   233,   234,   235,   236,   237,    57,
      55,    59,    36,    37,    54,    63,    64,    52,    60,    58,
      68,    60,    61,    62,   253,   254,   255,   256,   257,   258,
      36,    37,     9,    57,    58,     9,    10,    11,    12,    13,
      14,   270,   271,   272,    56,    17,    20,    21,    52,    60,
     279,    57,    58,    32,    33,    34,    35,    36,    37,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   401,   303,   304,   305,    52,   307,   308,
      54,    60,    61,    62,    54,    59,   315,    36,    37,    63,
      64,    36,    37,    56,    68,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,    60,    58,    58,    60,    60,    58,   346,    60,    56,
      32,    33,    34,    35,    36,    37,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,    58,    60,    60,    57,    58,    60,   377,    61,
      62,    58,   402,    60,    36,    59,    52,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,    36,   401,   402,   424,    57,    58,   406,   407,    36,
      37,    57,    19,    20,    21,    32,    33,    34,    35,    36,
      37,    54,    57,    58,    53,   424,    33,    54,    56,    58,
      37,    60,    56,   432,   433,    52,    43,     9,    10,    11,
      12,    13,    14,    57,    61,    62,    63,    64,    20,    21,
      34,    35,    36,    37,   453,   454,    32,    33,    34,    35,
      36,    37,    69,    70,    71,    72,    57,    36,    37,    58,
      54,    60,   492,    60,    52,   474,   475,    36,    37,    58,
      52,    60,    58,    52,    60,    61,    62,    59,    58,    52,
      60,    63,    64,   492,    52,    54,    68,    17,    52,    53,
       1,    55,     3,     4,     5,     6,    54,    60,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    60,    34,    35,    36,    37,   133,    60,   135,    34,
      35,    36,    37,    58,   141,    60,    60,    58,   145,    60,
      17,   148,    54,   150,    58,   152,    60,    52,    58,    60,
      60,    52,    60,   160,   161,    56,    57,   164,    59,    58,
      60,    60,    63,    64,    58,    54,    60,    68,    32,    33,
      34,    35,    36,    37,   181,   182,   183,   184,   185,   186,
      54,     9,    10,    11,    12,    13,    14,    54,    52,    53,
      60,    55,    20,    21,    54,    59,   203,    61,    62,    63,
      64,    65,    66,    67,   211,   212,   213,   214,   215,   216,
      60,    54,     9,    10,    11,    12,    13,    14,    54,    34,
      35,    36,    37,    20,    21,   232,   233,   234,   235,   236,
     237,    59,    60,    54,    54,    63,    64,    52,    52,    53,
      68,    55,    58,     6,    60,    59,   253,   254,   255,   256,
     257,   258,     0,     1,   107,     3,     4,     5,     6,    -1,
      -1,    -1,    59,   270,   271,   272,    63,    64,    -1,    -1,
      -1,    68,   279,    -1,    32,    33,    34,    35,    36,    37,
      -1,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,    20,   303,   304,   305,    -1,
     307,   308,    60,    61,    62,    63,    64,    -1,   315,    34,
      35,    -1,    37,    38,    39,    40,    -1,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,     3,     4,     5,     6,     0,     1,   346,
       3,     4,     5,     6,    69,    70,    71,    72,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,     9,    10,    11,    12,    13,    14,
     377,    -1,    97,    98,    99,    20,    21,    -1,    -1,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,    -1,   401,   402,    -1,    -1,    -1,   406,
     407,    32,    33,    34,    35,    36,    37,     1,   133,     3,
       4,     5,     6,    -1,    59,    60,   141,   424,    63,    64,
     145,    -1,    -1,    68,    -1,   432,   433,    58,    -1,    60,
      61,    62,    63,    64,    -1,   160,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,   453,   454,     0,     1,
      -1,     3,     4,     5,     6,    -1,   181,   182,   183,   184,
     185,   186,    -1,    55,    -1,    57,    58,   474,   475,    61,
      62,    63,    64,    65,    66,    67,     0,     1,   203,     3,
       4,     5,     6,    -1,    -1,   492,   211,   212,   213,   214,
     215,   216,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,   232,   233,   234,
     235,   236,   237,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,   253,   254,
     255,   256,   257,   258,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    61,    62,    59,    60,   271,   272,    63,    64,
      60,    61,    62,    68,   279,    -1,    -1,    32,    33,    34,
      35,    36,    37,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    52,    -1,   304,
     305,    -1,   307,   308,    -1,    -1,    61,    62,    63,    64,
     315,    -1,    -1,    32,    33,    34,    35,    36,    37,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    -1,    55,    -1,    57,    58,
      -1,   346,    61,    62,    63,    64,    65,    66,    67,    -1,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     9,    10,    11,    12,
      13,    14,   377,    -1,    -1,    -1,    -1,    20,    21,    -1,
      20,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,    -1,    -1,    37,    -1,    -1,
      -1,   406,   407,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    59,    60,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,   432,   433,    69,
      70,    71,    72,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,   453,   454,
      -1,    -1,    -1,    59,    60,    95,    96,    63,    64,    -1,
      -1,    -1,    68,     1,    -1,     3,     4,     5,     6,   474,
     475,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    59,    60,    -1,    -1,    63,
      64,    -1,    -1,   133,    68,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,   145,    32,    33,    34,    35,
      36,    37,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
     160,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    57,    58,    -1,    -1,    61,    62,     1,    -1,     3,
       4,     5,     6,   183,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,   213,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    52,    -1,
      -1,    -1,    56,    57,   234,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,   255,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    59,    52,    -1,    -1,    63,    64,
      -1,   271,   272,    68,    61,    62,    63,    64,    -1,   279,
      -1,    -1,    32,    33,    34,    35,    36,    37,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    -1,    -1,
      20,   301,    52,    -1,   304,   305,    -1,   307,   308,    -1,
      -1,    61,    62,    63,    64,   315,    -1,    37,    32,    33,
      34,    35,    36,    37,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,    -1,    -1,    -1,   337,   338,   339,
      -1,    -1,    -1,    57,    58,    -1,   346,    61,    62,    69,
      70,    71,    72,    -1,    -1,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    -1,    -1,    -1,   368,   369,
     370,    91,    92,    93,    94,    -1,    -1,   377,    -1,    32,
      33,    34,    35,    36,    37,    -1,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,    -1,     0,     1,   399,
       3,     4,     5,     6,    57,    58,   406,   407,    61,    62,
      63,    64,    -1,   133,    -1,    32,    33,    34,    35,    36,
      37,   141,    -1,    -1,    -1,   145,     9,    10,    11,    12,
      13,    14,   432,   433,    -1,    -1,    53,    20,    21,    -1,
     160,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,   453,   454,    -1,    -1,     9,    10,    11,
      12,    13,    14,   183,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,   474,   475,    59,    60,    -1,    -1,
      63,    64,    -1,   203,    -1,    68,     1,    -1,     3,     4,
       5,     6,    -1,   213,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    59,    60,    -1,
      -1,    63,    64,    -1,   234,    -1,    68,     0,     1,    -1,
       3,     4,     5,     6,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,   255,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    59,    52,    -1,    -1,    63,    64,
      -1,   271,   272,    68,    61,    62,    63,    64,    -1,   279,
      -1,     0,     1,    20,     3,     4,     5,     6,   288,   289,
     290,   291,   292,   293,   294,   295,    -1,    -1,    -1,    -1,
      37,   301,    -1,    -1,   304,   305,    -1,   307,   308,    -1,
      -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    32,    33,
      34,    35,    36,    37,   324,   325,   326,   327,   328,   329,
     330,   331,    69,    70,    71,    72,    -1,   337,   338,   339,
      -1,    -1,    -1,    57,    58,    -1,   346,    61,    62,    63,
      64,    -1,    89,    90,    -1,   355,   356,   357,   358,   359,
     360,   361,   362,    -1,    -1,    -1,    -1,    -1,   368,   369,
     370,     9,    10,    11,    12,    13,    14,   377,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,   386,   387,   388,   389,
     390,   391,   392,   393,    -1,    -1,   133,     0,     1,   399,
       3,     4,     5,     6,   141,    -1,   406,   407,   145,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    59,    60,   160,    -1,    63,    64,    -1,    -1,    -1,
      68,    53,   432,   433,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,   183,    -1,    -1,    -1,
      -1,    -1,    -1,   453,   454,    -1,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,   203,    20,    21,    -1,
      -1,    20,    -1,    -1,   474,   475,   213,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    37,    -1,
       9,    10,    11,    12,    13,    14,    15,   234,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,   255,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    52,   271,   272,    -1,    56,    57,    88,
      59,    -1,   279,    -1,    63,    64,    -1,    52,    -1,    68,
      55,   288,   289,   290,   291,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,   301,    -1,    -1,   304,   305,    -1,
     307,   308,    -1,    -1,    -1,    -1,     0,     1,   315,     3,
       4,     5,     6,    -1,   133,    -1,    -1,   324,   325,   326,
     327,    -1,   141,    -1,    -1,    -1,   145,    -1,    -1,    -1,
     337,   338,   339,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      -1,   160,    32,    33,    34,    35,    36,    37,   355,   356,
     357,   358,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,   368,   369,   370,   183,    20,    21,    57,    58,    -1,
     377,    61,    62,    63,    64,    65,    66,    67,    -1,   386,
     387,   388,   389,    -1,   203,    -1,    -1,    -1,    -1,    20,
      -1,    -1,   399,    -1,   213,    -1,    -1,    -1,    -1,   406,
     407,    -1,    -1,    -1,    59,    -1,    37,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,   234,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,   432,   433,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,   255,    -1,    69,    70,
      71,    72,    -1,    -1,    57,    58,   453,   454,    61,    62,
      63,    64,   271,   272,    -1,    -1,    87,    60,    61,    62,
     279,    32,    33,    34,    35,    36,    37,   474,   475,   288,
     289,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,   301,    54,    -1,   304,   305,    -1,   307,   308,
      61,    62,    63,    64,    52,    -1,   315,    -1,    -1,    -1,
      -1,    -1,   133,    61,    62,   324,   325,    -1,    -1,    -1,
     141,    -1,    -1,    -1,   145,    -1,    -1,    -1,   337,   338,
     339,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,   160,
      32,    33,    34,    35,    36,    37,   355,   356,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    20,    -1,   368,
     369,   370,   183,    -1,    -1,    57,    58,    -1,   377,    61,
      62,    63,    64,    54,    37,    -1,    -1,   386,   387,    -1,
      61,    62,   203,     0,     1,    -1,     3,     4,     5,     6,
     399,    -1,   213,    -1,    -1,    -1,    -1,   406,   407,    32,
      33,    34,    35,    36,    37,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,   234,     9,    10,    11,    12,    13,    14,
      -1,    54,    -1,   432,   433,    20,    21,    -1,    61,    62,
      63,    64,    -1,    -1,   255,     0,     1,   100,     3,     4,
       5,     6,    -1,    -1,   453,   454,    -1,    -1,    -1,    -1,
     271,   272,    -1,    -1,    -1,    -1,     0,     1,   279,     3,
       4,     5,     6,    -1,    59,   474,   475,   288,    63,    64,
     133,     0,     1,    68,     3,     4,     5,     6,   141,    -1,
     301,    -1,   145,   304,   305,    -1,   307,   308,    -1,    -1,
      -1,    -1,    -1,    -1,   315,     0,     1,   160,     3,     4,
       5,     6,    -1,   324,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,   337,   338,   339,    -1,
     183,    -1,    -1,     0,     1,   346,     3,     4,     5,     6,
      -1,    -1,    -1,    58,   355,    60,    61,    62,    63,    64,
     203,    -1,    -1,    -1,    -1,    20,    21,   368,   369,   370,
     213,    -1,    -1,    -1,    -1,    -1,   377,    -1,    33,    -1,
      -1,    -1,    37,    -1,    -1,   386,    -1,    -1,    -1,    -1,
      -1,   234,     9,    10,    11,    12,    13,    14,   399,    -1,
      -1,    -1,    -1,    20,    21,   406,   407,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    69,    70,    71,    72,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,   271,   272,
      -1,   432,   433,    -1,    -1,    -1,   279,    -1,    -1,    52,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    61,    62,
      -1,    68,   453,   454,    -1,    -1,    -1,    -1,   301,    -1,
      -1,   304,   305,    -1,   307,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   315,   474,   475,    -1,     0,     1,   133,     3,
       4,     5,     6,    -1,    -1,    -1,   141,    -1,    -1,    -1,
     145,    -1,    -1,    -1,   337,   338,   339,    -1,    -1,    -1,
      -1,    -1,    -1,   346,     1,   160,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,   368,   369,   370,   183,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,   203,    20,
      21,    -1,    -1,    -1,    -1,    52,   399,    -1,   213,    56,
      57,    -1,    59,   406,   407,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    32,    33,    34,    35,    36,    37,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,   432,
     433,    -1,    63,    64,    -1,    -1,    55,    68,    -1,    58,
     255,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
     453,   454,    -1,    -1,    -1,    -1,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   474,   475,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,   304,
     305,    -1,   307,   308,     1,    -1,     3,     4,     5,     6,
     315,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    32,    33,    34,
      35,    36,    37,   338,   339,    59,    -1,    -1,    -1,    63,
      64,   346,    -1,    -1,    68,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    61,    62,    -1,    56,
      57,    -1,    59,    -1,   369,   370,    63,    64,    -1,    -1,
      -1,    68,   377,    -1,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,     1,    -1,     3,     4,     5,
       6,   406,   407,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,   432,   433,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    52,    -1,   453,   454,
      56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,     1,    -1,     3,     4,     5,     6,   474,
     475,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    54,
      68,    -1,    -1,    -1,    -1,    52,    61,    62,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
       1,    68,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    52,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,    54,    68,    -1,    -1,
      -1,    -1,    52,    61,    62,    -1,    56,    57,    -1,    59,
      -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,     1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,     1,    68,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    59,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    -1,
      -1,    63,    64,    -1,    -1,     1,    68,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,
      68,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,     1,    68,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    52,    -1,    20,    21,    56,    57,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    68,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    53,
      -1,    55,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    53,    -1,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      53,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    53,    -1,    55,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    55,    -1,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    55,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    55,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    32,
      33,    34,    35,    36,    37,    53,    54,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      53,    60,    61,    62,    63,    64,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      55,    -1,    57,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    55,    -1,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    60,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    60,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    60,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    60,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    60,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    60,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    60,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    60,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    60,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    57,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    32,    33,    34,    35,    36,    37,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    52,    -1,
      61,    62,    63,    64,    65,    66,    67,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    61,    62,    63,    64,    65,    66,    67,
      61,    62,    63,    64,    65,    66,    67,    32,    33,    34,
      35,    36,    37,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    61,    62,    63,    64,
      65,    66,    67,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    61,
      62,    63,    64,    65,    66,    67,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    61,    62,    63,    64,    65,    66,    67,    61,
      62,    63,    64,    65,    66,    67,    32,    33,    34,    35,
      36,    37,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    61,    62,    63,    64,    65,
      66,    67,    61,    62,    63,    64,    65,    66,    67,    32,
      33,    34,    35,    36,    37,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      32,    33,    34,    35,    36,    37,    52,    -1,    61,    62,
      63,    64,    65,    66,    67,    61,    62,    63,    64,    65,
      66,    67,    54,    32,    33,    34,    35,    36,    37,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    54,    32,    33,    34,    35,
      36,    37,    61,    62,    63,    64,    65,    66,    67,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    61,    62,
      63,    64,    65,    66,    67,    61,    62,    63,    64,    65,
      66,    67,    32,    33,    34,    35,    36,    37,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    61,    62,    63,    64,    65,    66,    67,    61,    62,
      63,    64,    65,    66,    67,    32,    33,    34,    35,    36,
      37,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    32,    33,    34,    35,
      36,    37,    52,    -1,    61,    62,    63,    64,    65,    66,
      67,    61,    62,    63,    64,    65,    66,    67,    54,    32,
      33,    34,    35,    36,    37,    61,    62,    63,    64,    65,
      66,    67,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    54,    32,    33,    34,    35,
      36,    37,    61,    62,    63,    64,    65,    66,    67,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    54,    32,    33,    34,    35,    36,    37,    61,
      62,    63,    64,    65,    66,    67,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    54,
      32,    33,    34,    35,    36,    37,    61,    62,    63,    64,
      65,    66,    67,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    54,    32,    33,    34,
      35,    36,    37,    61,    62,    63,    64,    65,    66,    67,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    54,
      32,    33,    34,    35,    36,    37,    61,    62,    63,    64,
      65,    66,    67,    54,    32,    33,    34,    35,    36,    37,
      61,    62,    63,    64,    65,    66,    67,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    54,    32,    33,    34,
      35,    36,    37,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      54,    32,    33,    34,    35,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    54,    32,    33,
      34,    35,    36,    37,    61,    62,    63,    64,    65,    66,
      67,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    54,    32,    33,    34,    35,    36,
      37,    61,    62,    63,    64,    65,    66,    67,    -1,    32,
      33,    34,    35,    36,    37,    52,    32,    33,    34,    35,
      36,    37,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    52,    60,    61,    62,
      63,    64,    65,    66,    67,    61,    62,    63,    64,    65,
      66,    67,    32,    33,    34,    35,    36,    37,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    60,    61,
      62,    63,    64,    65,    66,    67,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      54,    32,    33,    34,    35,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    54,    32,    33,    34,    35,    36,    37,
      61,    62,    63,    64,    65,    66,    67,    52,    32,    33,
      34,    35,    36,    37,    52,    -1,    61,    62,    63,    64,
      65,    66,    67,    61,    62,    63,    64,    65,    66,    67,
      32,    33,    34,    35,    36,    37,    60,    61,    62,    63,
      64,    65,    66,    67,    32,    33,    34,    35,    36,    37,
      -1,    -1,    32,    33,    34,    35,    36,    37,    60,    61,
      62,    63,    64,    65,    66,    67,    54,    32,    33,    34,
      35,    36,    37,    61,    62,    63,    64,    65,    66,    67,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    54,
      32,    33,    34,    35,    36,    37,    61,    62,    63,    64,
      65,    66,    67,    32,    33,    34,    35,    36,    37,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    58,    -1,    60,    61,
      62,    63,    64,    32,    33,    34,    35,    36,    37,    -1,
      -1,    32,    33,    34,    35,    36,    37,    32,    33,    34,
      35,    36,    37,    32,    33,    34,    35,    36,    37,    58,
      -1,    60,    61,    62,    63,    64,    57,    58,    -1,    54,
      61,    62,    63,    64,    -1,    54,    61,    62,    63,    64,
      -1,    -1,    61,    62,    63,    64,    32,    33,    34,    35,
      36,    37,    32,    33,    34,    35,    36,    37,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    54,    32,
      33,    34,    35,    36,    37,    61,    62,    63,    64,    -1,
      60,    61,    62,    63,    64,    -1,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    70,    71,    72,    74,
     101,    52,    56,    83,     0,    71,    52,     9,    57,    84,
      53,    55,    59,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    20,    21,    52,    59,    63,    64,
      68,    72,    83,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   101,    54,
      90,    90,     1,     3,    60,    81,    82,   101,    52,    53,
      59,    59,    59,    83,    90,    97,    98,    97,    90,    97,
      97,    97,    52,    57,    86,    52,    52,    36,    37,    34,
      35,    32,    33,    61,    62,    63,    64,    65,    66,    67,
      55,     9,    55,    54,    60,    60,    56,    58,    60,     9,
      90,    60,    90,   100,    90,    90,    17,    60,    92,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    91,    10,    56,    56,    77,    80,    82,    56,    53,
      54,    58,    60,    60,    60,    59,    73,    90,    76,    79,
      85,    57,    75,    78,    54,    90,    83,    83,    90,    57,
      58,    85,    57,    57,    85,    57,    16,    60,    57,    90,
      57,    57,    83,    52,    56,     9,    10,    11,    12,    13,
      14,    20,    21,    59,    63,    64,    68,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    56,     9,    10,    11,
      12,    13,    14,    59,    99,     9,    10,    11,    12,    13,
      14,    20,    21,    59,    63,    64,    68,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     9,    10,    11,    12,
      13,    14,    20,    21,    59,    63,    64,    68,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     9,    10,    11,
      12,    13,    14,    20,    21,    59,    63,    64,    68,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    56,    57,
      84,    53,    59,     9,    10,    11,    12,    13,    14,    59,
      97,    98,    99,    97,    90,    97,    97,    97,    36,    37,
      34,    35,    32,    33,    61,    62,    63,    64,    65,    66,
      67,    55,    57,    84,    53,    59,    90,    53,    59,     9,
      10,    11,    12,    13,    14,    59,    97,    98,    99,    97,
      90,    97,    97,    97,    36,    37,    34,    35,    32,    33,
      61,    62,    63,    64,    65,    66,    67,    55,    53,    59,
       9,    10,    11,    12,    13,    14,    59,    97,    98,    99,
      97,    90,    97,    97,    97,    36,    37,    34,    35,    32,
      33,    61,    62,    63,    64,    65,    66,    67,    55,    53,
      59,     9,    10,    11,    12,    13,    14,    59,    97,    98,
      99,    97,    90,    97,    97,    97,    36,    37,    34,    35,
      32,    33,    61,    62,    63,    64,    65,    66,    67,    55,
      57,    84,    85,    90,    60,   100,    53,    59,    90,    60,
      92,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    91,    85,    90,    60,   100,    60,    90,
      60,   100,    53,    59,    90,    60,    92,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    91,
      90,    60,   100,    53,    59,    90,    60,    92,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    97,
      91,    90,    60,   100,    53,    59,    90,    60,    92,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    91,    85,    57,    54,    60,    90,    60,   100,    60,
      57,    54,    60,    54,    60,    90,    60,   100,    60,    54,
      60,    90,    60,   100,    60,    54,    60,    90,    60,   100,
      60,    57,    54,    60,    54,    60,    54,    60,    54,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    73,    75,    74,    76,    74,
      77,    74,    78,    74,    79,    74,    80,    74,    74,    81,
      81,    82,    82,    83,    84,    83,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    94,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101
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
       3,     3,     3,     1,     2,     2,     2,     2,     2,     1,
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
  switch (yytype)
    {
    case 9: /* IDENTIFIER  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2648 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2654 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2660 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2666 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2672 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 58 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2678 "src/parser.c"
        break;

    case 70: /* declaration_list  */
#line 60 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2684 "src/parser.c"
        break;

    case 71: /* declaration  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2690 "src/parser.c"
        break;

    case 72: /* init_declarator  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2696 "src/parser.c"
        break;

    case 73: /* initializer_list  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2702 "src/parser.c"
        break;

    case 74: /* function_definition  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2708 "src/parser.c"
        break;

    case 81: /* argument_list  */
#line 59 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2714 "src/parser.c"
        break;

    case 82: /* argument  */
#line 59 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2720 "src/parser.c"
        break;

    case 83: /* compound_statement  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2726 "src/parser.c"
        break;

    case 85: /* statement_list  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2732 "src/parser.c"
        break;

    case 86: /* statement  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2738 "src/parser.c"
        break;

    case 87: /* conditional_statement  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2744 "src/parser.c"
        break;

    case 88: /* iteration_statement  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2750 "src/parser.c"
        break;

    case 89: /* return_statement  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2756 "src/parser.c"
        break;

    case 90: /* assignment_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2762 "src/parser.c"
        break;

    case 91: /* logical_or_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2768 "src/parser.c"
        break;

    case 92: /* logical_and_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2774 "src/parser.c"
        break;

    case 93: /* equality_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2780 "src/parser.c"
        break;

    case 94: /* relational_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2786 "src/parser.c"
        break;

    case 95: /* additive_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2792 "src/parser.c"
        break;

    case 96: /* multiplicative_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2798 "src/parser.c"
        break;

    case 97: /* unary_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2804 "src/parser.c"
        break;

    case 98: /* postfix_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2810 "src/parser.c"
        break;

    case 99: /* primary_expression  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2816 "src/parser.c"
        break;

    case 100: /* argument_call_list  */
#line 61 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2822 "src/parser.c"
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
#line 101 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3088 "src/parser.c"
    break;

  case 3:
#line 102 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3094 "src/parser.c"
    break;

  case 4:
#line 106 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3100 "src/parser.c"
    break;

  case 5:
#line 107 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3106 "src/parser.c"
    break;

  case 6:
#line 108 "src/language.y"
    { (yyval.node) = NULL; }
#line 3112 "src/parser.c"
    break;

  case 7:
#line 109 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3118 "src/parser.c"
    break;

  case 8:
#line 113 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   ,     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3124 "src/parser.c"
    break;

  case 9:
#line 114 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3130 "src/parser.c"
    break;

  case 10:
#line 115 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3136 "src/parser.c"
    break;

  case 11:
#line 116 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free_label((yyvsp[-6].sval)); }
#line 3142 "src/parser.c"
    break;

  case 12:
#line 117 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free_label((yyvsp[-7].sval)); }
#line 3148 "src/parser.c"
    break;

  case 13:
#line 118 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free_label((yyvsp[-4].sval)); free_label((yyvsp[0].sval)); }
#line 3154 "src/parser.c"
    break;

  case 14:
#line 122 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3160 "src/parser.c"
    break;

  case 15:
#line 123 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3166 "src/parser.c"
    break;

  case 16:
#line 127 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3172 "src/parser.c"
    break;

  case 17:
#line 127 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3178 "src/parser.c"
    break;

  case 18:
#line 128 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3184 "src/parser.c"
    break;

  case 19:
#line 128 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3190 "src/parser.c"
    break;

  case 20:
#line 129 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3196 "src/parser.c"
    break;

  case 21:
#line 129 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3202 "src/parser.c"
    break;

  case 22:
#line 130 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3208 "src/parser.c"
    break;

  case 23:
#line 130 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3214 "src/parser.c"
    break;

  case 24:
#line 131 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3220 "src/parser.c"
    break;

  case 25:
#line 131 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3226 "src/parser.c"
    break;

  case 26:
#line 132 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3232 "src/parser.c"
    break;

  case 27:
#line 132 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-5].sval)); }
#line 3238 "src/parser.c"
    break;

  case 28:
#line 133 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3244 "src/parser.c"
    break;

  case 29:
#line 137 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3250 "src/parser.c"
    break;

  case 30:
#line 138 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3256 "src/parser.c"
    break;

  case 31:
#line 142 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3262 "src/parser.c"
    break;

  case 32:
#line 143 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3268 "src/parser.c"
    break;

  case 33:
#line 147 "src/language.y"
    { (yyval.node) = NULL; }
#line 3274 "src/parser.c"
    break;

  case 34:
#line 148 "src/language.y"
    { begin(NULL); }
#line 3280 "src/parser.c"
    break;

  case 35:
#line 148 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3286 "src/parser.c"
    break;

  case 36:
#line 152 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3292 "src/parser.c"
    break;

  case 37:
#line 153 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3298 "src/parser.c"
    break;

  case 38:
#line 157 "src/language.y"
    { (yyval.node) = NULL; }
#line 3304 "src/parser.c"
    break;

  case 39:
#line 158 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3310 "src/parser.c"
    break;

  case 40:
#line 159 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3316 "src/parser.c"
    break;

  case 41:
#line 160 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3322 "src/parser.c"
    break;

  case 42:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3328 "src/parser.c"
    break;

  case 43:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3334 "src/parser.c"
    break;

  case 44:
#line 163 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3340 "src/parser.c"
    break;

  case 45:
#line 164 "src/language.y"
    { (yyval.node) = NULL; }
#line 3346 "src/parser.c"
    break;

  case 46:
#line 168 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3352 "src/parser.c"
    break;

  case 47:
#line 169 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3358 "src/parser.c"
    break;

  case 48:
#line 173 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3364 "src/parser.c"
    break;

  case 49:
#line 174 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3370 "src/parser.c"
    break;

  case 50:
#line 178 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3376 "src/parser.c"
    break;

  case 51:
#line 179 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3382 "src/parser.c"
    break;

  case 52:
#line 183 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3388 "src/parser.c"
    break;

  case 53:
#line 184 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3394 "src/parser.c"
    break;

  case 54:
#line 190 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3400 "src/parser.c"
    break;

  case 55:
#line 191 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3406 "src/parser.c"
    break;

  case 56:
#line 195 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3412 "src/parser.c"
    break;

  case 57:
#line 196 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/}
#line 3418 "src/parser.c"
    break;

  case 58:
#line 200 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3424 "src/parser.c"
    break;

  case 59:
#line 201 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3430 "src/parser.c"
    break;

  case 60:
#line 202 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3436 "src/parser.c"
    break;

  case 61:
#line 206 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3442 "src/parser.c"
    break;

  case 62:
#line 207 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3448 "src/parser.c"
    break;

  case 63:
#line 208 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3454 "src/parser.c"
    break;

  case 64:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3460 "src/parser.c"
    break;

  case 65:
#line 210 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3466 "src/parser.c"
    break;

  case 66:
#line 214 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3472 "src/parser.c"
    break;

  case 67:
#line 215 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3478 "src/parser.c"
    break;

  case 68:
#line 216 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3484 "src/parser.c"
    break;

  case 69:
#line 220 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3490 "src/parser.c"
    break;

  case 70:
#line 221 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3496 "src/parser.c"
    break;

  case 71:
#line 222 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3502 "src/parser.c"
    break;

  case 72:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3508 "src/parser.c"
    break;

  case 73:
#line 227 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3514 "src/parser.c"
    break;

  case 74:
#line 228 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3520 "src/parser.c"
    break;

  case 75:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3526 "src/parser.c"
    break;

  case 76:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3532 "src/parser.c"
    break;

  case 77:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3538 "src/parser.c"
    break;

  case 78:
#line 232 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3544 "src/parser.c"
    break;

  case 79:
#line 236 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3550 "src/parser.c"
    break;

  case 80:
#line 237 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3556 "src/parser.c"
    break;

  case 81:
#line 238 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free_label((yyvsp[-2].sval));}
#line 3562 "src/parser.c"
    break;

  case 82:
#line 239 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3568 "src/parser.c"
    break;

  case 83:
#line 243 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name); free_label((yyvsp[0].sval)); }
#line 3574 "src/parser.c"
    break;

  case 84:
#line 244 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3580 "src/parser.c"
    break;

  case 85:
#line 245 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3586 "src/parser.c"
    break;

  case 86:
#line 246 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3592 "src/parser.c"
    break;

  case 87:
#line 247 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3598 "src/parser.c"
    break;

  case 88:
#line 248 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3604 "src/parser.c"
    break;

  case 89:
#line 249 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3610 "src/parser.c"
    break;

  case 90:
#line 253 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3616 "src/parser.c"
    break;

  case 91:
#line 254 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3622 "src/parser.c"
    break;

  case 92:
#line 258 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3628 "src/parser.c"
    break;

  case 93:
#line 259 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3634 "src/parser.c"
    break;

  case 94:
#line 260 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3640 "src/parser.c"
    break;

  case 95:
#line 261 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3646 "src/parser.c"
    break;


#line 3650 "src/parser.c"

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
#line 264 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
