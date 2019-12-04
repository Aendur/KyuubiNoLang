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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7693

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
     393,   -50,    26,    28,    31,    36,   546,   623,    20,   642,
      51,    45,   673,  -266,   704,   815,  2582,   -24,    48,  2132,
     970,  2669,  4605,  4621,  4657,    21,    53,    75,   350,    73,
    1537,  1537,  2661,  2743,   851,  1543,  1537,  1537,  1537,   125,
     100,   143,  2813,  2844,  2914,   136,  2945,    76,  3015,   145,
     156,    -6,    90,   379,   854,   987,   473,  6286,  4673,  4680,
     149,   472,  3046,  1616,   141,  1543,   162,   177,   198,   233,
    6293,  6309,  6316,  3116,  1404,   234,  6366,  6373,  6389,  3147,
    1653,    -7,   883,  3217,  3248,   204,  3318,  3349,  3419,  1537,
    1537,  1537,  1537,  1537,  1537,  1537,  1537,  1537,  1537,  1537,
    1537,  1537,  1537,   353,   266,    -4,    47,   355,   378,   333,
    4730,   363,   374,   341,  1543,   390,   352,  3450,  4737,   375,
     380,  1663,   399,   115,   418,   879,  1542,  1477,  1910,  2404,
    5689,  6396,  6446,  6453,  6469,  6476,   109,   449,   412,   413,
     265,   425,   236,  4753,  1743,  4789,   431,   373,   427,   435,
    3520,   151,   187,  3551,   276,   430,   384,   443,   387,   457,
     461,  1543,   451,   455,   369,   389,  1268,   399,   484,   469,
     264,  3621,   480,  3652,  3924,  6526,  6533,  6549,  6556,  6606,
    1543,  6613,  2153,  2477,  4804,  4825,  4856,  4875,  1765,  1765,
    1543,  1765,  1765,  1765,    -8,   -12,    -2,    95,  6302,  2770,
    2871,  4906,  4925,  2327,  4956,  4975,  4992,  5011,  5028,  2031,
    2031,  1543,  2031,  2031,  2031,    -9,   180,   226,  1620,  1718,
    2541,  6623,  5047,  5064,   163,  3939,  3954,  4004,  4019,  4035,
    2051,  2051,  1543,  2051,  2051,  2051,    39,    -5,   235,  7507,
     102,  5078,  5100,  4085,  4100,  3722,   544,  4116,  4166,  4181,
    4231,  4246,  2095,  2095,  1543,  2095,  2095,  2095,   185,   306,
     242,  1736,     6,  1846,  5128,  4296,  4311,  3753,  1616,   521,
     498,  1616,   731,  4322,  2972,  3073,  3174,  3275,  3376,  1543,
    3477,  3578,  3679,  3780,   499,  6631,  6681,  6689,  1765,  1765,
    1765,  1765,  1765,  1765,  1765,  1765,  1765,  1765,  1765,  1765,
    1765,  1765,  1616,   795,  4372,  6699,  6709,  6759,  6769,  6779,
    1543,  6789,  6839,  6849,  6859,   500,  6869,  6919,  6929,  2031,
    2031,  2031,  2031,  2031,  2031,  2031,  2031,  2031,  2031,  2031,
    2031,  2031,  2031,  1616,   861,  2462,  5150,  5178,  5200,  5212,
    5228,  1543,  5262,  5278,  5290,  5312,   506,  5340,  5362,  5374,
    2051,  2051,  2051,  2051,  2051,  2051,  2051,  2051,  2051,  2051,
    2051,  2051,  2051,  2051,   496,  1404,  1616,   884,  3874,  5390,
    5440,  5453,  5466,  5516,  1543,  5529,  5542,  5592,  5605,   509,
    5618,  5668,  5681,  2095,  2095,  2095,  2095,  2095,  2095,  2095,
    2095,  2095,  2095,  2095,  2095,  2095,  2095,  1299,  1404,   475,
    6936,   392,  6952,   518,  5696,   420,  1616,   904,   517,  5746,
       3,    19,  1683,  7582,  6382,  6462,  6542,  7430,  6945,  7002,
    7010,  7018,  7026,    14,   525,  5761,   421,  1616,  1020,   519,
    5777,   199,   330,  2426,  7627,  7477,  7484,  7491,  7498,  7036,
    7086,  7096,  7106,  7116,    35,   528,  4387,   439,  1616,  1114,
     527,  4402,   118,   267,  7552,  7559,  1142,  1231,  7337,  7346,
    5797,  5813,  5827,  5847,  5877,    46,  3823,   530,  4452,   444,
    1616,  1178,   538,  4467,   361,   297,  7567,  7575,  7356,  7403,
    7413,  7423,  5897,  5911,  5927,  5977,  5990,   326,  3854,  7166,
    7173,  6005,  6055,   532,  7181,   446,  7189,  6070,  6086,   554,
    7239,   460,  7249,  4517,  4532,   563,  6106,   501,  6122,   589,
    4548,  4598,   568,  6136,   522,  6156,  1373,  7257,  7265,  7275,
    7325,  6186,  6206,  6220,  6236
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -266,  -266,   602,  -266,   183,  -266,  -266,  -266,  -266,  -266,
     491,   -59,  -221,   -72,   -42,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  2303,  2110,  2008,  1937,
    1607,  1497,  1131,   748,   -16,   365,  -265,     9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    39,    40,    41,   151,     9,    10,   106,
     107,    42,    74,    43,    44,    45,    46,    47,   159,    86,
     122,    48,    66,   167,    67,    49,   111,   194,   195,   196,
     197,   198,   199,   200,    71,   181,   112,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    83,   117,   120,   401,   -95,    12,   405,   115,    11,
     -57,   289,    58,   319,   288,    11,    89,   -57,   351,   201,
     -59,   -59,   290,   291,   365,   -58,   289,    58,   -64,   -64,
     -64,   -64,   -13,   -64,   -64,   -95,   288,   -96,   426,    61,
     -97,   -60,   -60,   290,   291,   -98,   398,   222,   243,   201,
     -55,   121,   -57,   -55,    17,   -57,   -55,   319,    58,   -57,
     139,   350,   -59,   153,    58,   -64,   -64,   -58,   350,   447,
     108,   -64,   -64,   391,   392,    83,    15,   -47,   -56,   -47,
     -47,   -47,   -47,   -60,    65,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,    85,   -47,   -47,   -47,   -47,   -56,   201,   -55,
     166,    58,   469,   -55,    62,   265,   -56,   140,   171,    16,
     -56,   141,   -57,    90,   -47,   -47,   -48,   -61,   -61,   -61,
     -61,   222,   292,   293,   -64,   -64,   -64,   -64,   243,   -64,
     -64,    89,   -47,   -51,   -47,   -47,    69,   -58,    90,   -47,
     -58,   351,   495,   -47,   -47,   201,   -57,   265,   -47,   108,
     224,   225,   226,   227,   228,   229,    -7,    80,   103,   -61,
     294,   295,   -64,   501,   201,   -56,   -64,   -64,   -64,   358,
     359,   -58,   281,   281,   201,   281,   281,   281,   -58,   230,
     231,    79,   -58,     8,   507,   -86,   -86,   -86,   -86,     8,
     -86,   -86,    84,   312,   312,   201,   312,   312,   312,    -8,
      81,    87,   -57,   320,   232,   110,   514,   383,   233,   234,
     162,   163,    88,   235,   343,   343,   201,   343,   343,   343,
     -86,   -58,   320,   -86,   333,   114,   334,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   245,   376,   376,   201,   376,
     376,   376,   -57,   116,   -55,   -55,   -16,   -16,   -59,   -59,
     321,   322,   222,   243,   -54,   222,   243,   -59,   -59,   352,
     353,   -58,   -45,   201,   -59,   -59,   385,   386,     2,     3,
       4,     5,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   222,   243,   -59,   -60,
     -60,   352,   353,   466,   201,   -59,   -25,   157,   118,   -59,
     -25,   -59,   -59,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   222,   243,   -60,
     -60,   385,   386,   -17,   -17,   201,   488,   -60,   -57,   384,
     138,   -60,   -15,   -15,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   383,    58,
     222,   243,   -60,   -60,   321,   322,   -60,   -60,   201,    19,
      20,    21,    22,    23,    24,   -57,   -57,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,    59,    58,   -58,   384,   -56,   -56,   142,    30,    31,
     222,   243,   -60,    59,     1,   143,     2,     3,     4,     5,
     202,   -59,   -59,    91,    92,   146,   -53,   148,    59,   -13,
     -13,   222,   243,    35,   137,   -23,   149,    36,    37,   -23,
     -58,   -58,    38,   -93,    83,   -14,   -14,   -93,   223,   244,
     202,    -9,   222,   243,   144,   -59,   -12,   160,   145,    59,
     -60,   -60,    91,    92,   -24,    59,    83,   -94,   -24,   -26,
      58,   -94,   144,   -26,   222,   243,   490,    33,   203,   204,
     205,   206,   207,   208,   246,   247,   248,   249,   250,   251,
     -22,   -21,    58,   104,   -60,   105,     3,     4,     5,   202,
     144,   144,    59,   -20,   492,   498,   266,   209,   210,   -43,
     161,   -41,   164,   252,   253,   -69,   -69,   -69,   -69,   144,
     -69,   -69,   223,   504,   144,   165,   144,   -10,   511,   244,
     518,   154,   211,   -27,   169,   267,   212,   213,   254,   -49,
     144,   214,   255,   256,   520,   -11,   202,   257,   266,   -69,
     224,   225,   226,   227,   228,   229,   173,   489,   -69,   -69,
     -69,   -69,    99,   100,   101,   202,    13,     1,   172,     2,
       3,     4,     5,   282,   282,   202,   282,   282,   282,   230,
     231,   144,   402,   409,   430,   522,   -86,   -86,   -86,   -86,
     451,   -86,   -86,   473,   313,   313,   202,   313,   313,   313,
     491,   496,   144,   502,   232,   400,   524,   497,   233,   234,
     503,   508,   510,   235,   517,   344,   344,   202,   344,   344,
     344,   -86,   515,   -86,   -86,   366,   -29,   367,    14,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   519,   377,   377,   202,
     377,   377,   377,    -2,    -2,   521,    -2,    -2,    -2,    -2,
     523,   156,     0,   223,   244,     0,   223,   244,     0,     0,
       0,     0,    -4,    -4,   202,    -4,    -4,    -4,    -4,     0,
       0,     0,     0,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   223,   244,     0,
       0,     0,     0,    -6,    -6,   202,    -6,    -6,    -6,    -6,
       0,     0,     0,     0,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   223,   244,
       0,     0,     0,     0,    -3,    -3,   202,    -3,    -3,    -3,
      -3,     0,     0,     0,     0,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,     0,
      59,   223,   244,     0,     0,     0,     0,     0,     0,   202,
     224,   225,   226,   227,   228,   229,     0,     0,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,     0,    59,    57,     0,     0,     0,     0,   230,
     231,   223,   244,     0,     0,     0,    57,     0,    70,    72,
       0,     0,     0,     0,    76,    77,    78,     0,     0,     0,
       0,    57,   223,   244,   232,   404,     0,     0,   233,   234,
       0,     0,     0,   235,   224,   225,   226,   227,   228,   229,
       0,   221,   242,   223,   244,    -5,    -5,     0,    -5,    -5,
      -5,    -5,    57,     0,     0,     0,     0,     0,    57,     0,
       0,    59,     0,   230,   231,   223,   244,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,   133,   134,   135,
      57,   -19,   -19,    59,   -19,   -19,   -19,   -19,   232,   425,
       0,     0,   233,   234,     0,    57,     0,   235,     0,   264,
     224,   225,   226,   227,   228,   229,   -61,   -61,   -61,   -61,
       0,    93,    94,   -18,   -18,   221,   -18,   -18,   -18,   -18,
       0,     0,   242,   224,   225,   226,   227,   228,   229,   230,
     231,   -62,   -62,   -62,   -62,     0,    93,    94,     0,     0,
     -61,   264,     0,   224,   225,   226,   227,   228,   229,    95,
      96,     0,   230,   231,   232,   446,     0,     0,   233,   234,
       0,     0,     0,   235,     0,   -62,   280,   283,     0,   285,
     286,   287,   230,   231,    95,    96,     0,   232,   468,     0,
       0,   233,   234,     0,     0,     0,   235,   311,   314,     0,
     316,   317,   318,     0,     0,     0,     0,   232,   494,     0,
       0,   233,   234,     0,     0,     0,   235,     0,   342,   345,
       0,   347,   348,   349,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
     375,   378,     0,   380,   381,   382,     0,     0,     0,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   221,   242,     0,   221,
     242,     0,     0,     0,     0,     0,   -87,   -87,     0,   224,
     225,   226,   227,   228,   229,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -64,     0,     0,   420,   421,   422,     0,
     221,   242,   -64,   -64,    97,    98,     0,     0,   230,   231,
       0,     0,     0,     0,     0,     0,     0,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   441,   442,   443,
     221,   221,   242,   232,   500,     0,     0,   233,   234,     0,
       0,     0,   235,     0,     0,     0,     0,     0,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   462,   463,
     464,   242,     0,    57,   221,   242,     0,     0,     0,     0,
       0,     0,     0,   224,   225,   226,   227,   228,   229,     0,
       0,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   484,   485,   486,   264,     0,    57,    56,     0,     0,
       0,     0,   230,   231,   221,   242,     0,     0,     0,    56,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,     0,     0,    56,   221,   242,   232,   506,     0,
       0,   233,   234,     0,     0,     0,   235,   224,   225,   226,
     227,   228,   229,     0,   220,   241,   221,   242,     0,     0,
       0,     0,   -67,     0,     0,    56,   -67,   -67,   -67,   358,
     359,    56,     0,     0,    57,     0,   230,   231,   221,   242,
      56,    56,    56,    56,    56,    56,    56,    56,   131,   132,
       0,     0,     0,    56,     0,     0,    57,     0,     0,     0,
       0,   232,   513,     0,     0,   233,   234,     0,    56,     0,
     235,     0,   263,   -68,   -68,   -68,   -68,     0,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   -44,
       0,   -44,   -44,   -44,   -44,   241,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
       0,   -68,     0,     0,   263,   -68,   -68,   -68,   358,   359,
     -27,     0,   -27,   -27,   -27,   -27,   -44,   -44,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,   -44,     0,   -44,   -44,     0,     0,
       0,   -44,     0,     0,     0,   -44,   -44,   -27,   -27,     0,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,     0,   -27,   -27,     0,
       0,     0,   -27,     0,     0,     0,   -27,   -27,     0,     0,
       0,   -27,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,   220,
     241,     0,   220,   241,     0,    18,     0,     2,     3,     4,
       5,   -29,   -29,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,   418,   419,   -29,
       0,   -29,   -29,   220,   241,     0,   -29,     0,     0,     0,
     -29,   -29,    30,    31,     0,   -29,     0,     0,     0,     0,
     220,   220,   220,   220,   220,   220,   220,   220,   439,   440,
      32,     0,    33,   220,   220,   241,     0,    35,     0,     0,
       0,    36,    37,     0,     0,     0,    38,     0,     0,     0,
       0,   241,   241,   241,   241,   241,   241,   241,   241,   460,
     461,     0,     0,     0,   241,     0,    56,   220,   241,   -67,
     -67,   -67,   -67,     0,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,    55,   263,   263,   263,   263,   263,   263,
     263,   263,   482,   483,     0,    55,     0,   263,     0,    56,
       0,     0,     0,   -67,     0,     0,     0,   220,   241,     0,
      55,     0,   -67,   -67,    97,    98,   174,   175,   176,   177,
     178,   179,   182,   183,   184,   185,   186,   187,   220,   241,
     219,   240,     0,     0,   -63,   -63,   -63,   -63,     0,    93,
      94,    55,     0,     0,     0,    30,    31,    55,     0,   220,
     241,   188,   189,     0,     0,     0,    55,    55,    55,    55,
     127,   128,   129,   130,     0,     0,     0,    56,   -63,    55,
     180,   220,   241,     0,    36,    37,   190,    95,    96,    38,
     191,   192,     0,     0,    55,   193,     0,     0,   262,    56,
       0,     0,     0,    54,     0,   203,   204,   205,   206,   207,
     208,     0,     0,     0,   219,    54,     0,     0,     0,     0,
       0,   240,   -61,   -61,   -61,   -61,     0,   323,   324,     0,
      54,     0,     0,     0,   209,   210,     0,     0,     0,     0,
     262,     0,    19,    20,    21,    22,    23,    24,     0,     0,
     218,   239,   246,   247,   248,   249,   250,   251,     0,   211,
       0,    54,   -61,   212,   213,   325,   326,    54,   214,     0,
       0,    30,    31,     0,     0,     0,    54,    54,   125,   126,
       0,   252,   253,     0,     0,   -62,   -62,   -62,   -62,    54,
     292,   293,     0,     0,     0,     0,    35,     0,     0,     0,
      36,    37,     0,     0,    54,    38,   254,     0,   261,     0,
     255,   256,     0,     0,     0,   257,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   218,   -64,   -64,   -62,   294,   295,
       0,   239,   224,   225,   226,   227,   228,   229,   -61,   -61,
     -61,   -61,     0,   387,   388,   219,   240,     0,   219,   240,
     261,     0,     0,     0,   273,   274,   275,   276,   277,   278,
     -64,   230,   231,   -64,   -64,   327,   328,     0,     0,   414,
     415,   416,   417,     0,     0,   -61,   -61,     0,     0,   219,
     240,   389,   390,   188,   189,     0,   232,     0,     0,     0,
     233,   234,     0,     0,     0,   235,   219,   219,   219,   219,
     435,   436,   437,   438,     0,     0,     0,     0,   279,   219,
     219,   240,   191,   192,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   240,   240,   240,
     240,   456,   457,   458,   459,     0,     0,     0,     0,     0,
     240,     0,    55,   219,   240,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   218,   239,     0,   218,   239,
     262,   262,   262,   262,   478,   479,   480,   481,     0,     0,
       0,     0,     0,   262,     0,    55,     0,   412,   413,     0,
       0,     0,     0,   219,   240,   -69,   -69,     0,     0,   218,
     239,   -69,   -69,   -69,   -69,   393,   394,   395,     0,     0,
       0,     0,     0,     0,   219,   240,   218,   218,   433,   434,
       0,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   218,
     218,   239,     0,     0,     0,   219,   240,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,   239,   239,   454,
     455,     0,     0,    55,     0,    53,   -68,   219,   240,     0,
     239,     0,    54,   218,   239,   -68,   -68,    97,    98,     0,
      53,     0,     0,     0,     0,    55,     0,     0,     0,     0,
     261,   261,   476,   477,     0,     0,     0,     0,     0,     0,
     217,   238,     0,   261,     0,    54,     0,     0,     0,     0,
       0,    53,     0,   218,   239,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    52,     0,    53,   124,     0,     0,
       0,     0,     0,     0,   218,   239,    52,     0,     0,    53,
     304,   305,   306,   307,   308,   309,     0,     0,     0,     0,
       0,    52,     0,     0,    53,   218,   239,     0,   260,     0,
     335,   336,   337,   338,   339,   340,     0,     0,     0,   209,
     210,   216,   237,    54,   217,     0,     0,   218,   239,     0,
       0,   238,    52,     0,     0,     0,     0,     0,    52,   230,
     231,     0,     0,     0,   310,    54,     0,   123,   212,   213,
     260,     0,     0,   214,   368,   369,   370,   371,   372,   373,
      52,     0,     0,     0,   341,     0,     0,     0,   233,   234,
       0,     0,     0,   235,     0,    52,    51,     0,     0,   259,
       0,     0,     0,   252,   253,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,   237,    51,   -86,   -86,   -86,   -86,   374,   -86,
     -86,     0,   255,   256,     0,     0,     0,   257,     0,     0,
       0,   259,     0,   215,   236,   -86,   -86,   -86,   -86,     0,
     -86,   -86,     0,     0,    51,     0,     0,     0,   -86,   -86,
      51,     0,     0,    63,     0,    64,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   217,   238,     0,   217,   238,
     -86,     0,   136,     0,   271,     0,   272,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   411,    51,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,     0,   217,
     238,     0,     0,     0,     0,     0,     0,   215,     0,     0,
       0,     0,     0,     0,   236,     0,   217,   432,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     217,   238,     0,   258,     0,     0,   216,   237,     0,   216,
     237,     0,     0,     0,     0,     0,     0,   238,   453,     0,
       0,     0,     0,     0,     0,     0,   410,     0,     0,     0,
     238,     0,    53,   217,   238,     0,     0,     0,     0,     0,
     216,   237,     0,     0,     0,     0,     0,     0,     0,    50,
     260,   475,     0,     0,     0,     0,     0,   431,     0,     0,
       0,    68,     0,   260,     0,    53,     0,     0,    75,     0,
     216,   216,   237,   217,   238,     0,    50,     0,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,   452,     0,
       0,     0,     0,     0,   217,   238,   109,     0,   113,     0,
       0,   237,     0,    52,   216,   237,     0,    50,   215,   236,
       0,   215,   236,   119,   -86,   217,   238,     0,   302,   -86,
     303,   474,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,    53,   259,     0,    52,   217,   238,     0,
       0,   423,   215,   236,   216,   237,     0,   147,     0,     0,
      50,     0,     0,     0,   152,    53,   -65,   -65,   -65,   -65,
       0,   -65,   -65,     0,     0,   216,   237,     0,     0,     0,
     155,     0,   444,   215,   236,     0,     0,   158,   -62,   -62,
     -62,   -62,     0,   323,   324,     0,   216,   237,     0,     0,
     -65,     0,     0,     0,   168,     0,   170,     0,     0,   -65,
     -65,    97,    98,   465,    52,    51,   215,   236,   216,   237,
       0,     0,     0,   270,   -86,   -86,   -86,   -86,   -62,   -86,
     -86,   325,   326,   284,     0,     0,    52,     0,     0,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   487,     0,    51,     0,
       0,     0,     0,     0,   315,     0,   215,   236,     0,     0,
       0,     0,   -86,   448,     0,   449,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   346,     0,   215,   236,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   215,   236,
       0,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,   -69,
       0,   399,     0,     0,   403,     0,    51,     0,     0,     0,
     215,   236,   408,    18,     0,     2,     3,     4,     5,     0,
       0,    19,    20,    21,    22,    23,    24,    25,    51,    26,
      27,    28,    29,   -69,     0,   424,   -69,   -69,   -69,   -69,
     329,   330,   331,   429,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,    32,     0,
      33,    34,     0,     0,   450,    35,     0,     0,     0,    36,
      37,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,    50,   467,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   472,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,   -32,
     -32,    50,     0,     0,     0,     0,     0,     0,     0,   493,
       0,     0,     0,     0,     0,     0,     0,   -32,     0,   -32,
     -32,     0,     0,     0,   -32,   -88,   -88,     0,   -32,   -32,
     499,     0,     0,   -32,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
       0,   505,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,    50,
       0,     0,     0,   512,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,    50,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -28,
       0,   -28,    73,     0,     0,     0,   -28,     0,     0,     0,
     -28,   -28,     0,     0,   -37,   -28,   -37,   -37,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -69,   -69,   -69,   -69,   -69,   298,
     299,   300,     0,     0,     0,    18,     0,     2,     3,     4,
       5,   -37,   -37,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,     0,   -37,
       0,   -37,   -37,     0,     0,     0,   -37,     0,     0,     0,
     -37,   -37,    30,    31,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,
      32,     0,    33,    82,     0,     0,     0,    35,     0,     0,
       0,    36,    37,     0,     0,   -30,    38,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -30,   -30,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -30,     0,   -30,   -30,     0,     0,     0,   -30,     0,     0,
       0,   -30,   -30,   -35,   -35,     0,   -30,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -35,     0,   -35,   -35,     0,     0,     0,   -35,     0,
       0,     0,   -35,   -35,     0,     0,   -36,   -35,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -36,   -36,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,   -36,     0,   -36,   -36,     0,     0,     0,   -36,     0,
       0,     0,   -36,   -36,   -40,   -40,     0,   -36,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -40,     0,   -40,   -40,     0,     0,     0,   -40,
       0,     0,     0,   -40,   -40,     0,     0,   -27,   -40,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -27,   -27,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -27,     0,   -27,   -27,     0,     0,     0,   -27,
       0,     0,     0,   -27,   -27,   -33,   -33,     0,   -27,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   -33,     0,   -33,   -33,     0,     0,     0,
     -33,     0,     0,     0,   -33,   -33,     0,     0,   -31,   -33,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -31,   -31,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,   -31,     0,   -31,   -31,     0,     0,     0,
     -31,     0,     0,     0,   -31,   -31,   -39,   -39,     0,   -31,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,     0,   -90,   -90,   -39,     0,   -39,   -39,     0,     0,
       0,   -39,     0,     0,     0,   -39,   -39,     0,     0,   -42,
     -39,   -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
     -38,     0,   -38,   -38,   -38,   -38,   -42,   -42,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,   -42,     0,   -42,   -42,     0,     0,
       0,   -42,     0,     0,     0,   -42,   -42,   -38,   -38,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -38,     0,   -38,   -38,     0,
       0,     0,   -38,     0,     0,     0,   -38,   -38,     0,     0,
     -34,   -38,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,    18,     0,     2,     3,     4,     5,   -34,   -34,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,   -34,     0,   -34,   -34,     0,
       0,     0,   -34,     0,     0,     0,   -34,   -34,    30,    31,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,    32,     0,    33,   150,
       0,     0,     0,    35,     0,     0,     0,    36,    37,     0,
       0,   -29,    38,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,   -46,     0,   -46,   -46,   -46,   -46,   -29,   -29,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,   -29,     0,   -29,   -29,
       0,     0,     0,   -29,     0,     0,     0,   -29,   -29,   -46,
     -46,     0,   -29,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -46,     0,   -46,
     -46,     0,     0,     0,   -46,     0,     0,     0,   -46,   -46,
       0,     0,   -50,   -46,   -50,   -50,   -50,   -50,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,   -50,
     -50,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -52,   -52,   -52,     0,     0,     0,     0,   -50,     0,   -50,
     -50,     0,     0,     0,   -50,     0,     0,     0,   -50,   -50,
     -52,   -52,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -52,     0,
     -52,   -52,     0,     0,     0,   -52,     0,     0,     0,   -52,
     -52,     0,     0,   -28,   -52,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,     0,
     -28,   364,     0,     0,     0,   -28,     0,     0,     0,   -28,
     -28,   -28,   -28,     0,   -28,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -28,
       0,   -28,   397,     0,     0,     0,   -28,     0,     0,     0,
     -28,   -28,     0,     0,    18,   -28,     2,     3,     4,     5,
       0,     0,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,    18,     0,     2,     3,     4,
       5,    30,    31,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,     0,    32,
       0,    33,   509,     0,     0,     0,    35,     0,     0,     0,
      36,    37,    30,    31,     0,    38,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
      32,     0,    33,   516,     0,     0,     0,    35,     0,     0,
       0,    36,    37,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,   -86,   -86,   470,     0,   471,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
     -86,   -88,   -88,     0,     0,   268,     0,   269,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,     0,     0,   -88,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -89,   -91,   -91,   -89,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,     0,   -90,
       0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -91,     0,     0,   -91,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   363,   -87,   -87,   -76,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -82,     0,     0,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -87,     0,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,     0,   -88,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,
     -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
     -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -91,     0,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -76,   -76,
     -76,   -76,     0,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,   396,     0,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -82,     0,
     -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   406,     0,   407,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,     0,   -92,
     -92,     0,     0,   427,   -86,   428,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -84,     0,     0,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,
       0,     0,   -92,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -84,   -84,   -84,   -84,     0,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,     0,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,   -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -92,     0,   -92,   -92,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -83,
     -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,
       0,     0,   -85,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -83,     0,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -89,   -89,   -89,
     -89,     0,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,     0,     0,     0,   -85,     0,   -85,   -85,     0,
       0,   -89,   -89,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -90,   -90,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -76,
     102,     0,     0,     0,     0,     0,   -82,   -82,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -92,
     -92,   -92,   -92,     0,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,     0,   -84,   -84,     0,     0,
       0,     0,     0,   -92,   -92,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -83,
     -83,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -88,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -90,   -90,
     -90,   -90,   -89,   -90,   -90,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -91,   -91,   -91,
     -91,     0,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -90,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -76,   -76,
     -76,   -76,   -91,   -76,   -76,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -87,   -87,
     -87,   -87,   -82,   -87,   -87,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -87,   -89,   -89,   -89,   -89,   -87,   -89,
     -89,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -88,   -90,   -90,   -90,   -90,   -88,   -90,   -90,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -89,
     -91,   -91,   -91,   -91,   -89,   -91,   -91,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -90,   -76,
     -76,   -76,   -76,   -90,   -76,   -76,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,   -91,   -82,   -82,   -82,   -82,
     -91,   -82,   -82,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -69,   -69,   -69,   -69,   332,   -69,   -69,     0,     0,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,   -82,   -72,   -72,   -72,   -72,   -82,   -72,   -72,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   360,   361,   362,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -88,   -90,
     -90,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,     0,
     -89,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -90,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -80,   -80,   -80,   -80,   -91,   -80,
     -80,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,   -80,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,   -76,   -81,
     -81,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -77,   -79,   -79,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
       0,     0,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -87,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,     0,   -90,   -90,     0,     0,     0,     0,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -90,   -90,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,
     -76,     0,     0,     0,     0,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -76,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
       0,   -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -81,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -77,   -77,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,   -78,   -78,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -79,   -79,     0,     0,     0,   -66,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -84,   -66,   -66,    97,    98,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -92,
     -92,   -92,     0,   -92,   -92,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -84,   -70,
     -70,   -70,   -70,   -84,   -70,   -70,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -92,   -71,   -71,   -71,   -71,   -92,
     -71,   -71,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -73,
     -73,   -73,   -73,     0,   -73,   -73,     0,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   360,   361,   362,   -74,
     -74,   -74,   -74,   -71,   -74,   -74,     0,   -71,   -71,   -71,
     -71,   -71,   360,   361,   362,     0,     0,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,   -74,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -70,
     -70,   -70,   -70,     0,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -75,   -71,   -71,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -70,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   393,   394,   395,     0,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     393,   394,   395,     0,     0,     0,   -73,   -73,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,
     -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,     0,   -74,   -74,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -83,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -83,   -84,   -84,
     -84,   -84,   -83,   -84,   -84,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -85,   -92,   -92,   -92,   -92,   -85,   -92,
     -92,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,   -84,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -92,   -92,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   -85,   -85,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -81,   -81,
     -81,   -81,   -72,   -81,   -81,     0,     0,     0,     0,   -80,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -76,   -64,   -64,   -64,   296,
     297,     0,   -81,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -78,   -78,   -78,   -78,     0,
     -78,   -78,     0,     0,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -70,   -70,
     -70,   -70,   -77,   -70,   -70,     0,     0,     0,     0,   -78,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,   -67,   -67,   -67,   296,
     297,     0,   -70,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -70,   -70,   -70,   -70,    99,   100,   101,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -75,   -75,
     -75,   -75,   -71,   -75,   -75,     0,     0,     0,     0,   -73,
       0,   -71,   -71,   -71,   -71,    99,   100,   101,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,   -68,   -68,   -68,   296,
     297,     0,   -75,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -88,   -88,   -88,   -88,     0,
     -88,   -88,     0,     0,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -90,   -90,
     -90,   -90,   -87,   -90,   -90,     0,     0,     0,     0,   -88,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -65,   -65,   -65,   296,
     297,     0,   -90,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,     0,     0,   -72,   -72,   -72,   -72,     0,
     -72,   -72,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,
       0,     0,   -91,     0,     0,     0,     0,     0,     0,   -82,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -72,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,     0,
       0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,
       0,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,     0,
       0,   -89,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -91,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,
       0,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -77,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -79,   -84,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -92,   -70,
     -70,   -70,   -70,   -70,   298,   299,   300,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
     -74,   -74,   -74,   -74,     0,   -74,   -74,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,   -70,   -70,
     -70,   -70,     0,   -70,   -70,     0,   -71,   -71,   -71,   -71,
     -71,   298,   299,   300,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -70,     0,
       0,   -70,   -70,   -70,   -70,   329,   330,   331,   -71,   -71,
     -71,   -71,     0,   -71,   -71,     0,     0,     0,   -73,   -73,
     -73,   -73,     0,   -73,   -73,     0,     0,     0,   -74,   -74,
     -74,   -74,     0,   -74,   -74,     0,     0,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,   -71,     0,
       0,   -71,   -71,   -71,   -71,   329,   330,   331,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,     0,
       0,     0,   -83,     0,     0,     0,     0,     0,     0,   -85,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,   -83,
     -83,   -83,   -83,     0,   -83,   -83,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,   -83,   -83,   -83,
     -83,   -84,   -83,   -83,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -92,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -83,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,     0,   -65,   -65,     0,     0,   -66,   -66,
     -66,   -66,     0,   -66,   -66,     0,     0,     0,   -67,   -67,
     -67,   -67,     0,   -67,   -67,     0,     0,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -65,     0,     0,
       0,   -65,   -65,   -65,   358,   359,   -66,     0,     0,     0,
     -66,   -66,   -66,   358,   359,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   391,   392,   -68,   -68,   -68,   -68,     0,
     -68,   -68,     0,     0,     0,   -65,   -65,   -65,   -65,     0,
     -65,   -65,     0,     0,     0,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,
       0,     0,   -68,   -68,     0,     0,     0,     0,   -68,   -68,
     391,   392,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     391,   392,   -66,   -66,     0,     0,     0,     0,   -66,   -66,
     391,   392,     0,     0,   -66,   -66,   -66,   296,   297,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,   -61,
     -61,   -61,   -61,     0,   354,   355,     0,     0,     0,   -67,
       0,     0,   -67,   -67,   327,   328,   -68,     0,     0,   -68,
     -68,   327,   328,   -65,     0,     0,   -65,   -65,   327,   328,
     -66,     0,     0,   -66,   -66,   327,   328,   -61,     0,     0,
       0,   -61,   356,   357,   -62,   -62,   -62,   -62,     0,   354,
     355,   -63,   -63,   -63,   -63,     0,   354,   355,     0,   -62,
     -62,   -62,   -62,     0,   387,   388,     0,   -63,   -63,   -63,
     -63,     0,   387,   388,   -63,   -63,   -63,   -63,     0,   292,
     293,     0,   -62,     0,     0,     0,   -62,   356,   357,   -63,
       0,     0,     0,   -63,   356,   357,   -62,   -62,     0,     0,
       0,     0,   389,   390,   -63,   -63,     0,     0,     0,     0,
     389,   390,     0,     0,     0,     0,   -63,   294,   295,   -63,
     -63,   -63,   -63,     0,   323,   324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
       0,     0,   325,   326
};

static const yytype_int16 yycheck[] =
{
      16,    43,    74,    10,   269,     9,    56,   272,    67,     0,
      22,    23,    28,    22,    22,     6,    22,    22,    23,    35,
      22,    23,    24,    25,   245,    22,    23,    43,    22,    23,
      24,    25,    56,    27,    28,     9,    22,     9,   303,    63,
       9,    22,    23,    24,    25,     9,   267,    63,    64,    65,
      56,    58,    64,    62,     9,    60,    64,    22,    74,    64,
      64,    22,    64,   122,    80,    59,    60,    64,    22,   334,
      61,    65,    66,    67,    68,   117,    56,     1,    64,     3,
       4,     5,     6,    64,    63,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    62,   114,    60,
     159,   117,   367,    64,    56,   121,    60,    60,   167,    58,
      64,    64,    22,    23,    38,    39,    63,    22,    23,    24,
      25,   137,    27,    28,    22,    23,    24,    25,   144,    27,
      28,    22,    56,    58,    58,    59,    63,    22,    23,    63,
      22,    23,   407,    67,    68,   161,    56,   163,    72,   140,
       9,    10,    11,    12,    13,    14,    56,    57,     9,    64,
      65,    66,    60,   428,   180,    56,    64,    65,    66,    67,
      68,    56,   188,   189,   190,   191,   192,   193,    60,    38,
      39,    56,    64,     0,   449,    22,    23,    24,    25,     6,
      27,    28,    56,   209,   210,   211,   212,   213,   214,    56,
      57,    56,    22,    23,    63,    64,   471,    22,    67,    68,
      59,    60,    56,    72,   230,   231,   232,   233,   234,   235,
      57,    22,    23,    60,    61,    63,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    58,   252,   253,   254,   255,
     256,   257,    62,    10,    59,    60,    59,    60,    22,    23,
      24,    25,   268,   269,    56,   271,   272,    22,    23,    24,
      25,    62,    58,   279,    22,    23,    24,    25,     3,     4,
       5,     6,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,    62,    22,
      23,    24,    25,   365,   310,    60,    60,    61,    64,    64,
      64,    59,    60,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    22,
      23,    24,    25,    59,    60,   341,   398,    60,    22,    23,
      64,    64,    56,    57,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    22,   365,
     366,   367,    22,    23,    24,    25,    59,    60,   374,     9,
      10,    11,    12,    13,    14,    59,    60,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,    16,   398,    22,    23,    59,    60,     9,    38,    39,
     406,   407,    62,    28,     1,    62,     3,     4,     5,     6,
      35,    22,    23,    24,    25,    64,    56,    17,    43,    56,
      57,   427,   428,    63,    61,    60,    64,    67,    68,    64,
      59,    60,    72,    60,   466,    56,    57,    64,    63,    64,
      65,    56,   448,   449,    60,    56,    56,    64,    64,    74,
      22,    23,    24,    25,    60,    80,   488,    60,    64,    60,
     466,    64,    60,    64,   470,   471,    64,    58,     9,    10,
      11,    12,    13,    14,     9,    10,    11,    12,    13,    14,
      58,    58,   488,     1,    56,     3,     4,     5,     6,   114,
      60,    60,   117,    58,    64,    64,   121,    38,    39,    58,
      63,    56,    62,    38,    39,    22,    23,    24,    25,    60,
      27,    28,   137,    64,    60,    62,    60,    56,    64,   144,
      64,    62,    63,    17,    59,    58,    67,    68,    63,    58,
      60,    72,    67,    68,    64,    56,   161,    72,   163,    56,
       9,    10,    11,    12,    13,    14,    56,    62,    65,    66,
      67,    68,    69,    70,    71,   180,     0,     1,    64,     3,
       4,     5,     6,   188,   189,   190,   191,   192,   193,    38,
      39,    60,    64,    64,    64,    64,    22,    23,    24,    25,
      64,    27,    28,    64,   209,   210,   211,   212,   213,   214,
      62,    64,    60,    64,    63,    64,    64,    62,    67,    68,
      62,    64,    62,    72,    62,   230,   231,   232,   233,   234,
     235,    57,    64,    59,    60,    61,    17,    63,     6,    65,
      66,    67,    68,    69,    70,    71,    62,   252,   253,   254,
     255,   256,   257,     0,     1,    62,     3,     4,     5,     6,
      62,   140,    -1,   268,   269,    -1,   271,   272,    -1,    -1,
      -1,    -1,     0,     1,   279,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    -1,
      -1,    -1,    -1,     0,     1,   310,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,    -1,    -1,    -1,     0,     1,   341,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    -1,
     365,   366,   367,    -1,    -1,    -1,    -1,    -1,    -1,   374,
       9,    10,    11,    12,    13,    14,    -1,    -1,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    -1,   398,    16,    -1,    -1,    -1,    -1,    38,
      39,   406,   407,    -1,    -1,    -1,    28,    -1,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,   427,   428,    63,    64,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,     9,    10,    11,    12,    13,    14,
      -1,    63,    64,   448,   449,     0,     1,    -1,     3,     4,
       5,     6,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,   466,    -1,    38,    39,   470,   471,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     1,   488,     3,     4,     5,     6,    63,    64,
      -1,    -1,    67,    68,    -1,   117,    -1,    72,    -1,   121,
       9,    10,    11,    12,    13,    14,    22,    23,    24,    25,
      -1,    27,    28,     0,     1,   137,     3,     4,     5,     6,
      -1,    -1,   144,     9,    10,    11,    12,    13,    14,    38,
      39,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      56,   163,    -1,     9,    10,    11,    12,    13,    14,    65,
      66,    -1,    38,    39,    63,    64,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,    -1,    56,   188,   189,    -1,   191,
     192,   193,    38,    39,    65,    66,    -1,    63,    64,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,   209,   210,    -1,
     212,   213,   214,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    -1,   230,   231,
      -1,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
     252,   253,    -1,   255,   256,   257,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,   268,   269,    -1,   271,
     272,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,     9,
      10,    11,    12,    13,    14,    65,    66,    67,    68,    69,
      70,    71,    -1,    56,    -1,    -1,   298,   299,   300,    -1,
     302,   303,    65,    66,    67,    68,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    63,    64,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    -1,   365,   366,   367,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,    -1,   398,    16,    -1,    -1,
      -1,    -1,    38,    39,   406,   407,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    43,   427,   428,    63,    64,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,     9,    10,    11,
      12,    13,    14,    -1,    63,    64,   448,   449,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    74,    64,    65,    66,    67,
      68,    80,    -1,    -1,   466,    -1,    38,    39,   470,   471,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,   102,    -1,    -1,   488,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    67,    68,    -1,   117,    -1,
      72,    -1,   121,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,     1,
      -1,     3,     4,     5,     6,   144,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    60,    -1,    -1,   163,    64,    65,    66,    67,    68,
       1,    -1,     3,     4,     5,     6,    38,    39,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,   268,
     269,    -1,   271,   272,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,   296,   297,    56,
      -1,    58,    59,   302,   303,    -1,    63,    -1,    -1,    -1,
      67,    68,    38,    39,    -1,    72,    -1,    -1,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      56,    -1,    58,   332,   333,   334,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    -1,    -1,    -1,   363,    -1,   365,   366,   367,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,    -1,    28,    -1,   396,    -1,   398,
      -1,    -1,    -1,    56,    -1,    -1,    -1,   406,   407,    -1,
      43,    -1,    65,    66,    67,    68,     9,    10,    11,    12,
      13,    14,     9,    10,    11,    12,    13,    14,   427,   428,
      63,    64,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    74,    -1,    -1,    -1,    38,    39,    80,    -1,   448,
     449,    38,    39,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    -1,    -1,   466,    56,   102,
      63,   470,   471,    -1,    67,    68,    63,    65,    66,    72,
      67,    68,    -1,    -1,   117,    72,    -1,    -1,   121,   488,
      -1,    -1,    -1,    16,    -1,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,   137,    28,    -1,    -1,    -1,    -1,
      -1,   144,    22,    23,    24,    25,    -1,    27,    28,    -1,
      43,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
     163,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      63,    64,     9,    10,    11,    12,    13,    14,    -1,    63,
      -1,    74,    62,    67,    68,    65,    66,    80,    72,    -1,
      -1,    38,    39,    -1,    -1,    -1,    89,    90,    91,    92,
      -1,    38,    39,    -1,    -1,    22,    23,    24,    25,   102,
      27,    28,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,   117,    72,    63,    -1,   121,    -1,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,   137,    27,    28,    64,    65,    66,
      -1,   144,     9,    10,    11,    12,    13,    14,    22,    23,
      24,    25,    -1,    27,    28,   268,   269,    -1,   271,   272,
     163,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      62,    38,    39,    65,    66,    67,    68,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    59,    60,    -1,    -1,   302,
     303,    65,    66,    38,    39,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,   319,   320,   321,   322,
     323,   324,   325,   326,    -1,    -1,    -1,    -1,    63,   332,
     333,   334,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,   351,   352,
     353,   354,   355,   356,   357,    -1,    -1,    -1,    -1,    -1,
     363,    -1,   365,   366,   367,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,   268,   269,    -1,   271,   272,
     383,   384,   385,   386,   387,   388,   389,   390,    -1,    -1,
      -1,    -1,    -1,   396,    -1,   398,    -1,   290,   291,    -1,
      -1,    -1,    -1,   406,   407,    59,    60,    -1,    -1,   302,
     303,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,   427,   428,   319,   320,   321,   322,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,   332,
     333,   334,    -1,    -1,    -1,   448,   449,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,   350,   351,   352,
     353,    -1,    -1,   466,    -1,    28,    56,   470,   471,    -1,
     363,    -1,   365,   366,   367,    65,    66,    67,    68,    -1,
      43,    -1,    -1,    -1,    -1,   488,    -1,    -1,    -1,    -1,
     383,   384,   385,   386,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,   396,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    74,    -1,   406,   407,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,   427,   428,    28,    -1,    -1,   102,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,   117,   448,   449,    -1,   121,    -1,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    38,
      39,    63,    64,   466,   137,    -1,    -1,   470,   471,    -1,
      -1,   144,    74,    -1,    -1,    -1,    -1,    -1,    80,    38,
      39,    -1,    -1,    -1,    63,   488,    -1,    89,    67,    68,
     163,    -1,    -1,    72,     9,    10,    11,    12,    13,    14,
     102,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,    -1,   117,    16,    -1,    -1,   121,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    43,    22,    23,    24,    25,    63,    27,
      28,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,   163,    -1,    63,    64,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    74,    -1,    -1,    -1,    56,    57,
      80,    -1,    -1,    61,    -1,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,   268,   269,    -1,   271,   272,
      57,    -1,   102,    -1,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,   289,   117,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
     303,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,   319,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,
     333,   334,    -1,   163,    -1,    -1,   268,   269,    -1,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
     363,    -1,   365,   366,   367,    -1,    -1,    -1,    -1,    -1,
     302,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
     383,   384,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    28,    -1,   396,    -1,   398,    -1,    -1,    35,    -1,
     332,   333,   334,   406,   407,    -1,    43,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,   350,    -1,
      -1,    -1,    -1,    -1,   427,   428,    63,    -1,    65,    -1,
      -1,   363,    -1,   365,   366,   367,    -1,    74,   268,   269,
      -1,   271,   272,    80,    57,   448,   449,    -1,    61,    62,
      63,   383,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,   466,   396,    -1,   398,   470,   471,    -1,
      -1,   301,   302,   303,   406,   407,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,   121,   488,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,   427,   428,    -1,    -1,    -1,
     137,    -1,   332,   333,   334,    -1,    -1,   144,    22,    23,
      24,    25,    -1,    27,    28,    -1,   448,   449,    -1,    -1,
      56,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,    65,
      66,    67,    68,   363,   466,   365,   366,   367,   470,   471,
      -1,    -1,    -1,   180,    22,    23,    24,    25,    62,    27,
      28,    65,    66,   190,    -1,    -1,   488,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,   396,    -1,   398,    -1,
      -1,    -1,    -1,    -1,   211,    -1,   406,   407,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    57,   232,    -1,   427,   428,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,   448,   449,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,   268,    -1,    -1,   271,    -1,   466,    -1,    -1,    -1,
     470,   471,   279,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,   488,    17,
      18,    19,    20,    62,    -1,   302,    65,    66,    67,    68,
      69,    70,    71,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,    56,    -1,
      58,    59,    -1,    -1,   341,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,   365,   366,
       9,    10,    11,    12,    13,    14,    15,   374,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    38,
      39,   398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    63,    56,    57,    -1,    67,    68,
     427,    -1,    -1,    72,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,   448,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,   466,
      -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   488,    22,    23,    24,    25,    -1,    27,    28,    56,
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
      67,    68,    38,    39,    -1,    72,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    61,    -1,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    57,    -1,    -1,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    57,    27,    28,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    57,    -1,    -1,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    57,    -1,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    57,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
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
      22,    23,    24,    25,    57,    27,    28,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    57,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    56,    57,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    57,    22,
      23,    24,    25,    -1,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    56,
      57,    -1,    -1,    -1,    -1,    -1,    56,    57,    65,    66,
      67,    68,    69,    70,    71,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    56,    57,    65,    66,    67,    68,    69,
      70,    71,    65,    66,    67,    68,    69,    70,    71,    56,
      57,    22,    23,    24,    25,    -1,    27,    28,    65,    66,
      67,    68,    69,    70,    71,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    22,    23,    24,
      25,    -1,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    22,    23,    24,    25,    62,    27,
      28,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    57,    22,    23,    24,    25,    62,    27,    28,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    57,
      22,    23,    24,    25,    62,    27,    28,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    57,    22,
      23,    24,    25,    62,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    57,    22,    23,    24,    25,
      62,    27,    28,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    57,    27,    28,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    57,    22,    23,    24,    25,    62,    27,    28,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    60,    27,
      28,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    60,    27,
      28,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    60,    27,
      28,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      60,    27,    28,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    60,    -1,    -1,    -1,    56,    65,    66,    67,    68,
      69,    70,    71,    57,    65,    66,    67,    68,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    57,    22,
      23,    24,    25,    62,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    -1,    57,    22,    23,    24,    25,    62,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    60,    27,    28,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    60,    27,    28,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    22,    23,
      24,    25,    62,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    22,    23,    24,    25,    62,    27,
      28,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    60,    27,    28,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    60,    27,    28,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    64,    65,    66,    67,
      68,    -1,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    64,    65,    66,    67,
      68,    -1,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    64,    65,    66,    67,
      68,    -1,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    64,    65,    66,    67,
      68,    -1,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    64,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    62,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    56,    64,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    64,    65,    66,    67,    68,    69,
      70,    71,    64,    65,    66,    67,    68,    69,    70,    71,
      64,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    64,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    62,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    64,    65,    66,    67,    68,    69,    70,    71,    64,
      65,    66,    67,    68,    69,    70,    71,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    64,    65,    66,    67,    68,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    62,    -1,    -1,    65,
      66,    67,    68,    62,    -1,    -1,    65,    66,    67,    68,
      62,    -1,    -1,    65,    66,    67,    68,    60,    -1,    -1,
      -1,    64,    65,    66,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    60,
      -1,    -1,    -1,    64,    65,    66,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    64,    65,    66,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    74,    75,    77,    80,
      81,   110,    56,     0,    75,    56,    58,     9,     1,     9,
      10,    11,    12,    13,    14,    15,    17,    18,    19,    20,
      38,    39,    56,    58,    59,    63,    67,    68,    72,    76,
      77,    78,    84,    86,    87,    88,    89,    90,    94,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     110,    63,    56,    61,    63,    63,    95,    97,    99,    63,
     106,   107,   106,    59,    85,    99,   106,   106,   106,    56,
      57,    57,    59,    87,    56,    16,    92,    56,    56,    22,
      23,    24,    25,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    57,     9,     1,     3,    82,    83,   110,    99,
      64,    99,   109,    99,    63,    84,    10,    86,    64,    99,
      10,    58,    93,   101,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   106,   106,   106,   100,    61,    64,    64,
      60,    64,     9,    62,    60,    64,    64,    99,    17,    64,
      59,    79,    99,    84,    62,    99,    83,    61,    99,    91,
      64,    63,    59,    60,    62,    62,    84,    96,    99,    59,
      99,    84,    64,    56,     9,    10,    11,    12,    13,    14,
      63,   108,     9,    10,    11,    12,    13,    14,    38,    39,
      63,    67,    68,    72,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     9,    10,    11,    12,    13,    14,    38,
      39,    63,    67,    68,    72,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     9,    10,    11,    12,    13,    14,
      38,    39,    63,    67,    68,    72,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    58,     9,    10,    11,    12,
      13,    14,    38,    39,    63,    67,    68,    72,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    58,    61,    63,
      99,    61,    63,     9,    10,    11,    12,    13,    14,    63,
     106,   107,   108,   106,    99,   106,   106,   106,    22,    23,
      24,    25,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    57,    61,    63,     9,    10,    11,    12,    13,    14,
      63,   106,   107,   108,   106,    99,   106,   106,   106,    22,
      23,    24,    25,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    57,    61,    63,     9,    10,    11,    12,    13,
      14,    63,   106,   107,   108,   106,    99,   106,   106,   106,
      22,    23,    24,    25,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    57,    59,    85,    61,    63,     9,    10,
      11,    12,    13,    14,    63,   106,   107,   108,   106,    99,
     106,   106,   106,    22,    23,    24,    25,    27,    28,    65,
      66,    67,    68,    69,    70,    71,    57,    59,    85,    99,
      64,   109,    64,    99,    64,   109,    61,    63,    99,    64,
     101,   102,   103,   103,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   100,    99,    64,   109,    61,    63,    99,
      64,   101,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   106,   106,   100,    99,    64,   109,    61,    63,
      99,    64,   101,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   100,    86,    99,    64,   109,
      61,    63,    99,    64,   101,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   100,    86,    62,
      64,    62,    64,    99,    64,   109,    64,    62,    64,    99,
      64,   109,    64,    62,    64,    99,    64,   109,    64,    59,
      62,    64,    99,    64,   109,    64,    59,    62,    64,    62,
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
#line 2681 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2687 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2693 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2699 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2705 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2711 "src/parser.c"
        break;

    case 74: /* declaration_list  */
#line 70 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2717 "src/parser.c"
        break;

    case 75: /* declaration  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2723 "src/parser.c"
        break;

    case 76: /* init_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2729 "src/parser.c"
        break;

    case 77: /* var_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2735 "src/parser.c"
        break;

    case 78: /* arr_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2741 "src/parser.c"
        break;

    case 79: /* initializer_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2747 "src/parser.c"
        break;

    case 80: /* function_definition  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2753 "src/parser.c"
        break;

    case 81: /* function_declarator  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2759 "src/parser.c"
        break;

    case 82: /* argument_list  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2765 "src/parser.c"
        break;

    case 83: /* argument  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2771 "src/parser.c"
        break;

    case 84: /* compound_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2777 "src/parser.c"
        break;

    case 86: /* statement_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2783 "src/parser.c"
        break;

    case 87: /* statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2789 "src/parser.c"
        break;

    case 89: /* conditional_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2795 "src/parser.c"
        break;

    case 94: /* iteration_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2801 "src/parser.c"
        break;

    case 98: /* return_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2807 "src/parser.c"
        break;

    case 99: /* assignment_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2813 "src/parser.c"
        break;

    case 100: /* logical_or_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2819 "src/parser.c"
        break;

    case 101: /* logical_and_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2825 "src/parser.c"
        break;

    case 102: /* equality_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2831 "src/parser.c"
        break;

    case 103: /* relational_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2837 "src/parser.c"
        break;

    case 104: /* additive_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2843 "src/parser.c"
        break;

    case 105: /* multiplicative_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2849 "src/parser.c"
        break;

    case 106: /* unary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2855 "src/parser.c"
        break;

    case 107: /* postfix_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2861 "src/parser.c"
        break;

    case 108: /* primary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2867 "src/parser.c"
        break;

    case 109: /* argument_call_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2873 "src/parser.c"
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
#line 3139 "src/parser.c"
    break;

  case 3:
#line 109 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3145 "src/parser.c"
    break;

  case 4:
#line 113 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3151 "src/parser.c"
    break;

  case 5:
#line 114 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3157 "src/parser.c"
    break;

  case 6:
#line 115 "src/language.y"
    { (yyval.node) = NULL; }
#line 3163 "src/parser.c"
    break;

  case 7:
#line 120 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3169 "src/parser.c"
    break;

  case 8:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3175 "src/parser.c"
    break;

  case 9:
#line 122 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3181 "src/parser.c"
    break;

  case 10:
#line 123 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3187 "src/parser.c"
    break;

  case 11:
#line 124 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3193 "src/parser.c"
    break;

  case 12:
#line 125 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3199 "src/parser.c"
    break;

  case 13:
#line 129 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval),false); free_label((yyvsp[0].sval)); }
#line 3205 "src/parser.c"
    break;

  case 14:
#line 133 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval),-1); free_label((yyvsp[-3].sval)); tc_arr_decl((yyval.node)); }
#line 3211 "src/parser.c"
    break;

  case 15:
#line 134 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-3].ival),(yyvsp[-2].sval),-1); free_label((yyvsp[-2].sval)); }
#line 3217 "src/parser.c"
    break;

  case 16:
#line 138 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3223 "src/parser.c"
    break;

  case 17:
#line 139 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3229 "src/parser.c"
    break;

  case 18:
#line 143 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-3].sval)); assign_context((yyval.node)); free_label((yyvsp[-3].sval)); }
#line 3235 "src/parser.c"
    break;

  case 19:
#line 144 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-2].sval)); assign_context((yyval.node)); free_label((yyvsp[-2].sval)); }
#line 3241 "src/parser.c"
    break;

  case 20:
#line 148 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-1].al));   }
#line 3247 "src/parser.c"
    break;

  case 21:
#line 149 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3253 "src/parser.c"
    break;

  case 22:
#line 150 "src/language.y"
    { (yyval.sval) = NULL; free_label((yyvsp[-3].sval)); }
#line 3259 "src/parser.c"
    break;

  case 23:
#line 154 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3265 "src/parser.c"
    break;

  case 24:
#line 155 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3271 "src/parser.c"
    break;

  case 25:
#line 159 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3277 "src/parser.c"
    break;

  case 26:
#line 160 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3283 "src/parser.c"
    break;

  case 27:
#line 164 "src/language.y"
    { (yyval.node) = NULL; }
#line 3289 "src/parser.c"
    break;

  case 28:
#line 165 "src/language.y"
    { begin(); }
#line 3295 "src/parser.c"
    break;

  case 29:
#line 165 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); finish(); }
#line 3301 "src/parser.c"
    break;

  case 30:
#line 169 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3307 "src/parser.c"
    break;

  case 31:
#line 170 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3313 "src/parser.c"
    break;

  case 32:
#line 174 "src/language.y"
    { (yyval.node) = NULL; }
#line 3319 "src/parser.c"
    break;

  case 33:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3325 "src/parser.c"
    break;

  case 34:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3331 "src/parser.c"
    break;

  case 35:
#line 177 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3337 "src/parser.c"
    break;

  case 36:
#line 178 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3343 "src/parser.c"
    break;

  case 37:
#line 179 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3349 "src/parser.c"
    break;

  case 38:
#line 180 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3355 "src/parser.c"
    break;

  case 39:
#line 181 "src/language.y"
    { (yyval.node) = NULL; }
#line 3361 "src/parser.c"
    break;

  case 40:
#line 182 "src/language.y"
    { (yyval.node) = NULL; }
#line 3367 "src/parser.c"
    break;

  case 41:
#line 186 "src/language.y"
    { tc_asm((yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3373 "src/parser.c"
    break;

  case 42:
#line 189 "src/language.y"
    { (yyval.node) = NULL; tc_free_if((yyvsp[0].ival)); }
#line 3379 "src/parser.c"
    break;

  case 43:
#line 193 "src/language.y"
    { tc_init_if((yyvsp[-1].node), "if_", NULL); }
#line 3385 "src/parser.c"
    break;

  case 44:
#line 193 "src/language.y"
    { node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3391 "src/parser.c"
    break;

  case 45:
#line 197 "src/language.y"
    { tc_init_else(); }
#line 3397 "src/parser.c"
    break;

  case 46:
#line 197 "src/language.y"
    { (yyval.ival) = true; node_free_recursive(&(yyvsp[0].node)); }
#line 3403 "src/parser.c"
    break;

  case 47:
#line 198 "src/language.y"
    { (yyval.ival) = false; }
#line 3409 "src/parser.c"
    break;

  case 48:
#line 202 "src/language.y"
    { tc_init_while("while_", NULL); }
#line 3415 "src/parser.c"
    break;

  case 49:
#line 202 "src/language.y"
    { tc_jump_while((yyvsp[-1].node)); }
#line 3421 "src/parser.c"
    break;

  case 50:
#line 202 "src/language.y"
    { (yyval.node) = NULL; tc_free_while(); node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3427 "src/parser.c"
    break;

  case 51:
#line 203 "src/language.y"
    { tc_init_while("do_", NULL)   ; }
#line 3433 "src/parser.c"
    break;

  case 52:
#line 203 "src/language.y"
    { (yyval.node) = NULL; tc_free_do((yyvsp[-2].node)) ; node_free_recursive(&(yyvsp[-5].node)); node_free_recursive(&(yyvsp[-2].node)); }
#line 3439 "src/parser.c"
    break;

  case 53:
#line 207 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3445 "src/parser.c"
    break;

  case 54:
#line 208 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3451 "src/parser.c"
    break;

  case 55:
#line 212 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3457 "src/parser.c"
    break;

  case 56:
#line 213 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3463 "src/parser.c"
    break;

  case 57:
#line 217 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3469 "src/parser.c"
    break;

  case 58:
#line 218 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3475 "src/parser.c"
    break;

  case 59:
#line 222 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3481 "src/parser.c"
    break;

  case 60:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3487 "src/parser.c"
    break;

  case 61:
#line 227 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3493 "src/parser.c"
    break;

  case 62:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3499 "src/parser.c"
    break;

  case 63:
#line 229 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3505 "src/parser.c"
    break;

  case 64:
#line 233 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3511 "src/parser.c"
    break;

  case 65:
#line 234 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3517 "src/parser.c"
    break;

  case 66:
#line 235 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3523 "src/parser.c"
    break;

  case 67:
#line 236 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3529 "src/parser.c"
    break;

  case 68:
#line 237 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3535 "src/parser.c"
    break;

  case 69:
#line 241 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3541 "src/parser.c"
    break;

  case 70:
#line 242 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3547 "src/parser.c"
    break;

  case 71:
#line 243 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3553 "src/parser.c"
    break;

  case 72:
#line 247 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3559 "src/parser.c"
    break;

  case 73:
#line 248 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3565 "src/parser.c"
    break;

  case 74:
#line 249 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3571 "src/parser.c"
    break;

  case 75:
#line 250 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3577 "src/parser.c"
    break;

  case 76:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3583 "src/parser.c"
    break;

  case 77:
#line 255 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3589 "src/parser.c"
    break;

  case 78:
#line 256 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3595 "src/parser.c"
    break;

  case 79:
#line 257 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3601 "src/parser.c"
    break;

  case 80:
#line 258 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3607 "src/parser.c"
    break;

  case 81:
#line 259 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3613 "src/parser.c"
    break;

  case 82:
#line 263 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3619 "src/parser.c"
    break;

  case 83:
#line 264 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY)   ; free_label((yyvsp[-3].sval)); }
#line 3625 "src/parser.c"
    break;

  case 84:
#line 265 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval)); tc_fcall((yyval.node), NULL); }
#line 3631 "src/parser.c"
    break;

  case 85:
#line 266 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval)); tc_fcall((yyval.node), (yyvsp[-1].node)); }
#line 3637 "src/parser.c"
    break;

  case 86:
#line 270 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3643 "src/parser.c"
    break;

  case 87:
#line 271 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(STRING_LITERAL, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3649 "src/parser.c"
    break;

  case 88:
#line 272 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_FLOAT, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3655 "src/parser.c"
    break;

  case 89:
#line 273 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_INT  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3661 "src/parser.c"
    break;

  case 90:
#line 274 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_HEX  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3667 "src/parser.c"
    break;

  case 91:
#line 275 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_CHAR , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3673 "src/parser.c"
    break;

  case 92:
#line 276 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3679 "src/parser.c"
    break;

  case 93:
#line 280 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); tc_fcall_args(NULL, (yyvsp[0].node)); }
#line 3685 "src/parser.c"
    break;

  case 94:
#line 281 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_fcall_args((yyvsp[-2].node), (yyvsp[0].node)); }
#line 3691 "src/parser.c"
    break;

  case 95:
#line 285 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3697 "src/parser.c"
    break;

  case 96:
#line 286 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3703 "src/parser.c"
    break;

  case 97:
#line 287 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3709 "src/parser.c"
    break;

  case 98:
#line 288 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3715 "src/parser.c"
    break;


#line 3719 "src/parser.c"

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
