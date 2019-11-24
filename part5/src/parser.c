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
#line 80 "src/language.y"

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
#define YYLAST   8242

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
       0,   102,   102,   103,   107,   108,   109,   110,   114,   115,
     116,   117,   118,   119,   123,   124,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   138,
     139,   143,   144,   148,   149,   149,   153,   154,   158,   159,
     160,   161,   162,   163,   164,   165,   169,   170,   174,   175,
     179,   180,   184,   185,   189,   190,   194,   195,   199,   200,
     201,   205,   206,   207,   208,   209,   213,   214,   215,   219,
     220,   221,   222,   226,   227,   228,   229,   230,   231,   235,
     236,   237,   238,   242,   243,   244,   245,   246,   247,   248,
     252,   253,   257,   258,   259,   260
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
     360,    11,    24,    33,    53,    79,   545,   568,    -7,   577,
     103,   632,  1453,   653,  -265,   781,   798,   189,  1080,  4323,
      71,  1818,    34,    80,   790,   768,  5132,  5148,  5195,  5211,
      77,    81,   -37,   191,  1934,  1934,  1746,  2032,  1934,  1934,
    1934,    92,  2443,  2600,  2668,  2739,  2805,    94,    99,    22,
     269,   278,  5140,   448,  6657,  6704,  5258,  5274,   152,   128,
     137,   168,   173,    -2,   169,    31,    97,   231,  2871,  2165,
      90,  2032,  2032,   229,   197,  6711,  6727,  6759,   196,  6775,
    6782,  6829,  2937,  1099,  3003,  3069,  3135,  1934,  1934,  1934,
    1934,  1934,  1934,  1934,  1934,  1934,  1934,  1934,  1934,  1934,
    1934,   154,    -1,   216,  1163,   266,  3201,   498,   272,   -33,
     233,  5321,   118,   172,   292,   297,   322,  5337,   396,   415,
    5203,  5266,   694,  1279,  2041,  4872,  6836,  6852,  6884,  6900,
    6907,   116,   339,  2260,  3267,  4323,   340,   187,  3333,   344,
    5384,  2323,  5400,   352,   355,  2032,    39,   246,  4323,   358,
    3399,  1267,  4323,   366,   349,   408,   479,  3465,   369,   378,
     390,  3531,  1284,  1417,  3597,  1481,   355,   381,   394,   328,
    1581,  1613,  3663,  3729,  3795,  4403,  5447,  5461,  5508,  5522,
    5569,  2480,  2480,  2032,  2480,  2480,  2480,    -8,    10,   158,
    2743,  7971,  6954,  6968,  5583,  5630,  3861,   398,  6975,  7022,
    7029,  7045,  7077,  2032,  7093,  4450,  2766,  2832,  2898,  2964,
    3030,  2523,  2523,  2032,  2523,  2523,  2523,     0,    -6,    55,
    1536,  1416,  3492,  3558,  3096,  3162,  1012,  4512,  4525,  4538,
    4585,  4598,  4334,  4334,  2032,  4334,  4334,  4334,    35,   -11,
      47,  2087,   271,  5640,  5650,  4611,  4658,  4388,  4671,  4684,
    4731,  4744,  4757,  4340,  4340,  2032,  4340,  4340,  4340,     8,
     374,   302,  2103,   859,   200,   874,  4804,  4817,  3927,  3993,
    4323,  2165,   553,  4864,  7109,  7125,  7172,  7186,  7201,  2032,
    7248,  7262,  7277,  7324,   418,  7338,  7353,  7400,  2480,  2480,
    2480,  2480,  2480,  2480,  2480,  2480,  2480,  2480,  2480,  2480,
    2480,  2480,   395,  4323,  2165,   587,   426,  2165,   865,  4879,
    3624,  3690,  3756,  3822,  3888,  2032,  3954,  4020,  4086,  4152,
     427,  4218,  7408,  7416,  2523,  2523,  2523,  2523,  2523,  2523,
    2523,  2523,  2523,  2523,  2523,  2523,  2523,  2523,  2165,  1084,
    1652,  5697,  5707,  5717,  5727,  5774,  2032,  5784,  5794,  5804,
    5851,   439,  5861,  5871,  5881,  4334,  4334,  4334,  4334,  4334,
    4334,  4334,  4334,  4334,  4334,  4334,  4334,  4334,  4334,  2165,
    1184,  4465,  5928,  5939,  5950,  5997,  6008,  2032,  6019,  6066,
    6077,  6088,   459,  6135,  6146,  6157,  4340,  4340,  4340,  4340,
    4340,  4340,  4340,  4340,  4340,  4340,  4340,  4340,  4340,  4340,
    1122,  4323,  4059,   372,  6204,   421,  2165,  1218,   472,  6218,
     177,   165,  8122,  8131,  7982,  7993,  8037,  8048,  7463,  7477,
    7492,  7539,  7553,    36,  4125,   486,  7560,   447,  7607,   490,
    3228,   455,  2165,  1488,   492,  3294,    51,    96,  8173,  8180,
    1514,  1621,  8055,  8062,  7615,  7623,  7631,  7639,  7686,    27,
     499,  4926,   462,  2165,  1731,   500,  4939,     1,   150,  8106,
    8113,   945,  1341,  1506,  2229,  6228,  6275,  6285,  6295,  6305,
     117,   507,  4952,   466,  2165,  1835,   510,  4999,   419,   332,
    2501,  2672,  1957,  7911,  7919,  7927,  6352,  6363,  6374,  6421,
    6432,   102,  4191,  4257,  6446,  6493,   521,  7700,   469,  7714,
     562,  7761,  7768,  3360,  3426,   539,  7776,   470,  7784,  5012,
    5025,   541,  6503,   481,  6513,  5072,  5085,   548,  6560,   534,
    6571,  1201,  7831,  7845,  7853,  7900,  6581,  6628,  6639,  6650
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
    -265,  -265,   597,    86,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,   497,     4,  -170,  -118,   -40,  -265,  -265,
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
      56,   194,    56,    84,   270,    13,    10,   -92,   405,   132,
     -54,   356,    10,   288,    56,   -54,   325,   150,   224,   196,
     139,   324,   -55,   356,    56,   -31,   303,   -31,    67,   386,
     161,   -54,   289,   -92,   164,    62,    73,    63,     3,     4,
       5,   427,   -93,    87,   431,    16,   -52,   -54,   324,   -54,
     194,   245,   224,   224,   -54,   133,   355,   288,   105,   -55,
     -52,   -55,   -94,    11,   -54,   -52,   -52,    12,   -56,   -56,
     357,   358,   -55,   325,   -52,   452,   -56,   -56,   326,   327,
     175,   176,   177,   178,   179,   180,     8,   -53,   -95,   107,
     -53,   108,     8,   -52,    64,   -52,   159,   160,   401,   226,
     227,   228,   229,   230,   231,   -56,   473,   -56,   181,   182,
      84,   -55,    17,    67,   266,   -56,    56,   -57,   -57,   326,
     327,    84,   245,   386,    84,    59,   224,   232,   233,    56,
     183,    56,    68,    56,   184,   185,    71,    87,   355,   186,
      72,   266,    56,   498,    82,    56,    85,   156,   157,   234,
     111,    86,   402,   235,   236,   -29,   -57,   -29,   237,   -53,
     -53,   101,   281,   281,   224,   281,   281,   281,   -53,   507,
     172,   -57,   -57,   357,   358,   -53,   -90,   -53,   -90,   -56,
     -56,   290,   291,   102,   224,   424,   -57,   -57,   290,   291,
     513,   103,   317,   317,   224,   317,   317,   317,   -55,   289,
      24,    25,    26,    27,    28,    29,    -8,    20,   -57,    21,
     -57,   519,   -56,   348,   348,   224,   348,   348,   348,   -57,
     -10,   -66,   -66,   -66,   -66,   106,   -66,   -66,    34,    35,
     141,   -55,   142,   104,   379,   379,   224,   379,   379,   379,
     109,    -8,    20,   -50,    21,   -30,   116,   -30,    22,   -51,
      37,    56,   194,   245,    38,    39,   117,   -66,   -66,    40,
     224,   -66,   -66,   -66,   -66,   396,   397,   398,    -9,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   492,    56,   194,   245,   140,   194,   245,
     -54,    88,   -61,   -61,   -61,   -61,   224,   -61,   -61,   -56,
     -56,    89,    90,   -14,   -14,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   194,
     245,   -54,   134,   -56,   -56,   388,   389,   224,   138,   -61,
     -56,   -61,   -61,   -61,   363,   364,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     194,   245,   143,   -57,   -57,   388,   389,   144,   224,   -56,
     -56,     1,    84,     2,     3,     4,     5,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   145,    56,    56,    84,   -15,   -15,   194,   245,   -57,
     -57,   -13,    57,   195,    57,   -54,   387,   151,   154,   247,
     248,   249,   250,   251,   252,    56,    57,   -32,   268,   -32,
     225,   174,   -33,   194,   245,   162,    57,   -55,    88,   -83,
     -83,   -83,   -83,   165,   -83,   -83,   494,   253,   254,   167,
     -11,   -54,   -54,   173,   194,   245,   -57,   -57,    89,    90,
     -55,   387,   195,   246,   225,   225,   -12,   168,   -55,   255,
     -83,   304,    84,   256,   257,   194,   245,   305,   258,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -91,   -57,   -91,   -61,
     -61,   -61,   -61,    56,   -61,   -61,   -55,   -55,   409,   141,
     -46,   495,   -46,   -46,   -46,   -46,   428,   435,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   166,   -46,   -46,   -46,   456,
     -61,     2,     3,     4,     5,   141,   267,   502,    57,   -61,
     -61,    95,    96,   141,   246,   504,   -46,   -46,   225,   477,
     141,    57,   510,    57,   141,    57,   516,   141,   141,   523,
     525,   -46,   499,   267,    57,   -46,   -46,    57,   -46,   141,
     501,   527,   -46,   -46,   503,    14,     1,   -46,     2,     3,
       4,     5,   508,   509,   282,   282,   225,   282,   282,   282,
     514,   515,   226,   227,   228,   229,   230,   231,    -2,    -2,
     520,    -2,    -2,    -2,    -2,   522,   225,    -4,    -4,   -35,
      -4,    -4,    -4,    -4,   318,   318,   225,   318,   318,   318,
     232,   233,   141,   524,   529,   526,   226,   227,   228,   229,
     230,   231,   528,    15,   137,   349,   349,   225,   349,   349,
     349,     0,   234,   404,     0,     0,   235,   236,     0,     0,
       0,   237,     0,     0,   232,   233,   380,   380,   225,   380,
     380,   380,    -6,    -6,     0,    -6,    -6,    -6,    -6,     0,
       0,     0,     0,    57,   195,   246,   234,   426,     0,     0,
     235,   236,   225,    -7,    -7,   237,    -7,    -7,    -7,    -7,
       0,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   193,    57,   195,   246,     0,
     195,   246,     0,     0,     0,     0,     0,     0,   225,    75,
      77,     0,   223,    79,    80,    81,     0,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   195,   246,     0,     0,   -64,   -64,   -64,   -64,   225,
     -64,   -64,     0,     0,   193,   244,   223,   223,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   195,   246,     0,     0,   -64,     0,     0,     0,
     225,     0,   128,   129,   130,   -64,   -64,    95,    96,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,     0,    57,    57,     0,     0,     0,   195,
     246,    -3,    -3,     0,    -3,    -3,    -3,    -3,   265,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   244,    57,    -5,    -5,
     223,    -5,    -5,    -5,    -5,   195,   246,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   265,   -83,   -83,     0,     0,
     -84,     0,     0,   -84,     0,     0,   195,   246,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   280,   283,   223,   285,
     286,   287,   -83,    69,     0,   -83,     0,   195,   246,    70,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   223,     0,
       0,     0,     0,     0,     0,    57,   316,   319,   223,   321,
     322,   323,     0,     0,   226,   227,   228,   229,   230,   231,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   347,   350,   223,
     352,   353,   354,     0,     0,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   232,   233,     0,     0,     0,     0,   378,   381,
     223,   383,   384,   385,     0,     0,   -61,   -61,     0,     0,
     -61,   -61,   394,   395,   234,   430,   193,   244,   235,   236,
       0,   -69,   -69,   237,   223,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   420,   421,   422,   193,     0,     0,   193,
     244,     0,   193,   244,     0,     0,   -64,   -64,   -64,   -64,
     223,   -64,   -64,     0,     0,     0,     0,     0,     0,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   446,
     447,   448,   223,   193,   244,     0,     0,     0,     0,     0,
       0,   223,     0,   -64,     0,   -64,   -64,   -64,   363,   364,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     467,   468,   469,   244,   193,   244,     0,     0,     0,     0,
       0,     0,   223,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     192,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   488,   489,   490,   265,     0,     0,   222,     0,     0,
       0,   193,   244,     0,     0,   338,     0,   -83,     0,     0,
     -83,   339,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   193,   244,   192,
     243,   222,   222,   226,   227,   228,   229,   230,   231,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,     0,   193,   244,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
       0,   232,   233,   -33,     0,   -33,   -33,   -33,   -33,   193,
     244,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   234,   451,     0,     0,   235,   236,     0,
       0,     0,   237,   264,     0,     0,     0,     0,     0,   -33,
     -33,   243,     0,   -28,   -28,   222,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
     264,   -33,     0,     0,     0,   -33,   -33,     0,     0,     0,
     -33,     0,     0,   226,   227,   228,   229,   230,   231,     0,
       0,     0,   -35,   222,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   232,   233,   222,     0,     0,     0,   226,   227,   228,
     229,   230,   231,   222,     0,     0,     0,     0,   -35,   -35,
       0,     0,     0,   234,   472,     0,     0,   235,   236,     0,
       0,     0,   237,   -35,   222,   232,   233,   -35,   -35,     0,
     -35,     0,     0,     0,   -35,   -35,     0,   -27,   -27,   -35,
     -27,   -27,   -27,   -27,     0,   222,     0,   234,   497,     0,
       0,   235,   236,     0,   -25,   -25,   237,   -25,   -25,   -25,
     -25,   192,   243,     0,     0,     0,     0,     0,     0,   222,
     -65,   -65,   -65,   -65,     0,   -65,   -65,     0,   192,   192,
     192,   192,   192,   192,   192,   192,   418,   419,     0,     0,
     191,   192,     0,     0,   192,   243,     0,   192,   243,     0,
       0,   -65,     0,     0,     0,   222,     0,   221,     0,     0,
     -65,   -65,    95,    96,   222,   222,   222,   222,   222,   222,
     222,   222,   444,   445,     0,     0,     0,   222,   192,   243,
       0,     0,   -65,   -65,   -65,   -65,   222,   -65,   -65,   191,
     242,   221,   221,     0,     0,   243,   243,   243,   243,   243,
     243,   243,   243,   465,   466,     0,     0,     0,   243,   192,
     243,   122,   123,   124,   125,     0,     0,   222,     0,   -65,
       0,   -65,   -65,   -65,   363,   364,   264,   264,   264,   264,
     264,   264,   264,   264,   486,   487,     0,   -21,   -21,   264,
     -21,   -21,   -21,   -21,     0,     0,   192,   243,     0,     0,
       0,     0,     0,   263,     0,     0,     0,   -61,   -61,   -61,
     -61,   242,   -61,   -61,     0,   221,     0,     0,     0,     0,
       0,     0,   192,   243,   -34,     0,   -34,   -34,   -34,   -34,
     263,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   192,   243,     0,   -61,   -61,   -61,   332,
     333,   -23,   -23,   221,   -23,   -23,   -23,   -23,     0,     0,
     -34,   -34,     0,     0,   192,   243,     0,   226,   227,   228,
     229,   230,   231,   221,     0,   -34,     0,     0,     0,   -34,
      18,     0,   -34,   221,     0,     0,   -34,   -34,     0,     0,
       0,   -34,     0,     0,     0,   232,   233,   -62,   -62,   -62,
     -62,     0,   -62,   -62,   221,   -64,   -64,   -64,   -64,     0,
     -64,   -64,     0,     0,     0,     0,     0,   234,   506,     0,
       0,   235,   236,     0,     0,   221,   237,   -58,   -58,   -58,
     -58,     0,   328,   329,   -62,     0,   -62,   -62,   -62,   363,
     364,   191,   242,     0,   -64,   -64,   -64,   332,   333,   221,
       0,   -19,   -19,   190,   -19,   -19,   -19,   -19,   191,   191,
     191,   191,   414,   415,   416,   417,   -58,   330,   331,     0,
     220,   191,     0,     0,   191,   242,     0,   191,   242,     0,
       0,     0,     0,   -17,   -17,   221,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   221,   221,   221,   221,   440,   441,
     442,   443,   190,   241,   220,   220,     0,   221,   191,   242,
       0,     0,   -65,   -65,   -65,   -65,   221,   -65,   -65,     0,
       0,     0,   120,   121,     0,   242,   242,   242,   242,   461,
     462,   463,   464,     0,     0,     0,     0,     0,   242,   191,
     242,     0,     0,   -83,   -83,   -83,   -83,   221,   -83,   -83,
       0,   -65,   -65,   -65,   332,   333,   263,   263,   263,   263,
     482,   483,   484,   485,     0,     0,   262,     0,     0,   263,
       0,     0,     0,     0,   241,   453,   191,   242,   220,     0,
     -83,   454,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,   262,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   242,     0,     0,     0,     0,     0,     0,
     226,   227,   228,   229,   230,   231,   220,   -38,     0,   -38,
     -38,   -38,   -38,   191,   242,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   220,     0,   232,   233,
       0,   189,     0,     0,   191,   242,   220,     0,     0,     0,
       0,     0,     0,   -38,   -38,     0,     0,     0,   219,     0,
     234,   512,     0,     0,   235,   236,     0,   220,   -38,   237,
       0,     0,   -38,   -38,     0,   -38,     0,     0,     0,   -38,
     -38,     0,     0,     0,   -38,     0,     0,     0,   220,     0,
     189,   240,   219,   219,     0,     0,     0,    24,    25,    26,
      27,    28,    29,     0,   190,   241,     0,     0,     0,   119,
       0,     0,   220,     0,   226,   227,   228,   229,   230,   231,
       0,   190,   190,   412,   413,    34,    35,     0,     0,     0,
       0,     0,     0,     0,   190,     0,     0,   190,   241,     0,
     190,   241,   232,   233,     0,     0,     0,    37,   220,     0,
       0,    38,    39,     0,   261,     0,    40,   220,   220,   438,
     439,     0,   240,     0,   234,   518,   219,     0,   235,   236,
     220,   190,   241,   237,     0,     0,     0,     0,     0,   220,
       0,   261,     0,     0,     0,     0,     0,     0,   241,   241,
     459,   460,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   190,   241,   219,     0,     0,     0,     0,     0,
     220,     0,     0,   197,   198,   199,   200,   201,   202,   262,
     262,   480,   481,     0,   219,     0,     0,     0,     0,   188,
       0,     0,   262,     0,   219,     0,     0,     0,     0,   190,
     241,    34,    35,     0,     0,     0,   218,     0,   -64,   -64,
     -64,   -64,     0,   -64,   -64,   219,     0,     0,     0,     0,
       0,     0,     0,   203,     0,   190,   241,    38,    39,     0,
       0,     0,    40,     0,     0,     0,   219,     0,   188,   239,
     218,   218,     0,     0,   -64,   -64,   190,   241,   -64,   -64,
     394,   395,   189,   240,     0,     0,   118,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   190,   241,   189,
     411,   205,   206,   207,   208,   209,   210,     0,     0,     0,
       0,     0,   189,     0,     0,   189,   240,     0,   189,   240,
       0,     0,   -62,   -62,   -62,   -62,   219,   -62,   -62,   211,
     212,     0,   260,     0,     0,   219,   437,     0,     0,     0,
     239,     0,     0,     0,   218,     0,     0,     0,   219,   189,
     240,   213,     0,   -62,     0,   214,   215,   219,     0,   260,
     216,     0,   -62,   -62,    95,    96,   240,   458,   -58,   -58,
     -58,   -58,     0,   359,   360,     0,     0,   187,     0,   240,
     189,   240,   218,     0,   -58,   -58,   -58,   -58,   219,   390,
     391,     0,     0,     0,   217,     0,     0,   261,   479,     0,
       0,     0,   218,     0,     0,   -58,     0,   -58,   361,   362,
     261,     0,   218,     0,     0,     0,     0,   189,   240,     0,
     -58,   -58,     0,     0,   392,   393,   187,   238,   217,   217,
       0,     0,     0,   218,   175,   176,   177,   178,   179,   180,
       0,     0,     0,   189,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   131,     0,     0,
       0,     0,   181,   182,   189,   240,     0,     0,     0,     0,
     188,   239,     0,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,     0,   183,   189,   240,   410,   184,   185,
     259,     0,     0,   186,     0,     0,     0,     0,   238,     0,
     188,     0,   217,   188,   239,     0,   188,   239,     0,     0,
     -63,   -63,   -63,   -63,   218,   -63,   -63,   259,     0,     0,
       0,     0,     0,   436,     0,     0,     0,     0,     0,   247,
     248,   249,   250,   251,   252,     0,   218,   188,   239,     0,
     217,     0,     0,     0,     0,   218,     0,   -63,     0,   -63,
     -63,   -63,   363,   364,   457,     0,     0,   253,   254,     0,
     217,     0,     0,     0,     0,    60,    61,   239,   188,   239,
     217,     0,     0,     0,     0,     0,   218,     0,    74,   255,
       0,     0,    78,   256,   257,   478,     0,     0,   258,     0,
       0,   217,   226,   227,   228,   229,   230,   231,   260,     0,
       0,     0,     0,     0,     0,   188,   239,     0,     0,     0,
       0,     0,   217,     0,   110,   112,   114,   115,     0,     0,
     232,   233,     0,     0,     0,     0,     0,     0,   187,   238,
       0,   188,   239,     0,     0,     0,   217,     0,     0,     0,
       0,     0,   234,     0,     0,     0,   235,   236,     0,     0,
       0,   237,   188,   239,     0,     0,     0,     0,   423,     0,
       0,   187,   238,     0,   187,   238,     0,     0,     0,     0,
       0,     0,   217,   188,   239,     0,     0,     0,   147,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
     158,     0,     0,     0,   449,   187,   238,     0,     0,     0,
       0,     0,     0,   217,   -43,   169,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,     0,     0,   470,   187,   238,   284,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     -43,   -43,     0,     0,     0,     0,     0,     0,   306,   273,
     274,   275,   276,   277,   278,   -43,   491,     0,   320,   -43,
     -43,     0,   -43,   187,   238,     0,   -43,   -43,     0,     0,
       0,   -43,     0,     0,     0,     0,     0,   181,   182,   351,
       0,     0,   -59,   -59,   -59,   -59,     0,   390,   391,   187,
     238,     0,   309,   310,   311,   312,   313,   314,     0,   279,
     382,     0,     0,   184,   185,     0,     0,     0,   186,     0,
     187,   238,     0,     0,     0,     0,   403,   112,   -59,   -59,
     211,   212,   392,   393,   408,     0,     0,     0,     0,     0,
       0,   187,   238,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   315,     0,     0,     0,   214,   215,     0,   425,
     112,   216,   429,   112,     0,     0,     0,     0,     0,     0,
     434,    23,     0,     2,     3,     4,     5,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,    32,    33,
       0,     0,     0,   450,   112,     0,     0,     0,     0,     0,
       0,   455,     0,     0,     0,     0,     0,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,   471,   112,   174,    83,     0,    37,
       0,     0,   476,    38,    39,     0,     0,     0,    40,   -36,
       0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,     0,
       0,   496,   112,   -60,   -60,   -60,   -60,     0,   390,   391,
       0,     0,     0,     0,     0,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,   112,     0,
     -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,   -60,
     -60,   -36,   -36,   392,   393,     0,   -36,     0,   511,   112,
     -41,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   517,
     112,     0,     0,     0,   -58,   -58,   -58,   -58,     0,   292,
     293,     0,     0,     0,     0,     0,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -41,   -84,   -84,     0,   -41,   -41,   -58,   -41,     0,
       0,     0,   -41,   -41,   294,   295,   -42,   -41,   -42,   -42,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -84,   -42,   -42,   -42,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -42,   -85,   -85,
       0,   -42,   -42,     0,   -42,     0,     0,     0,   -42,   -42,
       0,     0,   -45,   -42,   -45,   -45,   -45,   -45,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -85,   -45,   -45,
     -45,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -45,   -86,   -86,     0,   -45,   -45,     0,
     -45,     0,     0,     0,   -45,   -45,     0,     0,   -39,   -45,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -86,   -39,   -39,   -39,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -39,
     -87,   -87,     0,   -39,   -39,     0,   -39,     0,     0,     0,
     -39,   -39,     0,     0,   -37,   -39,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -87,
     -37,   -37,   -37,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -37,   -88,   -88,     0,   -37,
     -37,     0,   -37,     0,     0,     0,   -37,   -37,     0,     0,
     -44,   -37,   -44,   -44,   -44,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -88,   -44,   -44,   -44,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -44,   -73,   -73,     0,   -44,   -44,     0,   -44,     0,
       0,     0,   -44,   -44,     0,     0,   -40,   -44,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   337,   -40,   -40,   -40,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -40,   -79,   -79,
       0,   -40,   -40,     0,   -40,     0,     0,     0,   -40,   -40,
       0,     0,   -20,   -40,   -20,   -20,   -20,   -20,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -79,   -20,   -20,
     -20,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,   -20,   -20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -20,   -81,   -81,     0,   -20,   -26,     0,
     -20,     0,     0,     0,   -20,   -20,     0,     0,   -18,   -20,
     -18,   -18,   -18,   -18,     0,     0,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -81,   -18,   -18,   -18,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,   -18,   -18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -18,
     -89,   -89,     0,   -18,   -24,     0,   -18,     0,     0,     0,
     -18,   -18,     0,     0,   -16,   -18,   -16,   -16,   -16,   -16,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -89,
     -16,   -16,   -16,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
     -16,   -16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -16,   -80,   -80,     0,   -16,
     -22,     0,   -16,     0,     0,     0,   -16,   -16,     0,     0,
      23,   -16,     2,     3,     4,     5,     0,     0,    24,    25,
      26,    27,    28,    29,    30,   -80,    31,    32,    33,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,    36,   -82,   -82,     0,   174,   163,     0,    37,     0,
       0,     0,    38,    39,     0,     0,   -48,    40,   -48,   -48,
     -48,   -48,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -82,   -48,   -48,   -48,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -48,   -66,   -66,
       0,   -48,   -48,     0,   -48,     0,     0,     0,   -48,   -48,
       0,     0,    23,   -48,     2,     3,     4,     5,     0,     0,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,     0,   -66,   -66,   -66,   -66,   -66,   334,   335,   336,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,    36,   -69,   -69,     0,   174,   170,     0,
      37,     0,     0,     0,    38,    39,     0,     0,    23,    40,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,    36,
     -84,   -84,     0,   174,   171,     0,    37,     0,     0,     0,
      38,    39,     0,     0,   -47,    40,   -47,   -47,   -47,   -47,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -47,   -47,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -47,   -85,   -85,     0,   -47,
     -47,     0,   -47,     0,     0,     0,   -47,   -47,     0,     0,
     -49,   -47,   -49,   -49,   -49,   -49,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -49,   -86,   -86,     0,   -49,   -49,     0,   -49,     0,
       0,     0,   -49,   -49,     0,     0,   -34,   -49,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -34,   -87,   -87,
       0,   -34,   269,     0,   -34,     0,     0,     0,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -34,   -88,   -88,     0,   -34,   302,     0,
     -34,     0,     0,     0,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -34,
     -77,   -77,     0,   -34,   400,     0,   -34,     0,     0,     0,
     -34,   -34,     0,     0,   -33,   -34,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -33,   -73,   -73,     0,   -33,
     -33,     0,   -33,     0,     0,     0,   -33,   -33,     0,     0,
      23,   -33,     2,     3,     4,     5,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    32,    33,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,    36,   -79,   -79,     0,   174,   493,     0,    37,     0,
       0,     0,    38,    39,     0,     0,    23,    40,     2,     3,
       4,     5,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,    32,    33,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,    36,   -78,   -78,
       0,   174,   500,     0,    37,     0,     0,     0,    38,    39,
       0,     0,    23,    40,     2,     3,     4,     5,     0,     0,
      24,    25,    26,    27,    28,    29,    30,     0,    31,    32,
      33,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,    36,   -74,   -74,     0,   174,   521,     0,
      37,     0,     0,     0,    38,    39,     0,     0,   -35,    40,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,     0,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
       0,     0,     0,   -35,   -35,     0,   -35,     0,     0,     0,
     -35,   -35,     0,     0,    23,   -35,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    30,     0,
      31,    32,    33,   340,   341,   342,   343,   344,   345,   371,
     372,   373,   374,   375,   376,     0,     0,     0,     0,     0,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,   233,     0,     0,    36,     0,   253,   254,   174,
       0,     0,    37,     0,     0,     0,    38,    39,     0,     0,
       0,    40,     0,   346,     0,     0,     0,   235,   236,   377,
       0,     0,   237,   256,   257,     0,     0,     0,   258,   -83,
     -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,   -83,     0,   -83,   -83,   370,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   271,   -83,   -83,     0,
       0,     0,   272,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,     0,   -83,     0,     0,     0,   308,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   474,     0,
       0,     0,   -83,   -83,   475,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,   -84,     0,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,     0,     0,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
       0,   -87,   -87,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
     -87,     0,     0,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,     0,     0,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   368,     0,     0,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -79,
     -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   -79,     0,     0,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -84,     0,   -84,   -84,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,     0,   -88,   -88,     0,   -86,     0,   -86,   -86,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
       0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
       0,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -79,     0,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   -83,     0,
       0,     0,     0,   407,   -63,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   432,   -63,   -63,    95,    96,     0,   433,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,   -81,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -89,     0,     0,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -81,     0,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,   -89,     0,   -89,   -89,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -82,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -80,   -80,   -80,   -80,     0,   -80,   -80,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -82,     0,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -58,   -58,   -58,   -58,     0,    91,    92,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,   -85,     0,     0,
       0,     0,   -58,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,    93,    94,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,
       0,   -87,   -87,     0,   -59,   -59,   -59,   -59,     0,    91,
      92,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
     -87,     0,     0,     0,     0,   -59,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,    93,    94,   -88,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -73,
     -73,   -73,   -73,     0,   -73,   -73,     0,   -60,   -60,   -60,
     -60,     0,    91,    92,     0,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,   100,     0,     0,     0,     0,   -60,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -79,    93,    94,   -79,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,   -81,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,
       0,     0,   -89,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,   -80,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,     0,     0,   -82,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -73,   301,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -79,   -79,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   365,   366,   367,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,     0,     0,   -86,   -86,
     -86,   -86,     0,   -86,   -86,     0,     0,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,
     -88,   -88,     0,     0,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,     0,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,
       0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,
       0,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,
     -73,     0,   -73,   -73,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,   -78,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,     0,   -75,   -75,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,     0,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -81,   -81,   -81,   -81,     0,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,   -67,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,   -81,   -81,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -89,   -89,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   365,   366,   367,   -68,   -68,   -68,   -68,
       0,   -68,   -68,     0,     0,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     365,   366,   367,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,
     -68,     0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,   396,   397,   398,
     -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   396,   397,
     398,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,     0,     0,   -71,   -71,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -80,   -80,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,     0,   -89,   -89,   -89,   -89,     0,   -89,
     -89,     0,     0,     0,     0,     0,     0,   -82,   -82,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,   -89,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,     0,   -80,   -80,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -66,   -66,
     -66,   -66,     0,   -66,   -66,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -66,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -66,   -66,
     -66,   -66,    97,    98,    99,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,     0,   -73,   -73,     0,   -69,     0,     0,     0,
       0,     0,     0,   -77,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -75,   -75,   -75,   -75,     0,   -75,   -75,
       0,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,     0,     0,
       0,     0,     0,     0,   -75,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -67,   -67,   -67,
     -67,     0,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,
       0,   -76,     0,     0,     0,     0,     0,     0,   -67,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -67,   -67,   -67,
     -67,    97,    98,    99,   -68,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,   -68,   -68,   -68,   -68,    97,    98,    99,
       0,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -72,   -72,
     -72,   -72,     0,   -72,   -72,     0,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,     0,     0,     0,     0,     0,     0,   -72,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -66,   -66,   -66,   -66,     0,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -84,   -84,   -84,   -84,
       0,   -84,   -84,     0,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   298,
     299,   300,   -69,     0,     0,     0,     0,   -84,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
       0,   -87,   -87,     0,   -85,     0,     0,     0,     0,     0,
       0,   -86,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -88,   -88,
     -88,   -88,     0,   -88,   -88,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -79,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -86,   -88,   -88,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,     0,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -88,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -77,   -79,   -79,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -73,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -79,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,   -78,     0,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -78,   -75,
     -75,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -74,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,   -75,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -67,   -70,   -70,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   298,   299,
     300,   -68,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   298,   299,   300,     0,   -70,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -71,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,
       0,     0,   -81,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,   -89,
     -89,   -89,     0,   -89,   -89,     0,   -67,   -67,   -67,   -67,
       0,   -67,   -67,     0,   -68,   -68,   -68,   -68,     0,   -68,
     -68,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -89,
     -71,   -71,   -71,   -71,     0,   -71,   -71,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -67,   -67,   -67,   -67,   -67,
     334,   335,   336,   -68,   -68,   -68,   -68,   -68,   334,   335,
     336,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,
     -72,     0,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -81,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,   -80,     0,     0,     0,     0,     0,     0,
     -82,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,     0,   -65,   -65,     0,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,   -63,   -63,
     -63,   -63,     0,   -63,   -63,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -65,   -65,
       0,     0,   -65,   -65,   394,   395,   -62,   -62,     0,     0,
     -62,   -62,   394,   395,   -63,   -63,     0,     0,   -63,   -63,
     394,   395,   -61,   -61,   -61,   -61,     0,   -61,   -61,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,     0,   -65,
     -65,     0,     0,     0,     0,   -61,     0,     0,     0,     0,
       0,     0,   -61,   -61,   296,   297,   -64,     0,     0,     0,
       0,     0,     0,   -64,   -64,   296,   297,   -65,     0,     0,
       0,     0,     0,     0,   -65,   -65,   296,   297,   -62,   -62,
     -62,   -62,     0,   -62,   -62,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -63,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -62,     0,     0,     0,     0,     0,     0,   -62,   -62,
     296,   297,   -63,     0,     0,     0,     0,     0,     0,   -63,
     -63,   296,   297,     0,     0,   -62,   -62,   -62,   332,   333,
       0,     0,   -63,   -63,   -63,   332,   333,   -59,   -59,   -59,
     -59,     0,   359,   360,   -60,   -60,   -60,   -60,     0,   359,
     360,     0,     0,   -59,   -59,   -59,   -59,     0,   292,   293,
       0,     0,   -60,   -60,   -60,   -60,     0,   292,   293,     0,
       0,     0,     0,     0,   -59,     0,   -59,   361,   362,     0,
       0,   -60,     0,   -60,   361,   362,   -59,     0,     0,     0,
       0,     0,     0,   294,   295,   -60,     0,     0,     0,     0,
       0,     0,   294,   295,   -59,   -59,   -59,   -59,     0,   328,
     329,   -60,   -60,   -60,   -60,     0,   328,   329,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -59,   330,   331,     0,     0,     0,     0,
     -60,   330,   331
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,    43,   174,     1,     0,     9,   272,    10,
      21,    22,     6,    21,    33,    21,    22,   135,    37,    56,
      53,    21,    21,    22,    43,    58,   196,    60,    22,    21,
     148,    21,    22,     9,   152,     1,    32,     3,     4,     5,
       6,   305,     9,    21,   308,    52,    54,    58,    21,    60,
      69,    70,    71,    72,    60,    56,    21,    21,    60,    58,
      60,    60,     9,    52,    54,    57,    58,    56,    21,    22,
      23,    24,    21,    22,    52,   339,    21,    22,    23,    24,
       9,    10,    11,    12,    13,    14,     0,    60,     9,    58,
      54,    60,     6,    58,    60,    60,    57,    58,   268,     9,
      10,    11,    12,    13,    14,    58,   370,    60,    37,    38,
     150,    60,     9,   107,   133,    60,   135,    21,    22,    23,
      24,   161,   141,    21,   164,    54,   145,    37,    38,   148,
      59,   150,    52,   152,    63,    64,    59,    21,    21,    68,
      59,   160,   161,   407,    52,   164,    52,   143,   144,    59,
      60,    52,   270,    63,    64,    58,    60,    60,    68,    57,
      58,     9,   181,   182,   183,   184,   185,   186,    52,   433,
     166,    21,    22,    23,    24,    58,    58,    60,    60,    21,
      22,    23,    24,    55,   203,   303,    21,    22,    23,    24,
     454,    54,   211,   212,   213,   214,   215,   216,    21,    22,
       9,    10,    11,    12,    13,    14,    52,    53,    58,    55,
      60,   475,    54,   232,   233,   234,   235,   236,   237,    54,
      52,    21,    22,    23,    24,    56,    26,    27,    37,    38,
      58,    54,    60,    60,   253,   254,   255,   256,   257,   258,
       9,    52,    53,    52,    55,    58,    17,    60,    59,    52,
      59,   270,   271,   272,    63,    64,    60,    57,    58,    68,
     279,    61,    62,    63,    64,    65,    66,    67,    52,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   401,   303,   304,   305,    54,   307,   308,
      21,    22,    21,    22,    23,    24,   315,    26,    27,    21,
      22,    23,    24,    57,    58,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,    52,    56,    21,    22,    23,    24,   346,    56,    58,
      52,    60,    61,    62,    63,    64,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,    60,    21,    22,    23,    24,    60,   377,    57,
      58,     1,   402,     3,     4,     5,     6,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,    59,   401,   402,   424,    57,    58,   406,   407,    57,
      58,    52,    19,    20,    21,    21,    22,    57,    54,     9,
      10,    11,    12,    13,    14,   424,    33,    58,    56,    60,
      37,    56,    17,   432,   433,    57,    43,    21,    22,    21,
      22,    23,    24,    57,    26,    27,    54,    37,    38,    60,
      52,    57,    58,    52,   453,   454,    21,    22,    23,    24,
      21,    22,    69,    70,    71,    72,    52,    57,    52,    59,
      52,    53,   492,    63,    64,   474,   475,    59,    68,    61,
      62,    63,    64,    65,    66,    67,    58,    52,    60,    21,
      22,    23,    24,   492,    26,    27,    57,    58,    60,    58,
       1,    60,     3,     4,     5,     6,    60,    60,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    60,
      52,     3,     4,     5,     6,    58,   133,    60,   135,    61,
      62,    63,    64,    58,   141,    60,    37,    38,   145,    60,
      58,   148,    60,   150,    58,   152,    60,    58,    58,    60,
      60,    52,    60,   160,   161,    56,    57,   164,    59,    58,
      54,    60,    63,    64,    54,     0,     1,    68,     3,     4,
       5,     6,    60,    54,   181,   182,   183,   184,   185,   186,
      60,    54,     9,    10,    11,    12,    13,    14,     0,     1,
      60,     3,     4,     5,     6,    54,   203,     0,     1,    17,
       3,     4,     5,     6,   211,   212,   213,   214,   215,   216,
      37,    38,    58,    54,    60,    54,     9,    10,    11,    12,
      13,    14,    54,     6,   107,   232,   233,   234,   235,   236,
     237,    -1,    59,    60,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    37,    38,   253,   254,   255,   256,
     257,   258,     0,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,   270,   271,   272,    59,    60,    -1,    -1,
      63,    64,   279,     0,     1,    68,     3,     4,     5,     6,
      -1,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,    20,   303,   304,   305,    -1,
     307,   308,    -1,    -1,    -1,    -1,    -1,    -1,   315,    34,
      35,    -1,    37,    38,    39,    40,    -1,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,    -1,    -1,    21,    22,    23,    24,   346,
      26,    27,    -1,    -1,    69,    70,    71,    72,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,    -1,    -1,    52,    -1,    -1,    -1,
     377,    -1,    97,    98,    99,    61,    62,    63,    64,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,    -1,   401,   402,    -1,    -1,    -1,   406,
     407,     0,     1,    -1,     3,     4,     5,     6,   133,    21,
      22,    23,    24,    -1,    26,    27,   141,   424,     0,     1,
     145,     3,     4,     5,     6,   432,   433,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,   160,    26,    27,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,   453,   454,    -1,    61,
      62,    63,    64,    65,    66,    67,   181,   182,   183,   184,
     185,   186,    52,    53,    -1,    55,    -1,   474,   475,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,   203,    -1,
      -1,    -1,    -1,    -1,    -1,   492,   211,   212,   213,   214,
     215,   216,    -1,    -1,     9,    10,    11,    12,    13,    14,
      21,    22,    23,    24,    -1,    26,    27,   232,   233,   234,
     235,   236,   237,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    37,    38,    -1,    -1,    -1,    -1,   253,   254,
     255,   256,   257,   258,    -1,    -1,    57,    58,    -1,    -1,
      61,    62,    63,    64,    59,    60,   271,   272,    63,    64,
      -1,    57,    58,    68,   279,    61,    62,    63,    64,    65,
      66,    67,    -1,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    -1,    -1,   304,
     305,    -1,   307,   308,    -1,    -1,    21,    22,    23,    24,
     315,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    58,    -1,    60,    61,    62,    63,    64,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,    -1,    -1,    -1,    -1,
      -1,    -1,   377,    21,    22,    23,    24,    -1,    26,    27,
      20,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,    -1,    -1,    37,    -1,    -1,
      -1,   406,   407,    -1,    -1,    53,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     1,    -1,     3,     4,     5,     6,   432,   433,    69,
      70,    71,    72,     9,    10,    11,    12,    13,    14,     0,
       1,    -1,     3,     4,     5,     6,    -1,    -1,   453,   454,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    37,    38,     1,    -1,     3,     4,     5,     6,   474,
     475,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    59,    60,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,   133,    -1,    -1,    -1,    -1,    -1,    37,
      38,   141,    -1,     0,     1,   145,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
     160,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,     1,   183,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    37,    38,   203,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,   213,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    -1,
      -1,    -1,    68,    52,   234,    37,    38,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,     0,     1,    68,
       3,     4,     5,     6,    -1,   255,    -1,    59,    60,    -1,
      -1,    63,    64,    -1,     0,     1,    68,     3,     4,     5,
       6,   271,   272,    -1,    -1,    -1,    -1,    -1,    -1,   279,
      21,    22,    23,    24,    -1,    26,    27,    -1,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    -1,    -1,
      20,   301,    -1,    -1,   304,   305,    -1,   307,   308,    -1,
      -1,    52,    -1,    -1,    -1,   315,    -1,    37,    -1,    -1,
      61,    62,    63,    64,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,    -1,    -1,    -1,   337,   338,   339,
      -1,    -1,    21,    22,    23,    24,   346,    26,    27,    69,
      70,    71,    72,    -1,    -1,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    -1,    -1,    -1,   368,   369,
     370,    91,    92,    93,    94,    -1,    -1,   377,    -1,    58,
      -1,    60,    61,    62,    63,    64,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,    -1,     0,     1,   399,
       3,     4,     5,     6,    -1,    -1,   406,   407,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    21,    22,    23,
      24,   141,    26,    27,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   432,   433,     1,    -1,     3,     4,     5,     6,
     160,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,   453,   454,    -1,    60,    61,    62,    63,
      64,     0,     1,   183,     3,     4,     5,     6,    -1,    -1,
      37,    38,    -1,    -1,   474,   475,    -1,     9,    10,    11,
      12,    13,    14,   203,    -1,    52,    -1,    -1,    -1,    56,
      57,    -1,    59,   213,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    37,    38,    21,    22,    23,
      24,    -1,    26,    27,   234,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    63,    64,    -1,    -1,   255,    68,    21,    22,    23,
      24,    -1,    26,    27,    58,    -1,    60,    61,    62,    63,
      64,   271,   272,    -1,    60,    61,    62,    63,    64,   279,
      -1,     0,     1,    20,     3,     4,     5,     6,   288,   289,
     290,   291,   292,   293,   294,   295,    60,    61,    62,    -1,
      37,   301,    -1,    -1,   304,   305,    -1,   307,   308,    -1,
      -1,    -1,    -1,     0,     1,   315,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,   324,   325,   326,   327,   328,   329,
     330,   331,    69,    70,    71,    72,    -1,   337,   338,   339,
      -1,    -1,    21,    22,    23,    24,   346,    26,    27,    -1,
      -1,    -1,    89,    90,    -1,   355,   356,   357,   358,   359,
     360,   361,   362,    -1,    -1,    -1,    -1,    -1,   368,   369,
     370,    -1,    -1,    21,    22,    23,    24,   377,    26,    27,
      -1,    60,    61,    62,    63,    64,   386,   387,   388,   389,
     390,   391,   392,   393,    -1,    -1,   133,    -1,    -1,   399,
      -1,    -1,    -1,    -1,   141,    53,   406,   407,   145,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   432,   433,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,   183,     1,    -1,     3,
       4,     5,     6,   453,   454,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,   203,    -1,    37,    38,
      -1,    20,    -1,    -1,   474,   475,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    37,    -1,
      59,    60,    -1,    -1,    63,    64,    -1,   234,    52,    68,
      -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,   255,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,   271,   272,    -1,    -1,    -1,    88,
      -1,    -1,   279,    -1,     9,    10,    11,    12,    13,    14,
      -1,   288,   289,   290,   291,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,    -1,    -1,   304,   305,    -1,
     307,   308,    37,    38,    -1,    -1,    -1,    59,   315,    -1,
      -1,    63,    64,    -1,   133,    -1,    68,   324,   325,   326,
     327,    -1,   141,    -1,    59,    60,   145,    -1,    63,    64,
     337,   338,   339,    68,    -1,    -1,    -1,    -1,    -1,   346,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   355,   356,
     357,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   368,   369,   370,   183,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,     9,    10,    11,    12,    13,    14,   386,
     387,   388,   389,    -1,   203,    -1,    -1,    -1,    -1,    20,
      -1,    -1,   399,    -1,   213,    -1,    -1,    -1,    -1,   406,
     407,    37,    38,    -1,    -1,    -1,    37,    -1,    21,    22,
      23,    24,    -1,    26,    27,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,   432,   433,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,   255,    -1,    69,    70,
      71,    72,    -1,    -1,    57,    58,   453,   454,    61,    62,
      63,    64,   271,   272,    -1,    -1,    87,    -1,    -1,    -1,
     279,    -1,    -1,    -1,    -1,    -1,    -1,   474,   475,   288,
     289,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,   301,    -1,    -1,   304,   305,    -1,   307,   308,
      -1,    -1,    21,    22,    23,    24,   315,    26,    27,    37,
      38,    -1,   133,    -1,    -1,   324,   325,    -1,    -1,    -1,
     141,    -1,    -1,    -1,   145,    -1,    -1,    -1,   337,   338,
     339,    59,    -1,    52,    -1,    63,    64,   346,    -1,   160,
      68,    -1,    61,    62,    63,    64,   355,   356,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    20,    -1,   368,
     369,   370,   183,    -1,    21,    22,    23,    24,   377,    26,
      27,    -1,    -1,    -1,    37,    -1,    -1,   386,   387,    -1,
      -1,    -1,   203,    -1,    -1,    58,    -1,    60,    61,    62,
     399,    -1,   213,    -1,    -1,    -1,    -1,   406,   407,    -1,
      57,    58,    -1,    -1,    61,    62,    69,    70,    71,    72,
      -1,    -1,    -1,   234,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,   432,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   255,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    37,    38,   453,   454,    -1,    -1,    -1,    -1,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,   279,    -1,
      -1,    -1,    -1,    -1,    59,   474,   475,   288,    63,    64,
     133,    -1,    -1,    68,    -1,    -1,    -1,    -1,   141,    -1,
     301,    -1,   145,   304,   305,    -1,   307,   308,    -1,    -1,
      21,    22,    23,    24,   315,    26,    27,   160,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,   337,   338,   339,    -1,
     183,    -1,    -1,    -1,    -1,   346,    -1,    58,    -1,    60,
      61,    62,    63,    64,   355,    -1,    -1,    37,    38,    -1,
     203,    -1,    -1,    -1,    -1,    20,    21,   368,   369,   370,
     213,    -1,    -1,    -1,    -1,    -1,   377,    -1,    33,    59,
      -1,    -1,    37,    63,    64,   386,    -1,    -1,    68,    -1,
      -1,   234,     9,    10,    11,    12,    13,    14,   399,    -1,
      -1,    -1,    -1,    -1,    -1,   406,   407,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    69,    70,    71,    72,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,   271,   272,
      -1,   432,   433,    -1,    -1,    -1,   279,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,   453,   454,    -1,    -1,    -1,    -1,   301,    -1,
      -1,   304,   305,    -1,   307,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   315,   474,   475,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
     145,    -1,    -1,    -1,   337,   338,   339,    -1,    -1,    -1,
      -1,    -1,    -1,   346,     1,   160,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    -1,    -1,   368,   369,   370,   183,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,   203,     9,
      10,    11,    12,    13,    14,    52,   399,    -1,   213,    56,
      57,    -1,    59,   406,   407,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    37,    38,   234,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,   432,
     433,    -1,     9,    10,    11,    12,    13,    14,    -1,    59,
     255,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,
     453,   454,    -1,    -1,    -1,    -1,   271,   272,    57,    58,
      37,    38,    61,    62,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   474,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,   304,
     305,    68,   307,   308,    -1,    -1,    -1,    -1,    -1,    -1,
     315,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      -1,    -1,    -1,   338,   339,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,   369,   370,    56,    57,    -1,    59,
      -1,    -1,   377,    63,    64,    -1,    -1,    -1,    68,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,   406,   407,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,   433,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    59,    -1,    57,
      58,    63,    64,    61,    62,    -1,    68,    -1,   453,   454,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,   474,
     475,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    52,    26,    27,    -1,    56,    57,    54,    59,    -1,
      -1,    -1,    63,    64,    61,    62,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    55,    17,    18,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    52,    26,    27,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    55,    17,    18,
      19,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    52,    26,    27,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    55,    17,    18,    19,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    52,
      26,    27,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    55,
      17,    18,    19,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    52,    26,    27,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
       1,    68,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    55,    17,    18,    19,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    52,    26,    27,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    55,    17,    18,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    52,    26,    27,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    55,    17,    18,
      19,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    52,    26,    27,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    55,    17,    18,    19,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    52,
      26,    27,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    55,
      17,    18,    19,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    52,    26,    27,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
       1,    68,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    55,    17,    18,    19,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    52,    26,    27,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    55,    17,    18,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    52,    26,    27,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    52,    26,    27,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    52,
      26,    27,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    52,    26,    27,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
       1,    68,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    52,    26,    27,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    52,    26,    27,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    52,    26,    27,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    52,
      26,    27,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    52,    26,    27,    -1,    56,
      57,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
       1,    68,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    52,    26,    27,    -1,    56,    57,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,     1,    68,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    52,    26,    27,
      -1,    56,    57,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,     1,    68,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    52,    26,    27,    -1,    56,    57,    -1,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,     1,    68,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    56,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    -1,     1,    68,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,     9,    10,    11,    12,    13,    14,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    52,    -1,    37,    38,    56,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    59,    -1,    -1,    -1,    63,    64,    59,
      -1,    -1,    68,    63,    64,    -1,    -1,    -1,    68,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    53,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    53,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    55,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    55,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    55,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    55,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    55,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    55,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    21,    22,    23,    24,    -1,    26,    27,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    59,    52,    61,    62,    63,    64,    65,
      66,    67,    53,    61,    62,    63,    64,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    55,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    55,    -1,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      55,    -1,    57,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    52,    61,    62,    63,    64,    65,    66,    67,
      52,    61,    62,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    52,    61,    62,    63,    64,
      65,    66,    67,    52,    61,    62,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    52,    61,
      62,    63,    64,    65,    66,    67,    52,    61,    62,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    54,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    54,    55,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      54,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    21,    22,
      23,    24,    -1,    26,    27,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    57,    58,    52,
      -1,    61,    62,    63,    64,    65,    66,    67,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    61,    62,    63,    64,    65,
      66,    67,    61,    62,    63,    64,    65,    66,    67,    52,
      21,    22,    23,    24,    -1,    26,    27,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    21,    22,    23,    24,
      -1,    26,    27,    21,    22,    23,    24,    -1,    26,    27,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    61,    62,    63,    64,
      65,    66,    67,    61,    62,    63,    64,    65,    66,    67,
      21,    22,    23,    24,    -1,    26,    27,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      61,    62,    63,    64,    65,    66,    67,    61,    62,    63,
      64,    65,    66,    67,    52,    21,    22,    23,    24,    -1,
      26,    27,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    21,    22,    23,    24,    -1,    26,    27,    21,    22,
      23,    24,    -1,    26,    27,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    52,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    61,    62,    63,    64,    65,    66,    67,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    21,    22,    23,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    54,    -1,    -1,    -1,    -1,    52,    -1,    61,
      62,    63,    64,    65,    66,    67,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    61,    62,    63,    64,    65,    66,    67,
      61,    62,    63,    64,    65,    66,    67,    52,    21,    22,
      23,    24,    -1,    26,    27,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      21,    22,    23,    24,    -1,    26,    27,    -1,    61,    62,
      63,    64,    65,    66,    67,    52,    21,    22,    23,    24,
      -1,    26,    27,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    54,    26,    27,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    54,    26,    27,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    54,    26,
      27,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    21,    22,    23,    24,    -1,    26,    27,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    60,    61,
      62,    63,    64,    65,    66,    67,    60,    61,    62,    63,
      64,    65,    66,    67,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    54,    26,    27,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    54,    -1,    -1,
      -1,    -1,    52,    -1,    61,    62,    63,    64,    65,    66,
      67,    61,    62,    63,    64,    65,    66,    67,    21,    22,
      23,    24,    -1,    26,    27,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    21,    22,    23,    24,    -1,    26,    27,    52,
      21,    22,    23,    24,    -1,    26,    27,    -1,    61,    62,
      63,    64,    65,    66,    67,    60,    61,    62,    63,    64,
      65,    66,    67,    60,    61,    62,    63,    64,    65,    66,
      67,    60,    61,    62,    63,    64,    65,    66,    67,    60,
      61,    62,    63,    64,    65,    66,    67,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    21,
      22,    23,    24,    -1,    26,    27,    -1,    21,    22,    23,
      24,    -1,    26,    27,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    61,    62,    63,    64,    65,    66,    67,    61,
      62,    63,    64,    65,    66,    67,    60,    61,    62,    63,
      64,    65,    66,    67,    60,    61,    62,    63,    64,    65,
      66,    67,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      -1,    26,    27,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    60,    61,    62,    63,    64,    65,    66,
      67,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    57,    58,
      -1,    -1,    61,    62,    63,    64,    57,    58,    -1,    -1,
      61,    62,    63,    64,    57,    58,    -1,    -1,    61,    62,
      63,    64,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    21,    22,
      23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    21,    22,    23,    24,
      -1,    26,    27,    21,    22,    23,    24,    -1,    26,    27,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    -1,    60,    61,    62,    63,    64,    21,    22,    23,
      24,    -1,    26,    27,    21,    22,    23,    24,    -1,    26,
      27,    -1,    -1,    21,    22,    23,    24,    -1,    26,    27,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      -1,    58,    -1,    60,    61,    62,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    21,    22,    23,    24,    -1,    26,
      27,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,
      60,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    70,    71,    72,    74,
     101,    52,    56,    83,     0,    71,    52,     9,    57,    84,
      53,    55,    59,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    37,    38,    52,    59,    63,    64,
      68,    72,    83,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   101,    54,
      90,    90,     1,     3,    60,    81,    82,   101,    52,    53,
      59,    59,    59,    83,    90,    97,    98,    97,    90,    97,
      97,    97,    52,    57,    86,    52,    52,    21,    22,    23,
      24,    26,    27,    61,    62,    63,    64,    65,    66,    67,
      55,     9,    55,    54,    60,    60,    56,    58,    60,     9,
      90,    60,    90,   100,    90,    90,    17,    60,    92,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    91,    10,    56,    56,    77,    80,    82,    56,    53,
      54,    58,    60,    60,    60,    59,    73,    90,    76,    79,
      85,    57,    75,    78,    54,    90,    83,    83,    90,    57,
      58,    85,    57,    57,    85,    57,    16,    60,    57,    90,
      57,    57,    83,    52,    56,     9,    10,    11,    12,    13,
      14,    37,    38,    59,    63,    64,    68,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    56,     9,    10,    11,
      12,    13,    14,    59,    99,     9,    10,    11,    12,    13,
      14,    37,    38,    59,    63,    64,    68,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     9,    10,    11,    12,
      13,    14,    37,    38,    59,    63,    64,    68,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     9,    10,    11,
      12,    13,    14,    37,    38,    59,    63,    64,    68,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    56,    57,
      84,    53,    59,     9,    10,    11,    12,    13,    14,    59,
      97,    98,    99,    97,    90,    97,    97,    97,    21,    22,
      23,    24,    26,    27,    61,    62,    63,    64,    65,    66,
      67,    55,    57,    84,    53,    59,    90,    53,    59,     9,
      10,    11,    12,    13,    14,    59,    97,    98,    99,    97,
      90,    97,    97,    97,    21,    22,    23,    24,    26,    27,
      61,    62,    63,    64,    65,    66,    67,    55,    53,    59,
       9,    10,    11,    12,    13,    14,    59,    97,    98,    99,
      97,    90,    97,    97,    97,    21,    22,    23,    24,    26,
      27,    61,    62,    63,    64,    65,    66,    67,    55,    53,
      59,     9,    10,    11,    12,    13,    14,    59,    97,    98,
      99,    97,    90,    97,    97,    97,    21,    22,    23,    24,
      26,    27,    61,    62,    63,    64,    65,    66,    67,    55,
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
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2787 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2793 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2799 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2805 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2811 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 59 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2817 "src/parser.c"
        break;

    case 70: /* declaration_list  */
#line 61 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2823 "src/parser.c"
        break;

    case 71: /* declaration  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2829 "src/parser.c"
        break;

    case 72: /* init_declarator  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2835 "src/parser.c"
        break;

    case 73: /* initializer_list  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2841 "src/parser.c"
        break;

    case 74: /* function_definition  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2847 "src/parser.c"
        break;

    case 81: /* argument_list  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2853 "src/parser.c"
        break;

    case 82: /* argument  */
#line 60 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2859 "src/parser.c"
        break;

    case 83: /* compound_statement  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2865 "src/parser.c"
        break;

    case 85: /* statement_list  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2871 "src/parser.c"
        break;

    case 86: /* statement  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2877 "src/parser.c"
        break;

    case 87: /* conditional_statement  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2883 "src/parser.c"
        break;

    case 88: /* iteration_statement  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2889 "src/parser.c"
        break;

    case 89: /* return_statement  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2895 "src/parser.c"
        break;

    case 90: /* assignment_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2901 "src/parser.c"
        break;

    case 91: /* logical_or_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2907 "src/parser.c"
        break;

    case 92: /* logical_and_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2913 "src/parser.c"
        break;

    case 93: /* equality_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2919 "src/parser.c"
        break;

    case 94: /* relational_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2925 "src/parser.c"
        break;

    case 95: /* additive_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2931 "src/parser.c"
        break;

    case 96: /* multiplicative_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2937 "src/parser.c"
        break;

    case 97: /* unary_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2943 "src/parser.c"
        break;

    case 98: /* postfix_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2949 "src/parser.c"
        break;

    case 99: /* primary_expression  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2955 "src/parser.c"
        break;

    case 100: /* argument_call_list  */
#line 62 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2961 "src/parser.c"
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
#line 102 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3227 "src/parser.c"
    break;

  case 3:
#line 103 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3233 "src/parser.c"
    break;

  case 4:
#line 107 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3239 "src/parser.c"
    break;

  case 5:
#line 108 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3245 "src/parser.c"
    break;

  case 6:
#line 109 "src/language.y"
    { (yyval.node) = NULL; }
#line 3251 "src/parser.c"
    break;

  case 7:
#line 110 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3257 "src/parser.c"
    break;

  case 8:
#line 114 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   ,     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3263 "src/parser.c"
    break;

  case 9:
#line 115 "src/language.y"
    { (yyval.node) = node_init(DECLARATION   , "declaration"   , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3269 "src/parser.c"
    break;

  case 10:
#line 116 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3275 "src/parser.c"
    break;

  case 11:
#line 117 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free_label((yyvsp[-6].sval)); }
#line 3281 "src/parser.c"
    break;

  case 12:
#line 118 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization", (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free_label((yyvsp[-7].sval)); }
#line 3287 "src/parser.c"
    break;

  case 13:
#line 119 "src/language.y"
    { (yyval.node) = node_init(INITIALIZATION, "initialization",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free_label((yyvsp[-4].sval)); free_label((yyvsp[0].sval)); }
#line 3293 "src/parser.c"
    break;

  case 14:
#line 123 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3299 "src/parser.c"
    break;

  case 15:
#line 124 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3305 "src/parser.c"
    break;

  case 16:
#line 128 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3311 "src/parser.c"
    break;

  case 17:
#line 128 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3317 "src/parser.c"
    break;

  case 18:
#line 129 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3323 "src/parser.c"
    break;

  case 19:
#line 129 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3329 "src/parser.c"
    break;

  case 20:
#line 130 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3335 "src/parser.c"
    break;

  case 21:
#line 130 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3341 "src/parser.c"
    break;

  case 22:
#line 131 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3347 "src/parser.c"
    break;

  case 23:
#line 131 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3353 "src/parser.c"
    break;

  case 24:
#line 132 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3359 "src/parser.c"
    break;

  case 25:
#line 132 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3365 "src/parser.c"
    break;

  case 26:
#line 133 "src/language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3371 "src/parser.c"
    break;

  case 27:
#line 133 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-5].sval)); }
#line 3377 "src/parser.c"
    break;

  case 28:
#line 134 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3383 "src/parser.c"
    break;

  case 29:
#line 138 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3389 "src/parser.c"
    break;

  case 30:
#line 139 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3395 "src/parser.c"
    break;

  case 31:
#line 143 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3401 "src/parser.c"
    break;

  case 32:
#line 144 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3407 "src/parser.c"
    break;

  case 33:
#line 148 "src/language.y"
    { (yyval.node) = NULL; }
#line 3413 "src/parser.c"
    break;

  case 34:
#line 149 "src/language.y"
    { begin(NULL); }
#line 3419 "src/parser.c"
    break;

  case 35:
#line 149 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3425 "src/parser.c"
    break;

  case 36:
#line 153 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3431 "src/parser.c"
    break;

  case 37:
#line 154 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3437 "src/parser.c"
    break;

  case 38:
#line 158 "src/language.y"
    { (yyval.node) = NULL; }
#line 3443 "src/parser.c"
    break;

  case 39:
#line 159 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3449 "src/parser.c"
    break;

  case 40:
#line 160 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3455 "src/parser.c"
    break;

  case 41:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3461 "src/parser.c"
    break;

  case 42:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3467 "src/parser.c"
    break;

  case 43:
#line 163 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3473 "src/parser.c"
    break;

  case 44:
#line 164 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3479 "src/parser.c"
    break;

  case 45:
#line 165 "src/language.y"
    { (yyval.node) = NULL; }
#line 3485 "src/parser.c"
    break;

  case 46:
#line 169 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3491 "src/parser.c"
    break;

  case 47:
#line 170 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3497 "src/parser.c"
    break;

  case 48:
#line 174 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3503 "src/parser.c"
    break;

  case 49:
#line 175 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3509 "src/parser.c"
    break;

  case 50:
#line 179 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3515 "src/parser.c"
    break;

  case 51:
#line 180 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3521 "src/parser.c"
    break;

  case 52:
#line 184 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3527 "src/parser.c"
    break;

  case 53:
#line 185 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3533 "src/parser.c"
    break;

  case 54:
#line 189 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3539 "src/parser.c"
    break;

  case 55:
#line 190 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3545 "src/parser.c"
    break;

  case 56:
#line 194 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3551 "src/parser.c"
    break;

  case 57:
#line 195 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/}
#line 3557 "src/parser.c"
    break;

  case 58:
#line 199 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3563 "src/parser.c"
    break;

  case 59:
#line 200 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3569 "src/parser.c"
    break;

  case 60:
#line 201 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3575 "src/parser.c"
    break;

  case 61:
#line 205 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3581 "src/parser.c"
    break;

  case 62:
#line 206 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3587 "src/parser.c"
    break;

  case 63:
#line 207 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3593 "src/parser.c"
    break;

  case 64:
#line 208 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3599 "src/parser.c"
    break;

  case 65:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3605 "src/parser.c"
    break;

  case 66:
#line 213 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3611 "src/parser.c"
    break;

  case 67:
#line 214 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3617 "src/parser.c"
    break;

  case 68:
#line 215 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3623 "src/parser.c"
    break;

  case 69:
#line 219 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3629 "src/parser.c"
    break;

  case 70:
#line 220 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3635 "src/parser.c"
    break;

  case 71:
#line 221 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3641 "src/parser.c"
    break;

  case 72:
#line 222 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3647 "src/parser.c"
    break;

  case 73:
#line 226 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3653 "src/parser.c"
    break;

  case 74:
#line 227 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3659 "src/parser.c"
    break;

  case 75:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3665 "src/parser.c"
    break;

  case 76:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3671 "src/parser.c"
    break;

  case 77:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3677 "src/parser.c"
    break;

  case 78:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3683 "src/parser.c"
    break;

  case 79:
#line 235 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3689 "src/parser.c"
    break;

  case 80:
#line 236 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3695 "src/parser.c"
    break;

  case 81:
#line 237 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval)); free_label((yyvsp[-2].sval));}
#line 3701 "src/parser.c"
    break;

  case 82:
#line 238 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval)); free_label((yyvsp[-3].sval));}
#line 3707 "src/parser.c"
    break;

  case 83:
#line 242 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name); free_label((yyvsp[0].sval)); }
#line 3713 "src/parser.c"
    break;

  case 84:
#line 243 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3719 "src/parser.c"
    break;

  case 85:
#line 244 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3725 "src/parser.c"
    break;

  case 86:
#line 245 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3731 "src/parser.c"
    break;

  case 87:
#line 246 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3737 "src/parser.c"
    break;

  case 88:
#line 247 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3743 "src/parser.c"
    break;

  case 89:
#line 248 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3749 "src/parser.c"
    break;

  case 90:
#line 252 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3755 "src/parser.c"
    break;

  case 91:
#line 253 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3761 "src/parser.c"
    break;

  case 92:
#line 257 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3767 "src/parser.c"
    break;

  case 93:
#line 258 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3773 "src/parser.c"
    break;

  case 94:
#line 259 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3779 "src/parser.c"
    break;

  case 95:
#line 260 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3785 "src/parser.c"
    break;


#line 3789 "src/parser.c"

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
#line 263 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
