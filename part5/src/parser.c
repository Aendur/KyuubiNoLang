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
#line 83 "src/language.y"

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
//extern Nodelist * node_list;


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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  529

#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
       2,     2,     2,    71,     2,     2,     2,    70,     2,     2,
      62,    63,    68,    66,    61,    67,     2,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      64,    56,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   111,   112,   113,   114,   118,   119,
     120,   121,   122,   123,   127,   128,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   140,   141,   145,   146,   150,
     151,   151,   155,   156,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   172,   175,   176,   180,   181,   185,   186,
     190,   191,   195,   196,   200,   201,   205,   206,   207,   211,
     212,   213,   214,   215,   219,   220,   221,   225,   226,   227,
     228,   232,   233,   234,   235,   236,   237,   241,   242,   243,
     244,   248,   249,   250,   251,   252,   253,   254,   258,   259,
     263,   264,   265,   266
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
  "UNRECOGNIZED_TOKEN", "INVALID_IDENTIFIER", "INVALID_CHAR_CONST", "LIST",
  "VARIABLE", "CONSTANT", "ARRAY", "ARRAY_INDEX", "FUNCTION",
  "FUNCTION_CALL", "VAR_DECL", "VAR_INIT", "ARR_DECL", "ARR_INIT",
  "GENERIC_NODE", "';'", "'='", "'['", "']'", "'{'", "'}'", "','", "'('",
  "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept",
  "declaration_list", "declaration", "init_declarator", "initializer_list",
  "function_definition", "$@1", "$@2", "$@3", "$@4", "argument_list",
  "argument", "compound_statement", "$@5", "statement_list", "statement",
  "inline_asm", "conditional_statement", "iteration_statement",
  "return_statement", "assignment_expression", "logical_or_expression",
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
     305,   306,   307,   308,   309,    59,    61,    91,    93,   123,
     125,    44,    40,    41,    60,    62,    43,    45,    42,    47,
      37,    33
};
# endif

#define YYPACT_NINF -236

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-236)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     708,   -31,    14,    56,    88,    96,   260,   542,   -20,   563,
     101,   646,  1433,   747,  -236,   810,  1041,   -35,  1381,   470,
    1663,    28,   793,    25,  2528,  4493,  4509,  4516,  4565,  4572,
     149,   178,   109,    49,   193,  1676,  1676,  2653,  1684,  1676,
    1676,  1676,   144,  2743,  2837,  2906,   203,  2937,  3006,   207,
     212,    53,   133,   422,    54,  2109,  6252,  6301,  4588,  4623,
     315,   299,   297,   306,   302,     7,    39,    82,   379,  3037,
    1770,   139,  1684,  1684,   363,   337,   391,  6308,  6324,  6358,
     334,  6374,  6381,  6430,  3106,  1391,  3137,  3206,  3237,  3306,
    1676,  1676,  1676,  1676,  1676,  1676,  1676,  1676,  1676,  1676,
    1676,  1676,  1676,  1676,   -44,     5,   351,  1405,   361,   593,
     367,   268,   352,  4639,   300,   322,   366,   376,   368,   386,
    4646,   231,   469,  1286,  1603,  2356,  2440,  6029,  7705,  6437,
    6453,  6487,  6503,  6510,    71,   398,  1940,  3337,   339,  3406,
     401,  4695,  1954,  4702,   419,   427,  1684,   440,   112,   184,
     470,   444,   470,   447,   344,   348,   853,  3437,   437,   455,
     548,  3506,  1502,  3537,  1563,   427,   459,   463,   229,  1643,
    1704,  3606,  3637,  3706,  4056,  4717,  4766,  4781,  4830,  4845,
    1961,  1961,  1684,  1961,  1961,  1961,    99,   117,   224,   858,
     910,  2611,  6559,  4894,  4909,  3737,  4121,  6566,  6582,  6616,
    6632,  6639,  1684,  6688,  4105,  3866,  3966,  4958,  4973,  4988,
    2048,  2048,  1684,  2048,  2048,  2048,   -13,    26,     8,  1027,
    7712,  6696,  6704,  5037,  5052,   400,  2752,  2866,  2966,  3066,
    3166,  2226,  2226,  1684,  2226,  2226,  2226,    35,    51,    22,
     269,  1740,   567,  5062,  3266,  3366,  1400,  4170,  4185,  4200,
    4249,  4264,  2330,  2330,  1684,  2330,  2330,  2330,    46,    -5,
     298,   474,   371,  5111,  5122,  4279,  4328,  3806,  3837,   470,
    1770,   289,  4342,  6717,  6766,  6779,  6792,  6841,  1684,  6854,
    6867,  6916,  6929,   460,  6942,  6991,  7004,  1961,  1961,  1961,
    1961,  1961,  1961,  1961,  1961,  1961,  1961,  1961,  1961,  1961,
    1961,   510,   470,  1770,   678,   477,  1770,   770,  4358,  7012,
    7020,  7069,  7077,  7085,  1684,  7093,  7101,  7150,  7158,   481,
    7166,  7174,  7182,  2048,  2048,  2048,  2048,  2048,  2048,  2048,
    2048,  2048,  2048,  2048,  2048,  2048,  2048,  1770,   838,   162,
    5132,  5142,  5191,  5201,  5211,  1684,  5221,  5270,  5280,  5290,
     486,  5300,  5349,  5359,  2226,  2226,  2226,  2226,  2226,  2226,
    2226,  2226,  2226,  2226,  2226,  2226,  2226,  2226,  1770,   916,
    1462,  5370,  5381,  5430,  5441,  5452,  1684,  5501,  5512,  5523,
    5572,   493,  5583,  5594,  5643,  2330,  2330,  2330,  2330,  2330,
    2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  1069,
     470,  3906,   507,  5658,   358,  1770,   933,   508,  5673,   199,
     393,  1843,  2302,  7758,  7768,  7778,  7790,  7231,  7244,  7257,
    7306,  7319,   185,  3937,   512,  7326,   387,  7375,   520,  5722,
     397,  1770,   953,   525,  5737,   106,   157,  1896,  1918,  7836,
    7843,  7850,  7857,  7383,  7391,  7399,  7409,  7458,    21,   535,
    3466,   442,  1770,  1105,   537,  3566,    69,   113,   658,  1219,
    2018,  2138,  2764,  7644,  5747,  5796,  5806,  5816,  5826,   137,
     549,  4407,   450,  1770,  1145,   546,  4422,   181,   551,  1352,
    1451,  1168,  2584,  7690,  7698,  5875,  5886,  5897,  5946,  5957,
     148,  4006,  4037,  5972,  6021,   555,  7471,   454,  7484,   599,
    7491,  7540,  6036,  6085,   559,  7548,   458,  7556,  3666,  3766,
     560,  6095,   465,  6105,  4437,  4486,   562,  6154,   516,  6165,
    2211,  7569,  7618,  7626,  7634,  6175,  6185,  6234,  6245
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -236,   615,   154,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,   529,     2,  -166,  -144,   -39,  -236,  -236,  -236,  -236,
     757,  2428,  2173,  2050,  1802,  1524,  1247,   967,   -19,   370,
    -235,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    42,   148,     9,   152,   150,   153,   151,
      66,    67,    43,    19,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    78,   203,
     115,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    58,   193,    13,    10,    86,   161,   269,   163,   323,
      10,    -8,    20,    21,    58,   135,   -90,   -52,   386,   223,
      -8,    20,    21,   -90,    11,    58,    68,    22,    12,   302,
     -54,   -54,   325,   326,    74,    16,   404,   174,   175,   176,
     177,   178,   179,   323,   -54,   -54,   356,   357,   -52,   324,
     -50,   193,   244,   223,   223,   -52,   -52,   354,    24,    25,
      26,    27,    28,    29,   136,   -91,   180,   181,   385,   426,
     108,   -54,   430,   -52,   355,    90,   -56,   -56,   -56,   -56,
      69,    94,    95,   -54,   -51,   -54,    62,    35,    36,   -52,
     182,   -53,   355,    90,   183,   184,   -50,   -92,   -50,   185,
     109,   400,   110,   451,   -48,   -93,   -50,   -50,   -50,   -56,
      17,    38,   -52,    68,   -52,    39,    40,   265,    96,    97,
      41,   287,    86,   244,    86,   401,   -51,   223,   -53,   324,
     -53,    58,   -53,    58,   472,   -55,   -55,   356,   357,   -52,
     288,   265,    58,   -25,    58,   -25,   156,   157,   225,   226,
     227,   228,   229,   230,     8,   -52,    91,   -50,   423,   354,
       8,   280,   280,   223,   280,   280,   280,   171,   195,   -53,
     385,   497,   159,   160,   -55,   -52,   -55,   231,   232,   -55,
     -55,   325,   326,   223,   -81,   -81,   -81,   -81,   -52,   -81,
     -81,   316,   316,   223,   316,   316,   316,   506,   -51,    84,
     -51,   233,   113,   -53,   386,   234,   235,   287,   -51,   -51,
     236,    72,   347,   347,   223,   347,   347,   347,   512,   452,
     -55,   -53,   288,   -81,   453,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   378,   378,   223,   378,   378,   378,   518,
      73,   -53,   -53,   -51,   -14,   -14,   -54,   -54,   289,   290,
      58,   193,   244,   -53,    91,    76,   491,   -53,    87,   223,
      14,     1,    88,     2,     3,     4,     5,    89,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   -54,    58,   193,   244,   -53,   193,   244,   -15,
     -15,   -56,   -56,   -56,   -56,   223,   358,   359,   225,   226,
     227,   228,   229,   230,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   193,   244,
     -54,   -54,   387,   388,   104,   140,   223,   231,   232,   -27,
     -56,   -27,   -56,   360,   361,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   193,
     244,   233,   403,   105,    -9,   234,   235,   223,   -54,   -54,
     236,   -88,    86,   -88,   106,   107,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     118,    58,    58,   142,    86,   143,   193,   244,   111,    59,
      59,   194,   -49,   -59,   -59,   -59,   -59,   120,   -59,   -59,
     -26,   119,   -26,    59,    58,   -28,   -10,   -28,   224,   -89,
     141,   -89,   193,   244,    59,   -55,   -55,   289,   290,   142,
     137,   494,   -81,   -81,   -81,   -81,   139,   -81,   -81,   144,
     146,   -59,   -59,   193,   244,   -59,   -59,   393,   394,   145,
     194,   245,   224,   224,   -54,   -54,    92,    93,   142,   147,
     501,   -55,    86,   -13,   193,   244,   -81,   337,   142,   154,
     503,   -81,   338,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    23,    58,     2,     3,     4,     5,   -54,   267,    24,
      25,    26,    27,    28,    29,    30,   173,    31,    32,    33,
      34,   -55,   -55,    92,    93,   -43,   -56,   -56,   -56,   -56,
     166,   389,   390,   142,   162,   509,   266,   164,    35,    36,
     -11,   142,   245,   515,   172,   142,   224,   522,   -12,   142,
      59,   524,    59,   408,   -55,    37,   142,   -29,   526,   173,
     266,    59,    38,    59,   -56,   -56,    39,    40,   391,   392,
     427,    41,    -2,    -2,   434,    -2,    -2,    -2,    -2,   455,
     281,   281,   224,   281,   281,   281,   476,   246,   247,   248,
     249,   250,   251,    -4,    -4,   493,    -4,    -4,    -4,    -4,
     500,   498,   224,   -55,   -55,   387,   388,   142,   502,   528,
     317,   317,   224,   317,   317,   317,   252,   253,   507,   -64,
     -64,   -64,   -64,   508,   -64,   -64,     2,     3,     4,     5,
     513,   348,   348,   224,   348,   348,   348,   514,   167,   519,
     254,   -55,   -55,   521,   255,   256,   -31,   523,   525,   257,
     527,    15,   379,   379,   224,   379,   379,   379,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   364,   365,   366,   138,    59,
     194,   245,     0,     0,     0,     0,    -6,    -6,   224,    -6,
      -6,    -6,    -6,     0,     0,     0,     0,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,     0,    59,   194,   245,     0,   194,   245,     0,     0,
     -57,   -57,   -57,   -57,   224,   358,   359,   225,   226,   227,
     228,   229,   230,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   194,   245,     1,
       0,     2,     3,     4,     5,   224,   231,   232,     0,   -57,
       0,   -57,   360,   361,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   194,   245,
     233,   425,     0,     0,   234,   235,   224,    -7,    -7,   236,
      -7,    -7,    -7,    -7,     0,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,     0,
      59,    59,     0,     0,     0,   194,   245,    61,    63,   225,
     226,   227,   228,   229,   230,     0,     0,     0,     0,     0,
      75,     0,     0,    59,    64,    80,    65,     3,     4,     5,
       0,   194,   245,     0,     0,     0,     0,     0,   231,   232,
      -3,    -3,     0,    -3,    -3,    -3,    -3,     0,     0,     0,
       0,     0,   194,   245,     0,     0,     0,   112,   114,   116,
     117,     0,   233,   429,     0,     0,   234,   235,     0,     0,
       0,   236,     0,   194,   245,     0,     0,   225,   226,   227,
     228,   229,   230,     0,   -44,     0,   -44,   -44,   -44,   -44,
       0,    59,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   165,
     -44,   -44,   -44,   -44,     0,     0,   231,   232,     0,     0,
     -56,   -56,   -56,   -56,     0,   291,   292,     0,     0,     0,
       0,   -44,   -44,   149,     0,     0,     0,     0,     0,   155,
     233,   450,     0,   158,   234,   235,     0,     0,   -44,   236,
       0,     0,   -44,   -44,     0,   -44,   -56,   168,     0,   -44,
     -44,     0,   293,   294,   -44,   225,   226,   227,   228,   229,
     230,     0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   283,
       0,     0,   225,   226,   227,   228,   229,   230,     0,     0,
       0,     0,     0,     0,   231,   232,     0,     0,     0,   305,
       0,     0,   225,   226,   227,   228,   229,   230,   -59,   319,
       0,   231,   232,     0,   -59,   -59,   295,   296,   233,   471,
       0,     0,   234,   235,     0,     0,     0,   236,   192,     0,
     350,   231,   232,     0,     0,   233,   496,     0,     0,   234,
     235,     0,    77,    79,   236,   222,    81,    82,    83,     0,
       0,   381,     0,     0,     0,   233,   505,     0,     0,   234,
     235,     0,     0,     0,   236,     0,     0,   402,   114,     0,
       0,     0,     0,     0,     0,   407,     0,   192,   243,   222,
     222,    -5,    -5,     0,    -5,    -5,    -5,    -5,     0,   -56,
     -56,   -56,   -56,     0,   327,   328,     0,     0,     0,     0,
     424,   114,     0,   428,   114,     0,     0,   131,   132,   133,
     -29,   433,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -56,   329,   330,     0,   449,   114,     0,     0,     0,     0,
       0,     0,   454,   264,     0,     0,     0,   -29,   -29,   243,
       0,     0,     0,   222,   225,   226,   227,   228,   229,   230,
       0,     0,     0,     0,   -29,   470,   114,   264,   -29,   -29,
       0,   -29,     0,   475,     0,   -29,   -29,     0,     0,     0,
     -29,     0,     0,   231,   232,     0,     0,   279,   282,   222,
     284,   285,   286,     0,   225,   226,   227,   228,   229,   230,
       0,     0,   495,   114,     0,     0,     0,   233,   511,   222,
       0,   234,   235,     0,     0,     0,   236,   315,   318,   222,
     320,   321,   322,   231,   232,     0,     0,     0,   504,   114,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,   346,   349,
     222,   351,   352,   353,     0,     0,     0,   233,   517,   510,
     114,   234,   235,     0,     0,     0,   236,     0,     0,   377,
     380,   222,   382,   383,   384,     0,     0,     0,   -62,   -62,
     516,   114,   -62,   -62,   393,   394,     0,   192,   243,     0,
       0,   -58,   -58,   -58,   -58,   222,   358,   359,     0,     0,
       0,     0,     0,     0,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   419,   420,   421,   192,   191,     0,
     192,   243,     0,   192,   243,     0,     0,     0,     0,     0,
     -58,   222,   -58,   360,   361,   221,     0,     0,     0,     0,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     445,   446,   447,   222,   192,   243,     0,     0,   -57,   -57,
     -57,   -57,   222,    94,    95,     0,     0,   191,   242,   221,
     221,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   466,   467,   468,   243,   192,   243,     0,     0,     0,
       0,   -57,     0,   222,     0,   129,   130,     0,     0,     0,
      96,    97,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   487,   488,   489,   264,     0,     0,     0,     0,
       0,     0,   192,   243,   -57,   -57,   -57,   -57,     0,   389,
     390,   -29,   -29,   263,   -29,   -29,   -29,   -29,     0,   242,
       0,   -31,   -31,   221,   -31,   -31,   -31,   -31,   192,   243,
       0,     0,     0,     0,     0,   -24,   -24,   263,   -24,   -24,
     -24,   -24,   -57,   -57,     0,     0,   391,   392,     0,   192,
     243,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   221,
       0,     0,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,
     192,   243,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   221,
     -30,   -30,   -30,   -30,     0,     0,   -81,   368,     0,   221,
     -81,   -81,   369,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -30,   -30,   -58,   -58,   -58,   -58,     0,   389,   390,
     221,     0,     0,     0,   -81,   -81,   -81,   -81,   -30,   -81,
     -81,     0,   -30,    18,     0,   -30,     0,     0,     0,   -30,
     -30,   221,   -23,   -23,   -30,   -23,   -23,   -23,   -23,     0,
       0,   -58,   -58,     0,     0,   391,   392,   191,   242,   473,
       0,     0,   -81,   -81,   474,   221,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   191,   191,   191,   191,   191,   191,
     191,   191,   417,   418,     0,   190,     0,   191,     0,     0,
     191,   242,     0,   191,   242,     0,     0,     0,     0,     0,
       0,   221,   220,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     221,   221,   221,   221,   221,   221,   221,   221,   443,   444,
       0,     0,     0,   221,   191,   242,     0,     0,     0,     0,
       0,     0,   221,     0,   190,   241,   220,   220,     0,     0,
       0,   242,   242,   242,   242,   242,   242,   242,   242,   464,
     465,     0,     0,     0,   242,   191,   242,     0,   125,   126,
     127,   128,     0,   221,     0,   -58,   -58,   -58,   -58,     0,
      94,    95,   263,   263,   263,   263,   263,   263,   263,   263,
     485,   486,     0,   -19,   -19,   263,   -19,   -19,   -19,   -19,
       0,     0,   191,   242,     0,     0,     0,     0,   -58,     0,
     262,     0,     0,     0,     0,     0,   241,    96,    97,     0,
     220,     0,    24,    25,    26,    27,    28,    29,   191,   242,
       0,     0,     0,     0,   262,   196,   197,   198,   199,   200,
     201,     0,     0,   204,   205,   206,   207,   208,   209,   191,
     242,    35,    36,     0,   -17,   -17,   220,   -17,   -17,   -17,
     -17,     0,     0,     0,    35,    36,     0,     0,     0,     0,
     191,   242,   210,   211,     0,    38,   220,     0,     0,    39,
      40,     0,     0,     0,    41,     0,   220,     0,   202,     0,
       0,     0,    39,    40,     0,     0,   212,    41,     0,     0,
     213,   214,     0,     0,     0,   215,     0,   220,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   174,
     175,   176,   177,   178,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,   241,     0,     0,     0,     0,
       0,   -59,   220,   -59,   -59,   -59,   362,   363,   180,   181,
       0,   190,   190,   190,   190,   413,   414,   415,   416,     0,
       0,     0,     0,   189,   190,     0,     0,   190,   241,     0,
     190,   241,   182,     0,     0,     0,   183,   184,   220,     0,
     219,   185,     0,     0,     0,     0,     0,   220,   220,   220,
     220,   439,   440,   441,   442,     0,     0,     0,     0,     0,
     220,   190,   241,     0,     0,   -57,   -57,   -57,   -57,   220,
     291,   292,   189,   240,   219,   219,     0,     0,   241,   241,
     241,   241,   460,   461,   462,   463,     0,     0,     0,     0,
       0,   241,   190,   241,   123,   124,     0,     0,     0,     0,
     220,   -57,     0,     0,     0,     0,     0,   293,   294,   262,
     262,   262,   262,   481,   482,   483,   484,     0,   -57,   -57,
     -57,   -57,   262,   327,   328,     0,     0,     0,     0,   190,
     241,     0,     0,     0,     0,     0,     0,     0,   261,     0,
     -58,   -58,   -58,   -58,   240,   327,   328,     0,   219,   246,
     247,   248,   249,   250,   251,   190,   241,     0,     0,   -57,
     329,   330,   261,   225,   226,   227,   228,   229,   230,     0,
     272,   273,   274,   275,   276,   277,   190,   241,   252,   253,
       0,   -58,   329,   330,   219,     0,     0,     0,     0,     0,
       0,     0,   231,   232,     0,     0,     0,   190,   241,   180,
     181,     0,   254,     0,   219,     0,   255,   256,     0,     0,
       0,   257,     0,     0,   219,     0,   233,     0,     0,     0,
     234,   235,     0,   278,     0,   236,     0,   183,   184,     0,
       0,     0,   185,     0,     0,   219,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,   308,   309,   310,
     311,   312,   313,     0,     0,     0,     0,     0,     0,     0,
       0,   188,   189,   240,     0,     0,     0,     0,     0,   -62,
     219,   -62,   -62,   -62,   362,   363,   210,   211,   218,   189,
     189,   411,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,   189,   240,     0,   189,   240,
     314,     0,     0,     0,   213,   214,   219,     0,     0,   215,
     188,   239,   218,   218,     0,   219,   219,   437,   438,     0,
       0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   219,   189,
     240,   122,     0,     0,     0,     0,     0,   219,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   240,   458,   459,
     -63,   -63,   -63,   -63,   -59,   -63,   -63,     0,     0,   240,
     189,   240,     0,   -59,   -59,    98,    99,     0,   219,     0,
       0,     0,     0,     0,     0,     0,   260,   261,   261,   479,
     480,     0,   239,     0,   187,     0,   218,     0,     0,   -63,
     261,   -63,   -63,   -63,   362,   363,     0,   189,   240,     0,
     260,   217,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   218,   189,   240,   339,   340,   341,   342,   343,
     344,     0,     0,   187,   238,   217,   217,     0,     0,   -31,
     -31,     0,   218,     0,   189,   240,     0,     0,     0,     0,
       0,     0,   218,   121,   231,   232,   -31,     0,     0,     0,
     -31,   -31,     0,   -31,     0,   189,   240,   -31,   -31,     0,
       0,     0,   -31,   218,     0,     0,     0,     0,   345,     0,
       0,     0,   234,   235,     0,     0,     0,   236,     0,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,   259,
       0,     0,     0,     0,     0,   238,     0,     0,     0,   217,
     188,   239,     0,     0,   -58,   -58,   -58,   -58,   218,   291,
     292,     0,     0,   259,     0,     0,     0,   188,   410,   370,
     371,   372,   373,   374,   375,     0,     0,     0,     0,     0,
     188,     0,     0,   188,   239,   217,   188,   239,     0,     0,
     -58,     0,     0,     0,   218,     0,   293,   294,   252,   253,
       0,     0,     0,   218,   436,   217,     0,     0,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   217,   218,   188,   239,     0,
       0,     0,   376,     0,     0,   218,   255,   256,     0,     0,
       0,   257,     0,     0,   239,   457,   217,     0,     0,     0,
       0,   -62,     0,     0,     0,     0,     0,   239,   188,   239,
     -62,   -62,    98,    99,     0,     0,   218,   217,     0,     0,
       0,     0,     0,     0,     0,   260,   478,     0,     0,     0,
       0,     0,     0,   187,   238,     0,     0,     0,   260,   186,
       0,   217,     0,     0,     0,   188,   239,     0,     0,     0,
     409,     0,   -63,   -63,   -63,   -63,   216,   -63,   -63,     0,
       0,     0,     0,   187,     0,     0,   187,   238,     0,   187,
     238,   188,   239,     0,     0,     0,     0,   217,     0,     0,
       0,     0,     0,     0,     0,   -63,   435,     0,   186,   237,
     216,   216,   188,   239,   -63,   -63,    98,    99,     0,   217,
     187,   238,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,   188,   239,     0,     0,   456,     0,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   187,   238,     0,     0,     0,     0,     0,     0,   217,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,   477,     0,
       0,     0,     0,     0,   258,     0,     0,     0,     0,     0,
     237,   259,     0,     0,   216,     0,     0,     0,   187,   238,
       0,     0,     0,   -81,   -81,    70,     0,     0,   258,     0,
      71,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,     0,   187,   238,   -63,   -63,   -63,   -63,
     216,   -63,   -63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   238,     0,     0,     0,
     216,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,
     216,     0,     0,     0,   -63,   -63,   187,   238,   -63,   -63,
     393,   394,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
       0,   216,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -64,
     -34,   -34,   -34,   -34,     0,   -64,   -64,   -64,   -64,   297,
     298,   299,   216,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,     0,     0,     0,     0,     0,   186,   237,
       0,     0,     0,     0,     0,     0,   216,     0,   -34,     0,
       0,     0,   -34,   -34,     0,   -34,     0,     0,     0,   -34,
     -34,     0,     0,     0,   -34,     0,     0,     0,   422,     0,
       0,   186,   237,     0,   186,   237,     0,     0,     0,     0,
       0,     0,   216,     0,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   448,   186,   237,     0,     0,     0,
       0,     0,     0,   216,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -39,   -39,     0,     0,     0,   -60,   -60,   -60,   -60,
       0,   -60,   -60,     0,     0,   469,   186,   237,   -39,     0,
       0,     0,   -39,   -39,   216,   -39,     0,     0,   -82,   -39,
     -39,     0,     0,   -82,   -39,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,   -60,   490,   -60,   -60,   -60,
     362,   363,     0,   186,   237,     0,     0,     0,    23,     0,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,     0,   186,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
     186,   237,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,    37,   -83,   -83,     0,   173,    85,     0,    38,
       0,   186,   237,    39,    40,     0,     0,   -32,    41,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -83,   -32,   -32,   -32,   -32,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -32,   -32,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
       0,   -32,     0,     0,     0,   -32,   -32,     0,   -32,     0,
       0,     0,   -32,   -32,     0,   -37,   -37,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -37,   -84,   -84,     0,   -37,   -37,     0,   -37,
       0,     0,     0,   -37,   -37,     0,     0,   -38,   -37,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -84,   -38,   -38,   -38,   -38,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -42,     0,
     -42,   -42,   -42,   -42,   -38,   -38,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,
       0,   -38,     0,     0,     0,   -38,   -38,     0,   -38,     0,
       0,     0,   -38,   -38,     0,   -42,   -42,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -42,   -85,   -85,     0,   -42,   -42,     0,   -42,
       0,     0,     0,   -42,   -42,     0,     0,   -35,   -42,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -85,   -35,   -35,   -35,   -35,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -35,   -35,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,   -35,     0,     0,     0,   -35,   -35,     0,   -35,     0,
       0,     0,   -35,   -35,     0,   -33,   -33,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -33,   -86,   -86,     0,   -33,   -33,     0,   -33,
       0,     0,     0,   -33,   -33,     0,     0,   -41,   -33,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -86,   -41,   -41,   -41,   -41,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -40,     0,
     -40,   -40,   -40,   -40,   -41,   -41,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,   -41,     0,     0,     0,   -41,   -41,     0,   -41,     0,
       0,     0,   -41,   -41,     0,   -40,   -40,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -40,   -71,   -71,     0,   -40,   -40,     0,   -40,
       0,     0,     0,   -40,   -40,     0,     0,   -36,   -40,   -36,
     -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   367,   -36,   -36,   -36,   -36,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -18,     0,
     -18,   -18,   -18,   -18,   -36,   -36,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,     0,
       0,   -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,
       0,     0,   -36,   -36,     0,   -18,   -18,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -18,   -77,   -77,     0,   -18,   -22,     0,   -18,
       0,     0,     0,   -18,   -18,     0,     0,   -16,   -18,   -16,
     -16,   -16,   -16,     0,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -77,   -16,   -16,   -16,   -16,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -46,     0,
     -46,   -46,   -46,   -46,   -16,   -16,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,   -16,     0,     0,     0,   -16,   -20,     0,   -16,     0,
       0,     0,   -16,   -16,     0,   -46,   -46,   -16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -46,   -79,   -79,     0,   -46,   -46,     0,   -46,
       0,     0,     0,   -46,   -46,     0,     0,    23,   -46,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,   -79,    31,    32,    33,    34,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,    23,     0,
       2,     3,     4,     5,    35,    36,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    37,     0,     0,     0,   173,   169,     0,    38,     0,
       0,     0,    39,    40,     0,    35,    36,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,    37,   -87,   -87,     0,   173,   170,     0,    38,
       0,     0,     0,    39,    40,     0,     0,   -45,    41,   -45,
     -45,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -87,   -45,   -45,   -45,   -45,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -47,     0,
     -47,   -47,   -47,   -47,   -45,   -45,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,   -45,     0,     0,     0,   -45,   -45,     0,   -45,     0,
       0,     0,   -45,   -45,     0,   -47,   -47,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -47,   -78,   -78,     0,   -47,   -47,     0,   -47,
       0,     0,     0,   -47,   -47,     0,     0,   -30,   -47,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -78,   -30,   -30,   -30,   -30,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,     0,     0,     0,   -30,   268,     0,   -30,     0,
       0,     0,   -30,   -30,     0,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -30,   -80,   -80,     0,   -30,   301,     0,   -30,
       0,     0,     0,   -30,   -30,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -80,   -30,   -30,   -30,   -30,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -30,   -30,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -30,     0,     0,     0,   -30,   399,     0,   -30,     0,
       0,     0,   -30,   -30,     0,   -29,   -29,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -29,   -82,   -82,     0,   -29,   -29,     0,   -29,
       0,     0,     0,   -29,   -29,     0,     0,    23,   -29,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,   -82,    31,    32,    33,    34,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,    23,     0,
       2,     3,     4,     5,    35,    36,    24,    25,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,     0,     0,
       0,    37,     0,     0,     0,   173,   492,     0,    38,     0,
       0,     0,    39,    40,     0,    35,    36,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,    37,   -83,   -83,     0,   173,   499,     0,    38,
       0,     0,     0,    39,    40,     0,     0,    23,    41,     2,
       3,     4,     5,     0,     0,    24,    25,    26,    27,    28,
      29,    30,   -83,    31,    32,    33,    34,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -31,     0,
     -31,   -31,   -31,   -31,    35,    36,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,    37,     0,     0,     0,   173,   520,     0,    38,     0,
       0,     0,    39,    40,     0,   -31,   -31,    41,   -81,   -81,
     -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -31,     0,     0,     0,   -31,   -31,     0,   -31,
       0,     0,     0,   -31,   -31,     0,     0,     0,   -31,     0,
       0,     0,   -81,   270,   -81,     0,     0,     0,   271,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   306,     0,     0,     0,     0,   307,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   303,     0,
       0,     0,     0,   304,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -82,   -84,   -84,     0,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,     0,     0,   -83,   -83,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,     0,
     -84,   -84,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -85,   -71,   -71,     0,   -85,
     -85,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   398,     0,     0,     0,   -71,
     -71,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -77,   -81,   -81,     0,   -77,   -77,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   405,
     -81,     0,     0,     0,   406,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,   431,     0,     0,     0,     0,
     432,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -79,
     -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,     0,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -79,   -78,   -78,     0,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -87,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -78,     0,     0,     0,   -78,   -78,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -84,   -84,
     -84,   -84,   -80,   -84,   -84,     0,   -80,   -80,   -82,   -82,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,     0,     0,     0,     0,
       0,   -84,   -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,
     -85,   -85,     0,     0,     0,     0,     0,   -86,   -86,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -71,   103,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -87,   -87,
     -87,   -87,     0,   -87,   -87,     0,     0,     0,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -79,   -79,     0,     0,     0,     0,
       0,   -87,   -87,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
     -78,   -78,     0,     0,     0,     0,     0,   -80,   -80,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,     0,   -82,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,     0,   -83,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,   -85,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -86,     0,   -86,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     300,     0,   -71,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -77,     0,   -77,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -84,   -86,   -86,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -71,
     -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,     0,   336,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -77,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -64,   -64,   -64,   -64,     0,   -64,   -64,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   395,
     396,   397,   -67,   -67,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,
       0,     0,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,
       0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,     0,
       0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -75,   -75,   -75,   -75,     0,   -75,   -75,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -71,   -71,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -77,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -76,   -76,   -76,   -76,     0,   -76,
     -76,     0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,
     -72,   -72,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -72,   -72,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -73,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,     0,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -79,     0,   -79,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -87,
       0,   -87,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,     0,   -87,   -87,     0,     0,     0,   -65,
     -65,   -65,   -65,     0,   -65,   -65,     0,     0,   -79,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -87,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   364,   365,   366,   -66,   -66,
     -66,   -66,     0,   -66,   -66,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,     0,   -70,   -70,
     -70,   -70,     0,   -70,   -70,     0,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   364,   365,   366,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -65,   -65,   -65,
     -65,     0,   -65,   -65,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,     0,   -66,   -66,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,     0,     0,   -65,
     -65,   -65,   -65,   395,   396,   397,   -66,   -66,     0,     0,
     -66,   -66,   -66,   -66,   395,   396,   397,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,     0,     0,   -69,   -69,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -70,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -78,     0,
     -78,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -80,   -80,   -80,   -80,     0,   -80,   -80,
       0,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -78,   -78,
     -78,   -78,     0,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,   -80,
       0,     0,     0,     0,   -60,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -78,   -60,   -60,    98,    99,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,     0,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,     0,     0,   -78,   -78,   -78,
     -78,     0,   -78,   -78,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -87,   -87,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -80,   -80,   -64,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -64,   -64,   -64,   -64,
     100,   101,   102,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -75,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,     0,   -75,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -71,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -72,
       0,     0,     0,     0,     0,     0,   -73,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -65,
     -65,   -65,   -65,     0,   -65,   -65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,     0,
     -66,   -66,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,     0,   -65,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -65,   -65,   -65,   -65,   100,   101,   102,   -66,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,   -66,   -66,   -66,
     -66,   100,   101,   102,     0,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,     0,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
       0,     0,     0,     0,     0,   -70,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -82,   -82,
     -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
       0,   -82,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,     0,
       0,     0,     0,     0,   -86,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,   -64,   -64,
     -64,   -64,     0,   -64,   -64,     0,   -67,   -67,   -67,   -67,
       0,   -67,   -67,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -77,   -82,   -82,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -64,
     -64,   -64,   -64,   -64,   333,   334,   335,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -82,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,     0,     0,     0,   -83,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,   -86,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -75,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -71,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -77,   -77,
     -77,   -77,     0,   -77,   -77,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,   -72,
     -72,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -72,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -73,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,   -75,   -75,   -75,   -75,     0,
     -75,   -75,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,   -72,   -72,
     -72,   -72,     0,   -72,   -72,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,   -74,   -74,   -74,   -74,     0,   -74,
     -74,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -65,   -65,   -65,   -65,     0,   -65,   -65,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
       0,   -66,   -66,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,     0,     0,   -65,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   297,
     298,   299,   -66,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   297,   298,   299,   -68,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -79,   -79,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,
       0,   -79,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,   -65,   -65,   -65,   -65,     0,
     -65,   -65,     0,   -66,   -66,   -66,   -66,     0,   -66,   -66,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,     0,
     -87,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -65,   -65,   -65,   -65,
     -65,   333,   334,   335,   -66,   -66,   -66,   -66,   -66,   333,
     334,   335,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -78,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -79,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -87,     0,     0,     0,   -78,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
     -79,   -79,   -79,   -79,     0,   -79,   -79,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -80,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -78,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -80,   -80,   -80,   -80,     0,   -80,   -80,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,     0,     0,     0,   -61,   -61,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,   -80,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -61,     0,   -61,   -61,   -61,
     362,   363,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -59,   -59,   -59,   -59,     0,   -59,
     -59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -60,     0,     0,   -60,   -60,   393,   394,   -61,   -61,
     -61,     0,   -61,   -61,   393,   394,     0,     0,     0,   -61,
     -61,    98,    99,     0,     0,   -59,   -59,   -59,   331,   332,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,     0,
     -63,   -63,   -63,   -63,     0,   -63,   -63,     0,     0,     0,
     -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -62,   -61,   -61,     0,
       0,     0,   -62,   -62,   295,   296,   -63,     0,     0,     0,
       0,     0,   -63,   -63,   295,   296,   -60,     0,     0,     0,
       0,     0,   -60,   -60,   295,   296,     0,     0,   -61,     0,
       0,     0,     0,     0,   -61,   -61,   295,   296,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -61,
     -61,   -61,   -61,     0,   -61,   -61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -62,
     -62,   -62,   331,   332,     0,     0,   -63,   -63,   -63,   331,
     332,     0,     0,   -60,   -60,   -60,   331,   332,     0,     0,
     -61,   -61,   -61,   331,   332
};

static const yytype_int16 yycheck[] =
{
      19,    20,    21,     1,     0,    44,   150,   173,   152,    22,
       6,    55,    56,    57,    33,    10,     9,    22,    23,    38,
      55,    56,    57,     9,    55,    44,    22,    62,    59,   195,
      22,    23,    24,    25,    32,    55,   271,     9,    10,    11,
      12,    13,    14,    22,    22,    23,    24,    25,    22,    23,
      63,    70,    71,    72,    73,    60,    61,    22,     9,    10,
      11,    12,    13,    14,    59,     9,    38,    39,    22,   304,
      63,    63,   307,    22,    23,    22,    22,    23,    24,    25,
      55,    27,    28,    61,    63,    63,    58,    38,    39,    63,
      62,    22,    23,    22,    66,    67,    61,     9,    63,    71,
      61,   267,    63,   338,    55,     9,    60,    61,    55,    55,
       9,    62,    61,   109,    63,    66,    67,   136,    64,    65,
      71,    22,   161,   142,   163,   269,    55,   146,    22,    23,
      61,   150,    63,   152,   369,    22,    23,    24,    25,    22,
      23,   160,   161,    61,   163,    63,   144,   145,     9,    10,
      11,    12,    13,    14,     0,    22,    23,    58,   302,    22,
       6,   180,   181,   182,   183,   184,   185,   165,    59,    63,
      22,   406,    60,    61,    61,    58,    63,    38,    39,    22,
      23,    24,    25,   202,    22,    23,    24,    25,    55,    27,
      28,   210,   211,   212,   213,   214,   215,   432,    61,    55,
      63,    62,    63,    22,    23,    66,    67,    22,    60,    61,
      71,    62,   231,   232,   233,   234,   235,   236,   453,    57,
      63,    22,    23,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   252,   253,   254,   255,   256,   257,   474,
      62,    60,    61,    58,    60,    61,    22,    23,    24,    25,
     269,   270,   271,    22,    23,    62,   400,    58,    55,   278,
       0,     1,    55,     3,     4,     5,     6,    55,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,    58,   302,   303,   304,    55,   306,   307,    60,
      61,    22,    23,    24,    25,   314,    27,    28,     9,    10,
      11,    12,    13,    14,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      22,    23,    24,    25,     9,    57,   345,    38,    39,    61,
      61,    63,    63,    64,    65,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,    62,    63,    56,    55,    66,    67,   376,    60,    61,
      71,    61,   401,    63,    58,    63,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
      17,   400,   401,    61,   423,    63,   405,   406,     9,    19,
      20,    21,    55,    22,    23,    24,    25,    63,    27,    28,
      61,    10,    63,    33,   423,    61,    55,    63,    38,    61,
      58,    63,   431,   432,    44,    22,    23,    24,    25,    61,
      59,    63,    22,    23,    24,    25,    59,    27,    28,    63,
      62,    60,    61,   452,   453,    64,    65,    66,    67,    63,
      70,    71,    72,    73,    22,    23,    24,    25,    61,    63,
      63,    58,   491,    55,   473,   474,    56,    57,    61,    58,
      63,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     1,   491,     3,     4,     5,     6,    55,    59,     9,
      10,    11,    12,    13,    14,    15,    59,    17,    18,    19,
      20,    22,    23,    24,    25,    55,    22,    23,    24,    25,
      63,    27,    28,    61,    60,    63,   136,    60,    38,    39,
      55,    61,   142,    63,    55,    61,   146,    63,    55,    61,
     150,    63,   152,    63,    55,    55,    61,    17,    63,    59,
     160,   161,    62,   163,    60,    61,    66,    67,    64,    65,
      63,    71,     0,     1,    63,     3,     4,     5,     6,    63,
     180,   181,   182,   183,   184,   185,    63,     9,    10,    11,
      12,    13,    14,     0,     1,    58,     3,     4,     5,     6,
      58,    63,   202,    22,    23,    24,    25,    61,    58,    63,
     210,   211,   212,   213,   214,   215,    38,    39,    63,    22,
      23,    24,    25,    58,    27,    28,     3,     4,     5,     6,
      63,   231,   232,   233,   234,   235,   236,    58,    60,    63,
      62,    60,    61,    58,    66,    67,    17,    58,    58,    71,
      58,     6,   252,   253,   254,   255,   256,   257,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,   109,   269,
     270,   271,    -1,    -1,    -1,    -1,     0,     1,   278,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,    -1,   302,   303,   304,    -1,   306,   307,    -1,    -1,
      22,    23,    24,    25,   314,    27,    28,     9,    10,    11,
      12,    13,    14,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,     1,
      -1,     3,     4,     5,     6,   345,    38,    39,    -1,    61,
      -1,    63,    64,    65,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
      62,    63,    -1,    -1,    66,    67,   376,     0,     1,    71,
       3,     4,     5,     6,    -1,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,    -1,
     400,   401,    -1,    -1,    -1,   405,   406,    20,    21,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,   423,     1,    38,     3,     4,     5,     6,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    38,    39,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,   452,   453,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,   473,   474,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,     1,    -1,     3,     4,     5,     6,
      -1,   491,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    38,    39,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    38,    39,   136,    -1,    -1,    -1,    -1,    -1,   142,
      62,    63,    -1,   146,    66,    67,    -1,    -1,    55,    71,
      -1,    -1,    59,    60,    -1,    62,    58,   160,    -1,    66,
      67,    -1,    64,    65,    71,     9,    10,    11,    12,    13,
      14,    -1,    22,    23,    24,    25,    -1,    27,    28,   182,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,   202,
      -1,    -1,     9,    10,    11,    12,    13,    14,    58,   212,
      -1,    38,    39,    -1,    64,    65,    66,    67,    62,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    21,    -1,
     233,    38,    39,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    -1,    35,    36,    71,    38,    39,    40,    41,    -1,
      -1,   254,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,   270,   271,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    70,    71,    72,
      73,     0,     1,    -1,     3,     4,     5,     6,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
     303,   304,    -1,   306,   307,    -1,    -1,   100,   101,   102,
       1,   314,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      63,    64,    65,    -1,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,   345,   136,    -1,    -1,    -1,    38,    39,   142,
      -1,    -1,    -1,   146,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    55,   368,   369,   160,    59,    60,
      -1,    62,    -1,   376,    -1,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    38,    39,    -1,    -1,   180,   181,   182,
     183,   184,   185,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,   405,   406,    -1,    -1,    -1,    62,    63,   202,
      -1,    66,    67,    -1,    -1,    -1,    71,   210,   211,   212,
     213,   214,   215,    38,    39,    -1,    -1,    -1,   431,   432,
      22,    23,    24,    25,    -1,    27,    28,    -1,   231,   232,
     233,   234,   235,   236,    -1,    -1,    -1,    62,    63,   452,
     453,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,   252,
     253,   254,   255,   256,   257,    -1,    -1,    -1,    60,    61,
     473,   474,    64,    65,    66,    67,    -1,   270,   271,    -1,
      -1,    22,    23,    24,    25,   278,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,    21,    -1,
     303,   304,    -1,   306,   307,    -1,    -1,    -1,    -1,    -1,
      61,   314,    63,    64,    65,    38,    -1,    -1,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    22,    23,
      24,    25,   345,    27,    28,    -1,    -1,    70,    71,    72,
      73,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,    -1,    -1,    -1,
      -1,    55,    -1,   376,    -1,    98,    99,    -1,    -1,    -1,
      64,    65,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,    -1,    -1,    -1,    -1,
      -1,    -1,   405,   406,    22,    23,    24,    25,    -1,    27,
      28,     0,     1,   136,     3,     4,     5,     6,    -1,   142,
      -1,     0,     1,   146,     3,     4,     5,     6,   431,   432,
      -1,    -1,    -1,    -1,    -1,     0,     1,   160,     3,     4,
       5,     6,    60,    61,    -1,    -1,    64,    65,    -1,   452,
     453,    -1,    22,    23,    24,    25,    -1,    27,    28,   182,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
     473,   474,     9,    10,    11,    12,    13,    14,    15,   202,
      17,    18,    19,    20,    -1,    -1,    56,    57,    -1,   212,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    38,    39,    22,    23,    24,    25,    -1,    27,    28,
     233,    -1,    -1,    -1,    22,    23,    24,    25,    55,    27,
      28,    -1,    59,    60,    -1,    62,    -1,    -1,    -1,    66,
      67,   254,     0,     1,    71,     3,     4,     5,     6,    -1,
      -1,    60,    61,    -1,    -1,    64,    65,   270,   271,    57,
      -1,    -1,    60,    61,    62,   278,    64,    65,    66,    67,
      68,    69,    70,    -1,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,    -1,    21,    -1,   300,    -1,    -1,
     303,   304,    -1,   306,   307,    -1,    -1,    -1,    -1,    -1,
      -1,   314,    38,     0,     1,    -1,     3,     4,     5,     6,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    -1,    -1,    -1,   367,   368,   369,    -1,    94,    95,
      96,    97,    -1,   376,    -1,    22,    23,    24,    25,    -1,
      27,    28,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,    -1,     0,     1,   398,     3,     4,     5,     6,
      -1,    -1,   405,   406,    -1,    -1,    -1,    -1,    55,    -1,
     136,    -1,    -1,    -1,    -1,    -1,   142,    64,    65,    -1,
     146,    -1,     9,    10,    11,    12,    13,    14,   431,   432,
      -1,    -1,    -1,    -1,   160,     9,    10,    11,    12,    13,
      14,    -1,    -1,     9,    10,    11,    12,    13,    14,   452,
     453,    38,    39,    -1,     0,     1,   182,     3,     4,     5,
       6,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
     473,   474,    38,    39,    -1,    62,   202,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    -1,   212,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    62,    71,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    -1,   233,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,   271,    -1,    -1,    -1,    -1,
      -1,    61,   278,    63,    64,    65,    66,    67,    38,    39,
      -1,   287,   288,   289,   290,   291,   292,   293,   294,    -1,
      -1,    -1,    -1,    21,   300,    -1,    -1,   303,   304,    -1,
     306,   307,    62,    -1,    -1,    -1,    66,    67,   314,    -1,
      38,    71,    -1,    -1,    -1,    -1,    -1,   323,   324,   325,
     326,   327,   328,   329,   330,    -1,    -1,    -1,    -1,    -1,
     336,   337,   338,    -1,    -1,    22,    23,    24,    25,   345,
      27,    28,    70,    71,    72,    73,    -1,    -1,   354,   355,
     356,   357,   358,   359,   360,   361,    -1,    -1,    -1,    -1,
      -1,   367,   368,   369,    92,    93,    -1,    -1,    -1,    -1,
     376,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,   385,
     386,   387,   388,   389,   390,   391,   392,    -1,    22,    23,
      24,    25,   398,    27,    28,    -1,    -1,    -1,    -1,   405,
     406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      22,    23,    24,    25,   142,    27,    28,    -1,   146,     9,
      10,    11,    12,    13,    14,   431,   432,    -1,    -1,    63,
      64,    65,   160,     9,    10,    11,    12,    13,    14,    -1,
       9,    10,    11,    12,    13,    14,   452,   453,    38,    39,
      -1,    63,    64,    65,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,   473,   474,    38,
      39,    -1,    62,    -1,   202,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,   212,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    62,    -1,    71,    -1,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,   270,   271,    -1,    -1,    -1,    -1,    -1,    61,
     278,    63,    64,    65,    66,    67,    38,    39,    38,   287,
     288,   289,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   300,    -1,    -1,   303,   304,    -1,   306,   307,
      62,    -1,    -1,    -1,    66,    67,   314,    -1,    -1,    71,
      70,    71,    72,    73,    -1,   323,   324,   325,   326,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,   336,   337,
     338,    91,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,   356,   357,
      22,    23,    24,    25,    55,    27,    28,    -1,    -1,   367,
     368,   369,    -1,    64,    65,    66,    67,    -1,   376,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   385,   386,   387,
     388,    -1,   142,    -1,    21,    -1,   146,    -1,    -1,    61,
     398,    63,    64,    65,    66,    67,    -1,   405,   406,    -1,
     160,    38,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   182,   431,   432,     9,    10,    11,    12,    13,
      14,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    38,
      39,    -1,   202,    -1,   452,   453,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    90,    38,    39,    55,    -1,    -1,    -1,
      59,    60,    -1,    62,    -1,   473,   474,    66,    67,    -1,
      -1,    -1,    71,   233,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,   146,
     270,   271,    -1,    -1,    22,    23,    24,    25,   278,    27,
      28,    -1,    -1,   160,    -1,    -1,    -1,   287,   288,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
     300,    -1,    -1,   303,   304,   182,   306,   307,    -1,    -1,
      58,    -1,    -1,    -1,   314,    -1,    64,    65,    38,    39,
      -1,    -1,    -1,   323,   324,   202,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,   212,   336,   337,   338,    -1,
      -1,    -1,    62,    -1,    -1,   345,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,   354,   355,   233,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,   367,   368,   369,
      64,    65,    66,    67,    -1,    -1,   376,   254,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   385,   386,    -1,    -1,    -1,
      -1,    -1,    -1,   270,   271,    -1,    -1,    -1,   398,    21,
      -1,   278,    -1,    -1,    -1,   405,   406,    -1,    -1,    -1,
     287,    -1,    22,    23,    24,    25,    38,    27,    28,    -1,
      -1,    -1,    -1,   300,    -1,    -1,   303,   304,    -1,   306,
     307,   431,   432,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,   323,    -1,    70,    71,
      72,    73,   452,   453,    64,    65,    66,    67,    -1,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      -1,    -1,    -1,   473,   474,    -1,    -1,   354,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     367,   368,   369,    -1,    -1,    -1,    -1,    -1,    -1,   376,
      22,    23,    24,    25,    -1,    27,    28,    -1,   385,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,
     142,   398,    -1,    -1,   146,    -1,    -1,    -1,   405,   406,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,   160,    -1,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,   431,   432,    22,    23,    24,    25,
     182,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   452,   453,    -1,    -1,    -1,
     202,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
     212,    -1,    -1,    -1,    60,    61,   473,   474,    64,    65,
      66,    67,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,   233,     9,    10,    11,    12,    13,    14,    15,    58,
      17,    18,    19,    20,    -1,    64,    65,    66,    67,    68,
      69,    70,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,   270,   271,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,   300,    -1,
      -1,   303,   304,    -1,   306,   307,    -1,    -1,    -1,    -1,
      -1,    -1,   314,    -1,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,   345,    22,    23,    24,    25,    -1,    27,
      28,    38,    39,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,   367,   368,   369,    55,    -1,
      -1,    -1,    59,    60,   376,    62,    -1,    -1,    56,    66,
      67,    -1,    -1,    61,    71,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    61,   398,    63,    64,    65,
      66,    67,    -1,   405,   406,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,   431,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
     452,   453,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,   473,   474,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,     1,    71,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    38,    39,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    55,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    56,    27,    28,    -1,
      60,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    -1,    -1,
      60,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    56,    27,    28,    -1,    60,
      61,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      56,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    -1,    -1,    60,
      61,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    56,    27,    28,    -1,    60,    61,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    56,    27,    28,    -1,    60,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      -1,    -1,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    -1,    -1,    60,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    56,    27,    28,    -1,    60,    61,    55,    56,
      64,    65,    66,    67,    68,    69,    70,    64,    65,    66,
      67,    68,    69,    70,    55,    56,    -1,    -1,    -1,    -1,
      -1,    55,    56,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    55,    56,    64,
      65,    66,    67,    68,    69,    70,    64,    65,    66,    67,
      68,    69,    70,    55,    56,    22,    23,    24,    25,    -1,
      27,    28,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    55,    56,    -1,    -1,    -1,    -1,
      -1,    55,    56,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    55,    56,    64,
      65,    66,    67,    68,    69,    70,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    56,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      60,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    60,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    60,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    60,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    60,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    60,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    60,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    60,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    55,    64,    65,    66,    67,    68,
      69,    70,    56,    64,    65,    66,    67,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    60,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    60,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    60,    61,    55,    -1,    64,
      65,    66,    67,    68,    69,    70,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    64,    65,    66,    67,    68,
      69,    70,    64,    65,    66,    67,    68,    69,    70,    55,
      22,    23,    24,    25,    -1,    27,    28,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    64,    65,
      66,    67,    68,    69,    70,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    64,    65,    66,    67,    68,    69,
      70,    64,    65,    66,    67,    68,    69,    70,    55,    22,
      23,    24,    25,    -1,    27,    28,    -1,    64,    65,    66,
      67,    68,    69,    70,    -1,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    64,    65,    66,
      67,    68,    69,    70,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    55,    -1,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    55,    22,    23,
      24,    25,    -1,    27,    28,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    55,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      58,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      63,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    63,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    63,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    -1,    -1,
      -1,    55,    -1,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      55,    22,    23,    24,    25,    -1,    27,    28,    -1,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    63,    64,    65,    66,    67,    68,
      69,    70,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    58,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    -1,    -1,    -1,    55,    -1,    64,    65,
      66,    67,    68,    69,    70,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    55,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    63,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    63,    64,    65,
      66,    67,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    64,    65,    66,    67,    60,    61,
      55,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    63,    64,    65,    66,    67,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    58,    27,    28,    -1,
      -1,    -1,    64,    65,    66,    67,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      63,    64,    65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    73,    74,    75,    77,
     103,    55,    59,    84,     0,    74,    55,     9,    60,    85,
      56,    57,    62,     1,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    20,    38,    39,    55,    62,    66,
      67,    71,    75,    84,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     103,    92,    58,    92,     1,     3,    82,    83,   103,    55,
      57,    62,    62,    62,    84,    92,    62,    99,   100,    99,
      92,    99,    99,    99,    55,    60,    87,    55,    55,    55,
      22,    23,    24,    25,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    56,     9,    56,    58,    63,    63,    61,
      63,     9,    92,    63,    92,   102,    92,    92,    17,    10,
      63,    94,    95,    96,    96,    97,    97,    97,    97,    98,
      98,    99,    99,    99,    93,    10,    59,    59,    83,    59,
      57,    58,    61,    63,    63,    63,    62,    63,    76,    92,
      79,    81,    78,    80,    58,    92,    84,    84,    92,    60,
      61,    86,    60,    86,    60,    16,    63,    60,    92,    60,
      60,    84,    55,    59,     9,    10,    11,    12,    13,    14,
      38,    39,    62,    66,    67,    71,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    59,     9,    10,    11,    12,
      13,    14,    62,   101,     9,    10,    11,    12,    13,    14,
      38,    39,    62,    66,    67,    71,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     9,    10,    11,    12,    13,
      14,    38,    39,    62,    66,    67,    71,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     9,    10,    11,    12,
      13,    14,    38,    39,    62,    66,    67,    71,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    59,    60,    85,
      57,    62,     9,    10,    11,    12,    13,    14,    62,    99,
     100,   101,    99,    92,    99,    99,    99,    22,    23,    24,
      25,    27,    28,    64,    65,    66,    67,    68,    69,    70,
      56,    60,    85,    57,    62,    92,    57,    62,     9,    10,
      11,    12,    13,    14,    62,    99,   100,   101,    99,    92,
      99,    99,    99,    22,    23,    24,    25,    27,    28,    64,
      65,    66,    67,    68,    69,    70,    56,    57,    62,     9,
      10,    11,    12,    13,    14,    62,    99,   100,   101,    99,
      92,    99,    99,    99,    22,    23,    24,    25,    27,    28,
      64,    65,    66,    67,    68,    69,    70,    56,    57,    62,
       9,    10,    11,    12,    13,    14,    62,    99,   100,   101,
      99,    92,    99,    99,    99,    22,    23,    24,    25,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    56,    60,
      85,    86,    92,    63,   102,    57,    62,    92,    63,    94,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    99,
      99,    99,    93,    86,    92,    63,   102,    63,    92,    63,
     102,    57,    62,    92,    63,    94,    95,    96,    96,    97,
      97,    97,    97,    98,    98,    99,    99,    99,    93,    92,
      63,   102,    57,    62,    92,    63,    94,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    93,
      92,    63,   102,    57,    62,    92,    63,    94,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      93,    86,    60,    58,    63,    92,    63,   102,    63,    60,
      58,    63,    58,    63,    92,    63,   102,    63,    58,    63,
      92,    63,   102,    63,    58,    63,    92,    63,   102,    63,
      60,    58,    63,    58,    63,    58,    63,    58,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    76,    78,    77,    79,    77,
      80,    77,    81,    77,    77,    82,    82,    83,    83,    84,
      85,    84,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     4,
       5,     8,     9,     6,     1,     3,     0,     9,     0,     9,
       0,     8,     0,     8,     5,     1,     3,     2,     4,     2,
       0,     4,     1,     2,     1,     2,     2,     1,     1,     1,
       2,     2,     2,     4,     5,     7,     5,     7,     1,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     1,     4,     3,
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
  switch (yytype)
    {
    case 9: /* IDENTIFIER  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2725 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2731 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2737 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2743 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2749 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 62 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2755 "src/parser.c"
        break;

    case 73: /* declaration_list  */
#line 64 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2761 "src/parser.c"
        break;

    case 74: /* declaration  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2767 "src/parser.c"
        break;

    case 75: /* init_declarator  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2773 "src/parser.c"
        break;

    case 76: /* initializer_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2779 "src/parser.c"
        break;

    case 77: /* function_definition  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2785 "src/parser.c"
        break;

    case 82: /* argument_list  */
#line 63 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2791 "src/parser.c"
        break;

    case 83: /* argument  */
#line 63 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2797 "src/parser.c"
        break;

    case 84: /* compound_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2803 "src/parser.c"
        break;

    case 86: /* statement_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2809 "src/parser.c"
        break;

    case 87: /* statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2815 "src/parser.c"
        break;

    case 89: /* conditional_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2821 "src/parser.c"
        break;

    case 90: /* iteration_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2827 "src/parser.c"
        break;

    case 91: /* return_statement  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2833 "src/parser.c"
        break;

    case 92: /* assignment_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2839 "src/parser.c"
        break;

    case 93: /* logical_or_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2845 "src/parser.c"
        break;

    case 94: /* logical_and_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2851 "src/parser.c"
        break;

    case 95: /* equality_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2857 "src/parser.c"
        break;

    case 96: /* relational_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2863 "src/parser.c"
        break;

    case 97: /* additive_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2869 "src/parser.c"
        break;

    case 98: /* multiplicative_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2875 "src/parser.c"
        break;

    case 99: /* unary_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2881 "src/parser.c"
        break;

    case 100: /* postfix_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2887 "src/parser.c"
        break;

    case 101: /* primary_expression  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2893 "src/parser.c"
        break;

    case 102: /* argument_call_list  */
#line 65 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2899 "src/parser.c"
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
#line 106 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3165 "src/parser.c"
    break;

  case 3:
#line 107 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3171 "src/parser.c"
    break;

  case 4:
#line 111 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3177 "src/parser.c"
    break;

  case 5:
#line 112 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3183 "src/parser.c"
    break;

  case 6:
#line 113 "src/language.y"
    { (yyval.node) = NULL; }
#line 3189 "src/parser.c"
    break;

  case 7:
#line 114 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3195 "src/parser.c"
    break;

  case 8:
#line 118 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3201 "src/parser.c"
    break;

  case 9:
#line 119 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval)); free_label((yyvsp[-2].sval));  tc_evaluate((yyval.node)); }
#line 3207 "src/parser.c"
    break;

  case 10:
#line 120 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3213 "src/parser.c"
    break;

  case 11:
#line 121 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-7].ival),(yyvsp[-6].sval), 0); free_label((yyvsp[-6].sval)); }
#line 3219 "src/parser.c"
    break;

  case 12:
#line 122 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-8].ival),(yyvsp[-7].sval), 0); free_label((yyvsp[-7].sval)); }
#line 3225 "src/parser.c"
    break;

  case 13:
#line 123 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-5].ival),(yyvsp[-4].sval), 0); free_label((yyvsp[-4].sval)); free_label((yyvsp[0].sval)); }
#line 3231 "src/parser.c"
    break;

  case 14:
#line 127 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3237 "src/parser.c"
    break;

  case 15:
#line 128 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3243 "src/parser.c"
    break;

  case 16:
#line 132 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3249 "src/parser.c"
    break;

  case 17:
#line 132 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3255 "src/parser.c"
    break;

  case 18:
#line 133 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3261 "src/parser.c"
    break;

  case 19:
#line 133 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3267 "src/parser.c"
    break;

  case 20:
#line 134 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3273 "src/parser.c"
    break;

  case 21:
#line 134 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3279 "src/parser.c"
    break;

  case 22:
#line 135 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3285 "src/parser.c"
    break;

  case 23:
#line 135 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3291 "src/parser.c"
    break;

  case 24:
#line 136 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3297 "src/parser.c"
    break;

  case 25:
#line 140 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3303 "src/parser.c"
    break;

  case 26:
#line 141 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3309 "src/parser.c"
    break;

  case 27:
#line 145 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3315 "src/parser.c"
    break;

  case 28:
#line 146 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3321 "src/parser.c"
    break;

  case 29:
#line 150 "src/language.y"
    { (yyval.node) = NULL; }
#line 3327 "src/parser.c"
    break;

  case 30:
#line 151 "src/language.y"
    { begin(NULL); }
#line 3333 "src/parser.c"
    break;

  case 31:
#line 151 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3339 "src/parser.c"
    break;

  case 32:
#line 155 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3345 "src/parser.c"
    break;

  case 33:
#line 156 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3351 "src/parser.c"
    break;

  case 34:
#line 160 "src/language.y"
    { (yyval.node) = NULL; }
#line 3357 "src/parser.c"
    break;

  case 35:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3363 "src/parser.c"
    break;

  case 36:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3369 "src/parser.c"
    break;

  case 37:
#line 163 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3375 "src/parser.c"
    break;

  case 38:
#line 164 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3381 "src/parser.c"
    break;

  case 39:
#line 165 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3387 "src/parser.c"
    break;

  case 40:
#line 166 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3393 "src/parser.c"
    break;

  case 41:
#line 167 "src/language.y"
    { (yyval.node) = NULL; }
#line 3399 "src/parser.c"
    break;

  case 42:
#line 168 "src/language.y"
    { (yyval.node) = NULL; }
#line 3405 "src/parser.c"
    break;

  case 43:
#line 172 "src/language.y"
    { printf("%s\n", (yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3411 "src/parser.c"
    break;

  case 44:
#line 175 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3417 "src/parser.c"
    break;

  case 45:
#line 176 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3423 "src/parser.c"
    break;

  case 46:
#line 180 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3429 "src/parser.c"
    break;

  case 47:
#line 181 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3435 "src/parser.c"
    break;

  case 48:
#line 185 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3441 "src/parser.c"
    break;

  case 49:
#line 186 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3447 "src/parser.c"
    break;

  case 50:
#line 190 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3453 "src/parser.c"
    break;

  case 51:
#line 191 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3459 "src/parser.c"
    break;

  case 52:
#line 195 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3465 "src/parser.c"
    break;

  case 53:
#line 196 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3471 "src/parser.c"
    break;

  case 54:
#line 200 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3477 "src/parser.c"
    break;

  case 55:
#line 201 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3483 "src/parser.c"
    break;

  case 56:
#line 205 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3489 "src/parser.c"
    break;

  case 57:
#line 206 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3495 "src/parser.c"
    break;

  case 58:
#line 207 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3501 "src/parser.c"
    break;

  case 59:
#line 211 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3507 "src/parser.c"
    break;

  case 60:
#line 212 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3513 "src/parser.c"
    break;

  case 61:
#line 213 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3519 "src/parser.c"
    break;

  case 62:
#line 214 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3525 "src/parser.c"
    break;

  case 63:
#line 215 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3531 "src/parser.c"
    break;

  case 64:
#line 219 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3537 "src/parser.c"
    break;

  case 65:
#line 220 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3543 "src/parser.c"
    break;

  case 66:
#line 221 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3549 "src/parser.c"
    break;

  case 67:
#line 225 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3555 "src/parser.c"
    break;

  case 68:
#line 226 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3561 "src/parser.c"
    break;

  case 69:
#line 227 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3567 "src/parser.c"
    break;

  case 70:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3573 "src/parser.c"
    break;

  case 71:
#line 232 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3579 "src/parser.c"
    break;

  case 72:
#line 233 "src/language.y"
    { (yyval.node) = node_init(OP_POS, "+",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3585 "src/parser.c"
    break;

  case 73:
#line 234 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3591 "src/parser.c"
    break;

  case 74:
#line 235 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3597 "src/parser.c"
    break;

  case 75:
#line 236 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3603 "src/parser.c"
    break;

  case 76:
#line 237 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3609 "src/parser.c"
    break;

  case 77:
#line 241 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3615 "src/parser.c"
    break;

  case 78:
#line 242 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY); free_label((yyvsp[-3].sval));}
#line 3621 "src/parser.c"
    break;

  case 79:
#line 243 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval));}
#line 3627 "src/parser.c"
    break;

  case 80:
#line 244 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval));}
#line 3633 "src/parser.c"
    break;

  case 81:
#line 248 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3639 "src/parser.c"
    break;

  case 82:
#line 249 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3645 "src/parser.c"
    break;

  case 83:
#line 250 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3651 "src/parser.c"
    break;

  case 84:
#line 251 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3657 "src/parser.c"
    break;

  case 85:
#line 252 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3663 "src/parser.c"
    break;

  case 86:
#line 253 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3669 "src/parser.c"
    break;

  case 87:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3675 "src/parser.c"
    break;

  case 88:
#line 258 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3681 "src/parser.c"
    break;

  case 89:
#line 259 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3687 "src/parser.c"
    break;

  case 90:
#line 263 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3693 "src/parser.c"
    break;

  case 91:
#line 264 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3699 "src/parser.c"
    break;

  case 92:
#line 265 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3705 "src/parser.c"
    break;

  case 93:
#line 266 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3711 "src/parser.c"
    break;


#line 3715 "src/parser.c"

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
#line 269 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
