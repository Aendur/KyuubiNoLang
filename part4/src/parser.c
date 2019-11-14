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
#line 72 "language.y"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
       2,     2,     2,    61,     2,     2,     2,    60,     2,     2,
      52,    53,    58,    56,    51,    57,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      54,    46,    55,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,    95,    96,   100,   101,   102,   103,   107,
     108,   109,   110,   111,   112,   116,   117,   121,   121,   122,
     122,   123,   123,   124,   125,   126,   127,   128,   132,   133,
     137,   138,   142,   143,   143,   147,   148,   152,   153,   154,
     155,   156,   157,   158,   159,   163,   164,   168,   169,   173,
     174,   178,   179,   183,   184,   188,   189,   193,   194,   195,
     199,   200,   201,   202,   203,   207,   208,   209,   213,   214,
     215,   216,   220,   221,   222,   223,   224,   228,   229,   230,
     231,   235,   236,   237,   238,   239,   240,   241,   245,   246,
     250,   251,   252,   253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CHAR",
  "IDENTIFIER", "STRING_LITERAL", "CONSTANT_FLOAT", "CONSTANT_INT",
  "CONSTANT_HEX", "CONSTANT_CHAR", "IF", "ELSE", "WHILE", "DO", "RETURN",
  "\"++\"", "\"--\"", "\"!\"", "\"*\"", "\"/\"", "\"%\"", "\"+\"",
  "OP_NEG", "\"-\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"||\"", "\"&&\"", "\"=\"", "UNRECOGNIZED_TOKEN",
  "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST", "VARIABLE", "ARRAY",
  "ARRAY_INDEX", "FUNCTION", "FUNCTION_CALL", "';'", "'='", "'['", "']'",
  "'{'", "'}'", "','", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "$accept", "start", "declaration_list",
  "declaration", "init_declarator", "initializer_list",
  "function_definition", "$@1", "$@2", "$@3", "parameter_list",
  "parameter", "compound_statement", "$@4", "statement_list", "statement",
  "conditional_statement", "iteration_statement", "return_statement",
  "assignment_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_list", "type", YY_NULLPTR
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
     295,   296,   297,   298,   299,    59,    61,    91,    93,   123,
     125,    44,    40,    41,    60,    62,    43,    45,    42,    47,
      37,    33
};
# endif

#define YYPACT_NINF -206

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-206)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1002,   133,    15,    47,    98,   109,   126,   462,   729,    90,
     813,   148,   950,  1011,   989,  -206,   996,  1137,    55,  1181,
     469,    97,   754,    31,    81,   113,  4218,  4250,  4282,  4314,
    4346,  4378,   114,   142,   152,   377,  1295,  1295,  1362,  1332,
    1295,  1295,   170,  1421,  1482,  1501,  2509,  2603,   180,   206,
     -24,   175,   248,   502,  1794,  7700,  7732,  4410,  4442,   228,
    1246,   213,   238,   262,   273,     0,   294,   168,   191,   343,
    2680,  1332,  1332,   361,   338,  7739,  6106,  7771,   346,  7778,
    7810,  2701,  1269,  2760,  2779,  2838,  1295,  1295,  1295,  1295,
    1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,
    1561,   165,   182,    -2,   369,  1276,   368,  2857,   387,   378,
      42,   375,   380,   388,  4474,   214,   574,   853,  2374,  8348,
    8377,  8383,  8412,  7817,  7849,  7856,  7888,  7895,   -10,   393,
    4506,   199,   204,   402,  1744,  2916,  1391,   469,   232,  2935,
     408,   403,   412,  1332,  4538,  1835,  4570,   154,   305,  1450,
     469,  2994,  1560,   469,   386,    54,  3013,   418,   395,   438,
     188,  3072,  1581,  3091,   412,   449,   463,   370,  1645,  1721,
    3150,  3169,  3228,  4602,  4634,  4666,  4698,  4730,  4762,  2006,
    2006,  1332,  2006,  2006,   106,   -17,   458,  2262,  8422,  7927,
    7940,  4794,  4826,  3247,  6138,  6170,  6202,  6234,  6266,  6298,
    1332,  6330,  4858,  4890,  4922,  4954,  4986,  5018,  2027,  2027,
    1332,  2027,  2027,   -19,    79,   320,  1802,   291,   258,   637,
    5050,  5082,  1561,   397,  1056,  2153,  3514,  3546,  3578,  3610,
    2088,  2088,  1332,  2088,  2088,    -5,   190,   -21,  1414,   605,
    7236,  7268,  3642,  3674,  3706,  3738,  3770,  3802,  3834,  3866,
    2104,  2104,  1332,  2104,  2104,    -6,   385,    87,  1710,  2190,
    7279,  7311,  3898,  3930,  3306,  3325,   469,  6362,  6394,  6426,
    6458,  6490,  6522,  1332,  7972,  6554,  6586,  7985,   454,  8017,
    8030,  2006,  2006,  2006,  2006,  2006,  2006,  2006,  2006,  2006,
    2006,  2006,  2006,  2006,  2006,  1561,   542,   501,   469,   464,
    6618,  6650,  6682,  6714,  6746,  6778,  1332,  8062,  6810,  6842,
    8070,   471,  8078,  8110,  2027,  2027,  2027,  2027,  2027,  2027,
    2027,  2027,  2027,  2027,  2027,  2027,  2027,  2027,  1561,   565,
     480,  6874,   400,  5114,  5146,  5178,  5210,  5242,  5274,  1332,
    7321,  5306,  5338,  7353,   484,  7363,  7395,  2088,  2088,  2088,
    2088,  2088,  2088,  2088,  2088,  2088,  2088,  2088,  2088,  2088,
    2088,  1561,   857,  2611,  5370,  5402,  5434,  5466,  5498,  1332,
    7406,  5530,  5562,  7438,   495,  7449,  7481,  2104,  2104,  2104,
    2104,  2104,  2104,  2104,  2104,  2104,  2104,  2104,  2104,  2104,
    2104,  1561,   912,   781,   469,  3384,   505,  1561,   930,  5594,
     131,   467,  8570,  8578,  8451,  8461,  8490,  8500,  8123,  8155,
    8168,  8200,  8213,   123,   507,  5626,   404,  3403,  6906,   509,
    1561,  1039,  5658,    94,   379,  8605,  8611,   670,  8529,  8535,
    8541,  8245,  8253,  8261,  8293,  8301,    45,   515,  5690,   444,
    6938,  6970,   511,  1561,  1156,  3962,   203,    43,  2271,  2548,
    2320,  2358,  2409,  2418,  7491,  7523,  7533,  7565,  7575,    57,
     517,  3994,   452,   513,  1561,  1187,  4026,   392,   119,  1743,
    2096,  2449,  2517,  8333,  8341,  7607,  7618,  7650,  7661,  7693,
     135,   530,  4058,   460,  3462,  3481,  7002,   531,  7034,   472,
    5722,  5754,   570,  7066,   532,  7098,   476,  5786,  5818,  5850,
     538,  5882,   492,  4090,  4122,  5914,   539,  5946,   493,  4154,
    4186,   843,  7130,  7162,  7194,  7226,  5978,  6010,  6042,  6074
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,   581,   122,  -206,  -206,  -206,  -206,  -206,
    -206,   488,     3,  -167,  -117,   -15,  -206,  -206,  -206,   736,
    2236,  2033,  1921,  1585,  1589,  1315,   939,   -20,   359,  -205,
       1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    42,   147,    10,   153,   150,   137,
      67,    68,    43,    20,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    76,   201,   132,
      59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    11,    57,   191,    14,   266,   133,   -90,    11,    86,
     349,   350,   -55,   -55,   314,    57,   -53,   282,   332,   220,
     151,   -51,   -90,    86,    57,    69,   298,   377,   347,    83,
     -55,   -53,   -55,   161,   -51,   -52,   163,    73,   173,   174,
     175,   176,   177,   178,   -51,   -51,   -51,   134,   -51,   179,
     180,   220,   220,   106,   -91,   -45,    21,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   164,   -45,
     -45,   -45,   -45,   -45,   349,   350,   -56,   -56,   314,    62,
     191,   242,    64,   181,    65,     3,     4,     5,   182,   140,
     347,   416,   183,   -30,   -56,   -30,   -56,   394,   -52,   -45,
      -9,    22,    23,   -45,   -45,   -92,   -45,    24,   -52,    69,
     -52,   -45,   -53,   315,   262,   -45,   -93,    57,   379,   380,
     -55,   -55,     9,   220,   439,   242,    15,   -54,   315,     9,
      57,    57,   -53,    57,    66,    17,    83,   -55,   -55,   281,
     262,    57,    60,    57,   155,   156,    83,   -54,    83,   395,
     379,   380,   -56,   -56,   -51,    18,   281,   462,    70,   275,
     275,   220,   275,   275,   -54,   282,    71,   170,   377,   -56,
     -56,   -52,   224,   225,   226,   227,   228,   229,    12,   -54,
     220,   417,    13,   230,   231,   -52,   -52,   483,   308,   308,
     220,   308,   308,   489,    72,   244,   245,   246,   247,   248,
     249,   193,   191,   242,   159,   160,   250,   251,   -53,    87,
     341,   341,   220,   341,   341,    81,   496,   232,   130,   108,
     -53,   109,   233,   -53,   348,    84,   234,    -9,    22,    23,
     371,   371,   220,   371,   371,   102,   -54,   348,   166,   502,
     252,   -53,   -28,   -53,   -28,   253,    57,   -54,    87,   254,
     -88,    85,   -88,   220,   -54,   145,   -54,   146,   -10,   -54,
     508,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   191,   242,   484,    57,    88,
      89,   -55,   -55,   -29,   103,   -29,   220,   -65,   -65,   -65,
     -65,   -65,   -65,   -55,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   191,   242,
     104,   -65,   -65,   -65,   -65,   -65,   324,   325,   326,   220,
     -60,   -60,   -60,   -60,   -60,   -60,   105,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   191,   242,   107,   -60,   -60,   -60,   322,   323,   220,
     110,   316,   317,   -55,   -55,   -15,   -15,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   191,   242,   -55,    57,    57,   113,   191,   242,    58,
      83,    58,   192,   -50,    26,    27,    28,    29,    30,    31,
       2,     3,     4,     5,    58,    36,    37,    57,   221,   114,
     191,   242,    83,    58,   224,   225,   226,   227,   228,   229,
     316,   317,   -56,   -56,   -11,   230,   231,   135,   -53,   378,
     -16,   -16,   -49,   191,   242,   -54,   378,   139,   141,    39,
     221,   221,   -56,   142,    40,   -53,   -53,   -31,    41,   -31,
     143,   144,   -54,   -54,   191,   242,   -89,   -14,   -89,   232,
     331,   145,   264,   441,   233,   145,   154,   491,   234,   192,
     243,   172,    -2,     1,    57,     2,     3,     4,     5,    83,
      25,   165,     2,     3,     4,     5,    26,    27,    28,    29,
      30,    31,    32,   -12,    33,    34,    35,    36,    37,   283,
     284,   -55,   -55,   263,   171,   145,    58,   498,   283,   284,
     -56,   -56,   221,   145,   243,   504,   -55,   399,   -13,    58,
      58,   145,    58,   510,    38,   -56,   -32,   418,   172,   263,
      58,    39,    58,   145,   422,   513,    40,   145,   440,   515,
      41,    90,    91,   -57,   -57,   -57,   -57,   445,   276,   276,
     221,   276,   276,   145,   145,   517,   519,   -57,   466,   224,
     225,   226,   227,   228,   229,   490,    92,    93,   486,   221,
     230,   231,   493,   497,   499,   503,   505,   309,   309,   221,
     309,   309,   224,   225,   226,   227,   228,   229,   509,   512,
     514,   192,   243,   230,   231,   -34,   516,   518,    16,   342,
     342,   221,   342,   342,   232,   415,   138,     0,     0,   233,
       0,     0,     0,   234,     0,    88,    89,   -56,   -56,   372,
     372,   221,   372,   372,     0,     0,     0,   232,   438,   -56,
       0,     0,   233,     0,     0,    58,   234,     0,     0,     0,
       0,     0,   221,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   192,   243,   -60,    58,   -60,   -60,
     -60,   355,   356,     0,     0,   221,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   192,   243,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   221,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     192,   243,     0,   -63,   -63,   -63,   322,   323,   221,    -3,
      -3,     0,    -3,    -3,    -3,    -3,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     192,   243,     0,    58,    58,     0,   192,   243,    61,    63,
       0,    26,    27,    28,    29,    30,    31,     0,     0,     0,
       0,    74,    36,    37,     0,    78,    58,     0,     0,   192,
     243,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   192,   243,     0,     0,    39,   111,   112,     0,
       0,    40,     0,    -5,    -5,    41,    -5,    -5,    -5,    -5,
       0,     0,     0,   192,   243,     0,   -32,     0,     0,     0,
     -32,   -32,     0,   -32,     0,     0,   129,   131,   -32,     0,
       0,     0,   -32,    58,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   224,   225,   226,   227,   228,   229,
     148,     0,     0,     0,     0,   230,   231,     0,     0,   157,
       0,   158,    90,    91,   -58,   -58,   -58,   -58,   -34,     0,
       0,     0,   -34,   -34,     0,   -34,   167,     0,   -58,     0,
     -34,     0,     0,     0,   -34,     0,     0,    92,    93,   232,
     461,     0,     0,     0,   233,     0,     0,   278,   234,   224,
     225,   226,   227,   228,   229,     0,     0,     0,     0,     0,
     230,   231,     0,     0,     0,     0,   299,   224,   225,   226,
     227,   228,   229,     0,     0,     0,   311,     0,   230,   231,
      -7,    -7,     0,    -7,    -7,    -7,    -7,     0,   330,   131,
       0,     0,   190,     0,   232,   482,     0,     0,   344,   233,
       0,     0,     0,   234,     0,    75,    77,     0,   219,    79,
      80,     0,   232,   488,     0,     0,     0,   233,   374,    -8,
      -8,   234,    -8,    -8,    -8,    -8,    -4,    -4,     0,    -4,
      -4,    -4,    -4,     1,     0,     2,     3,     4,     5,   396,
     219,   219,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   414,   131,     0,     0,   125,   126,   127,     0,   190,
     241,     0,   419,     0,     0,     0,   224,   225,   226,   227,
     228,   229,     0,     0,     0,     0,   -33,   230,   231,     0,
     -33,    19,     0,   -33,   437,   131,     0,     0,   -33,     0,
       0,     0,   -33,   261,     0,   442,     0,     0,     0,     0,
       0,     0,   219,     0,   241,   -81,   -81,   -81,   -81,   -81,
     -81,   232,   495,     0,     0,     0,   233,   460,   131,   261,
     234,     0,   -81,   -81,     0,   463,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   274,   277,
     219,   279,   280,     0,     0,     0,     0,   481,   131,     0,
       0,     0,     0,   487,   131,     0,     0,    -6,    -6,   219,
      -6,    -6,    -6,    -6,     0,     0,     0,   307,   310,   219,
     312,   313,     0,     0,     0,     0,   494,   131,     0,     0,
       0,   190,   241,   224,   225,   226,   227,   228,   229,   340,
     343,   219,   345,   346,   230,   231,     0,     0,     0,   500,
     131,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,   370,
     373,   219,   375,   376,   224,   225,   226,   227,   228,   229,
     506,   131,     0,     0,     0,   230,   231,     0,   232,   501,
       0,     0,   219,   233,     0,     0,     0,   234,     0,     0,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     410,   411,   412,   190,   190,   241,     0,     0,     0,   232,
     507,     0,     0,     0,   233,   219,   -27,   -27,   234,   -27,
     -27,   -27,   -27,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   433,   434,   435,   219,   190,   241,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -26,   -26,   219,   -26,
     -26,   -26,   -26,     0,     0,     0,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   456,   457,   458,   241,
     190,   241,   194,   195,   196,   197,   198,   199,   219,     0,
       0,     0,     0,    36,    37,     0,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   477,   478,   479,   261,
     190,   241,     0,     0,     0,     0,   190,   241,   189,   202,
     203,   204,   205,   206,   207,     0,     0,   200,     0,     0,
     208,   209,    40,     0,   218,     0,    41,     0,     0,   190,
     241,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   190,   241,   210,     0,   218,   218,     0,   211,
       0,   -25,   -25,   212,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,     0,   190,   241,     0,     0,   -37,     0,   123,
     124,   -37,   -37,     0,   -37,   189,   240,     0,     0,   -37,
       0,     0,   -42,   -37,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,   351,   352,   -57,   -57,   -57,   -57,   260,
     -24,   -24,     0,   -24,   -24,   -24,   -24,     0,   218,     0,
     240,     0,     0,     0,     0,   -57,   -42,   -57,   353,   354,
     -42,   -42,     0,   -42,     0,   260,     0,     0,   -42,     0,
       0,     0,   -42,    25,     0,     2,     3,     4,     5,    26,
      27,    28,    29,    30,    31,    32,   218,    33,    34,    35,
      36,    37,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   218,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   218,     0,    38,     0,     0,
       0,   172,    82,     0,    39,     0,     0,   189,   240,    40,
       0,     0,     0,    41,     0,     0,   -35,   218,     0,     0,
     -35,   -35,     0,   -35,     0,     0,     0,     0,   -35,     0,
     -23,   -23,   -35,   -23,   -23,   -23,   -23,   218,   173,   174,
     175,   176,   177,   178,     0,     0,     0,     0,     0,   179,
     180,   -22,   -22,     0,   -22,   -22,   -22,   -22,   218,     0,
       0,     0,     0,     0,     0,     0,   189,   189,   189,   189,
     189,   189,   189,   189,   408,   409,     0,     0,   187,   189,
     189,   240,   188,   181,     0,     0,     0,     0,   182,     0,
       0,   218,   183,     0,   216,     0,     0,     0,   217,   218,
     218,   218,   218,   218,   218,   218,   218,   431,   432,     0,
       0,     0,   218,   189,   240,   -20,   -20,     0,   -20,   -20,
     -20,   -20,     0,     0,   218,     0,   216,   216,     0,     0,
     217,   217,   240,   240,   240,   240,   240,   240,   240,   240,
     454,   455,     0,   117,   118,   240,   189,   240,     0,   119,
     120,   121,   122,     0,   218,   187,   238,     0,     0,   188,
     239,     0,   260,   260,   260,   260,   260,   260,   260,   260,
     475,   476,     0,     0,     0,   260,   189,   240,     0,     0,
       0,     0,   189,   240,     0,     0,     0,     0,     0,   258,
       0,   -18,   -18,   259,   -18,   -18,   -18,   -18,   216,     0,
     238,     0,   217,     0,   239,   189,   240,     0,     0,   381,
     382,   -57,   -57,   -57,   -57,   258,     0,     0,     0,   259,
       0,   244,   245,   246,   247,   248,   249,     0,   189,   240,
     -57,   -57,   250,   251,   383,   384,   216,     0,     0,     0,
     217,     0,   381,   382,   -58,   -58,   -58,   -58,     0,   189,
     240,     0,     0,     0,     0,   216,     0,     0,     0,   217,
       0,     0,     0,   -58,   -58,   216,   252,   383,   384,   217,
       0,   253,     0,     0,     0,   254,     0,   187,   238,     0,
       0,   188,   239,     0,     0,     0,     0,   216,     0,     0,
       0,   217,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,   318,   319,   -57,   -57,   -57,   -57,   216,     0,   -60,
       0,   217,   224,   225,   226,   227,   228,   229,   -60,   -60,
      94,    95,     0,   230,   231,   -57,   320,   321,   216,     0,
       0,     0,   217,     0,     0,     0,   187,   187,   402,   403,
     188,   188,   188,   188,   404,   405,   406,   407,     0,   187,
     187,   238,     0,   188,   188,   239,     0,   232,     0,     0,
       0,   216,   233,     0,     0,   217,   234,     0,     0,   216,
     216,   425,   426,   217,   217,   217,   217,   427,   428,   429,
     430,     0,   216,   187,   238,     0,   217,   188,   239,     0,
       0,     0,     0,     0,   216,     0,     0,     0,   217,     0,
       0,     0,   238,   238,   448,   449,   239,   239,   239,   239,
     450,   451,   452,   453,   186,   238,   187,   238,     0,   239,
     188,   239,     0,     0,   216,     0,     0,     0,   217,     0,
     215,     0,   258,   258,   469,   470,   259,   259,   259,   259,
     471,   472,   473,   474,     0,   258,   187,   238,     0,   259,
     188,   239,   187,   238,     0,     0,   188,   239,     0,     0,
       0,     0,   215,   215,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   238,     0,   116,   188,
     239,     0,     0,   267,   268,   269,   270,   271,   272,     0,
       0,   186,   237,     0,   179,   180,     0,     0,   187,   238,
       0,     0,   188,   239,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,   208,   209,     0,     0,   187,
     238,     0,     0,   188,   239,   257,   185,     0,   273,     0,
       0,     0,     0,   182,   215,     0,   237,   183,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,     0,   306,
       0,   257,     0,     0,   211,     0,     0,     0,   212,     0,
       0,     0,     0,     0,     0,   333,   334,   335,   336,   337,
     338,     0,   215,     0,   214,   214,   230,   231,     0,     0,
       0,   363,   364,   365,   366,   367,   368,     0,     0,   115,
       0,   215,   250,   251,     0,   381,   382,   -59,   -59,   -59,
     -59,   215,     0,   185,   236,     0,     0,     0,     0,     0,
     339,     0,     0,   186,   237,   233,   -59,   -59,     0,   234,
     383,   384,     0,   215,     0,     0,   369,     0,     0,     0,
       0,   253,     0,     0,     0,   254,     0,   256,     0,     0,
       0,     0,     0,   215,     0,     0,   214,     0,   236,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,   256,   215,     0,     0,     0,     0,   -82,
     -82,     0,   186,   401,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   214,   186,   186,   237,     0,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   215,     0,     0,
       0,     0,     0,   214,     0,   215,   424,     0,     0,     0,
     -60,   -60,     0,   214,   -60,   -60,   385,   386,   215,   186,
     237,     0,     0,     0,     0,   185,   236,     0,     0,   184,
     215,     0,     0,     0,     0,   214,     0,     0,   237,   447,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,   237,   186,   237,     0,   214,     0,     0,     0,     0,
     215,   285,   286,   -57,   -57,   -57,   -57,     0,   257,   468,
     351,   352,   -58,   -58,   -58,   -58,   214,   213,   213,     0,
     -57,   257,   186,   237,   400,     0,   287,   288,   186,   237,
       0,     0,   -58,     0,   -58,   353,   354,   185,   185,   236,
       0,     0,     0,     0,     0,   128,   184,   235,     0,   214,
       0,   186,   237,     0,     0,     0,     0,   423,     0,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,
     214,   185,   236,     0,   186,   237,     0,     0,     0,     0,
     255,   -63,   214,   -63,   -63,   -63,   355,   356,     0,   213,
     446,   235,     0,     0,     0,   186,   237,   -64,   -64,   -64,
     -64,   -64,   -64,   236,   185,   236,   255,     0,     0,     0,
       0,     0,   214,    90,    91,   -59,   -59,   -59,   -59,   -64,
     467,   -64,   -64,   -64,   355,   356,     0,   213,     0,   -59,
       0,     0,     0,   256,   185,   236,     0,     0,    92,    93,
     185,   236,     0,     0,     0,     0,   213,     0,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   213,   -62,   -62,   -62,
     -62,   -62,   -62,   185,   236,     0,     0,     0,   184,   235,
     -61,     0,   -61,   -61,   -61,   355,   356,     0,   213,   -62,
       0,   -62,   -62,   -62,   355,   356,   185,   236,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,   185,   236,   -63,
     -63,     0,     0,   -63,   -63,   385,   386,     0,     0,   213,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
     413,   184,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -40,     0,     0,     0,   -40,   -40,
       0,   -40,     0,   436,   184,   235,   -40,   -64,   -64,     0,
     -40,   -64,   -64,   385,   386,   213,     0,   351,   352,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   459,   184,   235,   -59,
       0,   -59,   353,   354,   -41,   213,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,   480,   184,   235,     0,
       0,     0,     0,   184,   235,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -41,     0,
       0,     0,   -41,   -41,     0,   -41,   184,   235,   -81,     0,
     -41,   -81,   -81,   -81,   -41,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   184,
     235,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     184,   235,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,   -44,     0,     0,     0,   -44,
     -44,     0,   -44,     0,     0,     0,     0,   -44,     0,     0,
       0,   -44,     0,     0,     0,     0,   -38,     0,     0,     0,
     -38,   -38,     0,   -38,     0,     0,     0,     0,   -38,     0,
       0,   -36,   -38,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,   -36,     0,     0,     0,   -36,
     -36,     0,   -36,     0,     0,     0,     0,   -36,     0,     0,
       0,   -36,     0,     0,   -43,     0,     0,     0,   -43,   -43,
       0,   -43,     0,     0,     0,     0,   -43,     0,     0,   -39,
     -43,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,
       0,     0,     0,   -39,     0,     0,     0,   -39,   -39,     0,
     -39,     0,     0,     0,     0,   -39,     0,     0,     0,   -39,
       0,     0,   -21,     0,     0,     0,   -21,   136,     0,   -21,
       0,     0,     0,     0,   -21,     0,     0,   -19,   -21,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,     0,     0,     0,     0,     0,
       0,   -19,     0,     0,     0,   -19,   149,     0,   -19,     0,
       0,     0,     0,   -19,     0,     0,     0,   -19,     0,     0,
     -17,     0,     0,     0,   -17,   152,     0,   -17,     0,     0,
       0,     0,   -17,     0,     0,    25,   -17,     2,     3,     4,
       5,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,   172,   162,     0,    39,     0,     0,     0,
       0,    40,     0,     0,     0,    41,     0,     0,   -47,     0,
       0,     0,   -47,   -47,     0,   -47,     0,     0,     0,     0,
     -47,     0,     0,    25,   -47,     2,     3,     4,     5,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    25,     0,     2,     3,     4,     5,    26,    27,
      28,    29,    30,    31,    32,     0,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,   172,   168,     0,    39,     0,     0,     0,     0,    40,
       0,     0,     0,    41,     0,     0,    38,     0,     0,     0,
     172,   169,     0,    39,     0,     0,     0,     0,    40,     0,
       0,   -46,    41,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,     0,     0,     0,   -46,     0,     0,     0,   -46,
     -46,     0,   -46,     0,     0,     0,     0,   -46,     0,     0,
       0,   -46,     0,     0,   -48,     0,     0,     0,   -48,   -48,
       0,   -48,     0,     0,     0,     0,   -48,     0,     0,   -33,
     -48,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,   -33,     0,     0,     0,   -33,   265,     0,
     -33,     0,     0,     0,     0,   -33,     0,     0,     0,   -33,
       0,     0,   -33,     0,     0,     0,   -33,   297,     0,   -33,
       0,     0,     0,     0,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,   -33,     0,     0,     0,   -33,   393,     0,   -33,     0,
       0,     0,     0,   -33,     0,     0,     0,   -33,     0,     0,
     -32,     0,     0,     0,   -32,   -32,     0,   -32,     0,     0,
       0,     0,   -32,     0,     0,    25,   -32,     2,     3,     4,
       5,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    25,     0,     2,     3,     4,     5,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,   172,   485,     0,    39,     0,     0,     0,
       0,    40,     0,     0,     0,    41,     0,     0,    38,     0,
       0,     0,   172,   492,     0,    39,     0,     0,     0,     0,
      40,     0,     0,    25,    41,     2,     3,     4,     5,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,   172,   511,     0,    39,     0,     0,     0,     0,    40,
       0,     0,     0,    41,     0,     0,   -34,     0,     0,     0,
     -34,   -34,     0,   -34,     0,     0,     0,     0,   -34,     0,
       0,     0,   -34,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,   361,
       0,     0,     0,   -72,   362,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,     0,     0,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -82,     0,     0,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,     0,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -84,   -84,
       0,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,     0,     0,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -86,     0,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,   391,     0,     0,   -72,   -72,
     392,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,     0,     0,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,     0,     0,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,     0,     0,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,     0,     0,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,     0,     0,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -83,   -83,
       0,     0,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,     0,     0,     0,     0,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,     0,     0,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,     0,     0,     0,     0,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,    99,   100,     0,     0,
       0,     0,   101,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -77,   -77,   -77,
       0,     0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,     0,     0,     0,     0,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,     0,     0,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,     0,     0,
       0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,     0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,     0,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,     0,     0,     0,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   -84,   -84,     0,     0,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,   -86,
     -86,     0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     294,   295,   -72,     0,     0,     0,   296,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,     0,     0,     0,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   327,   328,     0,     0,
       0,     0,   329,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,   -72,   444,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,     0,
     -72,   -72,   465,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,     0,     0,     0,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,     0,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,     0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,     0,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,     0,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,     0,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,   222,     0,     0,     0,     0,   223,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,   -81,     0,     0,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,   -82,     0,     0,
       0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,   -83,
       0,     0,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,   -84,     0,     0,     0,     0,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,   -85,     0,     0,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,   -86,     0,     0,     0,     0,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,     0,   -77,     0,     0,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,     0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,     0,     0,     0,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,     0,     0,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,     0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   -72,     0,     0,     0,   398,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,     0,     0,     0,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   420,     0,     0,
       0,     0,   421,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,   -79,     0,     0,     0,     0,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,   -87,     0,     0,     0,     0,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,     0,   -78,     0,     0,     0,     0,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,   -80,     0,     0,
       0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,     0,     0,     0,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,     0,     0,     0,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,     0,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,     0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   357,   358,   359,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -65,
     -65,     0,     0,   -65,   -65,   -65,   -65,   387,   388,   389,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -74,
     -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -66,     0,   -66,   -66,   -66,   -66,   -66,   357,
     358,   359,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   357,   358,   359,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -66,   -66,     0,
       0,   -66,   -66,   -66,   -66,   387,   388,   389,   -67,   -67,
       0,     0,   -67,   -67,   -67,   -67,   387,   388,   389,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -65,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -65,   -65,   -65,   -65,    96,    97,
      98,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,     0,   -75,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,   -76,     0,     0,     0,
       0,     0,     0,   -74,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,   -73,     0,     0,     0,     0,
       0,     0,   -66,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -66,   -66,   -66,   -66,    96,    97,    98,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -67,     0,     0,     0,     0,     0,
       0,   -69,     0,   -67,   -67,   -67,   -67,    96,    97,    98,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -70,     0,     0,     0,     0,     0,     0,
     -71,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   291,   292,   293,   -68,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -75,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -73,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -66,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   291,   292,   293,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -67,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   291,   292,   293,   -69,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -70,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,   -66,   -66,
     -66,   -66,   -66,   324,   325,   326,   -67,   -67,   -67,   -67,
     -67,   324,   325,   326,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -61,   -61,     0,     0,   -61,   -61,   385,
     386,   -62,   -62,   -63,     0,   -62,   -62,   385,   386,     0,
       0,     0,   -63,   -63,    94,    95,   -64,   -64,   -64,   -64,
     -64,   -64,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,     0,   -61,     0,
       0,   -64,   -64,    94,    95,     0,     0,   -61,   -61,    94,
      95,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -62,     0,     0,
       0,     0,     0,     0,     0,     0,   -62,   -62,    94,    95,
     -60,     0,     0,     0,     0,     0,   -60,   -60,   289,   290,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -63,
       0,     0,     0,     0,     0,   -63,   -63,   289,   290,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   289,   290,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,   -61,     0,
       0,     0,     0,     0,   -61,   -61,   289,   290,   -62,     0,
       0,     0,     0,     0,   -62,   -62,   289,   290,   -64,   -64,
     -64,   -64,   -64,   -64,   -61,   -61,   -61,   -61,   -61,   -61,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   322,   323,     0,   -61,   -61,
     -61,   322,   323,     0,   -62,   -62,   -62,   322,   323,   285,
     286,   -58,   -58,   -58,   -58,     0,     0,   285,   286,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,     0,   -58,     0,
       0,     0,     0,     0,   287,   288,   -59,     0,     0,     0,
       0,     0,   287,   288,   318,   319,   -58,   -58,   -58,   -58,
     318,   319,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   320,
     321,     0,     0,     0,   -59,   320,   321
};

static const yytype_int16 yycheck[] =
{
      20,     0,    22,    23,     1,   172,     8,     7,     7,    33,
      31,    32,    33,    34,    33,    35,    33,    34,   223,    39,
     137,    45,     7,    33,    44,    24,   193,    33,    33,    44,
      51,    48,    53,   150,    53,    45,   153,    34,     7,     8,
       9,    10,    11,    12,    50,    51,    51,    49,    53,    18,
      19,    71,    72,    53,     7,     1,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    31,    32,    33,    34,    33,    48,
     100,   101,     1,    52,     3,     4,     5,     6,    57,    47,
      33,   296,    61,    51,    51,    53,    53,   264,    53,    45,
      45,    46,    47,    49,    50,     7,    52,    52,    51,   108,
      53,    57,    33,    34,   134,    61,     7,   137,    31,    32,
      33,    34,     0,   143,   329,   145,     0,    33,    34,     7,
     150,   151,    53,   153,    53,    45,   151,    50,    51,    33,
     160,   161,    45,   163,   141,   142,   161,    53,   163,   266,
      31,    32,    33,    34,    48,     7,    33,   362,    45,   179,
     180,   181,   182,   183,    33,    34,    52,   164,    33,    50,
      51,    48,     7,     8,     9,    10,    11,    12,    45,    48,
     200,   298,    49,    18,    19,    50,    51,   392,   208,   209,
     210,   211,   212,   398,    52,     7,     8,     9,    10,    11,
      12,    49,   222,   223,    50,    51,    18,    19,    33,    34,
     230,   231,   232,   233,   234,    45,   421,    52,    53,    51,
      45,    53,    57,    33,    34,    45,    61,    45,    46,    47,
     250,   251,   252,   253,   254,     7,    33,    34,    50,   444,
      52,    51,    51,    53,    53,    57,   266,    33,    34,    61,
      51,    45,    53,   273,    51,    51,    53,    53,    45,    45,
     465,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   394,   298,    31,
      32,    33,    34,    51,    46,    53,   306,    29,    30,    31,
      32,    33,    34,    45,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
      48,    53,    54,    55,    56,    57,    58,    59,    60,   339,
      29,    30,    31,    32,    33,    34,    53,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,    49,    53,    54,    55,    56,    57,   369,
       7,    31,    32,    33,    34,    50,    51,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,    53,   394,   395,    15,   397,   398,    20,
     395,    22,    23,    45,     7,     8,     9,    10,    11,    12,
       3,     4,     5,     6,    35,    18,    19,   417,    39,    53,
     420,   421,   417,    44,     7,     8,     9,    10,    11,    12,
      31,    32,    33,    34,    45,    18,    19,    49,    33,    34,
      50,    51,    45,   443,   444,    33,    34,    49,    53,    52,
      71,    72,    53,    53,    57,    50,    51,    51,    61,    53,
      52,    48,    50,    51,   464,   465,    51,    45,    53,    52,
      53,    51,    49,    53,    57,    51,    48,    53,    61,   100,
     101,    49,     0,     1,   484,     3,     4,     5,     6,   484,
       1,    53,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    45,    15,    16,    17,    18,    19,    31,
      32,    33,    34,   134,    45,    51,   137,    53,    31,    32,
      33,    34,   143,    51,   145,    53,    48,    53,    45,   150,
     151,    51,   153,    53,    45,    48,    15,    53,    49,   160,
     161,    52,   163,    51,    53,    53,    57,    51,    48,    53,
      61,    29,    30,    31,    32,    33,    34,    53,   179,   180,
     181,   182,   183,    51,    51,    53,    53,    45,    53,     7,
       8,     9,    10,    11,    12,    48,    54,    55,    53,   200,
      18,    19,    53,    48,    53,    48,    53,   208,   209,   210,
     211,   212,     7,     8,     9,    10,    11,    12,    48,    48,
      48,   222,   223,    18,    19,    15,    48,    48,     7,   230,
     231,   232,   233,   234,    52,    53,   108,    -1,    -1,    57,
      -1,    -1,    -1,    61,    -1,    31,    32,    33,    34,   250,
     251,   252,   253,   254,    -1,    -1,    -1,    52,    53,    45,
      -1,    -1,    57,    -1,    -1,   266,    61,    -1,    -1,    -1,
      -1,    -1,   273,    -1,    29,    30,    31,    32,    33,    34,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    51,   298,    53,    54,
      55,    56,    57,    -1,    -1,   306,    29,    30,    31,    32,
      33,    34,    -1,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,   339,    29,
      30,    31,    32,    33,    34,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,    -1,    53,    54,    55,    56,    57,   369,     0,
       1,    -1,     3,     4,     5,     6,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,    -1,   394,   395,    -1,   397,   398,    22,    23,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    35,    18,    19,    -1,    39,   417,    -1,    -1,   420,
     421,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,   443,   444,    -1,    -1,    52,    71,    72,    -1,
      -1,    57,    -1,     0,     1,    61,     3,     4,     5,     6,
      -1,    -1,    -1,   464,   465,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,   100,   101,    57,    -1,
      -1,    -1,    61,   484,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,     7,     8,     9,    10,    11,    12,
     134,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,   143,
      -1,   145,    29,    30,    31,    32,    33,    34,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,   160,    -1,    45,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    54,    55,    52,
      53,    -1,    -1,    -1,    57,    -1,    -1,   181,    61,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,   200,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,   210,    -1,    18,    19,
       0,     1,    -1,     3,     4,     5,     6,    -1,   222,   223,
      -1,    -1,    23,    -1,    52,    53,    -1,    -1,   232,    57,
      -1,    -1,    -1,    61,    -1,    36,    37,    -1,    39,    40,
      41,    -1,    52,    53,    -1,    -1,    -1,    57,   252,     0,
       1,    61,     3,     4,     5,     6,     0,     1,    -1,     3,
       4,     5,     6,     1,    -1,     3,     4,     5,     6,   273,
      71,    72,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,   295,   296,    -1,    -1,    96,    97,    98,    -1,   100,
     101,    -1,   306,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    45,    18,    19,    -1,
      49,    50,    -1,    52,   328,   329,    -1,    -1,    57,    -1,
      -1,    -1,    61,   134,    -1,   339,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,   145,    29,    30,    31,    32,    33,
      34,    52,    53,    -1,    -1,    -1,    57,   361,   362,   160,
      61,    -1,    46,    47,    -1,   369,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,   179,   180,
     181,   182,   183,    -1,    -1,    -1,    -1,   391,   392,    -1,
      -1,    -1,    -1,   397,   398,    -1,    -1,     0,     1,   200,
       3,     4,     5,     6,    -1,    -1,    -1,   208,   209,   210,
     211,   212,    -1,    -1,    -1,    -1,   420,   421,    -1,    -1,
      -1,   222,   223,     7,     8,     9,    10,    11,    12,   230,
     231,   232,   233,   234,    18,    19,    -1,    -1,    -1,   443,
     444,     0,     1,    -1,     3,     4,     5,     6,    -1,   250,
     251,   252,   253,   254,     7,     8,     9,    10,    11,    12,
     464,   465,    -1,    -1,    -1,    18,    19,    -1,    52,    53,
      -1,    -1,   273,    57,    -1,    -1,    -1,    61,    -1,    -1,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    57,   306,     0,     1,    61,     3,
       4,     5,     6,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
       1,    -1,     3,     4,     5,     6,     0,     1,   339,     3,
       4,     5,     6,    -1,    -1,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,     7,     8,     9,    10,    11,    12,   369,    -1,
      -1,    -1,    -1,    18,    19,    -1,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,    -1,    -1,    -1,    -1,   397,   398,    23,     7,
       8,     9,    10,    11,    12,    -1,    -1,    52,    -1,    -1,
      18,    19,    57,    -1,    39,    -1,    61,    -1,    -1,   420,
     421,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,   443,   444,    52,    -1,    71,    72,    -1,    57,
      -1,     0,     1,    61,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,   464,   465,    -1,    -1,    45,    -1,    94,
      95,    49,    50,    -1,    52,   100,   101,    -1,    -1,    57,
      -1,    -1,     1,    61,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    29,    30,    31,    32,    33,    34,   134,
       0,     1,    -1,     3,     4,     5,     6,    -1,   143,    -1,
     145,    -1,    -1,    -1,    -1,    51,    45,    53,    54,    55,
      49,    50,    -1,    52,    -1,   160,    -1,    -1,    57,    -1,
      -1,    -1,    61,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   181,    15,    16,    17,
      18,    19,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   200,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,   210,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,   222,   223,    57,
      -1,    -1,    -1,    61,    -1,    -1,    45,   232,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
       0,     1,    61,     3,     4,     5,     6,   252,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,
      19,     0,     1,    -1,     3,     4,     5,     6,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    -1,    -1,    23,   294,
     295,   296,    23,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,   306,    61,    -1,    39,    -1,    -1,    -1,    39,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    -1,
      -1,    -1,   327,   328,   329,     0,     1,    -1,     3,     4,
       5,     6,    -1,    -1,   339,    -1,    71,    72,    -1,    -1,
      71,    72,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,    -1,    88,    89,   360,   361,   362,    -1,    90,
      91,    92,    93,    -1,   369,   100,   101,    -1,    -1,   100,
     101,    -1,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,    -1,    -1,    -1,   390,   391,   392,    -1,    -1,
      -1,    -1,   397,   398,    -1,    -1,    -1,    -1,    -1,   134,
      -1,     0,     1,   134,     3,     4,     5,     6,   143,    -1,
     145,    -1,   143,    -1,   145,   420,   421,    -1,    -1,    29,
      30,    31,    32,    33,    34,   160,    -1,    -1,    -1,   160,
      -1,     7,     8,     9,    10,    11,    12,    -1,   443,   444,
      50,    51,    18,    19,    54,    55,   181,    -1,    -1,    -1,
     181,    -1,    29,    30,    31,    32,    33,    34,    -1,   464,
     465,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    50,    51,   210,    52,    54,    55,   210,
      -1,    57,    -1,    -1,    -1,    61,    -1,   222,   223,    -1,
      -1,   222,   223,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,   232,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    29,    30,    31,    32,    33,    34,   252,    -1,    45,
      -1,   252,     7,     8,     9,    10,    11,    12,    54,    55,
      56,    57,    -1,    18,    19,    53,    54,    55,   273,    -1,
      -1,    -1,   273,    -1,    -1,    -1,   281,   282,   283,   284,
     281,   282,   283,   284,   285,   286,   287,   288,    -1,   294,
     295,   296,    -1,   294,   295,   296,    -1,    52,    -1,    -1,
      -1,   306,    57,    -1,    -1,   306,    61,    -1,    -1,   314,
     315,   316,   317,   314,   315,   316,   317,   318,   319,   320,
     321,    -1,   327,   328,   329,    -1,   327,   328,   329,    -1,
      -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,   339,    -1,
      -1,    -1,   347,   348,   349,   350,   347,   348,   349,   350,
     351,   352,   353,   354,    23,   360,   361,   362,    -1,   360,
     361,   362,    -1,    -1,   369,    -1,    -1,    -1,   369,    -1,
      39,    -1,   377,   378,   379,   380,   377,   378,   379,   380,
     381,   382,   383,   384,    -1,   390,   391,   392,    -1,   390,
     391,   392,   397,   398,    -1,    -1,   397,   398,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   420,   421,    -1,    87,   420,
     421,    -1,    -1,     7,     8,     9,    10,    11,    12,    -1,
      -1,   100,   101,    -1,    18,    19,    -1,    -1,   443,   444,
      -1,    -1,   443,   444,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,   464,
     465,    -1,    -1,   464,   465,   134,    23,    -1,    52,    -1,
      -1,    -1,    -1,    57,   143,    -1,   145,    61,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,   160,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    -1,   181,    -1,    71,    72,    18,    19,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,    86,
      -1,   200,    18,    19,    -1,    29,    30,    31,    32,    33,
      34,   210,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,   222,   223,    57,    50,    51,    -1,    61,
      54,    55,    -1,   232,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    -1,   134,    -1,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   143,    -1,   145,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,   160,   273,    -1,    -1,    -1,    -1,    46,
      47,    -1,   281,   282,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   181,   294,   295,   296,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,   306,    -1,    -1,
      -1,    -1,    -1,   200,    -1,   314,   315,    -1,    -1,    -1,
      50,    51,    -1,   210,    54,    55,    56,    57,   327,   328,
     329,    -1,    -1,    -1,    -1,   222,   223,    -1,    -1,    23,
     339,    -1,    -1,    -1,    -1,   232,    -1,    -1,   347,   348,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,   360,   361,   362,    -1,   252,    -1,    -1,    -1,    -1,
     369,    29,    30,    31,    32,    33,    34,    -1,   377,   378,
      29,    30,    31,    32,    33,    34,   273,    71,    72,    -1,
      48,   390,   391,   392,   281,    -1,    54,    55,   397,   398,
      -1,    -1,    51,    -1,    53,    54,    55,   294,   295,   296,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,    -1,   306,
      -1,   420,   421,    -1,    -1,    -1,    -1,   314,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
     327,   328,   329,    -1,   443,   444,    -1,    -1,    -1,    -1,
     134,    51,   339,    53,    54,    55,    56,    57,    -1,   143,
     347,   145,    -1,    -1,    -1,   464,   465,    29,    30,    31,
      32,    33,    34,   360,   361,   362,   160,    -1,    -1,    -1,
      -1,    -1,   369,    29,    30,    31,    32,    33,    34,    51,
     377,    53,    54,    55,    56,    57,    -1,   181,    -1,    45,
      -1,    -1,    -1,   390,   391,   392,    -1,    -1,    54,    55,
     397,   398,    -1,    -1,    -1,    -1,   200,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,   210,    29,    30,    31,
      32,    33,    34,   420,   421,    -1,    -1,    -1,   222,   223,
      51,    -1,    53,    54,    55,    56,    57,    -1,   232,    51,
      -1,    53,    54,    55,    56,    57,   443,   444,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   464,   465,    50,
      51,    -1,    -1,    54,    55,    56,    57,    -1,    -1,   273,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
     294,   295,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,   327,   328,   329,    57,    50,    51,    -1,
      61,    54,    55,    56,    57,   339,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   360,   361,   362,    51,
      -1,    53,    54,    55,     1,   369,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,   390,   391,   392,    -1,
      -1,    -1,    -1,   397,   398,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,   420,   421,    47,    -1,
      57,    50,    51,    52,    61,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   443,
     444,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
     464,   465,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,     1,    61,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,     1,
      61,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,     1,    61,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,     1,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,     1,    61,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    61,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,     1,    61,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    61,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,     1,
      61,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,     1,    61,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,     1,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,     1,    61,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    61,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    50,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    45,    -1,    54,    55,    56,
      57,    58,    59,    60,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    54,    55,    56,    57,
      58,    59,    60,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    54,    55,    56,    57,    58,
      59,    60,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    54,    55,    56,    57,    58,    59,
      60,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    54,    55,    56,    57,    58,    59,    60,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    54,    55,    56,    57,    58,    59,    60,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    53,    54,    55,    56,    57,    58,    59,
      60,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    48,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    53,    54,    55,    56,
      57,    58,    59,    60,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    29,    30,    31,
      32,    33,    34,    50,    51,    -1,    -1,    54,    55,    56,
      57,    50,    51,    45,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    54,    55,    56,    57,    29,    30,    31,    32,
      33,    34,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,    54,    55,    56,
      57,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    29,    30,
      31,    32,    33,    34,    29,    30,    31,    32,    33,    34,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    -1,    53,    54,
      55,    56,    57,    -1,    53,    54,    55,    56,    57,    29,
      30,    31,    32,    33,    34,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    48,    -1,    -1,    -1,
      -1,    -1,    54,    55,    29,    30,    31,    32,    33,    34,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    63,    64,    65,    66,
      68,    92,    45,    49,    74,     0,    65,    45,     7,    50,
      75,     1,    46,    47,    52,     1,     7,     8,     9,    10,
      11,    12,    13,    15,    16,    17,    18,    19,    45,    52,
      57,    61,    66,    74,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    92,
      45,    81,    48,    81,     1,     3,    53,    72,    73,    92,
      45,    52,    52,    74,    81,    88,    89,    88,    81,    88,
      88,    45,    50,    77,    45,    45,    33,    34,    31,    32,
      29,    30,    54,    55,    56,    57,    58,    59,    60,    46,
      47,    52,     7,    46,    48,    53,    53,    49,    51,    53,
       7,    81,    81,    15,    53,    83,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    82,    81,
      53,    81,    91,     8,    49,    49,    50,    71,    73,    49,
      47,    53,    53,    52,    48,    51,    53,    67,    81,    50,
      70,    76,    50,    69,    48,    74,    74,    81,    81,    50,
      51,    76,    50,    76,    14,    53,    50,    81,    50,    50,
      74,    45,    49,     7,     8,     9,    10,    11,    12,    18,
      19,    52,    57,    61,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    49,     7,     8,     9,    10,    11,    12,
      52,    90,     7,     8,     9,    10,    11,    12,    18,    19,
      52,    57,    61,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    47,    52,     7,     8,     9,    10,    11,    12,
      18,    19,    52,    57,    61,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     7,     8,     9,    10,    11,    12,
      18,    19,    52,    57,    61,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    49,    50,    75,     7,     8,     9,
      10,    11,    12,    52,    88,    89,    90,    88,    81,    88,
      88,    33,    34,    31,    32,    29,    30,    54,    55,    56,
      57,    58,    59,    60,    46,    47,    52,    50,    75,    81,
       7,     8,     9,    10,    11,    12,    52,    88,    89,    90,
      88,    81,    88,    88,    33,    34,    31,    32,    29,    30,
      54,    55,    56,    57,    58,    59,    60,    46,    47,    52,
      81,    53,    91,     7,     8,     9,    10,    11,    12,    52,
      88,    89,    90,    88,    81,    88,    88,    33,    34,    31,
      32,    29,    30,    54,    55,    56,    57,    58,    59,    60,
      46,    47,    52,     7,     8,     9,    10,    11,    12,    52,
      88,    89,    90,    88,    81,    88,    88,    33,    34,    31,
      32,    29,    30,    54,    55,    56,    57,    58,    59,    60,
      46,    47,    52,    50,    75,    76,    81,    47,    52,    53,
      83,    84,    85,    85,    86,    86,    86,    86,    87,    87,
      88,    88,    88,    82,    81,    53,    91,    76,    53,    81,
      47,    52,    53,    83,    84,    85,    85,    86,    86,    86,
      86,    87,    87,    88,    88,    88,    82,    81,    53,    91,
      48,    53,    81,    47,    52,    53,    83,    84,    85,    85,
      86,    86,    86,    86,    87,    87,    88,    88,    88,    82,
      81,    53,    91,    81,    47,    52,    53,    83,    84,    85,
      85,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      82,    81,    53,    91,    76,    50,    53,    81,    53,    91,
      48,    53,    50,    53,    81,    53,    91,    48,    53,    53,
      81,    53,    91,    48,    53,    53,    81,    53,    91,    48,
      53,    50,    48,    53,    48,    53,    48,    53,    48,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    67,    69,    68,    70,
      68,    71,    68,    68,    68,    68,    68,    68,    72,    72,
      73,    73,    74,    75,    74,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     5,     8,     9,     6,     1,     3,     0,     9,     0,
       9,     0,     8,     7,     7,     6,     5,     4,     1,     3,
       2,     4,     2,     0,     4,     1,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     5,     7,     5,     7,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     1,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1
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
#line 91 "language.y"
    { root = (yyvsp[0].node); }
#line 3123 "src/parser.c"
    break;

  case 3:
#line 95 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3129 "src/parser.c"
    break;

  case 4:
#line 96 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3135 "src/parser.c"
    break;

  case 5:
#line 100 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3141 "src/parser.c"
    break;

  case 6:
#line 101 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3147 "src/parser.c"
    break;

  case 7:
#line 102 "language.y"
    { (yyval.node) = NULL; }
#line 3153 "src/parser.c"
    break;

  case 8:
#line 103 "language.y"
    { (yyval.node) = NULL; }
#line 3159 "src/parser.c"
    break;

  case 9:
#line 107 "language.y"
    { add_symbol_var((yyvsp[-1].ival), (yyvsp[0].sval)); (yyval.node) = NULL; }
#line 3165 "src/parser.c"
    break;

  case 10:
#line 108 "language.y"
    { add_symbol_var((yyvsp[-3].ival), (yyvsp[-2].sval)); (yyval.node) = NULL; }
#line 3171 "src/parser.c"
    break;

  case 11:
#line 109 "language.y"
    { add_symbol_arr((yyvsp[-4].ival), (yyvsp[-3].sval)); (yyval.node) = NULL; }
#line 3177 "src/parser.c"
    break;

  case 12:
#line 110 "language.y"
    { add_symbol_arr((yyvsp[-7].ival), (yyvsp[-6].sval)); (yyval.node) = NULL; }
#line 3183 "src/parser.c"
    break;

  case 13:
#line 111 "language.y"
    { add_symbol_arr((yyvsp[-8].ival), (yyvsp[-7].sval)); (yyval.node) = NULL; }
#line 3189 "src/parser.c"
    break;

  case 14:
#line 112 "language.y"
    { add_symbol_arr((yyvsp[-5].ival), (yyvsp[-4].sval)); (yyval.node) = NULL; }
#line 3195 "src/parser.c"
    break;

  case 15:
#line 116 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3201 "src/parser.c"
    break;

  case 16:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3207 "src/parser.c"
    break;

  case 17:
#line 121 "language.y"
    { begin((yyvsp[-4].sval)); }
#line 3213 "src/parser.c"
    break;

  case 18:
#line 121 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); }
#line 3219 "src/parser.c"
    break;

  case 19:
#line 122 "language.y"
    { begin((yyvsp[-4].sval)); }
#line 3225 "src/parser.c"
    break;

  case 20:
#line 122 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); }
#line 3231 "src/parser.c"
    break;

  case 21:
#line 123 "language.y"
    { begin((yyvsp[-3].sval)); }
#line 3237 "src/parser.c"
    break;

  case 22:
#line 123 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); }
#line 3243 "src/parser.c"
    break;

  case 23:
#line 124 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node));           }
#line 3249 "src/parser.c"
    break;

  case 24:
#line 125 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node));           }
#line 3255 "src/parser.c"
    break;

  case 25:
#line 126 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node));           }
#line 3261 "src/parser.c"
    break;

  case 26:
#line 127 "language.y"
    { (yyval.node) = NULL; }
#line 3267 "src/parser.c"
    break;

  case 27:
#line 128 "language.y"
    { (yyval.node) = NULL; }
#line 3273 "src/parser.c"
    break;

  case 28:
#line 132 "language.y"
    { (yyval.node) = NULL; }
#line 3279 "src/parser.c"
    break;

  case 29:
#line 133 "language.y"
    { (yyval.node) = NULL; }
#line 3285 "src/parser.c"
    break;

  case 30:
#line 137 "language.y"
    { (yyval.node) = NULL; }
#line 3291 "src/parser.c"
    break;

  case 31:
#line 138 "language.y"
    { (yyval.node) = NULL; }
#line 3297 "src/parser.c"
    break;

  case 32:
#line 142 "language.y"
    { (yyval.node) = NULL; }
#line 3303 "src/parser.c"
    break;

  case 33:
#line 143 "language.y"
    { begin(NULL); }
#line 3309 "src/parser.c"
    break;

  case 34:
#line 143 "language.y"
    { finish(); (yyval.node) = (yyvsp[-1].node); }
#line 3315 "src/parser.c"
    break;

  case 35:
#line 147 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3321 "src/parser.c"
    break;

  case 36:
#line 148 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3327 "src/parser.c"
    break;

  case 37:
#line 152 "language.y"
    { (yyval.node) = NULL; }
#line 3333 "src/parser.c"
    break;

  case 38:
#line 153 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3339 "src/parser.c"
    break;

  case 39:
#line 154 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3345 "src/parser.c"
    break;

  case 40:
#line 155 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3351 "src/parser.c"
    break;

  case 41:
#line 156 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3357 "src/parser.c"
    break;

  case 42:
#line 157 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3363 "src/parser.c"
    break;

  case 43:
#line 158 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3369 "src/parser.c"
    break;

  case 44:
#line 159 "language.y"
    { (yyval.node) = NULL; }
#line 3375 "src/parser.c"
    break;

  case 45:
#line 163 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign((yyval.node)); }
#line 3381 "src/parser.c"
    break;

  case 46:
#line 164 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3387 "src/parser.c"
    break;

  case 47:
#line 168 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3393 "src/parser.c"
    break;

  case 48:
#line 169 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign((yyval.node)); }
#line 3399 "src/parser.c"
    break;

  case 49:
#line 173 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign((yyval.node)); }
#line 3405 "src/parser.c"
    break;

  case 50:
#line 174 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3411 "src/parser.c"
    break;

  case 51:
#line 178 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3417 "src/parser.c"
    break;

  case 52:
#line 179 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3423 "src/parser.c"
    break;

  case 53:
#line 183 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3429 "src/parser.c"
    break;

  case 54:
#line 184 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3435 "src/parser.c"
    break;

  case 55:
#line 188 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3441 "src/parser.c"
    break;

  case 56:
#line 189 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3447 "src/parser.c"
    break;

  case 57:
#line 193 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3453 "src/parser.c"
    break;

  case 58:
#line 194 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3459 "src/parser.c"
    break;

  case 59:
#line 195 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3465 "src/parser.c"
    break;

  case 60:
#line 199 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3471 "src/parser.c"
    break;

  case 61:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3477 "src/parser.c"
    break;

  case 62:
#line 201 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3483 "src/parser.c"
    break;

  case 63:
#line 202 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3489 "src/parser.c"
    break;

  case 64:
#line 203 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3495 "src/parser.c"
    break;

  case 65:
#line 207 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3501 "src/parser.c"
    break;

  case 66:
#line 208 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3507 "src/parser.c"
    break;

  case 67:
#line 209 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3513 "src/parser.c"
    break;

  case 68:
#line 213 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3519 "src/parser.c"
    break;

  case 69:
#line 214 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3525 "src/parser.c"
    break;

  case 70:
#line 215 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3531 "src/parser.c"
    break;

  case 71:
#line 216 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3537 "src/parser.c"
    break;

  case 72:
#line 220 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3543 "src/parser.c"
    break;

  case 73:
#line 221 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3549 "src/parser.c"
    break;

  case 74:
#line 222 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3555 "src/parser.c"
    break;

  case 75:
#line 223 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3561 "src/parser.c"
    break;

  case 76:
#line 224 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3567 "src/parser.c"
    break;

  case 77:
#line 228 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3573 "src/parser.c"
    break;

  case 78:
#line 229 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign((yyval.node)); }
#line 3579 "src/parser.c"
    break;

  case 79:
#line 230 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-2].node),     ENDARG)); assign((yyval.node)); }
#line 3585 "src/parser.c"
    break;

  case 80:
#line 231 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign((yyval.node)); }
#line 3591 "src/parser.c"
    break;

  case 81:
#line 235 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3597 "src/parser.c"
    break;

  case 82:
#line 236 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3603 "src/parser.c"
    break;

  case 83:
#line 237 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3609 "src/parser.c"
    break;

  case 84:
#line 238 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3615 "src/parser.c"
    break;

  case 85:
#line 239 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3621 "src/parser.c"
    break;

  case 86:
#line 240 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3627 "src/parser.c"
    break;

  case 87:
#line 241 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3633 "src/parser.c"
    break;

  case 88:
#line 245 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3639 "src/parser.c"
    break;

  case 89:
#line 246 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3645 "src/parser.c"
    break;

  case 90:
#line 250 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3651 "src/parser.c"
    break;

  case 91:
#line 251 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3657 "src/parser.c"
    break;

  case 92:
#line 252 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3663 "src/parser.c"
    break;

  case 93:
#line 253 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3669 "src/parser.c"
    break;


#line 3673 "src/parser.c"

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
#line 256 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
