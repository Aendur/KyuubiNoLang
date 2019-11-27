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
#line 86 "src/language.y"

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7970

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

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
       0,   109,   109,   110,   114,   115,   116,   117,   121,   122,
     123,   124,   125,   126,   130,   134,   135,   140,   141,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   153,   154,
     158,   159,   163,   164,   164,   168,   169,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   185,   188,   189,   193,
     194,   198,   199,   203,   204,   208,   209,   213,   214,   218,
     219,   220,   224,   225,   226,   227,   228,   232,   233,   234,
     238,   239,   240,   241,   245,   246,   247,   248,   249,   250,
     254,   255,   256,   257,   261,   262,   263,   264,   265,   266,
     267,   271,   272,   276,   277,   278,   279
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
  "arr_declarator", "initializer_list", "function_definition", "$@1",
  "$@2", "$@3", "$@4", "argument_list", "argument", "compound_statement",
  "$@5", "statement_list", "statement", "inline_asm",
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

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     520,   -32,    -2,    13,    35,    38,   559,   623,    29,   103,
     164,   709,    43,   890,   942,   917,  -272,  1121,  1128,  1318,
       1,   386,  1301,   472,  1002,  1977,  2388,  2410,  4595,  4602,
    1386,  1386,  1488,  1386,  1386,  1386,    51,   146,     4,   415,
     620,  1999,   339,   721,  4618,  4653,    66,  1506,     7,   734,
      81,    72,   108,   122,    52,   120,  1777,   105,  2722,  2817,
    2892,   172,  2923,  2992,   179,   206,   254,  1628,   118,  6382,
    6389,  6405,   209,  6439,  6455,  6462,  1386,  1386,  1386,  1386,
    1386,  1386,  1386,  1386,  1386,  1386,  1386,  1386,  1386,  1386,
     243,   266,   389,   228,   286,    -3,   -22,    53,   346,  3023,
    1488,  1488,   343,   310,   375,  3092,  1368,  3123,  3192,  3223,
    3292,   144,   330,  4669,   139,   199,  4676,   155,   476,  1212,
    1484,  7741,  7748,  7755,  7762,  6511,  6518,  6534,  6568,  6584,
     166,   347,   232,   424,  1575,   361,   328,   379,   237,   357,
     364,   398,   399,  4725,  1737,  4732,   433,   446,  3323,   295,
    3392,   435,   437,   449,  1488,   458,   353,   472,   474,   472,
     475,   356,   848,  3423,   473,  3492,  1603,  3523,  1709,   449,
     480,  1736,  2069,  3592,  3623,  3692,  2519,  6591,  6640,  6647,
    6663,  6697,  1488,  6713,  2173,  4747,  4796,  4811,  4826,  4875,
    1813,  1813,  1488,  1813,  1813,  1813,    79,    33,     9,  1863,
     184,  6721,  6731,  4890,  4905,   524,  1116,  1137,  2361,  2617,
    4042,  2145,  2145,  1488,  2145,  2145,  2145,   128,   132,   298,
     444,   201,  4954,  4967,  4091,  4106,  2600,  4982,  5017,  5032,
    5047,  5067,  2268,  2268,  1488,  2268,  2268,  2268,    -7,    28,
     142,  2340,  1707,  6747,  6782,  5082,  5097,  3723,   545,  2731,
    4155,  4170,  4185,  4234,  2286,  2286,  1488,  2286,  2286,  2286,
      17,    20,    63,   778,  1846,  5117,  5132,  4249,  4264,  3792,
    3823,   472,  1628,   387,   477,  1628,   640,  4313,  6796,  6804,
    6812,  6861,  6869,  1488,  6877,  6885,  6893,  6942,   478,  6950,
    6958,  6966,  1813,  1813,  1813,  1813,  1813,  1813,  1813,  1813,
    1813,  1813,  1813,  1813,  1813,  1813,  1628,   759,  1694,  5146,
    5195,  5208,  5221,  5270,  1488,  5283,  5296,  5345,  5358,   479,
    5371,  5420,  5433,  2145,  2145,  2145,  2145,  2145,  2145,  2145,
    2145,  2145,  2145,  2145,  2145,  2145,  2145,  1628,   769,  4324,
    6976,  7025,  7035,  7045,  7055,  1488,  7104,  7114,  7124,  7134,
     481,  7183,  7193,  7203,  2268,  2268,  2268,  2268,  2268,  2268,
    2268,  2268,  2268,  2268,  2268,  2268,  2268,  2268,   533,   472,
    1628,   862,  2197,  5445,  5494,  5506,  5518,  5567,  1488,  5579,
    5591,  5640,  5652,   498,  5664,  5713,  5725,  2286,  2286,  2286,
    2286,  2286,  2286,  2286,  2286,  2286,  2286,  2286,  2286,  2286,
    2286,  1401,   472,  3892,   505,  7210,   369,  7259,   510,  5740,
     370,  1628,   869,   518,  5789,    48,    70,  1966,  7905,  2583,
    7808,  7815,  7822,  7267,  7275,  7283,  7293,  7342,    98,   526,
    4339,   388,  1628,  1022,   522,  4388,   269,   365,   947,  1913,
    1053,  2492,  7615,  7661,  5802,  5815,  5864,  5877,  5890,   271,
     541,  5939,   396,  1628,  1035,   540,  5954,    76,   208,  2742,
    2991,  2028,  7829,  7836,  7882,  7352,  7362,  7372,  7421,  7431,
      16,  3923,   555,  4403,   402,  1628,  1232,   543,  4452,    86,
      80,  7891,  7898,  7670,  7679,  7688,  7734,  5966,  5989,  6015,
    6038,  6064,    88,  3992,  4023,  7438,  7456,  6087,  6113,   564,
    7449,   434,  7505,  4467,  4482,   569,  6136,   453,  6162,  6185,
    6211,   570,  7515,   455,  7525,   615,  4531,  4546,   572,  6234,
     456,  6246,  1475,  7533,  7582,  6260,  6309,  7592,  7602,  6321,
    6333
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
    -272,  -272,   531,    24,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,   501,     0,  -172,  -147,   -50,  -272,  -272,
    -272,  -272,   745,  2438,  2226,  2036,  1815,  1625,  1291,   955,
     -19,   363,  -271,     8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    57,     9,    10,    90,    11,   159,   157,
     160,   158,    96,    97,    58,    23,    59,    60,    61,    62,
      63,    64,    65,    37,    38,    39,    40,    41,    42,    43,
      70,   183,   115,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    15,   406,   271,    44,   410,   -93,   -93,    12,   107,
     165,    46,   167,   203,    12,   354,   226,   227,   228,   229,
     230,   231,   -94,    13,     8,    14,   -55,    77,   224,   245,
       8,   -57,   -57,   294,   295,    44,   431,   136,   354,   387,
      44,   137,   -55,   388,   -95,   232,   233,   -96,   245,   267,
     -55,   355,    21,   102,   -53,   -55,   293,    98,    47,   -55,
     135,    24,    25,    26,    27,    28,    29,   452,    92,   234,
     -56,   293,   -57,   235,   236,   369,   -53,   -54,   237,   -55,
     -53,   203,   203,   -55,    18,   -57,   -57,   389,   390,   -55,
      30,    31,   -58,   -58,   294,   295,   -55,   402,   -56,   355,
     474,   292,   -58,   -58,   389,   390,   -10,   -51,   -56,   388,
     387,   -56,   -28,   224,    32,   107,   -28,   107,    33,    34,
     292,   -13,   -57,    35,   403,   267,   -57,   248,   249,   250,
     251,   252,   253,   -58,   100,   203,    99,   -56,    44,   -58,
      44,   501,   -53,   -58,    98,   -56,    44,   -54,    44,   -56,
     323,   -54,   162,   163,   -55,   324,   254,   255,    -8,    19,
     105,   -54,   507,   203,   -57,   -57,   356,   357,    76,   173,
     101,   285,   285,   203,   285,   285,   285,   -56,    77,   247,
     256,   113,   104,   513,   257,   258,   -53,   -53,    76,   259,
     -55,   -55,   316,   316,   203,   316,   316,   316,   -91,   -14,
     -14,   -53,   -91,   -57,    48,   520,   -62,   -62,   -62,   -62,
     -56,   -62,   -62,   347,   347,   203,   347,   347,   347,    -9,
      20,   -54,   471,   -62,   -62,   -62,   -62,   108,   -62,   -62,
     -58,   -58,   356,   357,   109,   380,   380,   203,   380,   380,
     380,   205,   206,   207,   208,   209,   210,   -62,   -62,   -62,
     300,   301,    44,   245,   267,   493,   245,   267,   144,   -62,
     -62,   110,   145,   111,   203,   -62,   -62,   331,   332,   -58,
     211,   212,   116,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   245,   267,   133,
     146,   -56,   324,   323,   213,   203,   -30,   151,   214,   215,
     -30,   131,   132,   216,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   245,   267,
     -57,   -57,   325,   326,   -17,   -17,   203,   -56,   -56,   -54,
     -54,     2,     3,     4,     5,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   134,
      44,   245,   267,   107,   -29,   138,   -57,   -57,   -29,   203,
     141,   -67,   -67,   -67,   -67,   -52,   -67,   -67,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,    45,    44,    44,   142,    45,   -58,   -58,   325,
     326,   143,   245,   267,   -67,   204,   248,   249,   250,   251,
     252,   253,   -11,   -67,   -67,   -67,   -67,    86,    87,    88,
     225,   246,   -92,   245,   267,   -31,   -92,    45,   148,   -31,
     152,   107,    45,   -58,   -58,   254,   255,   153,   144,   144,
     246,   268,   496,   498,   245,   267,   150,   -57,   -57,    78,
      79,   -14,   -14,   107,   -16,   -16,    48,   144,    49,   256,
     405,   504,    44,   257,   258,   144,   245,   267,   259,   510,
     154,   144,   155,   204,   204,   517,   -59,   -59,   -59,   -59,
     -57,   327,   328,    50,    44,     2,     3,     4,     5,   -15,
     -15,    24,    25,    26,    27,    28,    29,    51,   -12,    52,
      53,    54,    55,   144,   269,   225,   161,   524,   -58,   -58,
      78,    79,   -59,   -59,   -18,   -18,   175,   268,   329,   330,
      30,    31,   144,   -46,   144,   144,   526,   204,   528,   530,
      45,     1,    45,     2,     3,     4,     5,    56,    45,   175,
      45,   -58,   166,   168,    32,   174,   170,    17,    33,    34,
     407,   414,   435,    35,   456,   204,   -84,   -84,   -84,   -84,
     -32,   -84,   -84,   286,   286,   204,   286,   286,   286,    16,
       1,   478,     2,     3,     4,     5,   495,   -84,   -84,   -84,
     -84,   497,   -84,   -84,   317,   317,   204,   317,   317,   317,
     -84,   502,   -84,   -84,   306,   508,   307,   503,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   348,   348,   204,   348,   348,
     348,   -84,   509,   514,   -84,   370,   521,   371,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   516,   381,   381,   204,
     381,   381,   381,    -2,    -2,   523,    -2,    -2,    -2,    -2,
     525,   527,   -34,   529,    45,   246,   268,   149,   246,   268,
       0,     0,   -59,   -59,   -59,   -59,   204,    80,    81,   248,
     249,   250,   251,   252,   253,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   246,
     268,     0,     0,     0,     0,   -59,     0,   204,   254,   255,
       0,     0,     0,     0,    82,    83,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     246,   268,   256,   409,     0,     0,   257,   258,   204,    -4,
      -4,   259,    -4,    -4,    -4,    -4,     0,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,     0,    45,   246,   268,    94,     0,    95,     3,     4,
       5,   204,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,    36,    45,    45,     0,   248,   249,
     250,   251,   252,   253,   246,   268,   -70,    72,   248,   249,
     250,   251,   252,   253,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,    91,    93,     0,   246,   268,   254,   255,   103,
     -59,   -59,   -59,   -59,     0,   391,   392,   254,   255,     0,
       0,     0,   112,   114,     0,     0,   246,   268,     0,     0,
       0,   256,   430,     0,     0,   257,   258,     0,     0,     0,
     259,   256,   451,     0,    45,   257,   258,   -59,   246,   268,
     259,   -59,   393,   394,     0,   139,   140,     0,     0,   -47,
       0,   -47,   -47,   -47,   -47,     0,    45,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   169,   -47,   -47,   -47,   -47,     0,
       0,   248,   249,   250,   251,   252,   253,   147,   248,   249,
     250,   251,   252,   253,     0,     0,   -47,   -47,     0,   156,
      -6,    -6,     0,    -6,    -6,    -6,    -6,     0,     0,   164,
     254,   255,     0,   -47,     0,   -47,   -47,   254,   255,     0,
     -47,     0,     0,     0,   -47,   -47,     0,    -7,    -7,   -47,
      -7,    -7,    -7,    -7,   256,   473,     0,   274,   257,   258,
       0,   256,   500,   259,     0,   257,   258,   288,     0,     0,
     259,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   319,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,     0,   327,   328,     0,     0,     0,   350,
     -33,   -33,     0,     0,     0,    69,    71,   202,    73,    74,
      75,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
      22,   383,   223,   244,   -33,   -60,   -60,     0,   -33,   -33,
       0,   329,   330,   -33,     0,     0,     0,   404,   114,     0,
     408,   114,   244,   266,   -84,   -84,   -84,   -84,   413,   -84,
     -84,   248,   249,   250,   251,   252,   253,     0,     0,     0,
       0,   127,   128,   129,   248,   249,   250,   251,   252,   253,
       0,   429,   114,     0,     0,   202,   202,   -84,   -84,   434,
     254,   255,    67,     0,    68,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   254,   255,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   450,   114,   256,   506,     0,   223,   257,   258,
     455,     0,     0,   259,     0,     0,     0,   256,   512,   266,
       0,   257,   258,     0,     0,     0,   259,     0,     0,   202,
       0,   -65,   -65,     0,     0,   472,   114,   -65,   -65,   331,
     332,    -3,    -3,   477,    -3,    -3,    -3,    -3,    -5,    -5,
       0,    -5,    -5,    -5,    -5,     0,     0,   202,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   284,   287,   202,   289,   290,
     291,     0,     0,     0,     0,     0,   499,   114,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   315,   318,   202,   320,
     321,   322,   -85,     0,   -85,   -85,     0,   505,   114,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   346,   349,   202,
     351,   352,   353,   -86,     0,   -86,   -86,     0,   511,   114,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   379,
     382,   202,   384,   385,   386,     0,     0,     0,     0,     0,
     518,   114,     0,     0,     0,     0,     0,   244,   266,     0,
     244,   266,     0,     0,   -60,   -60,   -60,   -60,   202,    80,
      81,   248,   249,   250,   251,   252,   253,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   425,   426,   427,
     202,   244,   266,     0,     0,     0,     0,   -60,     0,   202,
     254,   255,     0,     0,     0,     0,    82,    83,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   446,   447,
     448,   223,   244,   266,   256,   519,     0,     0,   257,   258,
     202,   -32,   -32,   259,   -32,   -32,   -32,   -32,     0,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   467,
     468,   469,   244,   201,     0,   244,   266,    24,    25,    26,
      27,    28,    29,   202,     0,     0,     0,     0,   222,   243,
       0,     0,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   489,   490,   491,   266,    30,    31,   243,   265,
       0,     0,     0,     0,     0,     0,   244,   266,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   125,   126,     0,     0,     0,
      32,     0,     0,     0,    33,    34,     0,   244,   266,    35,
       0,   201,   201,     0,     0,   176,   177,   178,   179,   180,
     181,     0,   -32,     0,   -32,   -32,   -32,   -32,   244,   266,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   222,    30,    31,     0,     0,     0,     0,
     244,   266,     0,     0,     0,   265,     0,     0,     0,   -32,
     -32,     0,     0,     0,     0,   201,     0,     0,   182,     0,
       0,     0,    33,    34,     0,     0,   -32,    35,   -32,   -32,
       0,     0,     0,   -32,     0,     0,     0,   -32,   -32,     0,
       0,     0,   -32,   201,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,   201,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   184,   185,   186,
     187,   188,   189,     0,   201,     0,   -61,   -61,   -61,   -61,
       0,    80,    81,   -34,   -34,   205,   206,   207,   208,   209,
     210,     0,     0,     0,     0,   201,   190,   191,     0,     0,
     -34,     0,   -34,   -34,     0,     0,     0,   -34,     0,   -61,
       0,   -34,   -34,     0,   211,   212,   -34,   201,    82,    83,
     192,     0,     0,     0,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   243,   265,     0,   243,   265,   213,     0,
       0,     0,   214,   215,   201,   -27,   -27,   216,   -27,   -27,
     -27,   -27,     0,   201,   201,   201,   201,   201,   201,   201,
     201,   423,   424,     0,     0,     0,   201,   243,   265,     0,
       0,     0,     0,   -26,   -26,   201,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   222,   222,   222,   222,   222,   222,
     222,   222,   444,   445,     0,     0,     0,   222,   243,   265,
       0,     0,     0,     0,     0,     0,   201,   226,   227,   228,
     229,   230,   231,     0,     0,   243,   243,   243,   243,   243,
     243,   243,   243,   465,   466,     0,     0,   200,   243,     0,
       0,   243,   265,     0,     0,     0,   232,   233,     0,   201,
       0,     0,   221,   242,     0,     0,     0,     0,   265,   265,
     265,   265,   265,   265,   265,   265,   487,   488,     0,     0,
     234,   265,   242,   264,   235,   236,     0,     0,     0,   237,
       0,     0,   243,   265,     0,   121,   122,   123,   124,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   243,   265,   200,   200,     0,     0,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -22,   -22,     0,   -22,
     -22,   -22,   -22,     0,   243,   265,   248,   249,   250,   251,
     252,   253,   -84,   -84,   432,     0,   433,   221,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   243,   265,   -62,   264,
       0,   -62,   -62,   362,   363,   254,   255,     0,   -37,   200,
     -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,     0,   256,
       0,     0,     0,   257,   258,     0,     0,   200,   259,     0,
       0,     0,     0,     0,     0,   -37,   -37,   200,     0,     0,
       0,     0,   277,   278,   279,   280,   281,   282,     0,     0,
       0,     0,   -37,     0,   -37,   -37,     0,     0,   200,   -37,
       0,     0,     0,   -37,   -37,     0,     0,   199,   -37,     0,
       0,   190,   191,     0,     0,     0,     0,     0,     0,   200,
       0,     0,   220,   241,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   283,     0,     0,     0,   193,
     194,   200,   241,   263,   195,   -59,   -59,   -59,   -59,     0,
     296,   297,     0,   119,   120,     0,     0,   242,   264,     0,
     242,   264,     0,     0,     0,   -62,     0,     0,   200,   -62,
     -62,   -62,   395,   396,     0,   199,   199,   200,   200,   200,
     200,   419,   420,   421,   422,     0,   -59,   298,   299,     0,
     200,   242,   264,     0,     0,   -61,   -61,   -61,   -61,   200,
     327,   328,     0,     0,     0,     0,     0,   220,   221,   221,
     221,   221,   440,   441,   442,   443,     0,     0,     0,   263,
       0,   221,   242,   264,     0,     0,     0,     0,     0,   199,
     200,   -61,   -61,     0,     0,     0,     0,   329,   330,   242,
     242,   242,   242,   461,   462,   463,   464,     0,   -60,   -60,
     -60,   -60,   242,   296,   297,   242,   264,   199,     0,   -85,
     -85,   -85,   -85,   200,   -85,   -85,     0,   199,     0,     0,
       0,     0,   264,   264,   264,   264,   483,   484,   485,   486,
       0,   -62,   -62,   -62,   -62,   264,   -62,   -62,   199,   -60,
     298,   299,   -85,   -85,     0,     0,   242,   264,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   199,
     -65,   -65,   -65,   -65,   -62,   -65,   -65,   242,   264,     0,
       0,     0,     0,   -62,   -62,    84,    85,     0,   198,   -20,
     -20,   199,   -20,   -20,   -20,   -20,     0,     0,   242,   264,
       0,     0,     0,   219,   240,     0,     0,   241,   263,   -65,
     241,   263,   -65,   -65,   362,   363,     0,     0,   199,     0,
     242,   264,     0,   240,   262,     0,     0,   199,   199,   417,
     418,     0,     0,   118,     0,     0,     0,     0,     0,     0,
     199,   241,   263,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,   198,   198,   220,   220,
     438,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   241,   263,   308,   309,   310,   311,   312,   313,
     199,     0,     0,     0,     0,     0,     0,     0,   219,   241,
     241,   459,   460,     0,     0,     0,     0,     0,     0,     0,
     262,     0,   241,   211,   212,   241,   263,     0,     0,     0,
     198,     0,     0,   199,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   263,   263,   481,   482,     0,   314,     0,     0,
       0,   214,   215,     0,     0,   263,   216,     0,   198,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   241,   263,   198,   -84,
       0,     0,     0,   275,     0,   276,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   241,   263,   198,
       0,     0,     0,     0,     0,     0,   -84,   475,   197,   476,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   241,   263,
     198,     0,     0,   218,   239,     0,     0,   339,   340,   341,
     342,   343,   344,     0,     0,     0,     0,     0,     0,     0,
     241,   263,   198,   239,   261,   372,   373,   374,   375,   376,
     377,     0,   117,     0,     0,     0,   232,   233,   240,   262,
       0,   240,   262,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,   254,   255,   197,   197,   198,   416,
     345,     0,     0,     0,   235,   236,     0,     0,     0,   237,
       0,   198,   240,   262,     0,     0,     0,     0,   378,     0,
     198,     0,   257,   258,     0,     0,     0,   259,   218,   219,
     437,     0,   -59,   -59,   -59,   -59,     0,   358,   359,     0,
     261,     0,   219,   240,   262,     0,     0,     0,     0,     0,
     197,   198,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     240,   458,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,     0,   240,   360,   361,   240,   262,   197,     0,
     -86,   -86,   -86,   -86,   198,   -86,   -86,   -87,   197,   -87,
     -87,     0,     0,   262,   480,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   262,   -87,   -87,   197,
       0,     0,     0,   -86,   -86,     0,     0,   240,   262,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     197,     0,     0,     0,     0,   -87,   -87,     0,   240,   262,
     196,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   197,     0,     0,   217,   238,     0,     0,   240,
     262,     0,     0,     0,     0,     0,     0,     0,   239,   261,
       0,   239,   261,     0,     0,   238,   260,     0,     0,   197,
       0,   240,   262,     0,   -66,   -66,   -66,   -66,   415,   -66,
     -66,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,   197,   239,   261,     0,     0,     0,     0,   196,   196,
     197,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,   436,
     -66,   -66,     0,     0,     0,     0,   -66,   -66,   331,   332,
       0,     0,   218,   239,   261,     0,     0,     0,     0,     0,
     217,   197,     0,     0,   -84,     0,     0,     0,     0,   272,
     457,   273,   260,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   196,   239,     0,     0,   239,   261,     0,     0,
       0,     0,     0,     0,   197,   -65,   -65,   -65,   -65,     0,
     -65,   -65,     0,   479,     0,     0,     0,     0,     0,     0,
     196,     0,   -84,   -84,   -84,   -84,   261,   -84,   -84,     0,
     196,     0,     0,     0,     0,     0,     0,   239,   261,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -65,   -65,   -65,   300,
     301,   196,     0,     0,     0,     0,   -84,     0,   239,   261,
     337,   -84,   338,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   196,   -88,     0,   -88,   -88,     0,     0,   239,
     261,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,   239,   261,     0,     0,     0,     0,     0,     0,     0,
     238,   260,     0,   238,   260,     0,     0,     0,     0,     0,
       0,   196,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   428,   238,   260,     0,     0,     0,     0,
       0,     0,   196,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -42,   -42,     0,     0,   -60,   -60,   -60,   -60,     0,   358,
     359,     0,     0,     0,   449,   238,   260,   -42,     0,   -42,
     -42,     0,     0,   196,   -42,     0,     0,   -85,   -42,   -42,
     -85,     0,     0,   -42,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -60,     0,   470,   360,   361,   238,   260,
       0,     0,     0,     0,     0,     0,   196,     0,    50,     0,
       2,     3,     4,     5,     0,     0,    24,    25,    26,    27,
      28,    29,    51,     0,    52,    53,    54,    55,   492,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     260,     0,     0,     0,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   260,    56,     0,   175,   106,     0,     0,     0,    32,
       0,     0,     0,    33,    34,     0,     0,     0,    35,     0,
       0,   238,   260,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   238,   260,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -35,   -35,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -35,     0,   -35,
     -35,     0,     0,     0,   -35,     0,     0,     0,   -35,   -35,
       0,   -40,   -40,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,     0,
     -40,   -40,     0,     0,     0,   -40,     0,     0,     0,   -40,
     -40,     0,     0,   -41,   -40,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -61,   -61,   -61,   -61,     0,   358,   359,
       0,     0,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -41,   -41,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,     0,     0,     0,   -41,     0,   -41,
     -41,     0,   -61,     0,   -41,   360,   361,     0,   -41,   -41,
       0,   -45,   -45,   -41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,     0,
     -45,   -45,     0,     0,     0,   -45,     0,     0,     0,   -45,
     -45,     0,     0,   -38,   -45,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -38,   -38,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,   -38,     0,   -38,
     -38,     0,     0,     0,   -38,     0,     0,     0,   -38,   -38,
       0,   -36,   -36,   -38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,     0,
     -36,   -36,     0,     0,     0,   -36,     0,     0,     0,   -36,
     -36,     0,     0,   -44,   -36,   -44,   -44,   -44,   -44,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,     0,   -43,   -43,   -43,   -43,
     -44,   -44,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,     0,     0,     0,   -44,     0,   -44,
     -44,     0,     0,     0,   -44,     0,     0,     0,   -44,   -44,
       0,   -43,   -43,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,     0,
     -43,   -43,     0,     0,     0,   -43,     0,     0,     0,   -43,
     -43,     0,     0,   -39,   -43,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -21,     0,   -21,   -21,   -21,   -21,
     -39,   -39,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,     0,     0,     0,   -39,     0,   -39,
     -39,     0,     0,     0,   -39,     0,     0,     0,   -39,   -39,
       0,   -21,   -21,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -21,     0,
     -21,   -25,     0,     0,     0,   -21,     0,     0,     0,   -21,
     -21,     0,     0,   -19,   -21,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,     0,   -49,   -49,   -49,   -49,
     -19,   -19,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,     0,     0,     0,   -19,     0,   -19,
     -23,     0,     0,     0,   -19,     0,     0,     0,   -19,   -19,
       0,   -49,   -49,   -19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -49,     0,
     -49,   -49,     0,     0,     0,   -49,     0,     0,     0,   -49,
     -49,     0,     0,    50,   -49,     2,     3,     4,     5,     0,
       0,    24,    25,    26,    27,    28,    29,    51,     0,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     2,     3,     4,     5,
      30,    31,    24,    25,    26,    27,    28,    29,    51,     0,
      52,    53,    54,    55,     0,     0,     0,    56,     0,   175,
     171,     0,     0,     0,    32,     0,     0,     0,    33,    34,
       0,    30,    31,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
     175,   172,     0,     0,     0,    32,     0,     0,     0,    33,
      34,     0,     0,   -48,    35,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -50,     0,   -50,   -50,   -50,   -50,
     -48,   -48,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,   -48,     0,   -48,
     -48,     0,     0,     0,   -48,     0,     0,     0,   -48,   -48,
       0,   -50,   -50,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -50,     0,
     -50,   -50,     0,     0,     0,   -50,     0,     0,     0,   -50,
     -50,     0,     0,   -33,   -50,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,
     270,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,     0,
     -33,   368,     0,     0,     0,   -33,     0,     0,     0,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -33,   -33,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,   -33,     0,   -33,
     401,     0,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,   -32,   -32,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,     0,
     -32,   -32,     0,     0,     0,   -32,     0,     0,     0,   -32,
     -32,     0,     0,    50,   -32,     2,     3,     4,     5,     0,
       0,    24,    25,    26,    27,    28,    29,    51,     0,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     2,     3,     4,     5,
      30,    31,    24,    25,    26,    27,    28,    29,    51,     0,
      52,    53,    54,    55,     0,     0,     0,    56,     0,   175,
     494,     0,     0,     0,    32,     0,     0,     0,    33,    34,
       0,    30,    31,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
     175,   515,     0,     0,     0,    32,     0,     0,     0,    33,
      34,     0,     0,    50,    35,     2,     3,     4,     5,     0,
       0,    24,    25,    26,    27,    28,    29,    51,     0,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
      30,    31,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,    56,     0,   175,
     522,     0,     0,     0,    32,     0,     0,     0,    33,    34,
       0,   -34,   -34,    35,   -89,   -89,   -89,   -89,     0,   -89,
     -89,     0,     0,     0,     0,     0,     0,     0,   -34,     0,
     -34,   -34,     0,     0,     0,   -34,     0,     0,     0,   -34,
     -34,     0,     0,     0,   -34,     0,     0,     0,   -89,     0,
     -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,     0,   -74,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -80,     0,   -80,   -80,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -86,   -88,   -88,   -86,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,     0,     0,   -88,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -89,   -80,   -80,   -89,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   400,     0,     0,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -80,     0,     0,   -80,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,   -84,     0,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,   411,     0,   412,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   453,   -84,   454,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -82,     0,   -82,   -82,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,     0,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,
       0,     0,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -90,   -90,   -90,   -90,     0,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -90,   -83,
     -83,   -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -81,     0,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,     0,
     -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,     0,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,     0,     0,   -83,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,
     -89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,
     -88,   -88,     0,     0,     0,     0,     0,   -89,   -89,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -74,    89,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -90,   -90,
     -90,   -90,     0,   -90,   -90,     0,     0,     0,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,     0,     0,     0,     0,
       0,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,
     -81,   -81,     0,     0,     0,     0,     0,   -83,   -83,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -85,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,     0,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -86,   -88,   -88,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,     0,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -89,   -80,   -80,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   305,     0,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -80,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -67,   -67,   -67,   -67,
       0,   -67,   -67,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,     0,   -67,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   333,   334,   335,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -85,   -86,
     -86,   -86,   -86,   -85,   -86,   -86,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -87,   -87,   -87,   -87,     0,   -87,
     -87,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -86,   -88,   -88,     0,     0,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -89,
     -89,   -89,   -89,   -87,   -89,   -89,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -74,   -74,   -74,   -74,   -88,   -74,
     -74,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -80,
     -80,   -80,   -80,   -89,   -80,   -80,     0,     0,   -89,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   367,   -67,
     -67,   -67,   -67,   -74,   -67,   -67,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -80,   -70,   -70,   -70,   -70,   -80,   -70,
     -70,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -67,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   397,   398,   399,     0,     0,
       0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,     0,   -87,   -87,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,     0,     0,   -86,   -86,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,
     -78,   -78,     0,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,     0,   -74,   -74,     0,     0,     0,   -89,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -74,   -74,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,
       0,     0,     0,   -80,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -75,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,   -76,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -85,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -78,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -74,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -75,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,     0,
     -76,   -76,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -82,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,
     -68,     0,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,     0,   -90,     0,     0,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     333,   334,   335,   -69,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   333,   334,   335,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
       0,     0,   -71,   -71,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
       0,   -90,   -90,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -82,     0,     0,     0,     0,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -69,   -69,   -69,   -69,   -90,   -69,   -69,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -68,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   397,   398,   399,   -71,   -71,   -71,
     -71,     0,   -71,   -71,     0,     0,     0,     0,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   397,   398,   399,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,   -72,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,   -81,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,
     -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -90,   -90,   -90,   -90,     0,   -90,
     -90,     0,     0,     0,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -83,   -83,   -83,   -83,     0,   -83,   -83,
       0,   -81,     0,     0,     0,     0,   -81,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,   -83,   -90,   -90,
     -90,   -90,   -83,   -90,   -90,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,
       0,     0,     0,   -82,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -90,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -81,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,     0,     0,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,     0,   -74,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -79,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,     0,     0,     0,     0,     0,     0,   -77,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,   -68,     0,     0,     0,
       0,     0,     0,   -69,     0,   -68,   -68,   -68,   -68,    86,
      87,    88,   -69,   -69,   -69,   -69,    86,    87,    88,   -71,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
       0,     0,     0,     0,     0,     0,   -85,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -87,
     -87,   -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,     0,
     -88,   -88,     0,     0,     0,   -86,     0,     0,     0,     0,
       0,     0,   -87,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -89,
     -89,   -89,   -89,     0,   -89,   -89,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,     0,   -89,   -70,   -70,   -70,   -70,     0,   -70,   -70,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -80,   -67,
     -67,   -67,   -67,     0,   -67,   -67,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -67,   -67,   -67,   -67,   -67,   302,
     303,   304,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -70,   -70,   -70,   -70,   -67,   -70,
     -70,   -67,   -67,   -67,   -67,   364,   365,   366,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,   -87,   -87,   -87,   -87,     0,   -87,
     -87,     0,     0,   -70,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,     0,   -74,   -74,   -74,
     -74,     0,   -74,   -74,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,   -77,   -77,
     -77,   -77,     0,   -77,   -77,     0,     0,     0,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,     0,     0,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,     0,   -89,   -89,   -89,
     -89,     0,   -89,   -89,     0,     0,   -86,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,     0,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,     0,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,     0,     0,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -75,   -75,   -75,   -75,     0,
     -75,   -75,     0,     0,     0,   -76,   -76,   -76,   -76,     0,
     -76,   -76,     0,     0,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,     0,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,   -82,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,     0,   -71,   -71,   -71,   -71,     0,
     -71,   -71,     0,     0,   -90,   -72,   -72,   -72,   -72,     0,
     -72,   -72,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -68,   -68,   -68,   -68,   -68,   302,   303,   304,   -69,   -69,
     -69,   -69,   -69,   302,   303,   304,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,
     -68,     0,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,     0,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -68,     0,     0,   -68,   -68,   -68,   -68,
     364,   365,   366,   -69,     0,     0,   -69,   -69,   -69,   -69,
     364,   365,   366,   -71,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,   -72,   -72,   -72,     0,   -72,   -72,
       0,     0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -83,   -83,
     -83,   -83,   -72,   -83,   -83,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -81,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,   -83,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -90,   -90,   -90,
     -90,     0,   -90,   -90,     0,     0,     0,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,   -90,   -90,   -90,
     -90,     0,   -90,   -90,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -82,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -90,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,     0,   -63,   -63,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -81,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -83,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -63,   -63,     0,     0,     0,     0,   -63,
     -63,   331,   332,   -64,   -64,   -64,   -64,     0,   -64,   -64,
       0,     0,   -65,   -65,   -65,   -65,     0,   -65,   -65,     0,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,
     -63,   -63,   -63,   -63,     0,   -63,   -63,     0,     0,   -64,
     -64,     0,     0,     0,     0,   -64,   -64,   331,   332,   -65,
       0,     0,     0,   -65,   -65,   -65,   395,   396,   -66,     0,
       0,     0,   -66,   -66,   -66,   395,   396,   -63,     0,     0,
       0,   -63,   -63,   -63,   395,   396,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,   -64,     0,     0,   -65,   -64,   -64,   -64,
     395,   396,     0,   -66,     0,   -65,   -65,    84,    85,     0,
     -63,     0,   -66,   -66,    84,    85,     0,   -64,     0,   -63,
     -63,    84,    85,     0,     0,     0,   -64,   -64,    84,    85,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -63,   -63,
     -63,   -63,     0,   -63,   -63,     0,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   300,   301,     0,     0,   -63,   -63,
     -63,   300,   301,     0,     0,   -64,   -64,   -64,   300,   301,
     -66,     0,     0,   -66,   -66,   362,   363,   -63,     0,     0,
     -63,   -63,   362,   363,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,   -60,   -60,   -60,   -60,     0,   391,   392,
     -61,   -61,   -61,   -61,     0,   391,   392,   -61,   -61,   -61,
     -61,     0,   296,   297,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -64,     0,     0,   -64,   -64,   362,   363,
     -60,     0,     0,     0,   -60,   393,   394,   -61,     0,     0,
       0,   -61,   393,   394,     0,     0,     0,     0,   -61,   298,
     299
};

static const yytype_int16 yycheck[] =
{
      19,     1,   273,   175,    23,   276,     9,     9,     0,    59,
     157,    10,   159,    32,     6,    22,     9,    10,    11,    12,
      13,    14,     9,    55,     0,    57,    22,    23,    47,    48,
       6,    22,    23,    24,    25,    54,   307,    59,    22,    22,
      59,    63,    22,    23,     9,    38,    39,     9,    67,    68,
      22,    23,     9,    53,    61,    22,    23,    49,    57,    55,
      63,     9,    10,    11,    12,    13,    14,   338,    61,    62,
      22,    23,    63,    66,    67,   247,    59,    61,    71,    59,
      63,   100,   101,    63,    55,    22,    23,    24,    25,    61,
      38,    39,    22,    23,    24,    25,    63,   269,    22,    23,
     371,    22,    22,    23,    24,    25,    55,    55,    22,    23,
      22,    63,    59,   132,    62,   165,    63,   167,    66,    67,
      22,    55,    59,    71,   271,   144,    63,     9,    10,    11,
      12,    13,    14,    63,    62,   154,    55,    61,   157,    59,
     159,   412,    63,    63,   136,    59,   165,    59,   167,    63,
      22,    63,   152,   153,    22,    23,    38,    39,    55,    56,
      55,    63,   433,   182,    22,    23,    24,    25,    22,   169,
      62,   190,   191,   192,   193,   194,   195,    22,    23,    57,
      62,    63,    62,   454,    66,    67,    58,    59,    22,    71,
      58,    59,   211,   212,   213,   214,   215,   216,    59,    55,
      56,    55,    63,    61,    60,   476,    22,    23,    24,    25,
      55,    27,    28,   232,   233,   234,   235,   236,   237,    55,
      56,    55,   369,    22,    23,    24,    25,    55,    27,    28,
      22,    23,    24,    25,    55,   254,   255,   256,   257,   258,
     259,     9,    10,    11,    12,    13,    14,    63,    64,    65,
      66,    67,   271,   272,   273,   402,   275,   276,    59,    58,
      59,    55,    63,     9,   283,    64,    65,    66,    67,    61,
      38,    39,    63,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,    61,
      58,    22,    23,    22,    62,   314,    59,    60,    66,    67,
      63,    58,    59,    71,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      22,    23,    24,    25,    58,    59,   345,    58,    59,    58,
      59,     3,     4,     5,     6,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,    63,
     369,   370,   371,   403,    59,     9,    58,    59,    63,   378,
      17,    22,    23,    24,    25,    55,    27,    28,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,    19,   402,   403,    10,    23,    22,    23,    24,
      25,    61,   411,   412,    55,    32,     9,    10,    11,    12,
      13,    14,    55,    64,    65,    66,    67,    68,    69,    70,
      47,    48,    59,   432,   433,    59,    63,    54,    57,    63,
      63,   471,    59,    58,    59,    38,    39,    63,    59,    59,
      67,    68,    63,    63,   453,   454,    57,    22,    23,    24,
      25,    55,    56,   493,    55,    56,    60,    59,    62,    62,
      63,    63,   471,    66,    67,    59,   475,   476,    71,    63,
      62,    59,    63,   100,   101,    63,    22,    23,    24,    25,
      55,    27,    28,     1,   493,     3,     4,     5,     6,    55,
      56,     9,    10,    11,    12,    13,    14,    15,    55,    17,
      18,    19,    20,    59,    57,   132,    61,    63,    22,    23,
      24,    25,    58,    59,    58,    59,    57,   144,    64,    65,
      38,    39,    59,    55,    59,    59,    63,   154,    63,    63,
     157,     1,   159,     3,     4,     5,     6,    55,   165,    57,
     167,    55,    58,    58,    62,    55,    63,     6,    66,    67,
      63,    63,    63,    71,    63,   182,    22,    23,    24,    25,
      17,    27,    28,   190,   191,   192,   193,   194,   195,     0,
       1,    63,     3,     4,     5,     6,    61,    22,    23,    24,
      25,    61,    27,    28,   211,   212,   213,   214,   215,   216,
      56,    63,    58,    59,    60,    63,    62,    61,    64,    65,
      66,    67,    68,    69,    70,   232,   233,   234,   235,   236,
     237,    56,    61,    63,    59,    60,    63,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    61,   254,   255,   256,
     257,   258,   259,     0,     1,    61,     3,     4,     5,     6,
      61,    61,    17,    61,   271,   272,   273,   136,   275,   276,
      -1,    -1,    22,    23,    24,    25,   283,    27,    28,     9,
      10,    11,    12,    13,    14,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    -1,    -1,    -1,    -1,    55,    -1,   314,    38,    39,
      -1,    -1,    -1,    -1,    64,    65,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    62,    63,    -1,    -1,    66,    67,   345,     0,
       1,    71,     3,     4,     5,     6,    -1,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,    -1,   369,   370,   371,     1,    -1,     3,     4,     5,
       6,   378,    -1,    22,    23,    24,    25,    -1,    27,    28,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,    19,   402,   403,    -1,     9,    10,
      11,    12,    13,    14,   411,   412,    55,    32,     9,    10,
      11,    12,    13,    14,    -1,    64,    65,    66,    67,    68,
      69,    70,    47,    48,    -1,   432,   433,    38,    39,    54,
      22,    23,    24,    25,    -1,    27,    28,    38,    39,    -1,
      -1,    -1,    67,    68,    -1,    -1,   453,   454,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    62,    63,    -1,   471,    66,    67,    59,   475,   476,
      71,    63,    64,    65,    -1,   100,   101,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,   493,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,     9,    10,    11,    12,    13,    14,   132,     9,    10,
      11,    12,    13,    14,    -1,    -1,    38,    39,    -1,   144,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,   154,
      38,    39,    -1,    55,    -1,    57,    58,    38,    39,    -1,
      62,    -1,    -1,    -1,    66,    67,    -1,     0,     1,    71,
       3,     4,     5,     6,    62,    63,    -1,   182,    66,    67,
      -1,    62,    63,    71,    -1,    66,    67,   192,    -1,    -1,
      71,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,   213,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,   234,
      38,    39,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      58,   256,    47,    48,    62,    58,    59,    -1,    66,    67,
      -1,    64,    65,    71,    -1,    -1,    -1,   272,   273,    -1,
     275,   276,    67,    68,    22,    23,    24,    25,   283,    27,
      28,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    86,    87,    88,     9,    10,    11,    12,    13,    14,
      -1,   306,   307,    -1,    -1,   100,   101,    55,    56,   314,
      38,    39,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    38,    39,    22,    23,    24,    25,    -1,
      27,    28,   337,   338,    62,    63,    -1,   132,    66,    67,
     345,    -1,    -1,    71,    -1,    -1,    -1,    62,    63,   144,
      -1,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,   154,
      -1,    58,    59,    -1,    -1,   370,   371,    64,    65,    66,
      67,     0,     1,   378,     3,     4,     5,     6,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,   182,    22,    23,
      24,    25,    -1,    27,    28,   190,   191,   192,   193,   194,
     195,    -1,    -1,    -1,    -1,    -1,   411,   412,    -1,    22,
      23,    24,    25,    -1,    27,    28,   211,   212,   213,   214,
     215,   216,    56,    -1,    58,    59,    -1,   432,   433,    -1,
      64,    65,    66,    67,    68,    69,    70,   232,   233,   234,
     235,   236,   237,    56,    -1,    58,    59,    -1,   453,   454,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,   254,
     255,   256,   257,   258,   259,    -1,    -1,    -1,    -1,    -1,
     475,   476,    -1,    -1,    -1,    -1,    -1,   272,   273,    -1,
     275,   276,    -1,    -1,    22,    23,    24,    25,   283,    27,
      28,     9,    10,    11,    12,    13,    14,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    -1,    -1,    -1,    -1,    55,    -1,   314,
      38,    39,    -1,    -1,    -1,    -1,    64,    65,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    62,    63,    -1,    -1,    66,    67,
     345,     0,     1,    71,     3,     4,     5,     6,    -1,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,    32,    -1,   370,   371,     9,    10,    11,
      12,    13,    14,   378,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,    38,    39,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,   411,   412,     0,     1,
      -1,     3,     4,     5,     6,    84,    85,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    67,    -1,   432,   433,    71,
      -1,   100,   101,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,     1,    -1,     3,     4,     5,     6,   453,   454,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,   132,    38,    39,    -1,    -1,    -1,    -1,
     475,   476,    -1,    -1,    -1,   144,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,   154,    -1,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    55,    71,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,   182,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,   192,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,     9,    10,    11,
      12,    13,    14,    -1,   213,    -1,    22,    23,    24,    25,
      -1,    27,    28,    38,    39,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,   234,    38,    39,    -1,    -1,
      55,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    55,
      -1,    66,    67,    -1,    38,    39,    71,   256,    64,    65,
      62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,   272,   273,    -1,   275,   276,    62,    -1,
      -1,    -1,    66,    67,   283,     0,     1,    71,     3,     4,
       5,     6,    -1,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    -1,    -1,    -1,   305,   306,   307,    -1,
      -1,    -1,    -1,     0,     1,   314,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,    -1,    -1,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,   345,     9,    10,    11,
      12,    13,    14,    -1,    -1,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    -1,    -1,    32,   367,    -1,
      -1,   370,   371,    -1,    -1,    -1,    38,    39,    -1,   378,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,    -1,    -1,
      62,   400,    67,    68,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,   411,   412,    -1,    80,    81,    82,    83,     0,
       1,    -1,     3,     4,     5,     6,    22,    23,    24,    25,
      -1,    27,    28,   432,   433,   100,   101,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,     0,     1,    -1,     3,
       4,     5,     6,    -1,   453,   454,     9,    10,    11,    12,
      13,    14,    58,    59,    60,    -1,    62,   132,    64,    65,
      66,    67,    68,    69,    70,    -1,   475,   476,    61,   144,
      -1,    64,    65,    66,    67,    38,    39,    -1,     1,   154,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,   182,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,   192,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    55,    -1,    57,    58,    -1,    -1,   213,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    32,    71,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    62,    -1,    -1,    -1,    66,
      67,   256,    67,    68,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    78,    79,    -1,    -1,   272,   273,    -1,
     275,   276,    -1,    -1,    -1,    59,    -1,    -1,   283,    63,
      64,    65,    66,    67,    -1,   100,   101,   292,   293,   294,
     295,   296,   297,   298,   299,    -1,    63,    64,    65,    -1,
     305,   306,   307,    -1,    -1,    22,    23,    24,    25,   314,
      27,    28,    -1,    -1,    -1,    -1,    -1,   132,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,    -1,   144,
      -1,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,   154,
     345,    58,    59,    -1,    -1,    -1,    -1,    64,    65,   354,
     355,   356,   357,   358,   359,   360,   361,    -1,    22,    23,
      24,    25,   367,    27,    28,   370,   371,   182,    -1,    22,
      23,    24,    25,   378,    27,    28,    -1,   192,    -1,    -1,
      -1,    -1,   387,   388,   389,   390,   391,   392,   393,   394,
      -1,    22,    23,    24,    25,   400,    27,    28,   213,    63,
      64,    65,    55,    56,    -1,    -1,   411,   412,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,   234,
      22,    23,    24,    25,    55,    27,    28,   432,   433,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    -1,    32,     0,
       1,   256,     3,     4,     5,     6,    -1,    -1,   453,   454,
      -1,    -1,    -1,    47,    48,    -1,    -1,   272,   273,    61,
     275,   276,    64,    65,    66,    67,    -1,    -1,   283,    -1,
     475,   476,    -1,    67,    68,    -1,    -1,   292,   293,   294,
     295,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
     305,   306,   307,    -1,    -1,    -1,    -1,    -1,    -1,   314,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   323,   324,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,   337,   338,     9,    10,    11,    12,    13,    14,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   354,
     355,   356,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,   367,    38,    39,   370,   371,    -1,    -1,    -1,
     154,    -1,    -1,   378,    -1,    22,    23,    24,    25,    -1,
      27,    28,   387,   388,   389,   390,    -1,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,   400,    71,    -1,   182,    22,
      23,    24,    25,    -1,    27,    28,   411,   412,   192,    56,
      -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,   432,   433,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    32,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   453,   454,
     234,    -1,    -1,    47,    48,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     475,   476,   256,    67,    68,     9,    10,    11,    12,    13,
      14,    -1,    76,    -1,    -1,    -1,    38,    39,   272,   273,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,    -1,   283,
      -1,    -1,    -1,    -1,    38,    39,   100,   101,   292,   293,
      62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      -1,   305,   306,   307,    -1,    -1,    -1,    -1,    62,    -1,
     314,    -1,    66,    67,    -1,    -1,    -1,    71,   132,   323,
     324,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
     144,    -1,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
     154,   345,    -1,    22,    23,    24,    25,    -1,    27,    28,
     354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,   367,    64,    65,   370,   371,   182,    -1,
      22,    23,    24,    25,   378,    27,    28,    56,   192,    58,
      59,    -1,    -1,   387,   388,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,   400,    27,    28,   213,
      -1,    -1,    -1,    55,    56,    -1,    -1,   411,   412,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    -1,
     234,    -1,    -1,    -1,    -1,    55,    56,    -1,   432,   433,
      32,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    -1,   256,    -1,    -1,    47,    48,    -1,    -1,   453,
     454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,   273,
      -1,   275,   276,    -1,    -1,    67,    68,    -1,    -1,   283,
      -1,   475,   476,    -1,    22,    23,    24,    25,   292,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,   305,   306,   307,    -1,    -1,    -1,    -1,   100,   101,
     314,    22,    23,    24,    25,    -1,    27,    28,    -1,   323,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
     132,   345,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
     354,    62,   144,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,   154,   367,    -1,    -1,   370,   371,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    22,    23,    24,    25,    -1,
      27,    28,    -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    22,    23,    24,    25,   400,    27,    28,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,   411,   412,    22,
      23,    24,    25,    -1,    27,    28,    63,    64,    65,    66,
      67,   213,    -1,    -1,    -1,    -1,    56,    -1,   432,   433,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    -1,   234,    56,    -1,    58,    59,    -1,    -1,   453,
     454,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
      -1,   475,   476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,   273,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,
      -1,   283,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,   305,   306,   307,    -1,    -1,    -1,    -1,
      -1,    -1,   314,    22,    23,    24,    25,    -1,    27,    28,
      38,    39,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,   336,   337,   338,    55,    -1,    57,
      58,    -1,    -1,   345,    62,    -1,    -1,    56,    66,    67,
      59,    -1,    -1,    71,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    61,    -1,   367,    64,    65,   370,   371,
      -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,   400,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,
     412,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     432,   433,    55,    -1,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    -1,
      -1,   453,   454,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,   475,   476,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    61,    -1,    62,    64,    65,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,     1,    71,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,
      -1,    38,    39,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    56,    27,    28,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    56,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      56,    27,    28,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      56,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    56,    27,
      28,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    56,    -1,    -1,    59,    -1,    -1,    -1,    63,
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
      68,    69,    70,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
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
      70,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    22,
      23,    24,    25,    61,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    56,    27,    28,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    22,
      23,    24,    25,    61,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    56,    22,    23,    24,    25,    61,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    -1,    22,
      23,    24,    25,    56,    27,    28,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    56,    22,
      23,    24,    25,    61,    27,    28,    64,    65,    66,    67,
      68,    69,    70,    56,    22,    23,    24,    25,    61,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    56,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      56,    22,    23,    24,    25,    61,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    56,    22,    23,
      24,    25,    61,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      55,    22,    23,    24,    25,    -1,    27,    28,    -1,    64,
      65,    66,    67,    68,    69,    70,    -1,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    64,
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
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    55,    22,    23,    24,    25,    -1,    27,    28,
      -1,    64,    65,    66,    67,    68,    69,    70,    55,    22,
      23,    24,    25,    -1,    27,    28,    -1,    64,    65,    66,
      67,    68,    69,    70,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    22,    23,    24,    25,    61,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    63,
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
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    63,    64,    65,    66,    67,
      68,    69,    70,    63,    64,    65,    66,    67,    68,    69,
      70,    63,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    61,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    61,    55,    -1,    64,    65,    66,
      67,    68,    69,    70,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    55,    22,    23,    24,    25,    -1,
      27,    28,    -1,    64,    65,    66,    67,    68,    69,    70,
      63,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    61,    27,    28,    64,    65,    66,    67,    68,
      69,    70,    61,    55,    -1,    64,    65,    66,    67,    68,
      69,    70,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    55,    63,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    61,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    59,    -1,    -1,    55,    63,    64,    65,
      66,    67,    -1,    55,    -1,    64,    65,    66,    67,    -1,
      55,    -1,    64,    65,    66,    67,    -1,    55,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    64,    65,    66,    67,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    63,    64,    65,    66,    67,
      61,    -1,    -1,    64,    65,    66,    67,    61,    -1,    -1,
      64,    65,    66,    67,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      59,    -1,    -1,    -1,    63,    64,    65,    59,    -1,    -1,
      -1,    63,    64,    65,    -1,    -1,    -1,    -1,    63,    64,
      65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    73,    74,    75,    76,
      77,    79,   105,    55,    57,    86,     0,    74,    55,    56,
      56,     9,    58,    87,     9,    10,    11,    12,    13,    14,
      38,    39,    62,    66,    67,    71,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    10,    57,    60,    62,
       1,    15,    17,    18,    19,    20,    55,    75,    86,    88,
      89,    90,    91,    92,    93,    94,   105,    60,    62,   101,
     102,   101,    94,   101,   101,   101,    22,    23,    24,    25,
      27,    28,    64,    65,    66,    67,    68,    69,    70,    56,
      78,    94,    61,    94,     1,     3,    84,    85,   105,    55,
      62,    62,    86,    94,    62,    55,    58,    89,    55,    55,
      55,     9,    94,    63,    94,   104,    63,    96,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   101,
      95,    58,    59,    61,    63,    63,    59,    63,     9,    94,
      94,    17,    10,    61,    59,    63,    58,    94,    57,    85,
      57,    60,    63,    63,    62,    63,    94,    81,    83,    80,
      82,    61,    86,    86,    94,    88,    58,    88,    58,    16,
      63,    58,    58,    86,    55,    57,     9,    10,    11,    12,
      13,    14,    62,   103,     9,    10,    11,    12,    13,    14,
      38,    39,    62,    66,    67,    71,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     9,    10,    11,    12,    13,
      14,    38,    39,    62,    66,    67,    71,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     9,    10,    11,    12,
      13,    14,    38,    39,    62,    66,    67,    71,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    57,     9,    10,
      11,    12,    13,    14,    38,    39,    62,    66,    67,    71,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    57,
      58,    87,    60,    62,    94,    60,    62,     9,    10,    11,
      12,    13,    14,    62,   101,   102,   103,   101,    94,   101,
     101,   101,    22,    23,    24,    25,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    56,    60,    62,     9,    10,
      11,    12,    13,    14,    62,   101,   102,   103,   101,    94,
     101,   101,   101,    22,    23,    24,    25,    27,    28,    64,
      65,    66,    67,    68,    69,    70,    56,    60,    62,     9,
      10,    11,    12,    13,    14,    62,   101,   102,   103,   101,
      94,   101,   101,   101,    22,    23,    24,    25,    27,    28,
      64,    65,    66,    67,    68,    69,    70,    56,    58,    87,
      60,    62,     9,    10,    11,    12,    13,    14,    62,   101,
     102,   103,   101,    94,   101,   101,   101,    22,    23,    24,
      25,    27,    28,    64,    65,    66,    67,    68,    69,    70,
      56,    58,    87,    88,    94,    63,   104,    63,    94,    63,
     104,    60,    62,    94,    63,    96,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   101,    95,    94,
      63,   104,    60,    62,    94,    63,    96,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,    95,
      94,    63,   104,    60,    62,    94,    63,    96,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   101,
      95,    88,    94,    63,   104,    60,    62,    94,    63,    96,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     101,   101,    95,    88,    58,    61,    63,    61,    63,    94,
      63,   104,    63,    61,    63,    94,    63,   104,    63,    61,
      63,    94,    63,   104,    63,    58,    61,    63,    94,    63,
     104,    63,    58,    61,    63,    61,    63,    61,    63,    61,
      63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    78,    78,    80,
      79,    81,    79,    82,    79,    83,    79,    79,    84,    84,
      85,    85,    86,    87,    86,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     1,     1,
       3,     5,     6,     3,     2,     5,     4,     1,     3,     0,
       9,     0,     9,     0,     8,     0,     8,     5,     1,     3,
       2,     4,     2,     0,     4,     1,     2,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     4,     5,     7,     5,
       7,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     2,
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
  switch (yytype)
    {
    case 9: /* IDENTIFIER  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2739 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2745 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2751 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2757 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2763 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2769 "src/parser.c"
        break;

    case 73: /* declaration_list  */
#line 67 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2775 "src/parser.c"
        break;

    case 74: /* declaration  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2781 "src/parser.c"
        break;

    case 75: /* init_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2787 "src/parser.c"
        break;

    case 76: /* var_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2793 "src/parser.c"
        break;

    case 77: /* arr_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2799 "src/parser.c"
        break;

    case 78: /* initializer_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2805 "src/parser.c"
        break;

    case 79: /* function_definition  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2811 "src/parser.c"
        break;

    case 84: /* argument_list  */
#line 66 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2817 "src/parser.c"
        break;

    case 85: /* argument  */
#line 66 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2823 "src/parser.c"
        break;

    case 86: /* compound_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2829 "src/parser.c"
        break;

    case 88: /* statement_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2835 "src/parser.c"
        break;

    case 89: /* statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2841 "src/parser.c"
        break;

    case 91: /* conditional_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2847 "src/parser.c"
        break;

    case 92: /* iteration_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2853 "src/parser.c"
        break;

    case 93: /* return_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2859 "src/parser.c"
        break;

    case 94: /* assignment_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2865 "src/parser.c"
        break;

    case 95: /* logical_or_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2871 "src/parser.c"
        break;

    case 96: /* logical_and_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2877 "src/parser.c"
        break;

    case 97: /* equality_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2883 "src/parser.c"
        break;

    case 98: /* relational_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2889 "src/parser.c"
        break;

    case 99: /* additive_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2895 "src/parser.c"
        break;

    case 100: /* multiplicative_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2901 "src/parser.c"
        break;

    case 101: /* unary_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2907 "src/parser.c"
        break;

    case 102: /* postfix_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2913 "src/parser.c"
        break;

    case 103: /* primary_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2919 "src/parser.c"
        break;

    case 104: /* argument_call_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2925 "src/parser.c"
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
#line 109 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3191 "src/parser.c"
    break;

  case 3:
#line 110 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3197 "src/parser.c"
    break;

  case 4:
#line 114 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3203 "src/parser.c"
    break;

  case 5:
#line 115 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3209 "src/parser.c"
    break;

  case 6:
#line 116 "src/language.y"
    { (yyval.node) = NULL; }
#line 3215 "src/parser.c"
    break;

  case 7:
#line 117 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3221 "src/parser.c"
    break;

  case 8:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3227 "src/parser.c"
    break;

  case 9:
#line 122 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3233 "src/parser.c"
    break;

  case 10:
#line 123 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3239 "src/parser.c"
    break;

  case 11:
#line 124 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3245 "src/parser.c"
    break;

  case 12:
#line 125 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3251 "src/parser.c"
    break;

  case 13:
#line 126 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3257 "src/parser.c"
    break;

  case 14:
#line 130 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3263 "src/parser.c"
    break;

  case 15:
#line 134 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval),-1); free_label((yyvsp[-3].sval)); tc_arr_decl((yyval.node)); }
#line 3269 "src/parser.c"
    break;

  case 16:
#line 135 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-3].ival),(yyvsp[-2].sval),-1); free_label((yyvsp[-2].sval)); }
#line 3275 "src/parser.c"
    break;

  case 17:
#line 140 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3281 "src/parser.c"
    break;

  case 18:
#line 141 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3287 "src/parser.c"
    break;

  case 19:
#line 145 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3293 "src/parser.c"
    break;

  case 20:
#line 145 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3299 "src/parser.c"
    break;

  case 21:
#line 146 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3305 "src/parser.c"
    break;

  case 22:
#line 146 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3311 "src/parser.c"
    break;

  case 23:
#line 147 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3317 "src/parser.c"
    break;

  case 24:
#line 147 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3323 "src/parser.c"
    break;

  case 25:
#line 148 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3329 "src/parser.c"
    break;

  case 26:
#line 148 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3335 "src/parser.c"
    break;

  case 27:
#line 149 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3341 "src/parser.c"
    break;

  case 28:
#line 153 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3347 "src/parser.c"
    break;

  case 29:
#line 154 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3353 "src/parser.c"
    break;

  case 30:
#line 158 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3359 "src/parser.c"
    break;

  case 31:
#line 159 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3365 "src/parser.c"
    break;

  case 32:
#line 163 "src/language.y"
    { (yyval.node) = NULL; }
#line 3371 "src/parser.c"
    break;

  case 33:
#line 164 "src/language.y"
    { begin(NULL); }
#line 3377 "src/parser.c"
    break;

  case 34:
#line 164 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3383 "src/parser.c"
    break;

  case 35:
#line 168 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3389 "src/parser.c"
    break;

  case 36:
#line 169 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3395 "src/parser.c"
    break;

  case 37:
#line 173 "src/language.y"
    { (yyval.node) = NULL; }
#line 3401 "src/parser.c"
    break;

  case 38:
#line 174 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3407 "src/parser.c"
    break;

  case 39:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3413 "src/parser.c"
    break;

  case 40:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3419 "src/parser.c"
    break;

  case 41:
#line 177 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3425 "src/parser.c"
    break;

  case 42:
#line 178 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3431 "src/parser.c"
    break;

  case 43:
#line 179 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3437 "src/parser.c"
    break;

  case 44:
#line 180 "src/language.y"
    { (yyval.node) = NULL; }
#line 3443 "src/parser.c"
    break;

  case 45:
#line 181 "src/language.y"
    { (yyval.node) = NULL; }
#line 3449 "src/parser.c"
    break;

  case 46:
#line 185 "src/language.y"
    { printf("%s\n", (yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3455 "src/parser.c"
    break;

  case 47:
#line 188 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3461 "src/parser.c"
    break;

  case 48:
#line 189 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3467 "src/parser.c"
    break;

  case 49:
#line 193 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3473 "src/parser.c"
    break;

  case 50:
#line 194 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3479 "src/parser.c"
    break;

  case 51:
#line 198 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3485 "src/parser.c"
    break;

  case 52:
#line 199 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3491 "src/parser.c"
    break;

  case 53:
#line 203 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3497 "src/parser.c"
    break;

  case 54:
#line 204 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3503 "src/parser.c"
    break;

  case 55:
#line 208 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3509 "src/parser.c"
    break;

  case 56:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3515 "src/parser.c"
    break;

  case 57:
#line 213 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3521 "src/parser.c"
    break;

  case 58:
#line 214 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3527 "src/parser.c"
    break;

  case 59:
#line 218 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3533 "src/parser.c"
    break;

  case 60:
#line 219 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3539 "src/parser.c"
    break;

  case 61:
#line 220 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3545 "src/parser.c"
    break;

  case 62:
#line 224 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3551 "src/parser.c"
    break;

  case 63:
#line 225 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3557 "src/parser.c"
    break;

  case 64:
#line 226 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3563 "src/parser.c"
    break;

  case 65:
#line 227 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3569 "src/parser.c"
    break;

  case 66:
#line 228 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3575 "src/parser.c"
    break;

  case 67:
#line 232 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3581 "src/parser.c"
    break;

  case 68:
#line 233 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3587 "src/parser.c"
    break;

  case 69:
#line 234 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3593 "src/parser.c"
    break;

  case 70:
#line 238 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3599 "src/parser.c"
    break;

  case 71:
#line 239 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3605 "src/parser.c"
    break;

  case 72:
#line 240 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3611 "src/parser.c"
    break;

  case 73:
#line 241 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3617 "src/parser.c"
    break;

  case 74:
#line 245 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3623 "src/parser.c"
    break;

  case 75:
#line 246 "src/language.y"
    { (yyval.node) = node_init(OP_POS, "+",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3629 "src/parser.c"
    break;

  case 76:
#line 247 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3635 "src/parser.c"
    break;

  case 77:
#line 248 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3641 "src/parser.c"
    break;

  case 78:
#line 249 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3647 "src/parser.c"
    break;

  case 79:
#line 250 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3653 "src/parser.c"
    break;

  case 80:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3659 "src/parser.c"
    break;

  case 81:
#line 255 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY); free_label((yyvsp[-3].sval));}
#line 3665 "src/parser.c"
    break;

  case 82:
#line 256 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval));}
#line 3671 "src/parser.c"
    break;

  case 83:
#line 257 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval));}
#line 3677 "src/parser.c"
    break;

  case 84:
#line 261 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3683 "src/parser.c"
    break;

  case 85:
#line 262 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3689 "src/parser.c"
    break;

  case 86:
#line 263 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3695 "src/parser.c"
    break;

  case 87:
#line 264 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3701 "src/parser.c"
    break;

  case 88:
#line 265 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3707 "src/parser.c"
    break;

  case 89:
#line 266 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3713 "src/parser.c"
    break;

  case 90:
#line 267 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3719 "src/parser.c"
    break;

  case 91:
#line 271 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3725 "src/parser.c"
    break;

  case 92:
#line 272 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3731 "src/parser.c"
    break;

  case 93:
#line 276 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3737 "src/parser.c"
    break;

  case 94:
#line 277 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3743 "src/parser.c"
    break;

  case 95:
#line 278 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3749 "src/parser.c"
    break;

  case 96:
#line 279 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3755 "src/parser.c"
    break;


#line 3759 "src/parser.c"

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
#line 282 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
