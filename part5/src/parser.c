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
#line 87 "src/language.y"

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7833

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  524

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
      62,    63,    68,    66,    59,    67,     2,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      64,    56,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
       0,   104,   104,   105,   109,   110,   111,   112,   116,   117,
     118,   119,   120,   121,   125,   129,   130,   134,   135,   139,
     140,   144,   145,   146,   150,   151,   155,   156,   160,   161,
     161,   165,   166,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   182,   185,   186,   190,   191,   195,   196,   200,
     201,   205,   206,   210,   211,   215,   216,   217,   221,   222,
     223,   224,   225,   229,   230,   231,   235,   236,   237,   238,
     242,   243,   244,   245,   246,   247,   251,   252,   253,   254,
     258,   259,   260,   261,   262,   263,   264,   268,   269,   273,
     274,   275,   276
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
  "GENERIC_NODE", "';'", "'='", "'{'", "'}'", "','", "'['", "']'", "'('",
  "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "$accept",
  "declaration_list", "declaration", "init_declarator", "var_declarator",
  "arr_declarator", "initializer_list", "function_definition",
  "function_declarator", "argument_list", "argument", "compound_statement",
  "$@1", "statement_list", "statement", "inline_asm",
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
     305,   306,   307,   308,   309,    59,    61,   123,   125,    44,
      91,    93,    40,    41,    60,    62,    43,    45,    42,    47,
      37,    33
};
# endif

#define YYPACT_NINF -255

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-255)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     322,   -44,    19,    51,    54,    55,   703,   839,    26,    70,
     105,   851,    49,   102,   913,    81,   952,  -255,   967,  1052,
     750,     0,  1803,   640,  1119,  1361,  2474,  4548,  4555,  4571,
    4606,  4622,   983,   983,  2159,   983,   983,   983,    61,    -6,
     237,    -2,  1501,   769,  6360,  6367,  4629,  4678,    63,  2333,
      72,    75,    78,    85,   433,    88,  2590,  1315,   120,  2679,
    2710,  2779,   125,  2810,  2879,   128,   137,   186,   224,   725,
    2910,  2367,   883,  6383,  6417,  6433,   142,  6440,  6489,  6496,
     983,   983,   983,   983,   983,   983,   983,   983,   983,   983,
     983,   983,   983,   983,   393,   404,  2979,  2159,  2159,   200,
     187,   278,  3010,  1329,  3079,  3110,  3179,  3210,   348,   364,
     233,   252,    -1,   -22,   319,   315,  1467,   289,  4685,   359,
     367,  4701,   259,   324,  2001,  2168,  1259,  1874,  7631,  7677,
    6512,  6546,  6562,  6569,  6618,    16,   325,   605,   314,   331,
     338,   344,   453,   330,   352,   779,   377,   198,  4736,  2398,
    4752,   381,   492,   430,   449,  2159,   468,   398,   480,   401,
     464,  3279,   489,   426,   449,   472,  3310,  3379,  3410,  3803,
    6625,  6641,  6675,  6691,  6698,  2159,  6747,  2499,  4771,  4787,
    4836,  4851,  4866,  2602,  2602,  2159,  2602,  2602,  2602,    25,
      46,    20,   176,   374,  1319,  6755,  4915,  4930,   515,  3852,
    3867,  3916,  3931,  3980,  2693,  2693,  2159,  2693,  2693,  2693,
     132,   583,   366,   294,     8,  1165,  4945,  3995,  4044,  3479,
    3787,  4994,  5009,  5024,  5044,  5059,  2793,  2793,  2159,  2793,
    2793,  2793,    -5,   203,   228,    80,   389,  4801,  6765,  5074,
    5094,   711,  4059,  4108,  4123,  4138,  4187,  2893,  2893,  2159,
    2893,  2893,  2893,    -4,   111,     2,   469,  1090,  1476,  5109,
    4202,  4217,  3510,  3579,  1361,  2367,  1001,   500,  2367,  1022,
    4266,  6773,  6781,  6830,  6838,  6846,  2159,  6854,  6862,  6911,
    6919,   523,  6927,  6935,  6943,  2602,  2602,  2602,  2602,  2602,
    2602,  2602,  2602,  2602,  2602,  2602,  2602,  2602,  2602,  2367,
    1398,   154,  5124,  5173,  5186,  5199,  5248,  2159,  5261,  5274,
    5323,  5336,   532,  5349,  5398,  5411,  2693,  2693,  2693,  2693,
    2693,  2693,  2693,  2693,  2693,  2693,  2693,  2693,  2693,  2693,
     590,  1361,  2367,  1668,  4277,  6992,  7002,  7012,  7022,  7071,
    2159,  7081,  7091,  7101,  7150,   558,  7160,  7170,  7180,  2793,
    2793,  2793,  2793,  2793,  2793,  2793,  2793,  2793,  2793,  2793,
    2793,  2793,  2793,  2367,  1708,   534,  5423,  5472,  5484,  5496,
    5545,  2159,  5557,  5569,  5618,  5630,   559,  5642,  5691,  5703,
    2893,  2893,  2893,  2893,  2893,  2893,  2893,  2893,  2893,  2893,
    2893,  2893,  2893,  2893,   871,  1361,  3610,   517,  7229,   427,
    7236,   562,  5718,   442,  2367,  1824,   568,  5767,   108,    99,
     490,  2428,   953,  1928,  7684,  7691,  7244,  7252,  7301,  7309,
    7317,   110,   579,  4292,   448,  2367,  2062,   582,  4341,   616,
     611,   876,  1244,  1736,  1949,  2030,  2299,  5780,  5793,  5842,
    5855,  5868,   225,  3679,   601,  5917,   461,  2367,  2197,   602,
    5932,   232,   332,  2978,  3078,  7698,  7706,  7752,  7759,  7327,
    7376,  7386,  7396,  7406,    67,   603,  4356,   466,  2367,  2269,
     610,  4405,   134,    90,  1829,  7768,  1580,  2449,  2611,  7624,
    5944,  5967,  5993,  6016,  6042,    17,  3710,  3779,  7455,  7462,
    6065,  6091,   630,  7470,   501,  7478,  4420,  4435,   636,  6114,
     513,  6140,   649,  6163,  6189,   637,  7527,   561,  7537,  4484,
    4499,   638,  6212,   569,  6224,  1239,  7545,  7553,  6238,  6287,
    7602,  7612,  6299,  6311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -255,  -255,   699,   196,  -255,  -255,  -255,  -255,  -255,  -255,
     592,     5,  -165,   -21,   -51,  -255,  -255,  -255,  -255,  2218,
    2085,  1851,  1718,  1616,  1268,  1126,   778,   -20,   361,  -254,
       1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    58,     9,    10,    94,    11,    12,   113,
     114,    59,    25,    60,    61,    62,    63,    64,    65,    66,
     189,   190,   191,   192,   193,   194,   195,    74,   176,   120,
      67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    13,    46,   264,    70,    46,    16,    13,   -89,   104,
      48,    14,   399,    15,   196,   403,    80,   349,   380,   104,
     -53,   -53,    82,    83,   -53,   -53,   382,   383,   -89,   217,
     -58,   -58,   -58,   -58,    46,   -58,   -58,   145,    80,   380,
      46,   146,   -53,   -53,   287,   288,   424,   285,   239,   -49,
      46,   239,   260,   -53,   331,   -49,   -49,    49,    99,   -49,
     -90,   -53,   144,   -91,   -92,   -53,   -58,   -58,   -51,   286,
     115,   -50,   -58,   -58,   324,   325,   -50,   196,   196,   446,
     -50,    19,   -29,   -53,   -29,   -29,   -29,   -29,   -49,   349,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   395,   -29,   -29,
     -29,   -29,   -55,   -55,   -55,   -55,    22,   353,   354,   -51,
     467,    23,   -54,   -54,   382,   383,   -10,   217,   -13,   -29,
     -29,   -54,   -54,   287,   288,    -8,    20,    96,   -50,   260,
     -52,   286,   285,   -51,   381,   196,   -29,    97,   -29,    24,
      98,   -55,   219,   -29,   355,   356,   115,   -29,   -29,   -54,
     101,   494,   -29,   -54,   316,   196,   -52,   381,   160,   161,
      -9,    21,   -54,   278,   278,   196,   278,   278,   278,   166,
     -51,   -52,   500,   -50,   -51,   102,   -80,   -80,   -80,   -80,
     105,   -80,   -80,   106,   309,   309,   196,   309,   309,   309,
     -49,   -49,   107,   -52,   507,   108,     8,   -52,   -55,   -55,
     -55,   -55,     8,   289,   290,   121,   342,   342,   196,   342,
     342,   342,   -80,   -80,   425,   513,   426,   140,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -51,   350,   373,   373,   196,
     373,   373,   373,   220,   221,   222,   223,   224,   225,   -55,
     291,   292,   -48,   396,    46,   239,   260,   316,   239,   260,
     -53,   -53,   351,   352,   -52,   350,   196,   -26,   158,   -51,
      81,   -26,   226,   227,   -51,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   239,
     260,   -52,    81,   -50,   -50,   109,   228,   196,   141,   -53,
     229,   230,   -51,   -52,   142,   231,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     443,    46,   239,   260,   -52,   143,   -55,   -55,   -55,   -55,
     196,   320,   321,     1,   147,     2,     3,     4,     5,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   239,   260,   104,   -54,   -54,    82,    83,
     148,   196,   -55,   -55,   -54,   -54,   351,   352,   322,   323,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   486,    46,    46,   153,   -24,   -54,
     -11,    47,   -24,    47,   239,   260,    47,   -23,   -53,   -53,
     318,   319,   104,   -54,   154,   197,   -58,   -58,   -58,   -58,
     155,   -58,   -58,   -14,   -14,   239,   260,   156,    68,   -22,
     218,   -58,   -58,   -58,   -58,    47,   -58,   -58,   -87,   -16,
     -16,    47,   -87,    46,   -53,   -53,   149,   239,   260,   240,
     150,    47,   240,   261,   -21,   104,   -12,   -58,   -58,   -58,
     293,   294,    26,    27,    28,    29,    30,    31,   239,   260,
     -58,   136,   137,   -58,   -58,   357,   358,   -25,   197,   197,
     -88,   -25,   -17,   -17,   -88,   -43,    46,   -43,   -43,   -43,
     -43,    32,    33,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     164,   -43,   -43,   -43,   -43,   -27,   149,   262,   -47,   -27,
     489,   -55,   -55,   -55,   -55,    34,   384,   385,   218,    35,
      36,   149,   -43,   -43,    37,   491,   168,   149,   -15,   -15,
     261,   497,   -56,   -56,   -56,   -56,   197,   289,   290,   -43,
     149,   -43,   -43,   -42,   504,   149,   -43,   167,   -55,   510,
     -43,   -43,   -55,   386,   387,   -43,   197,   -80,   -80,   -80,
     -80,   163,   -80,   -80,   279,   279,   197,   279,   279,   279,
     -18,   -18,   165,   -56,   291,   292,   -80,   -80,   -80,   -80,
     149,   -80,   -80,   400,   517,   310,   310,   197,   310,   310,
     310,   -80,   149,   -80,   -80,   299,   519,   300,   488,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   407,   343,   343,   197,
     343,   343,   343,   -80,   468,   428,   469,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -51,   317,   -28,   374,   374,
     197,   374,   374,   374,   198,   199,   200,   201,   202,   203,
     149,   450,   471,   490,   521,    47,   240,   261,   149,   240,
     261,   495,   523,   -54,   -54,   318,   319,   197,   -52,   317,
     496,   -51,   -51,   204,   205,   501,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     240,   261,   503,   151,   509,   508,   -30,   206,   197,   -54,
     -54,   207,   208,   514,   -52,   -52,   209,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   516,    47,   240,   261,   -14,   -14,   518,   520,   522,
      68,   197,    69,    17,     1,    18,     2,     3,     4,     5,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   240,   261,   111,     0,   112,     3,
       4,     5,   197,   -80,   -80,   -80,   -80,   157,   -80,   -80,
       0,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,     0,    47,    47,     0,    26,
      27,    28,    29,    30,    31,   240,   261,   -80,     0,     0,
     -80,   363,     0,   364,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     2,     3,     4,     5,   240,   261,    32,    33,
       0,   -58,   -58,   -58,   -58,     0,   -58,   -58,    45,     0,
      45,     0,     0,    45,    47,     0,     0,     0,   240,   261,
      73,    75,    34,    77,    78,    79,    35,    36,     0,     0,
       0,    37,     0,     0,   -58,     0,     0,   216,     0,   240,
     261,     0,    45,   -58,   -58,    88,    89,     0,    45,    -2,
      -2,     0,    -2,    -2,    -2,    -2,   238,    47,    45,   238,
     259,    -4,    -4,     0,    -4,    -4,    -4,    -4,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,   132,   133,
     134,    45,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   241,   242,   243,   244,   245,   246,   -56,   -56,
     -56,   -56,     0,   320,   321,     0,     0,     0,     0,   -28,
     -28,     0,     0,    -6,    -6,   216,    -6,    -6,    -6,    -6,
       0,   247,   248,     0,     0,     0,   -28,   259,   -28,   -28,
       0,     0,     0,   -28,   -56,   -56,     0,   -28,   -28,     0,
     322,   323,   -28,     0,     0,   249,   118,     0,     0,   250,
     251,     0,    -7,    -7,   252,    -7,    -7,    -7,    -7,     0,
       0,   277,   280,     0,   282,   283,   284,    -3,    -3,     0,
      -3,    -3,    -3,    -3,     0,   -61,   -61,   -61,   -61,     0,
     -61,   -61,   308,   311,     0,   313,   314,   315,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,     0,     0,
       0,     0,     0,     0,   341,   344,     0,   346,   347,   348,
     241,   242,   243,   244,   245,   246,   -61,   -61,   -61,   293,
     294,    32,    33,     0,     0,   372,   375,     0,   377,   378,
     379,   241,   242,   243,   244,   245,   246,     0,     0,   247,
     248,     0,    45,   238,   259,   175,   238,   259,     0,    35,
      36,     0,    -5,    -5,    37,    -5,    -5,    -5,    -5,     0,
     247,   248,     0,   249,   398,     0,     0,   250,   251,     0,
       0,     0,   252,   418,   419,   420,     0,   238,   259,     0,
       0,     0,     0,     0,   249,   402,     0,     0,   250,   251,
       0,     0,     0,   252,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   439,   440,   441,   216,     0,    45,
     238,   259,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   461,   462,   463,
     238,   238,   259,     0,     0,     0,    44,     0,    44,   -58,
       0,    44,     0,   -58,   -58,   -58,   388,   389,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   482,   483,
     484,   259,     0,    45,    45,   215,     0,     0,     0,     0,
      44,     0,   238,   259,     0,     0,    44,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   237,     0,    44,   237,   258,     0,
       0,     0,     0,   238,   259,     0,    44,    44,    44,    44,
      44,    44,    44,    44,   130,   131,     0,     0,     0,    44,
       0,    45,     0,   -63,   -63,   238,   259,     0,     0,   -63,
     -63,   -63,   -63,   326,   327,   328,     0,     0,     0,     0,
     -30,     0,   -30,   -30,   -30,   -30,   238,   259,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,   215,    45,     0,   -57,   -57,   -57,   -57,
       0,   320,   321,     0,     0,   258,     0,   -30,   -30,     0,
       0,   -61,   -61,   -61,   -61,     0,   -61,   -61,    43,     0,
      43,     0,     0,    43,   -30,     0,   -30,   -30,     0,     0,
       0,   -30,   -57,   -57,     0,   -30,   -30,     0,   322,   323,
     -30,     0,     0,     0,   -61,   -20,   -20,   214,   -20,   -20,
     -20,   -20,    43,   -61,   -61,    88,    89,     0,    43,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   236,     0,    43,   236,
     257,   -63,   -63,   -63,   -63,     0,   -63,   -63,    43,    43,
      43,    43,   126,   127,   128,   129,     0,     0,     0,     0,
       0,    43,    50,     0,     2,     3,     4,     5,     0,     0,
      26,    27,    28,    29,    30,    31,    51,     0,    52,    53,
      54,    55,   -63,   -63,   -63,   -63,   -63,   295,   296,   297,
      44,   237,   258,     0,   237,   258,     0,     0,     0,    32,
      33,     0,     0,     0,     0,   214,     0,   241,   242,   243,
     244,   245,   246,     0,     0,     0,    56,   257,   168,   416,
     417,     0,     0,    34,     0,   237,   258,    35,    36,     0,
       0,     0,    37,     0,     0,     0,   247,   248,     0,     0,
       0,     0,   215,   215,   215,   215,   215,   215,   215,   215,
     437,   438,     0,     0,     0,   215,     0,    44,   237,   258,
     249,   423,     0,     0,   250,   251,     0,   -30,   -30,   252,
     -30,   -30,   -30,   -30,     0,   237,   237,   237,   237,   237,
     237,   237,   237,   459,   460,     0,     0,     0,   237,   237,
     258,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,     0,   -63,   -63,     0,   258,   258,   258,   258,
     258,   258,   258,   258,   480,   481,     0,     0,     0,   258,
       0,    44,    44,   -55,   -55,   -55,   -55,     0,    84,    85,
     237,   258,    43,   236,   257,   -63,   236,   257,     0,   -63,
     -63,   -63,   -63,   -63,   390,   391,   392,     0,     0,     0,
       0,   237,   258,     0,     0,     0,   -55,   412,   413,   414,
     415,     0,     0,     0,     0,    86,    87,   236,   257,    44,
       0,     0,     0,   237,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   214,   214,   214,   214,   433,   434,
     435,   436,     0,     0,   237,   258,     0,   214,     0,    43,
     236,   257,   -61,   -61,   -61,   -61,     0,   -61,   -61,     0,
       0,     0,    44,     0,     0,     0,     0,   236,   236,   236,
     236,   455,   456,   457,   458,     0,     0,     0,     0,     0,
     236,   236,   257,     0,     0,     0,    42,     0,    42,   -61,
       0,    42,     0,   -61,   -61,   -61,   388,   389,   257,   257,
     257,   257,   476,   477,   478,   479,     0,     0,     0,     0,
       0,   257,     0,    43,    43,   213,     0,     0,     0,     0,
      42,     0,   236,   257,     0,     0,    42,   241,   242,   243,
     244,   245,   246,     0,   235,     0,    42,   235,   256,     0,
       0,     0,     0,   236,   257,     0,    42,    42,   124,   125,
       0,     0,     0,     0,     0,     0,   247,   248,     0,    42,
       0,    43,     0,     0,     0,   236,   257,   241,   242,   243,
     244,   245,   246,     0,     0,     0,     0,     0,     0,     0,
     249,   445,     0,     0,   250,   251,   236,   257,    41,   252,
      41,     0,     0,    41,     0,     0,   247,   248,     0,     0,
       0,     0,     0,   213,    43,     0,     0,     0,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   256,     0,   212,     0,     0,
     249,   466,    41,     0,   250,   251,     0,     0,    41,   252,
       0,     0,     0,     0,     0,     0,   234,     0,    41,   234,
     255,     0,     0,     0,   -61,   -61,     0,     0,    41,   123,
     -61,   -61,   324,   325,    50,     0,     2,     3,     4,     5,
       0,    41,    26,    27,    28,    29,    30,    31,    51,     0,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,   243,   244,   245,   246,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   212,   384,   385,    56,     0,
     168,    57,   247,   248,     0,    34,     0,   255,     0,    35,
      36,    40,     0,    40,    37,     0,    40,     0,     0,     0,
      42,   235,   256,     0,   235,   256,   249,   493,   -56,     0,
     250,   251,   -56,   386,   387,   252,   -62,   -62,   -62,   -62,
     211,   -62,   -62,   410,   411,    40,     0,     0,     0,     0,
       0,    40,     0,     0,     0,   235,   256,     0,     0,   233,
       0,    40,   233,   254,     0,     0,     0,     0,     0,   -62,
       0,   122,   213,   213,   431,   432,     0,     0,   -62,   -62,
      88,    89,     0,     0,    40,   213,     0,    42,   235,   256,
     -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,   235,   235,   453,   454,     0,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   235,   235,
     256,     0,    41,   234,   255,     0,   234,   255,   211,     0,
       0,   -62,   -62,   -62,   293,   294,   256,   256,   474,   475,
     254,     0,     0,     0,   409,     0,     0,   -62,   -62,   256,
       0,    42,    42,   -62,   -62,   324,   325,   234,   255,     0,
     235,   256,     0,   -56,   -56,   -56,   -56,     0,    84,    85,
       0,     0,     0,     0,   212,   430,     0,     0,     0,     0,
       0,   235,   256,     0,     0,     0,     0,   212,     0,    41,
     234,   255,   -59,   -59,   -59,   -59,   -56,   -59,   -59,    42,
       0,     0,     0,   235,   256,    86,    87,   234,   452,     0,
       0,   241,   242,   243,   244,   245,   246,     0,     0,     0,
     234,   234,   255,     0,   235,   256,     0,     0,   -59,   -59,
       0,     0,     0,     0,   -59,   -59,   324,   325,   255,   473,
     247,   248,    42,     0,     0,    39,     0,    39,     0,     0,
      39,   255,     0,    41,    41,    40,   233,   254,     0,   233,
     254,     0,   234,   255,   249,   499,     0,     0,   250,   251,
       0,     0,     0,   252,   210,     0,   408,     0,     0,    39,
       0,     0,     0,   234,   255,    39,     0,     0,     0,     0,
     233,   254,     0,   232,     0,    39,   232,   253,     0,     0,
       0,    41,     0,     0,     0,   234,   255,   429,   177,   178,
     179,   180,   181,   182,     0,     0,     0,     0,   135,     0,
     211,     0,    40,   233,   254,     0,   234,   255,     0,     0,
     -57,   -57,   -57,   -57,     0,    84,    85,   183,   184,     0,
     451,     0,     0,     0,    41,     0,   241,   242,   243,   244,
     245,   246,     0,   233,   233,   254,     0,     0,     0,     0,
       0,   185,   210,   -57,     0,   186,   187,     0,     0,     0,
     188,   472,    86,    87,   253,   247,   248,     0,    38,     0,
       0,     0,     0,     0,   254,     0,    40,    40,     0,     0,
       0,     0,    76,     0,     0,   233,   254,     0,     0,   249,
     506,     0,     0,   250,   251,     0,     0,    95,   252,     0,
       0,     0,   100,     0,     0,     0,   233,   254,   241,   242,
     243,   244,   245,   246,     0,     0,   110,     0,     0,   117,
     119,     0,     0,     0,    40,     0,     0,     0,   233,   254,
       0,     0,     0,     0,     0,     0,     0,   247,   248,     0,
       0,     0,     0,     0,     0,   138,   139,     0,     0,   233,
     254,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,
       0,   249,   512,     0,     0,   250,   251,    40,     0,     0,
     252,     0,   198,   199,   200,   201,   202,   203,     0,    39,
     232,   253,     0,   232,   253,   152,     0,   -60,   -60,     0,
       0,     0,     0,   -60,   -60,   324,   325,   159,     0,     0,
       0,   204,   205,   162,     0,     0,   220,   221,   222,   223,
     224,   225,     0,   421,   232,   253,     0,     0,     0,     0,
       0,     0,     0,   267,     0,   206,     0,     0,     0,   207,
     208,     0,     0,   281,   209,   226,   227,   241,   242,   243,
     244,   245,   246,     0,   442,     0,    39,   232,   253,     0,
       0,     0,     0,     0,   312,     0,     0,     0,     0,   228,
       0,     0,     0,   229,   230,     0,   247,   248,   231,     0,
       0,     0,     0,     0,     0,     0,   345,   464,   232,   253,
     -57,   -57,   -57,   -57,     0,   289,   290,     0,     0,     0,
     249,     0,     0,     0,   250,   251,     0,   376,     0,   252,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   485,     0,
      39,    39,     0,   397,   119,     0,   401,   119,     0,   232,
     253,   -57,   291,   292,   406,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,     0,     0,     0,     0,     0,   -62,     0,
     232,   253,   -62,   -62,   -62,   388,   389,   422,   119,     0,
       0,   -80,   -80,   -80,   -80,   427,   -80,   -80,    39,   -80,
     -80,     0,   232,   253,    71,     0,    72,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
     444,   119,     0,   232,   253,   -80,     0,     0,   449,   268,
       0,   269,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,   119,     0,     0,     0,     0,     0,     0,   470,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   270,   271,   272,   273,   274,   275,     0,     0,     0,
       0,     0,   492,   119,     0,     0,     0,     0,   -33,   -33,
       0,     0,     0,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     183,   184,     0,   498,   119,   -33,     0,   -33,   -33,     0,
       0,     0,   -33,     0,     0,     0,   -33,   -33,     0,     0,
       0,   -33,     0,     0,   276,   505,   119,     0,   186,   187,
     -59,     0,     0,   188,   -59,   -59,   -59,   388,   389,     0,
     -38,     0,   -38,   -38,   -38,   -38,   511,   119,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,   301,   302,   303,   304,   305,   306,     0,     0,
       0,    50,     0,     2,     3,     4,     5,   -38,   -38,    26,
      27,    28,    29,    30,    31,    51,     0,    52,    53,    54,
      55,   204,   205,     0,   -38,     0,   -38,   -38,     0,     0,
       0,   -38,     0,     0,     0,   -38,   -38,     0,    32,    33,
     -38,     0,     0,     0,     0,   307,     0,     0,     0,   207,
     208,     0,     0,     0,   209,    56,     0,   168,   103,     0,
       0,     0,    34,     0,     0,     0,    35,    36,     0,     0,
     -31,    37,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,   334,   335,   336,   337,   338,   339,     0,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -31,   -31,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   226,   227,     0,   -31,     0,   -31,   -31,     0,     0,
       0,   -31,     0,     0,     0,   -31,   -31,     0,   -36,   -36,
     -31,     0,     0,     0,     0,   340,     0,     0,     0,   229,
     230,     0,     0,     0,   231,   -36,     0,   -36,   -36,     0,
       0,     0,   -36,     0,     0,     0,   -36,   -36,     0,     0,
     -37,   -36,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,   365,   366,   367,   368,   369,   370,     0,     0,
       0,    50,     0,     2,     3,     4,     5,   -37,   -37,    26,
      27,    28,    29,    30,    31,    51,     0,    52,    53,    54,
      55,   247,   248,     0,   -37,     0,   -37,   -37,     0,     0,
       0,   -37,     0,     0,     0,   -37,   -37,     0,    32,    33,
     -37,     0,     0,     0,     0,   371,     0,     0,     0,   250,
     251,     0,     0,     0,   252,    56,     0,   168,   116,     0,
       0,     0,    34,     0,     0,     0,    35,    36,     0,     0,
     -41,    37,   -41,   -41,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -56,   -56,   -56,   -56,     0,   353,   354,     0,     0,     0,
       0,   -34,     0,   -34,   -34,   -34,   -34,   -41,   -41,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,   -41,     0,   -41,   -41,     0,   -56,
       0,   -41,   355,   356,     0,   -41,   -41,     0,   -34,   -34,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,     0,   -34,   -34,     0,
       0,     0,   -34,     0,     0,     0,   -34,   -34,     0,     0,
     -32,   -34,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -57,   -57,   -57,   -57,     0,   353,   354,     0,     0,     0,
       0,   -40,     0,   -40,   -40,   -40,   -40,   -32,   -32,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -32,     0,   -32,   -32,     0,   -57,
       0,   -32,   355,   356,     0,   -32,   -32,     0,   -40,   -40,
     -32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,   -40,   -40,     0,
       0,     0,   -40,     0,     0,     0,   -40,   -40,     0,     0,
     -39,   -40,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,     0,   -35,   -35,   -35,   -35,   -39,   -39,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,     0,     0,     0,   -39,     0,   -39,   -39,     0,     0,
       0,   -39,     0,     0,     0,   -39,   -39,     0,   -35,   -35,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,     0,   -35,   -35,     0,
       0,     0,   -35,     0,     0,     0,   -35,   -35,     0,     0,
     -45,   -35,   -45,   -45,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -45,   -45,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,     0,     0,     0,   -45,     0,   -45,   -45,     0,     0,
       0,   -45,     0,     0,     0,   -45,   -45,     0,   -44,   -44,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,     0,   -44,   -44,     0,
       0,     0,   -44,     0,     0,     0,   -44,   -44,     0,     0,
     -46,   -44,   -46,   -46,   -46,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -46,   -46,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -46,     0,   -46,   -46,     0,     0,
       0,   -46,     0,     0,     0,   -46,   -46,     0,   -29,   -29,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   263,     0,
       0,     0,   -29,     0,     0,     0,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,     0,   -29,   330,     0,     0,
       0,   -29,     0,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   394,     0,
       0,     0,   -29,     0,     0,     0,   -29,   -29,     0,     0,
     -28,   -29,   -28,   -28,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     2,     3,     4,     5,   -28,   -28,    26,
      27,    28,    29,    30,    31,    51,     0,    52,    53,    54,
      55,     0,     0,     0,   -28,     0,   -28,   -28,     0,     0,
       0,   -28,     0,     0,     0,   -28,   -28,     0,    32,    33,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,   168,   487,     0,
       0,     0,    34,     0,     0,     0,    35,    36,     0,     0,
      50,    37,     2,     3,     4,     5,     0,     0,    26,    27,
      28,    29,    30,    31,    51,     0,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     2,     3,     4,     5,    32,    33,    26,
      27,    28,    29,    30,    31,    51,     0,    52,    53,    54,
      55,     0,     0,     0,    56,     0,   168,   502,     0,     0,
       0,    34,     0,     0,     0,    35,    36,     0,    32,    33,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,   168,   515,     0,
       0,     0,    34,     0,     0,     0,    35,    36,     0,     0,
     -30,    37,   -30,   -30,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,   -30,     0,   -30,   -30,     0,     0,
       0,   -30,     0,   -80,     0,   -30,   -30,   332,   -80,   333,
     -30,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,   265,     0,   266,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,     0,   -82,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,     0,   -83,   -83,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,     0,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,   -85,   -85,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   329,     0,   -70,   -70,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -76,   -76,   -76,   -76,
       0,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,   -76,   -76,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -81,     0,     0,   -81,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -82,   -84,   -84,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
       0,     0,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,     0,     0,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -85,   -76,   -76,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   393,     0,
       0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -76,     0,     0,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -80,   -80,
     -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,     0,     0,   404,     0,   405,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   447,   -80,   448,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -78,     0,
     -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,   -86,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -78,     0,     0,   -78,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -86,   -79,   -79,   -86,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -77,     0,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -79,     0,   -79,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,
       0,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,     0,     0,   -77,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -79,     0,     0,   -79,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,
       0,     0,     0,   -81,   -81,     0,     0,     0,     0,     0,
     -82,   -82,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
       0,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,     0,
       0,     0,     0,     0,   -70,    93,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -78,   -78,   -78,
     -78,     0,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,   -76,   -76,     0,     0,     0,     0,     0,
     -78,   -78,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -86,   -86,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -79,   -79,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -63,   -63,   -63,   -63,   -81,   -63,   -63,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -82,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
     -83,   -83,   -63,   -83,   -83,   -63,   -63,   -63,   -63,   359,
     360,   361,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -83,   -85,   -85,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -70,   -70,   -70,
     -70,     0,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   298,   -66,   -66,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -76,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -81,   -83,   -83,     0,     0,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,   -84,   -84,   -84,   -84,
     -82,   -84,   -84,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -83,   -85,   -85,   -85,   -85,   -83,   -85,   -85,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -70,   -70,   -70,   -70,
     -84,   -70,   -70,     0,     0,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -76,   -76,   -76,   -76,
     -85,   -76,   -76,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     362,   -66,   -66,   -66,   -66,   -70,   -66,   -66,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -81,   -81,   -81,   -81,
     -76,   -81,   -81,     0,     0,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -66,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,   -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,     0,     0,     0,   -85,   -85,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -74,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -70,   -70,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -76,   -76,   -76,   -76,     0,
     -76,   -76,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,
       0,   -76,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -75,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -71,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,     0,     0,     0,     0,   -72,   -72,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
     -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -74,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -70,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -75,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,   -72,   -72,   -72,     0,   -72,   -72,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -78,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,     0,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,     0,
     -65,   -65,     0,   -86,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -64,   -64,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   326,   327,
     328,   -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   326,   327,   328,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,     0,   -68,   -68,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,
     -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,   -68,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -78,
     -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -78,     0,     0,     0,     0,   -78,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,   -65,
     -65,   -65,   -65,   -86,   -65,   -65,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -64,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   390,   391,   392,   -67,   -67,   -67,   -67,     0,
     -67,   -67,     0,     0,     0,     0,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   390,   391,   392,   -68,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -69,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,     0,     0,   -68,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -77,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,     0,     0,     0,   -79,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,     0,     0,     0,   -86,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,   -77,
       0,     0,     0,     0,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,     0,   -79,   -86,   -86,   -86,   -86,
     -79,   -86,   -86,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,
       0,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -86,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -79,
     -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -66,
     -66,   -66,   -66,     0,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,     0,
     -74,   -74,     0,     0,     0,   -63,     0,     0,     0,     0,
       0,     0,   -66,     0,   -63,   -63,   -63,   -63,    90,    91,
      92,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -74,   -70,
     -70,   -70,   -70,     0,   -70,   -70,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -75,     0,
       0,     0,     0,     0,     0,   -71,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -73,   -73,
     -73,   -73,     0,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,   -73,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -64,   -65,   -65,
     -65,   -65,     0,   -65,   -65,     0,   -64,   -64,   -64,   -64,
      90,    91,    92,     0,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,    90,    91,    92,   -67,     0,     0,
       0,     0,     0,     0,   -68,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,   -69,     0,     0,     0,     0,     0,     0,
     -81,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,     0,     0,     0,
       0,     0,     0,   -85,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,   -66,   -66,   -66,
     -66,     0,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,     0,   -66,   -66,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -76,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -76,   -76,   -76,   -76,     0,   -76,   -76,
       0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,   -71,
     -71,   -71,   -71,     0,   -71,   -71,     0,   -72,   -72,   -72,
     -72,     0,   -72,   -72,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,
     -84,     0,     0,   -81,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,     0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,
       0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
       0,     0,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -70,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,
       0,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
       0,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -86,   -86,
     -86,   -86,     0,   -86,   -86,     0,   -64,   -64,   -64,   -64,
       0,   -64,   -64,     0,   -65,   -65,   -65,   -65,     0,   -65,
     -65,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
       0,   -86,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -64,   -64,   -64,
     -64,   -64,   295,   296,   297,   -65,   -65,   -65,   -65,   -65,
     295,   296,   297,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,   -64,
     -64,   -64,   -64,     0,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -64,     0,
       0,   -64,   -64,   -64,   -64,   359,   360,   361,   -65,   -65,
     -65,   -65,     0,   -65,   -65,     0,     0,     0,   -67,   -67,
     -67,   -67,     0,   -67,   -67,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,   -68,   -68,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,   -69,   -69,     0,     0,   -65,     0,     0,
     -65,   -65,   -65,   -65,   359,   360,   361,   -67,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,
     -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,     0,
     -77,     0,     0,     0,     0,     0,     0,   -79,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -78,
     -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,     0,     0,     0,     0,     0,   -78,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -59,   -59,   -59,   -59,     0,   -59,   -59,
       0,     0,     0,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -79,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -60,     0,     0,   -59,   -60,   -60,   -60,
     388,   389,     0,     0,     0,   -59,   -59,    88,    89,   -60,
     -60,   -60,   -60,     0,   -60,   -60,   -59,   -59,   -59,   -59,
       0,   -59,   -59,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -61,   -61,   -61,   -61,     0,   -61,   -61,     0,   -62,   -62,
     -62,   -62,   -60,   -62,   -62,     0,     0,     0,     0,     0,
       0,   -60,   -60,    88,    89,     0,     0,   -59,   -59,   -59,
     293,   294,     0,     0,   -60,   -60,   -60,   293,   294,   -61,
       0,     0,   -61,   -61,   357,   358,     0,   -62,     0,     0,
     -62,   -62,   357,   358,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,
     -57,   -57,   -57,   -57,     0,   384,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -59,     0,     0,   -59,   -59,   357,   358,
     -60,     0,     0,   -60,   -60,   357,   358,   -57,     0,     0,
       0,   -57,   386,   387
};

static const yytype_int16 yycheck[] =
{
      20,     0,    22,   168,    25,    25,     1,     6,     9,    60,
      10,    55,   266,    57,    34,   269,    22,    22,    22,    70,
      22,    23,    24,    25,    22,    23,    24,    25,     9,    49,
      22,    23,    24,    25,    54,    27,    28,    59,    22,    22,
      60,    63,    22,    23,    24,    25,   300,    22,    68,    55,
      70,    71,    72,    55,   219,    59,    61,    57,    53,    63,
       9,    59,    63,     9,     9,    63,    58,    59,    22,    23,
      69,    55,    64,    65,    66,    67,    59,    97,    98,   333,
      63,    55,     1,    63,     3,     4,     5,     6,    63,    22,
       9,    10,    11,    12,    13,    14,    15,   262,    17,    18,
      19,    20,    22,    23,    24,    25,    57,    27,    28,    63,
     364,     9,    22,    23,    24,    25,    55,   137,    55,    38,
      39,    22,    23,    24,    25,    55,    56,    55,    61,   149,
      22,    23,    22,    22,    23,   155,    55,    62,    57,    58,
      62,    61,    57,    62,    64,    65,   145,    66,    67,    59,
      62,   405,    71,    63,    22,   175,    22,    23,   153,   154,
      55,    56,    63,   183,   184,   185,   186,   187,   188,   164,
      59,    63,   426,    63,    63,    55,    22,    23,    24,    25,
      55,    27,    28,    55,   204,   205,   206,   207,   208,   209,
      58,    59,    55,    59,   448,     9,     0,    63,    22,    23,
      24,    25,     6,    27,    28,    63,   226,   227,   228,   229,
     230,   231,    58,    59,    60,   469,    62,    17,    64,    65,
      66,    67,    68,    69,    70,    22,    23,   247,   248,   249,
     250,   251,   252,     9,    10,    11,    12,    13,    14,    63,
      64,    65,    55,   264,   264,   265,   266,    22,   268,   269,
      22,    23,    24,    25,    22,    23,   276,    59,    60,    22,
      23,    63,    38,    39,    61,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,    22,    23,    58,    59,    61,    62,   307,    10,    61,
      66,    67,    55,    61,    61,    71,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     331,   331,   332,   333,    55,    63,    22,    23,    24,    25,
     340,    27,    28,     1,     9,     3,     4,     5,     6,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   396,    22,    23,    24,    25,
      61,   371,    58,    59,    22,    23,    24,    25,    64,    65,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   395,   395,   396,    63,    59,    55,
      55,    20,    63,    22,   404,   405,    25,    57,    22,    23,
      24,    25,   443,    61,    63,    34,    22,    23,    24,    25,
      62,    27,    28,    55,    56,   425,   426,    63,    60,    57,
      49,    22,    23,    24,    25,    54,    27,    28,    59,    55,
      56,    60,    63,   443,    58,    59,    59,   447,   448,    68,
      63,    70,    71,    72,    57,   486,    55,    63,    64,    65,
      66,    67,     9,    10,    11,    12,    13,    14,   468,   469,
      61,    58,    59,    64,    65,    66,    67,    59,    97,    98,
      59,    63,    58,    59,    63,     1,   486,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    59,    59,    57,    55,    63,
      63,    22,    23,    24,    25,    62,    27,    28,   137,    66,
      67,    59,    38,    39,    71,    63,    57,    59,    55,    56,
     149,    63,    22,    23,    24,    25,   155,    27,    28,    55,
      59,    57,    58,    55,    63,    59,    62,    55,    59,    63,
      66,    67,    63,    64,    65,    71,   175,    22,    23,    24,
      25,    61,    27,    28,   183,   184,   185,   186,   187,   188,
      58,    59,    63,    63,    64,    65,    22,    23,    24,    25,
      59,    27,    28,    63,    63,   204,   205,   206,   207,   208,
     209,    56,    59,    58,    59,    60,    63,    62,    61,    64,
      65,    66,    67,    68,    69,    70,    63,   226,   227,   228,
     229,   230,   231,    59,    60,    63,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    17,   247,   248,
     249,   250,   251,   252,     9,    10,    11,    12,    13,    14,
      59,    63,    63,    61,    63,   264,   265,   266,    59,   268,
     269,    63,    63,    22,    23,    24,    25,   276,    22,    23,
      61,    58,    59,    38,    39,    63,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,    61,    58,    61,    63,    17,    62,   307,    58,
      59,    66,    67,    63,    58,    59,    71,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,    61,   331,   332,   333,    55,    56,    61,    61,    61,
      60,   340,    62,     0,     1,     6,     3,     4,     5,     6,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,     1,    -1,     3,     4,
       5,     6,   371,    22,    23,    24,    25,   145,    27,    28,
      -1,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,    -1,   395,   396,    -1,     9,
      10,    11,    12,    13,    14,   404,   405,    56,    -1,    -1,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     3,     4,     5,     6,   425,   426,    38,    39,
      -1,    22,    23,    24,    25,    -1,    27,    28,    20,    -1,
      22,    -1,    -1,    25,   443,    -1,    -1,    -1,   447,   448,
      32,    33,    62,    35,    36,    37,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    55,    -1,    -1,    49,    -1,   468,
     469,    -1,    54,    64,    65,    66,    67,    -1,    60,     0,
       1,    -1,     3,     4,     5,     6,    68,   486,    70,    71,
      72,     0,     1,    -1,     3,     4,     5,     6,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     9,    10,    11,    12,    13,    14,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,     0,     1,   137,     3,     4,     5,     6,
      -1,    38,    39,    -1,    -1,    -1,    55,   149,    57,    58,
      -1,    -1,    -1,    62,    58,    59,    -1,    66,    67,    -1,
      64,    65,    71,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    -1,     0,     1,    71,     3,     4,     5,     6,    -1,
      -1,   183,   184,    -1,   186,   187,   188,     0,     1,    -1,
       3,     4,     5,     6,    -1,    22,    23,    24,    25,    -1,
      27,    28,   204,   205,    -1,   207,   208,   209,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,   229,   230,   231,
       9,    10,    11,    12,    13,    14,    63,    64,    65,    66,
      67,    38,    39,    -1,    -1,   247,   248,    -1,   250,   251,
     252,     9,    10,    11,    12,    13,    14,    -1,    -1,    38,
      39,    -1,   264,   265,   266,    62,   268,   269,    -1,    66,
      67,    -1,     0,     1,    71,     3,     4,     5,     6,    -1,
      38,    39,    -1,    62,    63,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,   295,   296,   297,    -1,   299,   300,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,    -1,   331,
     332,   333,    22,    23,    24,    25,    -1,    27,    28,     0,
       1,    -1,     3,     4,     5,     6,    -1,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,    -1,    -1,    -1,    20,    -1,    22,    59,
      -1,    25,    -1,    63,    64,    65,    66,    67,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,    -1,   395,   396,    49,    -1,    -1,    -1,    -1,
      54,    -1,   404,   405,    -1,    -1,    60,    22,    23,    24,
      25,    -1,    27,    28,    68,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,   425,   426,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,   443,    -1,    58,    59,   447,   448,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,   468,   469,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,   137,   486,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,   149,    -1,    38,    39,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    20,    -1,
      22,    -1,    -1,    25,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    58,    59,    -1,    66,    67,    -1,    64,    65,
      71,    -1,    -1,    -1,    55,     0,     1,    49,     3,     4,
       5,     6,    54,    64,    65,    66,    67,    -1,    60,     0,
       1,    -1,     3,     4,     5,     6,    68,    -1,    70,    71,
      72,    22,    23,    24,    25,    -1,    27,    28,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    93,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    63,    64,    65,    66,    67,    68,    69,    70,
     264,   265,   266,    -1,   268,   269,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,   137,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    55,   149,    57,   293,
     294,    -1,    -1,    62,    -1,   299,   300,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,    -1,    -1,    -1,   329,    -1,   331,   332,   333,
      62,    63,    -1,    -1,    66,    67,    -1,     0,     1,    71,
       3,     4,     5,     6,    -1,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,    -1,    -1,    -1,   362,   363,
     364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,    -1,    -1,    -1,   393,
      -1,   395,   396,    22,    23,    24,    25,    -1,    27,    28,
     404,   405,   264,   265,   266,    59,   268,   269,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,   425,   426,    -1,    -1,    -1,    55,   289,   290,   291,
     292,    -1,    -1,    -1,    -1,    64,    65,   299,   300,   443,
      -1,    -1,    -1,   447,   448,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,   321,
     322,   323,    -1,    -1,   468,   469,    -1,   329,    -1,   331,
     332,   333,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    -1,   349,   350,   351,
     352,   353,   354,   355,   356,    -1,    -1,    -1,    -1,    -1,
     362,   363,   364,    -1,    -1,    -1,    20,    -1,    22,    59,
      -1,    25,    -1,    63,    64,    65,    66,    67,   380,   381,
     382,   383,   384,   385,   386,   387,    -1,    -1,    -1,    -1,
      -1,   393,    -1,   395,   396,    49,    -1,    -1,    -1,    -1,
      54,    -1,   404,   405,    -1,    -1,    60,     9,    10,    11,
      12,    13,    14,    -1,    68,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,   425,   426,    -1,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    93,
      -1,   443,    -1,    -1,    -1,   447,   448,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    66,    67,   468,   469,    20,    71,
      22,    -1,    -1,    25,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,   137,   486,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,   149,    -1,    49,    -1,    -1,
      62,    63,    54,    -1,    66,    67,    -1,    -1,    60,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    -1,    -1,    -1,    58,    59,    -1,    -1,    80,    81,
      64,    65,    66,    67,     1,    -1,     3,     4,     5,     6,
      -1,    93,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,   137,    27,    28,    55,    -1,
      57,    58,    38,    39,    -1,    62,    -1,   149,    -1,    66,
      67,    20,    -1,    22,    71,    -1,    25,    -1,    -1,    -1,
     264,   265,   266,    -1,   268,   269,    62,    63,    59,    -1,
      66,    67,    63,    64,    65,    71,    22,    23,    24,    25,
      49,    27,    28,   287,   288,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,   299,   300,    -1,    -1,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    80,   316,   317,   318,   319,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    93,   329,    -1,   331,   332,   333,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   349,   350,   351,   352,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,   362,   363,
     364,    -1,   264,   265,   266,    -1,   268,   269,   137,    -1,
      -1,    63,    64,    65,    66,    67,   380,   381,   382,   383,
     149,    -1,    -1,    -1,   286,    -1,    -1,    58,    59,   393,
      -1,   395,   396,    64,    65,    66,    67,   299,   300,    -1,
     404,   405,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,   316,   317,    -1,    -1,    -1,    -1,
      -1,   425,   426,    -1,    -1,    -1,    -1,   329,    -1,   331,
     332,   333,    22,    23,    24,    25,    55,    27,    28,   443,
      -1,    -1,    -1,   447,   448,    64,    65,   349,   350,    -1,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
     362,   363,   364,    -1,   468,   469,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,   380,   381,
      38,    39,   486,    -1,    -1,    20,    -1,    22,    -1,    -1,
      25,   393,    -1,   395,   396,   264,   265,   266,    -1,   268,
     269,    -1,   404,   405,    62,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    49,    -1,   285,    -1,    -1,    54,
      -1,    -1,    -1,   425,   426,    60,    -1,    -1,    -1,    -1,
     299,   300,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,   443,    -1,    -1,    -1,   447,   448,   316,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    93,    -1,
     329,    -1,   331,   332,   333,    -1,   468,   469,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    38,    39,    -1,
     349,    -1,    -1,    -1,   486,    -1,     9,    10,    11,    12,
      13,    14,    -1,   362,   363,   364,    -1,    -1,    -1,    -1,
      -1,    62,   137,    55,    -1,    66,    67,    -1,    -1,    -1,
      71,   380,    64,    65,   149,    38,    39,    -1,    20,    -1,
      -1,    -1,    -1,    -1,   393,    -1,   395,   396,    -1,    -1,
      -1,    -1,    34,    -1,    -1,   404,   405,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    -1,    -1,    49,    71,    -1,
      -1,    -1,    54,    -1,    -1,    -1,   425,   426,     9,    10,
      11,    12,    13,    14,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    -1,   443,    -1,    -1,    -1,   447,   448,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,   468,
     469,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,   486,    -1,    -1,
      71,    -1,     9,    10,    11,    12,    13,    14,    -1,   264,
     265,   266,    -1,   268,   269,   137,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,   149,    -1,    -1,
      -1,    38,    39,   155,    -1,    -1,     9,    10,    11,    12,
      13,    14,    -1,   298,   299,   300,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,   185,    71,    38,    39,     9,    10,    11,
      12,    13,    14,    -1,   329,    -1,   331,   332,   333,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    38,    39,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,   362,   363,   364,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    67,    -1,   249,    -1,    71,
      -1,    22,    23,    24,    25,    -1,    27,    28,   393,    -1,
     395,   396,    -1,   265,   266,    -1,   268,   269,    -1,   404,
     405,    63,    64,    65,   276,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    59,    -1,
     425,   426,    63,    64,    65,    66,    67,   299,   300,    -1,
      -1,    22,    23,    24,    25,   307,    27,    28,   443,    55,
      56,    -1,   447,   448,    60,    -1,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
     332,   333,    -1,   468,   469,    56,    -1,    -1,   340,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,   486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,   404,   405,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      38,    39,    -1,   425,   426,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    62,   447,   448,    -1,    66,    67,
      59,    -1,    -1,    71,    63,    64,    65,    66,    67,    -1,
       1,    -1,     3,     4,     5,     6,   468,   469,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    38,    39,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    38,    39,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    38,    39,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    61,
      -1,    62,    64,    65,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    61,
      -1,    62,    64,    65,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    38,    39,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
       1,    71,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    62,    -1,    56,    -1,    66,    67,    60,    61,    62,
      71,    64,    65,    66,    67,    68,    69,    70,    55,    -1,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    56,    27,    28,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    56,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    56,    27,    28,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    56,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    56,    27,    28,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      55,    56,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    55,    56,    22,    23,
      24,    25,    -1,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    55,    56,    -1,
      -1,    -1,    -1,    -1,    55,    56,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      55,    56,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    55,    56,    22,    23,
      24,    25,    -1,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    22,    23,    24,    25,    -1,    27,    28,
      64,    65,    66,    67,    68,    69,    70,    55,    56,    22,
      23,    24,    25,    -1,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    56,    27,    28,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    61,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    56,    27,    28,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    22,    23,    24,    25,
      61,    27,    28,    64,    65,    66,    67,    68,    69,    70,
      56,    22,    23,    24,    25,    61,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    22,    23,    24,    25,
      61,    27,    28,    64,    65,    66,    67,    68,    69,    70,
      56,    22,    23,    24,    25,    61,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    22,
      23,    24,    25,    61,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    56,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    56,    22,    23,    24,    25,
      61,    27,    28,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
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
      28,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    55,    22,    23,
      24,    25,    -1,    27,    28,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    55,    22,    23,    24,
      25,    -1,    27,    28,    -1,    64,    65,    66,    67,    68,
      69,    70,    -1,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    64,    65,    66,    67,    68,
      69,    70,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    55,    22,    23,    24,    25,    -1,    27,    28,
      -1,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
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
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    63,    64,    65,    66,    67,    68,    69,    70,
      63,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    61,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    63,    64,    65,    66,    67,    68,    69,    70,
      63,    64,    65,    66,    67,    68,    69,    70,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    64,
      65,    66,    67,    68,    69,    70,    64,    65,    66,    67,
      68,    69,    70,    63,    64,    65,    66,    67,    68,    69,
      70,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    59,    -1,    -1,    55,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    64,    65,    66,    67,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    55,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    63,    64,    65,    66,    67,    61,
      -1,    -1,    64,    65,    66,    67,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      61,    -1,    -1,    64,    65,    66,    67,    59,    -1,    -1,
      -1,    63,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    73,    74,    75,    76,
      77,    79,    80,   102,    55,    57,    83,     0,    74,    55,
      56,    56,    57,     9,    58,    84,     9,    10,    11,    12,
      13,    14,    38,    39,    62,    66,    67,    71,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    10,    57,
       1,    15,    17,    18,    19,    20,    55,    58,    75,    83,
      85,    86,    87,    88,    89,    90,    91,   102,    60,    62,
      85,    60,    62,    98,    99,    98,    91,    98,    98,    98,
      22,    23,    24,    25,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    56,    78,    91,    55,    62,    62,    83,
      91,    62,    55,    58,    86,    55,    55,    55,     9,    61,
      91,     1,     3,    81,    82,   102,    58,    91,    63,    91,
     101,    63,    93,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    92,    58,    59,    91,    91,
      17,    10,    61,    63,    63,    59,    63,     9,    61,    59,
      63,    58,    91,    63,    63,    62,    63,    82,    60,    91,
      83,    83,    91,    61,    16,    63,    83,    55,    57,     9,
      10,    11,    12,    13,    14,    62,   100,     9,    10,    11,
      12,    13,    14,    38,    39,    62,    66,    67,    71,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     9,    10,
      11,    12,    13,    14,    38,    39,    62,    66,    67,    71,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    57,
       9,    10,    11,    12,    13,    14,    38,    39,    62,    66,
      67,    71,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     9,    10,    11,    12,    13,    14,    38,    39,    62,
      66,    67,    71,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    57,    58,    84,    60,    62,    91,    60,    62,
       9,    10,    11,    12,    13,    14,    62,    98,    99,   100,
      98,    91,    98,    98,    98,    22,    23,    24,    25,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    56,    60,
      62,     9,    10,    11,    12,    13,    14,    62,    98,    99,
     100,    98,    91,    98,    98,    98,    22,    23,    24,    25,
      27,    28,    64,    65,    66,    67,    68,    69,    70,    56,
      58,    84,    60,    62,     9,    10,    11,    12,    13,    14,
      62,    98,    99,   100,    98,    91,    98,    98,    98,    22,
      23,    24,    25,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    56,    60,    62,     9,    10,    11,    12,    13,
      14,    62,    98,    99,   100,    98,    91,    98,    98,    98,
      22,    23,    24,    25,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    56,    58,    84,    85,    91,    63,   101,
      63,    91,    63,   101,    60,    62,    91,    63,    93,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      98,    92,    91,    63,   101,    60,    62,    91,    63,    93,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    98,    92,    85,    91,    63,   101,    60,    62,    91,
      63,    93,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    92,    91,    63,   101,    60,    62,
      91,    63,    93,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    92,    85,    58,    61,    63,
      61,    63,    91,    63,   101,    63,    61,    63,    91,    63,
     101,    63,    58,    61,    63,    91,    63,   101,    63,    61,
      63,    91,    63,   101,    63,    58,    61,    63,    61,    63,
      61,    63,    61,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    84,
      83,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    95,    95,
      95,    95,    95,    96,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     1,     1,
       3,     5,     6,     3,     2,     5,     4,     1,     3,     4,
       3,     5,     5,     5,     1,     3,     2,     4,     2,     0,
       4,     1,     2,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     4,     5,     7,     5,     7,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     1,     4,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1
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
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2706 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2712 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2718 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2724 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2730 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2736 "src/parser.c"
        break;

    case 73: /* declaration_list  */
#line 66 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2742 "src/parser.c"
        break;

    case 74: /* declaration  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2748 "src/parser.c"
        break;

    case 75: /* init_declarator  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2754 "src/parser.c"
        break;

    case 76: /* var_declarator  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2760 "src/parser.c"
        break;

    case 77: /* arr_declarator  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2766 "src/parser.c"
        break;

    case 78: /* initializer_list  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2772 "src/parser.c"
        break;

    case 79: /* function_definition  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2778 "src/parser.c"
        break;

    case 80: /* function_declarator  */
#line 68 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2784 "src/parser.c"
        break;

    case 81: /* argument_list  */
#line 69 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2790 "src/parser.c"
        break;

    case 82: /* argument  */
#line 69 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2796 "src/parser.c"
        break;

    case 83: /* compound_statement  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2802 "src/parser.c"
        break;

    case 85: /* statement_list  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2808 "src/parser.c"
        break;

    case 86: /* statement  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2814 "src/parser.c"
        break;

    case 88: /* conditional_statement  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2820 "src/parser.c"
        break;

    case 89: /* iteration_statement  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2826 "src/parser.c"
        break;

    case 90: /* return_statement  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2832 "src/parser.c"
        break;

    case 91: /* assignment_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2838 "src/parser.c"
        break;

    case 92: /* logical_or_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2844 "src/parser.c"
        break;

    case 93: /* logical_and_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2850 "src/parser.c"
        break;

    case 94: /* equality_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2856 "src/parser.c"
        break;

    case 95: /* relational_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2862 "src/parser.c"
        break;

    case 96: /* additive_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2868 "src/parser.c"
        break;

    case 97: /* multiplicative_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2874 "src/parser.c"
        break;

    case 98: /* unary_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2880 "src/parser.c"
        break;

    case 99: /* postfix_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2886 "src/parser.c"
        break;

    case 100: /* primary_expression  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2892 "src/parser.c"
        break;

    case 101: /* argument_call_list  */
#line 67 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2898 "src/parser.c"
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
#line 104 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3164 "src/parser.c"
    break;

  case 3:
#line 105 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3170 "src/parser.c"
    break;

  case 4:
#line 109 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3176 "src/parser.c"
    break;

  case 5:
#line 110 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3182 "src/parser.c"
    break;

  case 6:
#line 111 "src/language.y"
    { (yyval.node) = NULL; }
#line 3188 "src/parser.c"
    break;

  case 7:
#line 112 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3194 "src/parser.c"
    break;

  case 8:
#line 116 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3200 "src/parser.c"
    break;

  case 9:
#line 117 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3206 "src/parser.c"
    break;

  case 10:
#line 118 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3212 "src/parser.c"
    break;

  case 11:
#line 119 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3218 "src/parser.c"
    break;

  case 12:
#line 120 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3224 "src/parser.c"
    break;

  case 13:
#line 121 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3230 "src/parser.c"
    break;

  case 14:
#line 125 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3236 "src/parser.c"
    break;

  case 15:
#line 129 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval),-1); free_label((yyvsp[-3].sval)); tc_arr_decl((yyval.node)); }
#line 3242 "src/parser.c"
    break;

  case 16:
#line 130 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-3].ival),(yyvsp[-2].sval),-1); free_label((yyvsp[-2].sval)); }
#line 3248 "src/parser.c"
    break;

  case 17:
#line 134 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3254 "src/parser.c"
    break;

  case 18:
#line 135 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3260 "src/parser.c"
    break;

  case 19:
#line 139 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-3].sval)); assign_context((yyval.node)); free_label((yyvsp[-3].sval)); }
#line 3266 "src/parser.c"
    break;

  case 20:
#line 140 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-2].sval)); assign_context((yyval.node)); free_label((yyvsp[-2].sval)); }
#line 3272 "src/parser.c"
    break;

  case 21:
#line 144 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-1].al));   }
#line 3278 "src/parser.c"
    break;

  case 22:
#line 145 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3284 "src/parser.c"
    break;

  case 23:
#line 146 "src/language.y"
    { (yyval.sval) = NULL; free_label((yyvsp[-3].sval)); }
#line 3290 "src/parser.c"
    break;

  case 24:
#line 150 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3296 "src/parser.c"
    break;

  case 25:
#line 151 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3302 "src/parser.c"
    break;

  case 26:
#line 155 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3308 "src/parser.c"
    break;

  case 27:
#line 156 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3314 "src/parser.c"
    break;

  case 28:
#line 160 "src/language.y"
    { (yyval.node) = NULL; }
#line 3320 "src/parser.c"
    break;

  case 29:
#line 161 "src/language.y"
    { begin(NULL); }
#line 3326 "src/parser.c"
    break;

  case 30:
#line 161 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3332 "src/parser.c"
    break;

  case 31:
#line 165 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3338 "src/parser.c"
    break;

  case 32:
#line 166 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3344 "src/parser.c"
    break;

  case 33:
#line 170 "src/language.y"
    { (yyval.node) = NULL; }
#line 3350 "src/parser.c"
    break;

  case 34:
#line 171 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3356 "src/parser.c"
    break;

  case 35:
#line 172 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3362 "src/parser.c"
    break;

  case 36:
#line 173 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3368 "src/parser.c"
    break;

  case 37:
#line 174 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3374 "src/parser.c"
    break;

  case 38:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3380 "src/parser.c"
    break;

  case 39:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3386 "src/parser.c"
    break;

  case 40:
#line 177 "src/language.y"
    { (yyval.node) = NULL; }
#line 3392 "src/parser.c"
    break;

  case 41:
#line 178 "src/language.y"
    { (yyval.node) = NULL; }
#line 3398 "src/parser.c"
    break;

  case 42:
#line 182 "src/language.y"
    { tc_asm((yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3404 "src/parser.c"
    break;

  case 43:
#line 185 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3410 "src/parser.c"
    break;

  case 44:
#line 186 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3416 "src/parser.c"
    break;

  case 45:
#line 190 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3422 "src/parser.c"
    break;

  case 46:
#line 191 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3428 "src/parser.c"
    break;

  case 47:
#line 195 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3434 "src/parser.c"
    break;

  case 48:
#line 196 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3440 "src/parser.c"
    break;

  case 49:
#line 200 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3446 "src/parser.c"
    break;

  case 50:
#line 201 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3452 "src/parser.c"
    break;

  case 51:
#line 205 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3458 "src/parser.c"
    break;

  case 52:
#line 206 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3464 "src/parser.c"
    break;

  case 53:
#line 210 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3470 "src/parser.c"
    break;

  case 54:
#line 211 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3476 "src/parser.c"
    break;

  case 55:
#line 215 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3482 "src/parser.c"
    break;

  case 56:
#line 216 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3488 "src/parser.c"
    break;

  case 57:
#line 217 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3494 "src/parser.c"
    break;

  case 58:
#line 221 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3500 "src/parser.c"
    break;

  case 59:
#line 222 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3506 "src/parser.c"
    break;

  case 60:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3512 "src/parser.c"
    break;

  case 61:
#line 224 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3518 "src/parser.c"
    break;

  case 62:
#line 225 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3524 "src/parser.c"
    break;

  case 63:
#line 229 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3530 "src/parser.c"
    break;

  case 64:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3536 "src/parser.c"
    break;

  case 65:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3542 "src/parser.c"
    break;

  case 66:
#line 235 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3548 "src/parser.c"
    break;

  case 67:
#line 236 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3554 "src/parser.c"
    break;

  case 68:
#line 237 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3560 "src/parser.c"
    break;

  case 69:
#line 238 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3566 "src/parser.c"
    break;

  case 70:
#line 242 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3572 "src/parser.c"
    break;

  case 71:
#line 243 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3578 "src/parser.c"
    break;

  case 72:
#line 244 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3584 "src/parser.c"
    break;

  case 73:
#line 245 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3590 "src/parser.c"
    break;

  case 74:
#line 246 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3596 "src/parser.c"
    break;

  case 75:
#line 247 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3602 "src/parser.c"
    break;

  case 76:
#line 251 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3608 "src/parser.c"
    break;

  case 77:
#line 252 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY)   ; free_label((yyvsp[-3].sval)); }
#line 3614 "src/parser.c"
    break;

  case 78:
#line 253 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval)); tc_fcall((yyval.node)); }
#line 3620 "src/parser.c"
    break;

  case 79:
#line 254 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval)); tc_fcall((yyval.node)); }
#line 3626 "src/parser.c"
    break;

  case 80:
#line 258 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3632 "src/parser.c"
    break;

  case 81:
#line 259 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(STRING_LITERAL, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3638 "src/parser.c"
    break;

  case 82:
#line 260 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_FLOAT, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3644 "src/parser.c"
    break;

  case 83:
#line 261 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_INT  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3650 "src/parser.c"
    break;

  case 84:
#line 262 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_HEX  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3656 "src/parser.c"
    break;

  case 85:
#line 263 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_CHAR , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3662 "src/parser.c"
    break;

  case 86:
#line 264 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3668 "src/parser.c"
    break;

  case 87:
#line 268 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); tc_fcall_args(NULL, (yyvsp[0].node)); }
#line 3674 "src/parser.c"
    break;

  case 88:
#line 269 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_fcall_args((yyvsp[-2].node), (yyvsp[0].node)); }
#line 3680 "src/parser.c"
    break;

  case 89:
#line 273 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3686 "src/parser.c"
    break;

  case 90:
#line 274 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3692 "src/parser.c"
    break;

  case 91:
#line 275 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3698 "src/parser.c"
    break;

  case 92:
#line 276 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3704 "src/parser.c"
    break;


#line 3708 "src/parser.c"

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
#line 279 "src/language.y"

void free_label(const char * str) {
	free((void*) str);
}
