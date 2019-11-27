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
#define YYLAST   8087

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

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
     123,   124,   125,   126,   130,   134,   138,   139,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   151,   152,   156,
     157,   161,   162,   162,   166,   167,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   183,   186,   187,   191,   192,
     196,   197,   201,   202,   206,   207,   211,   212,   216,   217,
     218,   222,   223,   224,   225,   226,   230,   231,   232,   236,
     237,   238,   239,   243,   244,   245,   246,   247,   248,   252,
     253,   254,   255,   259,   260,   261,   262,   263,   264,   265,
     269,   270,   274,   275,   276,   277
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

#define YYPACT_NINF -270

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-270)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     495,    93,     1,    11,    38,    69,   227,   557,   -48,   155,
     242,   707,    86,   875,  2718,   953,  -270,  1197,  1345,   973,
      -2,   461,  1377,  4124,  1782,  1954,  2144,  2334,  4718,  4725,
    1090,  1090,  1295,  1090,  1090,  1090,    49,    45,   132,   421,
     237,  1043,   338,   719,  4774,  4781,    70,  1379,  1453,   732,
     101,    73,    76,    96,    32,   116,  2793,   128,  2824,  2893,
    2924,   133,  2993,  3024,   144,   163,   188,  1453,   119,  6513,
    6529,  6536,   160,  6585,  6592,  6608,  1090,  1090,  1090,  1090,
    1090,  1090,  1090,  1090,  1090,  1090,  1090,  1090,  1090,  1090,
     241,   273,   168,   178,     6,   -36,   263,   245,  3093,  1295,
    1295,   304,   278,   346,  3124,  1528,  3193,  3224,  3293,  3324,
     299,   287,  4797,   294,   363,  4832,   154,   467,   618,  1765,
    1348,  7864,  7871,  7878,  6642,  6658,  6665,  6714,  6721,   114,
     309,    51,   381,  1613,   327,   666,   333,   355,   348,   354,
     339,   356,  4848,  1459,  4855,   392,   521,  3393,   369,  3424,
     402,   408,   413,  1295,   442,   372,  4124,   446,  4124,   456,
     391,   846,  3493,   464,  3524,  1883,  3593,  2119,   413,   469,
    2150,  2247,  3624,  3693,  3724,  2356,  6737,  6771,  6787,  6794,
    6843,  1295,  6850,  1976,  4904,  4919,  4934,  4983,  4998,  1544,
    1544,  1295,  1544,  1544,  1544,    28,     3,     9,    -6,  6522,
    2677,  6858,  5013,  5062,   543,  1114,  2510,  4143,  4160,  4209,
    1630,  1630,  1295,  1630,  1630,  1630,   167,   121,   142,   913,
     444,  5075,  5088,  4224,  4273,  2166,  5137,  5152,  5167,  5187,
    5202,  2272,  2272,  1295,  2272,  2272,  2272,    54,    88,   197,
     966,  7885,  6868,  6917,  5217,  5237,  3793,  1685,  4288,  4337,
    4352,  4367,  4416,  2489,  2489,  1295,  2489,  2489,  2489,    14,
      16,    60,   776,  1030,  5252,  5267,  4431,  4446,  3824,  3893,
    4124,  1453,   257,   470,  1453,   386,   180,  6925,  6933,  6941,
    6949,  6998,  1295,  7006,  7014,  7022,  7030,   484,  7079,  7087,
    7095,  1544,  1544,  1544,  1544,  1544,  1544,  1544,  1544,  1544,
    1544,  1544,  1544,  1544,  1544,  1453,   468,  2569,  5316,  5329,
    5342,  5391,  5404,  1295,  5417,  5466,  5479,  5492,   486,  5541,
    5554,  5567,  1630,  1630,  1630,  1630,  1630,  1630,  1630,  1630,
    1630,  1630,  1630,  1630,  1630,  1630,  1453,   474,   561,  7105,
    7154,  7164,  7174,  7184,  1295,  7233,  7243,  7253,  7263,   496,
    7312,  7322,  7332,  2272,  2272,  2272,  2272,  2272,  2272,  2272,
    2272,  2272,  2272,  2272,  2272,  2272,  2272,   502,  4124,  1453,
     638,  2596,  5616,  5628,  5640,  5689,  5701,  1295,  5713,  5762,
    5774,  5786,   501,  5835,  5847,  5859,  2489,  2489,  2489,  2489,
    2489,  2489,  2489,  2489,  2489,  2489,  2489,  2489,  2489,  2489,
    1419,  4124,  3924,   471,  7339,   401,  7388,   508,  5908,   466,
    1453,   757,   518,  5923,    98,    83,  1840,  1943,  7893,  7939,
    7946,  7953,  7396,  7404,  7412,  7422,  7471,    64,   529,  4495,
     479,  1453,   767,   551,  4510,   436,   416,  1220,  1890,  1666,
    7744,  7790,  7800,  5938,  5987,  6000,  6013,  6062,   271,   531,
    6077,   485,  1453,   859,   575,  6112,   137,   266,  2892,  2992,
    7960,  7967,  8013,  8020,  7481,  7491,  7501,  7550,  7560,    80,
    3993,   545,  4559,   487,  1453,   880,   611,  4574,    29,   364,
     982,  2080,  1482,  2068,  7809,  7818,  6089,  6138,  6161,  6187,
    6210,    34,  4024,  4093,  7567,  7585,  6236,  6259,   563,  7578,
     519,  7634,  4589,  4638,   617,  6285,   528,  6308,  6334,  6357,
     619,  7644,   541,  7654,   662,  4653,  4702,   620,  6369,   576,
    6383,  1761,  7662,  7711,  6432,  6445,  7721,  7731,  6457,  6506
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,   696,    24,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,   568,     0,  -172,  -144,   -50,  -270,  -270,
    -270,  -270,   743,  2340,  2173,  1983,  1793,  1603,  1268,   933,
     -19,   362,  -269,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    57,     9,    10,    90,    11,   158,   156,
     159,   157,    95,    96,    58,    23,    59,    60,    61,    62,
      63,    64,    65,    37,    38,    39,    40,    41,    42,    43,
      70,   182,   114,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    15,   270,   405,    44,    12,   409,    18,    46,   106,
     -92,    12,   164,   202,   166,   -92,   -58,   -58,   -58,   -58,
     -93,   295,   296,   135,     8,   -54,   292,   136,   223,   244,
       8,   -56,   -56,   293,   294,    44,   386,   430,   -54,   387,
      44,    24,    25,    26,    27,    28,    29,   -94,   244,   266,
     291,   -55,   387,   101,    97,    47,   386,   -58,   297,   298,
     204,   205,   206,   207,   208,   209,   -54,    76,   451,   134,
      30,    31,   -56,   -52,   368,   -54,   353,   -52,   -95,   -54,
     202,   202,   -56,   -56,   388,   389,   291,   -50,   -55,   210,
     211,   -52,   -55,   -53,    32,    21,   401,   -53,    33,    34,
     -52,   473,   353,    35,   -10,   -57,   -57,   293,   294,   145,
     -54,   354,   223,   212,   106,   -52,   106,   213,   214,   -56,
     -55,   292,   215,   -56,   266,   -13,   402,   -53,   247,   248,
     249,   250,   251,   252,   202,    99,    76,    44,   100,    44,
      97,   -53,   500,   -54,   323,    44,   -57,    44,    13,   -54,
      14,   161,   162,   246,   -54,    77,    98,   253,   254,   -55,
     354,   -55,   202,   506,   -56,   -56,   324,   325,   172,   -53,
     284,   284,   202,   284,   284,   284,   -55,    77,   103,   -54,
     -54,   255,   112,   104,   512,   256,   257,   -54,   107,   322,
     258,   315,   315,   202,   315,   315,   315,   110,   -55,   108,
     -56,   -56,   -83,   -83,   -83,   -83,   519,   -83,   -83,   -55,
      -8,    19,   346,   346,   202,   346,   346,   346,   109,   -56,
     -56,   355,   356,   115,   470,   -52,   -52,    16,     1,   132,
       2,     3,     4,     5,   379,   379,   202,   379,   379,   379,
     410,   133,   411,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    44,   244,   266,   137,   244,   266,   492,   -56,   -58,
     -58,   -58,   -58,   202,    80,    81,   247,   248,   249,   250,
     251,   252,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   244,   266,   -57,   -57,
     355,   356,   -58,   322,   202,   253,   254,    -9,    20,   130,
     131,    82,    83,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   244,   266,   255,
     404,   140,   -27,   256,   257,   202,   -27,   -57,   258,   -53,
     -53,   -16,   -16,   -51,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   142,    44,
     244,   266,   106,   -90,   -14,   -14,   141,   -90,   202,    48,
     -66,   -66,   -66,   -66,   -11,   -66,   -66,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,    45,    44,    44,   147,    45,   -57,   -57,   388,   389,
     149,   244,   266,   -66,   203,   247,   248,   249,   250,   251,
     252,   153,   -66,   -66,   -66,   -66,    86,    87,    88,   224,
     245,   151,   244,   266,   -29,   150,    45,   152,   -29,   154,
     106,    45,   143,   -57,   253,   254,   144,   -57,   -28,   245,
     267,   -91,   -28,   244,   266,   -91,   -15,   -15,   -57,   -57,
     324,   325,   106,   -56,   -56,    78,    79,   -12,   255,   408,
     -30,    44,   256,   257,   -30,   244,   266,   258,   -55,   323,
     143,   203,   203,   160,   495,   268,   -61,   -61,   -61,   -61,
     174,   -61,   -61,    44,   -57,   -57,   -56,   247,   248,   249,
     250,   251,   252,   247,   248,   249,   250,   251,   252,   -57,
     -57,    78,    79,   224,   -55,   -55,     1,   -45,     2,     3,
       4,     5,   -61,   -61,   165,   267,   253,   254,   -61,   -61,
     330,   331,   253,   254,   167,   203,   -14,   -14,    45,   -31,
      45,    48,   -57,    49,   173,   143,    45,   169,    45,   497,
     255,   429,   494,   406,   256,   257,   255,   450,   143,   258,
     256,   257,   503,   203,   143,   258,   143,   413,   509,   434,
     516,   285,   285,   203,   285,   285,   285,    -2,    -2,   455,
      -2,    -2,    -2,    -2,   477,   -83,   -83,   -83,   -83,   496,
     -83,   -83,   316,   316,   203,   316,   316,   316,   143,   -17,
     -17,   501,   523,   -83,   -83,   -83,   -83,   143,   -83,   -83,
     502,   525,   508,   347,   347,   203,   347,   347,   347,   -83,
     143,   -83,   -83,   305,   527,   306,   515,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   507,   380,   380,   203,   380,   380,
     380,   452,   -83,   453,   522,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,    45,   245,   267,   143,   245,   267,   513,   529,
     -59,   -59,   -59,   -59,   203,    80,    81,   247,   248,   249,
     250,   251,   252,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   245,   267,     2,
       3,     4,     5,   -59,   520,   203,   253,   254,   524,   -33,
     526,   528,    82,    83,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   245,   267,
     255,   472,    17,   148,   256,   257,   203,    -4,    -4,   258,
      -4,    -4,    -4,    -4,     0,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,     0,
      45,   245,   267,    93,     0,    94,     3,     4,     5,   203,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,    36,    45,    45,     0,   247,   248,   249,   250,
     251,   252,   245,   267,   -69,    72,   247,   248,   249,   250,
     251,   252,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
      91,    92,     0,   245,   267,   253,   254,   102,   -58,   -58,
     -58,   -58,     0,   390,   391,   253,   254,     0,     0,     0,
     111,   113,     0,     0,   245,   267,     0,     0,     0,   255,
     499,     0,     0,   256,   257,     0,     0,     0,   258,   255,
     505,     0,    45,   256,   257,   -58,   245,   267,   258,   -58,
     392,   393,   138,   139,     0,     0,     0,   -46,     0,   -46,
     -46,   -46,   -46,     0,    45,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   168,   -46,   -46,   -46,   -46,     0,   247,   248,
     249,   250,   251,   252,   146,    -6,    -6,     0,    -6,    -6,
      -6,    -6,     0,     0,   -46,   -46,   155,     0,     0,   247,
     248,   249,   250,   251,   252,     0,   163,   253,   254,     0,
       0,   -46,     0,   -46,   -46,     0,     0,     0,   -46,     0,
       0,     0,   -46,   -46,     0,     0,     0,   -46,   253,   254,
       0,   255,   511,     0,   273,   256,   257,     0,     0,     0,
     258,     0,     0,     0,   287,   -58,   -58,   -58,   -58,     0,
     326,   327,   255,   518,     0,     0,   256,   257,     0,     0,
       0,   258,     0,    -7,    -7,   318,    -7,    -7,    -7,    -7,
       0,     0,     0,    69,    71,   201,    73,    74,    75,     0,
       0,   -58,   -58,     0,     0,     0,   349,   328,   329,     0,
     222,   243,    24,    25,    26,    27,    28,    29,   -58,   -58,
     -58,   -58,     0,   357,   358,     0,     0,     0,   382,     0,
     243,   265,     0,     0,   -59,   -59,   -59,   -59,     0,   390,
     391,    30,    31,     0,   403,   113,     0,   407,   113,   126,
     127,   128,     0,     0,     0,   412,     0,   -58,     0,     0,
     359,   360,   201,   201,     0,    32,     0,     0,     0,    33,
      34,   -59,     0,     0,    35,   -59,   392,   393,   428,   113,
       0,     0,   -61,   -61,   -61,   -61,   433,   -61,   -61,     0,
       0,     0,     0,     0,   222,   -61,   -61,   -61,   -61,     0,
     -61,   -61,     0,     0,     0,     0,   265,     0,     0,   449,
     113,     0,     0,     0,     0,     0,   201,   454,     0,   -61,
       0,     0,     0,   -61,   -61,   -61,   394,   395,   -61,   175,
     176,   177,   178,   179,   180,     0,     0,   -61,   -61,    84,
      85,     0,   471,   113,   201,     0,     0,     0,     0,     0,
     476,     0,   283,   286,   201,   288,   289,   290,    30,    31,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   314,   317,   201,   319,   320,   321,     0,
       0,     0,   181,   498,   113,     0,    33,    34,     0,     0,
       0,    35,     0,     0,   345,   348,   201,   350,   351,   352,
     -84,     0,   -84,   -84,   504,   113,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   378,   381,   201,   383,
     384,   385,     0,     0,     0,   510,   113,    -3,    -3,     0,
      -3,    -3,    -3,    -3,   243,   265,     0,   243,   265,     0,
       0,     0,     0,     0,     0,   201,     0,   517,   113,     0,
       0,     0,     0,     0,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   424,   425,   426,   201,   243,   265,
       0,     0,   -59,   -59,   -59,   -59,   201,   326,   327,     0,
       0,     0,     0,     0,     0,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   445,   446,   447,   222,   243,
     265,     0,     0,     0,     0,     0,     0,   201,   -59,   -59,
       0,     0,     0,     0,   328,   329,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   466,   467,   468,   243,
     200,     0,   243,   265,   183,   184,   185,   186,   187,   188,
     201,     0,     0,     0,     0,   221,   242,     0,     0,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   488,
     489,   490,   265,   189,   190,   242,   264,     0,     0,     0,
       0,     0,     0,   243,   265,    -5,    -5,     0,    -5,    -5,
      -5,    -5,   124,   125,     0,     0,     0,   191,     0,     0,
       0,   192,   193,     0,   243,   265,   194,   200,   200,     0,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,   243,   265,     0,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   -64,     0,     0,     0,   243,   265,     0,
       0,   264,   -64,   -64,    84,    85,     0,   210,   211,     0,
     -31,   200,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   212,     0,     0,     0,   213,   214,     0,     0,   200,
     215,     0,     0,     0,     0,     0,     0,   -31,   -31,   200,
       0,     0,   225,   226,   227,   228,   229,   230,   247,   248,
     249,   250,   251,   252,   -31,     0,   -31,   -31,     0,     0,
     200,   -31,     0,     0,     0,   -31,   -31,     0,     0,     0,
     -31,   231,   232,     0,     0,     0,     0,   253,   254,     0,
       0,   200,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,
     -64,     0,     0,     0,     0,   233,     0,     0,     0,   234,
     235,   255,     0,   200,   236,   256,   257,     0,   -33,   -33,
     258,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   242,
     264,   -64,   242,   264,     0,   -64,   -64,   -64,   394,   395,
     200,     0,     0,   276,   277,   278,   279,   280,   281,   200,
     200,   200,   200,   200,   200,   200,   200,   422,   423,     0,
       0,     0,   200,   242,   264,     0,     0,     0,     0,     0,
       0,   200,   189,   190,     0,     0,     0,     0,     0,     0,
     221,   221,   221,   221,   221,   221,   221,   221,   443,   444,
       0,     0,     0,   221,   242,   264,   282,     0,     0,     0,
     192,   193,   200,   -26,   -26,   194,   -26,   -26,   -26,   -26,
       0,   242,   242,   242,   242,   242,   242,   242,   242,   464,
     465,     0,     0,     0,   242,   199,     0,   242,   264,   307,
     308,   309,   310,   311,   312,   200,     0,     0,     0,     0,
     220,   241,     0,     0,   264,   264,   264,   264,   264,   264,
     264,   264,   486,   487,     0,     0,     0,   264,   210,   211,
     241,   263,     0,     0,     0,     0,     0,     0,   242,   264,
       0,     0,     0,   120,   121,   122,   123,     0,   -64,   -64,
     -64,   -64,   313,   -64,   -64,     0,   213,   214,     0,   242,
     264,   215,   199,   199,     0,     0,     0,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,     0,     0,     0,     0,     0,
     242,   264,     0,     0,   -64,   -64,     0,     0,     0,     0,
     -64,   -64,   330,   331,   220,     0,     0,     0,     0,     0,
       0,   -83,   242,   264,   -83,   369,   263,   370,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   199,     0,     0,     0,
       0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   199,     0,     0,   -60,   -60,   -60,
     -60,     0,    80,    81,   199,     0,     0,     0,     0,   -33,
     -33,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,   199,   -33,     0,   -33,   -33,
     -60,     0,     0,   -33,     0,   198,     0,   -33,   -33,    82,
      83,     0,   -33,     0,     0,     0,   199,   -83,   -83,     0,
     219,   240,    67,     0,    68,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,   199,     0,
     240,   262,   -59,   -59,   -59,   -59,     0,   295,   296,     0,
       0,   118,   119,     0,   241,   263,     0,   241,   263,     0,
       0,     0,     0,   -25,   -25,   199,   -25,   -25,   -25,   -25,
       0,     0,   198,   198,   199,   199,   199,   199,   418,   419,
     420,   421,     0,   -59,   297,   298,     0,   199,   241,   263,
       0,     0,   -60,   -60,   -60,   -60,   199,   326,   327,     0,
       0,     0,     0,     0,   219,   220,   220,   220,   220,   439,
     440,   441,   442,     0,     0,     0,   262,     0,   220,   241,
     263,     0,     0,     0,     0,     0,   198,   199,   -60,   -60,
       0,     0,     0,     0,   328,   329,   241,   241,   241,   241,
     460,   461,   462,   463,     0,   -60,   -60,   -60,   -60,   241,
     295,   296,   241,   263,   198,     0,   -84,   -84,   -84,   -84,
     199,   -84,   -84,     0,   198,     0,     0,     0,     0,   263,
     263,   263,   263,   482,   483,   484,   485,     0,   -83,   -83,
     -83,   -83,   263,   -83,   -83,   198,   -60,   297,   298,   -84,
     -84,     0,     0,   241,   263,   197,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   198,     0,     0,     0,
     218,   239,   -83,     0,   241,   263,   274,     0,   275,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   198,     0,
     239,   261,     0,     0,     0,   241,   263,     0,     0,     0,
     117,     0,     0,     0,   240,   262,     0,   240,   262,     0,
       0,     0,     0,     0,     0,   198,     0,   241,   263,     0,
       0,     0,   197,   197,   198,   198,   416,   417,     0,     0,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   198,   240,   262,
       0,     0,   -60,   -60,   -60,   -60,   198,   390,   391,     0,
       0,     0,     0,     0,   218,   219,   219,   437,   438,   -23,
     -23,     0,   -23,   -23,   -23,   -23,   261,   -65,   219,   240,
     262,   -65,   -65,   -65,   394,   395,   197,   198,     0,   -60,
       0,     0,     0,   -60,   392,   393,   240,   240,   458,   459,
     -21,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,   240,
       0,     0,   240,   262,   197,     0,   -85,   -85,   -85,   -85,
     198,   -85,   -85,     0,   197,     0,     0,     0,     0,   262,
     262,   480,   481,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   262,   -83,   -83,   197,     0,     0,     0,   -85,
     -85,     0,     0,   240,   262,   196,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   197,     0,     0,     0,
     217,   238,   -83,     0,   240,   262,   336,   -83,   337,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   197,     0,
     238,   260,     0,     0,     0,   240,   262,   -19,   -19,   116,
     -19,   -19,   -19,   -19,   239,   261,     0,   239,   261,     0,
       0,     0,     0,     0,     0,   197,     0,   240,   262,     0,
       0,     0,   196,   196,   197,   415,     0,     0,     0,     0,
       0,   338,   339,   340,   341,   342,   343,   197,   239,   261,
       0,     0,     0,     0,     0,     0,   197,     0,     0,     0,
       0,     0,     0,     0,   217,   218,   436,     0,     0,     0,
     231,   232,     0,     0,     0,     0,   260,     0,   218,   239,
     261,     0,     0,     0,     0,     0,   196,   197,     0,     0,
       0,     0,     0,     0,   344,     0,   239,   457,   234,   235,
       0,     0,     0,   236,     0,     0,     0,     0,     0,   239,
       0,     0,   239,   261,   196,     0,   -86,   -86,   -86,   -86,
     197,   -86,   -86,     0,   196,     0,     0,     0,     0,   261,
     479,     0,   195,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   261,   -83,   -83,   196,     0,   216,   237,   -86,
     -86,     0,     0,   239,   261,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   196,   237,   259,     0,
       0,   -83,     0,     0,   239,   261,   271,     0,   272,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   196,   129,
       0,     0,     0,     0,     0,   239,   261,     0,     0,   195,
     195,     0,     0,     0,   238,   260,     0,   238,   260,     0,
       0,     0,     0,     0,     0,   196,     0,   239,   261,     0,
       0,     0,     0,     0,   414,     0,     0,     0,     0,     0,
       0,   216,     0,     0,     0,     0,     0,   196,   238,   260,
       0,     0,     0,   259,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   195,     0,   435,     0,     0,   371,   372,
     373,   374,   375,   376,     0,     0,     0,     0,   217,   238,
     260,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,   195,     0,     0,     0,     0,   456,   253,   254,     0,
       0,   195,   -85,   -85,   -85,   -85,     0,   -85,   -85,   238,
       0,     0,   238,   260,     0,     0,     0,     0,     0,     0,
     196,   377,   195,     0,     0,   256,   257,     0,     0,   478,
     258,     0,     0,     0,     0,     0,   -85,     0,   -85,   -85,
       0,     0,   260,   195,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   238,   260,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   195,   -83,   -83,     0,     0,
       0,     0,     0,     0,   238,   260,     0,     0,     0,     0,
       0,   237,   259,     0,   237,   259,     0,     0,   -83,   -83,
     -83,   -83,   195,   -83,   -83,   238,   260,   -83,   -83,   431,
       0,   432,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,   427,   237,   259,   238,   260,     0,
       0,     0,     0,   195,     0,   -83,   474,     0,   475,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,   448,   237,   259,     0,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   469,     0,     0,   237,
     259,     0,     0,     0,     0,     0,     0,   195,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   491,
     -66,   -66,   -66,   -66,   -66,   301,   302,   303,     0,     0,
     237,   259,     0,     0,     0,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   259,   -32,     0,   -32,    22,     0,     0,     0,
     -32,     0,     0,     0,   -32,   -32,     0,     0,     0,   -32,
       0,     0,   237,   259,   -36,     0,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   237,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,   -36,   -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,   -36,     0,
     -36,   -36,     0,     0,     0,   -36,     0,     0,     0,   -36,
     -36,     0,   -41,   -41,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
       0,   -41,   -41,     0,     0,     0,   -41,     0,     0,     0,
     -41,   -41,     0,     0,    50,   -41,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    51,     0,
      52,    53,    54,    55,   -59,   -59,   -59,   -59,     0,   357,
     358,     0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,
     -34,    30,    31,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,    56,     0,
     174,   105,     0,   -59,     0,    32,   359,   360,     0,    33,
      34,     0,   -34,   -34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
       0,   -34,   -34,     0,     0,     0,   -34,     0,     0,     0,
     -34,   -34,     0,     0,   -39,   -34,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -60,   -60,   -60,   -60,     0,   357,
     358,     0,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
     -40,   -39,   -39,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,     0,     0,     0,   -39,     0,
     -39,   -39,     0,   -60,     0,   -39,   359,   360,     0,   -39,
     -39,     0,   -40,   -40,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
       0,   -40,   -40,     0,     0,     0,   -40,     0,     0,     0,
     -40,   -40,     0,     0,   -44,   -40,   -44,   -44,   -44,   -44,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -44,   -44,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,   -44,     0,
     -44,   -44,     0,     0,     0,   -44,     0,     0,     0,   -44,
     -44,     0,   -37,   -37,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
       0,   -37,   -37,     0,     0,     0,   -37,     0,     0,     0,
     -37,   -37,     0,     0,   -35,   -37,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,     0,   -43,   -43,   -43,
     -43,   -35,   -35,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,     0,     0,     0,   -35,     0,
     -35,   -35,     0,     0,     0,   -35,     0,     0,     0,   -35,
     -35,     0,   -43,   -43,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
       0,   -43,   -43,     0,     0,     0,   -43,     0,     0,     0,
     -43,   -43,     0,     0,   -42,   -43,   -42,   -42,   -42,   -42,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -42,   -42,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,     0,   -42,     0,
     -42,   -42,     0,     0,     0,   -42,     0,     0,     0,   -42,
     -42,     0,   -38,   -38,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
       0,   -38,   -38,     0,     0,     0,   -38,     0,     0,     0,
     -38,   -38,     0,     0,   -20,   -38,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -20,   -20,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,     0,   -20,     0,
     -20,   -24,     0,     0,     0,   -20,     0,     0,     0,   -20,
     -20,     0,   -18,   -18,   -20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -18,
       0,   -18,   -22,     0,     0,     0,   -18,     0,     0,     0,
     -18,   -18,     0,     0,   -48,   -18,   -48,   -48,   -48,   -48,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     2,     3,     4,
       5,   -48,   -48,    24,    25,    26,    27,    28,    29,    51,
       0,    52,    53,    54,    55,     0,     0,     0,   -48,     0,
     -48,   -48,     0,     0,     0,   -48,     0,     0,     0,   -48,
     -48,     0,    30,    31,   -48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,   174,   170,     0,     0,     0,    32,     0,     0,     0,
      33,    34,     0,     0,    50,    35,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    51,     0,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,     0,   -47,   -47,   -47,
     -47,    30,    31,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,     0,     0,     0,    56,     0,
     174,   171,     0,     0,     0,    32,     0,     0,     0,    33,
      34,     0,   -47,   -47,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
       0,   -47,   -47,     0,     0,     0,   -47,     0,     0,     0,
     -47,   -47,     0,     0,   -49,   -47,   -49,   -49,   -49,   -49,
       0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -49,   -49,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,   -49,     0,
     -49,   -49,     0,     0,     0,   -49,     0,     0,     0,   -49,
     -49,     0,   -32,   -32,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
       0,   -32,   269,     0,     0,     0,   -32,     0,     0,     0,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
     -32,   367,     0,     0,     0,   -32,     0,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
       0,   -32,   400,     0,     0,     0,   -32,     0,     0,     0,
     -32,   -32,     0,     0,   -31,   -32,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     2,     3,     4,
       5,   -31,   -31,    24,    25,    26,    27,    28,    29,    51,
       0,    52,    53,    54,    55,     0,     0,     0,   -31,     0,
     -31,   -31,     0,     0,     0,   -31,     0,     0,     0,   -31,
     -31,     0,    30,    31,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,   174,   493,     0,     0,     0,    32,     0,     0,     0,
      33,    34,     0,     0,    50,    35,     2,     3,     4,     5,
       0,     0,    24,    25,    26,    27,    28,    29,    51,     0,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     2,     3,     4,
       5,    30,    31,    24,    25,    26,    27,    28,    29,    51,
       0,    52,    53,    54,    55,     0,     0,     0,    56,     0,
     174,   514,     0,     0,     0,    32,     0,     0,     0,    33,
      34,     0,    30,    31,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,   174,   521,     0,     0,     0,    32,     0,     0,     0,
      33,    34,     0,     0,   -33,    35,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     2,     3,     4,
       5,   -33,   -33,    24,    25,    26,    27,    28,    29,    51,
       0,    52,    53,    54,    55,     0,     0,     0,   -33,     0,
     -33,   -33,     0,     0,     0,   -33,     0,     0,     0,   -33,
     -33,     0,    30,    31,   -33,   -86,   -86,   -86,   -86,     0,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,    56,
       0,   174,   -87,   -87,   -87,   -87,    32,   -87,   -87,     0,
      33,    34,     0,     0,     0,    35,     0,     0,     0,   -86,
       0,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   -87,     0,   -87,   -87,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,   -88,   -88,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     335,     0,   -73,   -73,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,   -79,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -84,     0,     0,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
     -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -85,   -87,   -87,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,
       0,   -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,     0,     0,   -87,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,     0,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -88,   -79,   -79,   -88,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   399,     0,     0,
     -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -79,     0,     0,   -79,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -89,     0,   -89,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -81,   -80,   -80,   -81,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -89,     0,     0,   -89,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -80,     0,   -80,   -80,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -80,
       0,     0,   -80,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,     0,     0,   -82,     0,
       0,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -87,   -87,     0,     0,     0,     0,     0,
     -88,   -88,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,   -73,
      89,     0,     0,     0,     0,     0,   -79,   -79,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -81,   -81,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -80,   -80,     0,     0,     0,     0,     0,
     -82,   -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -84,   -84,   -84,   -84,
       0,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -84,   -86,   -86,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -87,
     -73,   -73,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   304,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,     0,   -66,   -66,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,   -79,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   332,   333,   334,   -69,   -69,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -84,   -86,   -86,     0,     0,   -84,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -87,
     -87,   -87,   -87,   -85,   -87,   -87,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -86,   -88,   -88,   -88,   -88,   -86,   -88,
     -88,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -73,
     -73,   -73,   -73,   -87,   -73,   -73,     0,     0,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -79,
     -79,   -79,   -79,   -88,   -79,   -79,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   366,   -66,   -66,   -66,   -66,   -73,   -66,
     -66,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -69,
     -69,   -69,   -69,   -79,   -69,   -69,     0,     0,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     396,   397,   398,     0,     0,     0,   -69,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,     0,     0,     0,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,   -87,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,   -88,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -77,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,
     -73,   -73,     0,   -73,   -73,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,   -73,   -73,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,   -74,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -75,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -84,   -84,
     -84,   -84,     0,   -84,   -84,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,     0,     0,     0,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,     0,     0,     0,   -87,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -79,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,   -74,   -74,
     -74,     0,   -74,   -74,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,     0,     0,     0,   -74,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -81,   -67,   -67,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   332,   333,   334,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,
     -71,   -71,     0,     0,     0,   -68,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   332,   333,   334,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,     0,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,
     -72,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -81,   -89,   -89,   -89,   -89,   -81,   -89,
     -89,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -67,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   396,   397,   398,
     -68,   -68,   -68,   -68,     0,   -68,   -68,     0,   -89,     0,
       0,     0,     0,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -70,   -70,   -70,   -70,     0,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   396,   397,   398,   -71,
     -71,   -71,   -71,     0,   -71,   -71,     0,     0,     0,     0,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -71,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -80,   -80,
     -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,   -72,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,
       0,     0,   -80,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,   -82,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,     0,
       0,     0,     0,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,
       0,   -80,   -80,     0,     0,     0,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
     -80,   -81,   -81,   -81,   -81,   -80,   -81,   -81,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,   -82,     0,     0,     0,     0,   -82,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -89,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,     0,   -82,   -82,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,
     -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,   -82,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -80,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -82,     0,     0,   -77,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -73,   -61,   -61,   -61,   299,   300,
       0,   -78,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -75,   -75,   -75,   -75,     0,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,     0,   -75,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -67,   -67,   -67,   -67,     0,   -67,
     -67,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -70,   -70,   -70,
     -70,     0,   -70,   -70,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
      86,    87,    88,   -68,     0,     0,     0,     0,     0,     0,
     -70,     0,   -68,   -68,   -68,   -68,    86,    87,    88,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -72,   -72,   -72,   -72,     0,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,     0,   -72,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -84,   -85,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -87,   -87,   -87,   -87,
       0,   -87,   -87,     0,     0,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,     0,     0,     0,     0,     0,     0,   -87,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,     0,
     -66,   -66,   -66,   -66,     0,   -66,   -66,     0,   -88,     0,
       0,     0,     0,     0,     0,   -79,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -66,
       0,     0,   -66,   -66,   -66,   -66,   363,   364,   365,   -69,
     -69,   -69,   -69,     0,   -69,   -69,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -69,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,     0,   -88,   -88,     0,   -77,   -77,
     -77,   -77,     0,   -77,   -77,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,     0,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,   -87,   -87,   -87,   -87,
       0,   -87,   -87,     0,     0,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,     0,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -77,   -77,   -77,   -77,     0,
     -77,   -77,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,     0,     0,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,     0,     0,   -78,   -78,   -78,   -78,     0,
     -78,   -78,     0,     0,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -73,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -78,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -74,   -74,   -74,   -74,     0,   -74,
     -74,     0,     0,     0,   -75,   -75,   -75,   -75,     0,   -75,
     -75,     0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,   -74,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -81,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,   -67,   -67,
     -67,   -67,     0,   -67,   -67,     0,   -68,   -68,   -68,   -68,
       0,   -68,   -68,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,     0,   -89,   -71,   -71,   -71,   -71,     0,   -71,
     -71,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -67,
     -67,   -67,   -67,   -67,   301,   302,   303,   -68,   -68,   -68,
     -68,   -68,   301,   302,   303,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,   -72,   -72,   -72,     0,   -72,   -72,
       0,     0,     0,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,     0,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,
       0,     0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -67,     0,     0,   -67,   -67,   -67,   -67,   363,
     364,   365,   -68,     0,     0,   -68,   -68,   -68,   -68,   363,
     364,   365,   -70,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -80,
     -80,   -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -82,   -82,   -82,
     -82,   -71,   -82,   -82,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,   -80,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -82,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,     0,     0,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -89,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     330,   331,   -62,   -62,   -62,   -62,     0,   -62,   -62,     0,
       0,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,     0,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,     0,     0,
     -63,   -63,   -63,   -63,     0,   -63,   -63,     0,   -62,   -62,
       0,     0,     0,     0,   -62,   -62,   330,   331,   -63,   -63,
       0,     0,     0,     0,   -63,   -63,   330,   331,   -62,     0,
       0,     0,   -62,   -62,   -62,   394,   395,   -63,     0,     0,
       0,   -63,   -63,   -63,   394,   395,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -62,   -62,   -62,   -62,     0,   -62,   -62,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -61,   -61,   -61,
     -61,     0,   -61,   -61,     0,   -64,   -64,   -64,   -64,   -65,
     -64,   -64,     0,     0,     0,     0,   -62,     0,   -65,   -65,
      84,    85,     0,   -63,     0,   -62,   -62,    84,    85,     0,
       0,     0,   -63,   -63,    84,    85,   -61,     0,     0,   -61,
     -61,   361,   362,     0,     0,     0,   -64,   -64,   -64,   299,
     300,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -65,
     -65,   -65,   -65,     0,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   299,   300,     0,     0,   -62,
     -62,   -62,   299,   300,     0,     0,   -63,   -63,   -63,   299,
     300,   -64,     0,     0,   -64,   -64,   361,   362,   -65,     0,
       0,   -65,   -65,   361,   362,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -63,   -63,   -63,   -63,     0,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -62,     0,     0,   -62,   -62,   361,
     362,   -63,     0,     0,   -63,   -63,   361,   362
};

static const yytype_int16 yycheck[] =
{
      19,     1,   174,   272,    23,     0,   275,    55,    10,    59,
       9,     6,   156,    32,   158,     9,    22,    23,    24,    25,
       9,    27,    28,    59,     0,    22,    23,    63,    47,    48,
       6,    22,    23,    24,    25,    54,    22,   306,    22,    23,
      59,     9,    10,    11,    12,    13,    14,     9,    67,    68,
      22,    22,    23,    53,    49,    57,    22,    63,    64,    65,
       9,    10,    11,    12,    13,    14,    63,    22,   337,    63,
      38,    39,    63,    59,   246,    59,    22,    63,     9,    63,
      99,   100,    22,    23,    24,    25,    22,    55,    59,    38,
      39,    63,    63,    59,    62,     9,   268,    63,    66,    67,
      55,   370,    22,    71,    55,    22,    23,    24,    25,    58,
      22,    23,   131,    62,   164,    61,   166,    66,    67,    59,
      22,    23,    71,    63,   143,    55,   270,    63,     9,    10,
      11,    12,    13,    14,   153,    62,    22,   156,    62,   158,
     135,    61,   411,    22,    23,   164,    63,   166,    55,    61,
      57,   151,   152,    57,    22,    23,    55,    38,    39,    22,
      23,    63,   181,   432,    22,    23,    24,    25,   168,    55,
     189,   190,   191,   192,   193,   194,    22,    23,    62,    58,
      59,    62,    63,    55,   453,    66,    67,    55,    55,    22,
      71,   210,   211,   212,   213,   214,   215,     9,    61,    55,
      58,    59,    22,    23,    24,    25,   475,    27,    28,    55,
      55,    56,   231,   232,   233,   234,   235,   236,    55,    22,
      23,    24,    25,    63,   368,    58,    59,     0,     1,    61,
       3,     4,     5,     6,   253,   254,   255,   256,   257,   258,
      60,    63,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   270,   271,   272,     9,   274,   275,   401,    61,    22,
      23,    24,    25,   282,    27,    28,     9,    10,    11,    12,
      13,    14,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,    22,    23,
      24,    25,    55,    22,   313,    38,    39,    55,    56,    58,
      59,    64,    65,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    62,
      63,    17,    59,    66,    67,   344,    63,    61,    71,    58,
      59,    58,    59,    55,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    61,   368,
     369,   370,   402,    59,    55,    56,    10,    63,   377,    60,
      22,    23,    24,    25,    55,    27,    28,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,    19,   401,   402,    57,    23,    22,    23,    24,    25,
      57,   410,   411,    55,    32,     9,    10,    11,    12,    13,
      14,    62,    64,    65,    66,    67,    68,    69,    70,    47,
      48,    63,   431,   432,    59,    60,    54,    63,    63,    63,
     470,    59,    59,    59,    38,    39,    63,    63,    59,    67,
      68,    59,    63,   452,   453,    63,    55,    56,    22,    23,
      24,    25,   492,    22,    23,    24,    25,    55,    62,    63,
      59,   470,    66,    67,    63,   474,   475,    71,    22,    23,
      59,    99,   100,    61,    63,    57,    22,    23,    24,    25,
      57,    27,    28,   492,    58,    59,    55,     9,    10,    11,
      12,    13,    14,     9,    10,    11,    12,    13,    14,    22,
      23,    24,    25,   131,    58,    59,     1,    55,     3,     4,
       5,     6,    58,    59,    58,   143,    38,    39,    64,    65,
      66,    67,    38,    39,    58,   153,    55,    56,   156,    17,
     158,    60,    55,    62,    55,    59,   164,    63,   166,    63,
      62,    63,    61,    63,    66,    67,    62,    63,    59,    71,
      66,    67,    63,   181,    59,    71,    59,    63,    63,    63,
      63,   189,   190,   191,   192,   193,   194,     0,     1,    63,
       3,     4,     5,     6,    63,    22,    23,    24,    25,    61,
      27,    28,   210,   211,   212,   213,   214,   215,    59,    58,
      59,    63,    63,    22,    23,    24,    25,    59,    27,    28,
      61,    63,    61,   231,   232,   233,   234,   235,   236,    56,
      59,    58,    59,    60,    63,    62,    61,    64,    65,    66,
      67,    68,    69,    70,    63,   253,   254,   255,   256,   257,
     258,    60,    61,    62,    61,    64,    65,    66,    67,    68,
      69,    70,   270,   271,   272,    59,   274,   275,    63,    63,
      22,    23,    24,    25,   282,    27,    28,     9,    10,    11,
      12,    13,    14,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,     3,
       4,     5,     6,    55,    63,   313,    38,    39,    61,    17,
      61,    61,    64,    65,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      62,    63,     6,   135,    66,    67,   344,     0,     1,    71,
       3,     4,     5,     6,    -1,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,    -1,
     368,   369,   370,     1,    -1,     3,     4,     5,     6,   377,
      -1,    22,    23,    24,    25,    -1,    27,    28,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,    19,   401,   402,    -1,     9,    10,    11,    12,
      13,    14,   410,   411,    55,    32,     9,    10,    11,    12,
      13,    14,    -1,    64,    65,    66,    67,    68,    69,    70,
      47,    48,    -1,   431,   432,    38,    39,    54,    22,    23,
      24,    25,    -1,    27,    28,    38,    39,    -1,    -1,    -1,
      67,    68,    -1,    -1,   452,   453,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    62,
      63,    -1,   470,    66,    67,    59,   474,   475,    71,    63,
      64,    65,    99,   100,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,   492,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,     9,    10,
      11,    12,    13,    14,   131,     0,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    38,    39,   143,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,   153,    38,    39,    -1,
      -1,    55,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    38,    39,
      -1,    62,    63,    -1,   181,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,   191,    22,    23,    24,    25,    -1,
      27,    28,    62,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,     0,     1,   212,     3,     4,     5,     6,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    58,    59,    -1,    -1,    -1,   233,    64,    65,    -1,
      47,    48,     9,    10,    11,    12,    13,    14,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,   255,    -1,
      67,    68,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    38,    39,    -1,   271,   272,    -1,   274,   275,    86,
      87,    88,    -1,    -1,    -1,   282,    -1,    61,    -1,    -1,
      64,    65,    99,   100,    -1,    62,    -1,    -1,    -1,    66,
      67,    59,    -1,    -1,    71,    63,    64,    65,   305,   306,
      -1,    -1,    22,    23,    24,    25,   313,    27,    28,    -1,
      -1,    -1,    -1,    -1,   131,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,   143,    -1,    -1,   336,
     337,    -1,    -1,    -1,    -1,    -1,   153,   344,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    55,     9,
      10,    11,    12,    13,    14,    -1,    -1,    64,    65,    66,
      67,    -1,   369,   370,   181,    -1,    -1,    -1,    -1,    -1,
     377,    -1,   189,   190,   191,   192,   193,   194,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,   210,   211,   212,   213,   214,   215,    -1,
      -1,    -1,    62,   410,   411,    -1,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,   231,   232,   233,   234,   235,   236,
      56,    -1,    58,    59,   431,   432,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,   253,   254,   255,   256,
     257,   258,    -1,    -1,    -1,   452,   453,     0,     1,    -1,
       3,     4,     5,     6,   271,   272,    -1,   274,   275,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,   474,   475,    -1,
      -1,    -1,    -1,    -1,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
      -1,    -1,    22,    23,    24,    25,   313,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,    -1,   344,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
      32,    -1,   369,   370,     9,    10,    11,    12,    13,    14,
     377,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,    38,    39,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,   410,   411,     0,     1,    -1,     3,     4,
       5,     6,    84,    85,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    67,    -1,   431,   432,    71,    99,   100,    -1,
      22,    23,    24,    25,    -1,    27,    28,     0,     1,    -1,
       3,     4,     5,     6,    -1,   452,   453,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   474,   475,    -1,
      -1,   143,    64,    65,    66,    67,    -1,    38,    39,    -1,
       1,   153,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,   181,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,   191,
      -1,    -1,     9,    10,    11,    12,    13,    14,     9,    10,
      11,    12,    13,    14,    55,    -1,    57,    58,    -1,    -1,
     212,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    38,    39,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,   233,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    62,    -1,   255,    71,    66,    67,    -1,     0,     1,
      71,     3,     4,     5,     6,    -1,    -1,    -1,    -1,   271,
     272,    59,   274,   275,    -1,    63,    64,    65,    66,    67,
     282,    -1,    -1,     9,    10,    11,    12,    13,    14,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,    -1,
      -1,    -1,   304,   305,   306,    -1,    -1,    -1,    -1,    -1,
      -1,   313,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    -1,    -1,   335,   336,   337,    62,    -1,    -1,    -1,
      66,    67,   344,     0,     1,    71,     3,     4,     5,     6,
      -1,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,    -1,    -1,    -1,   366,    32,    -1,   369,   370,     9,
      10,    11,    12,    13,    14,   377,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,    -1,    -1,    -1,   399,    38,    39,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,   410,   411,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    22,    23,
      24,    25,    62,    27,    28,    -1,    66,    67,    -1,   431,
     432,    71,    99,   100,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
     452,   453,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    56,   474,   475,    59,    60,   143,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   153,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,   181,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,   191,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,   212,    55,    -1,    57,    58,
      55,    -1,    -1,    62,    -1,    32,    -1,    66,    67,    64,
      65,    -1,    71,    -1,    -1,    -1,   233,    55,    56,    -1,
      47,    48,    60,    -1,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,   255,    -1,
      67,    68,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    78,    79,    -1,   271,   272,    -1,   274,   275,    -1,
      -1,    -1,    -1,     0,     1,   282,     3,     4,     5,     6,
      -1,    -1,    99,   100,   291,   292,   293,   294,   295,   296,
     297,   298,    -1,    63,    64,    65,    -1,   304,   305,   306,
      -1,    -1,    22,    23,    24,    25,   313,    27,    28,    -1,
      -1,    -1,    -1,    -1,   131,   322,   323,   324,   325,   326,
     327,   328,   329,    -1,    -1,    -1,   143,    -1,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,   153,   344,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,   353,   354,   355,   356,
     357,   358,   359,   360,    -1,    22,    23,    24,    25,   366,
      27,    28,   369,   370,   181,    -1,    22,    23,    24,    25,
     377,    27,    28,    -1,   191,    -1,    -1,    -1,    -1,   386,
     387,   388,   389,   390,   391,   392,   393,    -1,    22,    23,
      24,    25,   399,    27,    28,   212,    63,    64,    65,    55,
      56,    -1,    -1,   410,   411,    32,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,   233,    -1,    -1,    -1,
      47,    48,    56,    -1,   431,   432,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,   255,    -1,
      67,    68,    -1,    -1,    -1,   452,   453,    -1,    -1,    -1,
      77,    -1,    -1,    -1,   271,   272,    -1,   274,   275,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,   474,   475,    -1,
      -1,    -1,    99,   100,   291,   292,   293,   294,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,   304,   305,   306,
      -1,    -1,    22,    23,    24,    25,   313,    27,    28,    -1,
      -1,    -1,    -1,    -1,   131,   322,   323,   324,   325,     0,
       1,    -1,     3,     4,     5,     6,   143,    59,   335,   336,
     337,    63,    64,    65,    66,    67,   153,   344,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,   353,   354,   355,   356,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,   366,
      -1,    -1,   369,   370,   181,    -1,    22,    23,    24,    25,
     377,    27,    28,    -1,   191,    -1,    -1,    -1,    -1,   386,
     387,   388,   389,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,   399,    27,    28,   212,    -1,    -1,    -1,    55,
      56,    -1,    -1,   410,   411,    32,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,   233,    -1,    -1,    -1,
      47,    48,    56,    -1,   431,   432,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    -1,   255,    -1,
      67,    68,    -1,    -1,    -1,   452,   453,     0,     1,    76,
       3,     4,     5,     6,   271,   272,    -1,   274,   275,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,   474,   475,    -1,
      -1,    -1,    99,   100,   291,   292,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,   304,   305,   306,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   322,   323,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,   143,    -1,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,   153,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,   353,   354,    66,    67,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,   366,
      -1,    -1,   369,   370,   181,    -1,    22,    23,    24,    25,
     377,    27,    28,    -1,   191,    -1,    -1,    -1,    -1,   386,
     387,    -1,    32,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,   399,    27,    28,   212,    -1,    47,    48,    55,
      56,    -1,    -1,   410,   411,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,   233,    67,    68,    -1,
      -1,    55,    -1,    -1,   431,   432,    60,    -1,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    -1,   255,    89,
      -1,    -1,    -1,    -1,    -1,   452,   453,    -1,    -1,    99,
     100,    -1,    -1,    -1,   271,   272,    -1,   274,   275,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,   474,   475,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,
      -1,    -1,    -1,   143,    -1,    -1,   313,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,   322,    -1,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    -1,   353,    38,    39,    -1,
      -1,   191,    22,    23,    24,    25,    -1,    27,    28,   366,
      -1,    -1,   369,   370,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    62,   212,    -1,    -1,    66,    67,    -1,    -1,   386,
      71,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,   399,   233,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,   410,   411,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,   255,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,   431,   432,    -1,    -1,    -1,    -1,
      -1,   271,   272,    -1,   274,   275,    -1,    -1,    22,    23,
      24,    25,   282,    27,    28,   452,   453,    58,    59,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,   304,   305,   306,   474,   475,    -1,
      -1,    -1,    -1,   313,    -1,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,   336,   337,    -1,    -1,
      -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,   366,    -1,    -1,   369,
     370,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,   399,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
     410,   411,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    55,    -1,    57,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,   452,   453,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,   474,   475,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    61,    -1,    62,    64,    65,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    61,    -1,    62,    64,    65,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    -1,    -1,     1,    71,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    55,    -1,
      57,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    -1,    38,    39,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    22,    23,    24,    25,    62,    27,    28,    -1,
      66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
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
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    56,    27,    28,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    56,    -1,    -1,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    56,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    56,    27,    28,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      56,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    55,    56,    -1,    -1,    -1,    -1,    -1,
      55,    56,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    55,    56,    64,    65,
      66,    67,    68,    69,    70,    64,    65,    66,    67,    68,
      69,    70,    55,    56,    22,    23,    24,    25,    -1,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    55,    56,    -1,    -1,    -1,    -1,    -1,
      55,    56,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    56,
      27,    28,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
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
      28,    64,    65,    66,    67,    68,    69,    70,    -1,    22,
      23,    24,    25,    56,    27,    28,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    58,    59,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
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
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    56,    22,    23,    24,    25,    61,    27,
      28,    64,    65,    66,    67,    68,    69,    70,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      56,    22,    23,    24,    25,    61,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    59,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    59,    -1,    -1,    55,    63,
      64,    65,    66,    67,    68,    69,    70,    64,    65,    66,
      67,    68,    69,    70,    55,    63,    64,    65,    66,    67,
      -1,    55,    -1,    64,    65,    66,    67,    68,    69,    70,
      64,    65,    66,    67,    68,    69,    70,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    64,
      65,    66,    67,    68,    69,    70,    64,    65,    66,    67,
      68,    69,    70,    55,    22,    23,    24,    25,    -1,    27,
      28,    -1,    64,    65,    66,    67,    68,    69,    70,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    64,    65,
      66,    67,    68,    69,    70,    64,    65,    66,    67,    68,
      69,    70,    55,    22,    23,    24,    25,    -1,    27,    28,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    55,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    64,    65,    66,    67,    68,    69,    70,    64,    65,
      66,    67,    68,    69,    70,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    64,    65,    66,
      67,    68,    69,    70,    64,    65,    66,    67,    68,    69,
      70,    63,    64,    65,    66,    67,    68,    69,    70,    61,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    61,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    63,    64,
      65,    66,    67,    68,    69,    70,    63,    64,    65,    66,
      67,    68,    69,    70,    63,    64,    65,    66,    67,    68,
      69,    70,    63,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    63,    64,    65,    66,    67,    68,    69,
      70,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      63,    64,    65,    66,    67,    68,    69,    70,    63,    64,
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
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    61,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    61,    55,    -1,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    55,    22,    23,    24,    25,    -1,    27,
      28,    -1,    64,    65,    66,    67,    68,    69,    70,    63,
      64,    65,    66,    67,    68,    69,    70,    63,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    61,    27,    28,    64,    65,    66,    67,    68,    69,
      70,    61,    55,    -1,    64,    65,    66,    67,    68,    69,
      70,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      55,    63,    64,    65,    66,    67,    68,    69,    70,    64,
      65,    66,    67,    68,    69,    70,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    61,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    63,    64,    65,    66,    67,
      68,    69,    70,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    61,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    59,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    59,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    55,
      27,    28,    -1,    -1,    -1,    -1,    55,    -1,    64,    65,
      66,    67,    -1,    55,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    64,    65,    66,    67,    61,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    63,    64,    65,    66,
      67,    61,    -1,    -1,    64,    65,    66,    67,    61,    -1,
      -1,    64,    65,    66,    67,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    61,    -1,    -1,    64,    65,    66,    67
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
      78,    94,    94,     1,     3,    84,    85,   105,    55,    62,
      62,    86,    94,    62,    55,    58,    89,    55,    55,    55,
       9,    94,    63,    94,   104,    63,    96,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,    95,
      58,    59,    61,    63,    63,    59,    63,     9,    94,    94,
      17,    10,    61,    59,    63,    58,    94,    57,    85,    57,
      60,    63,    63,    62,    63,    94,    81,    83,    80,    82,
      61,    86,    86,    94,    88,    58,    88,    58,    16,    63,
      58,    58,    86,    55,    57,     9,    10,    11,    12,    13,
      14,    62,   103,     9,    10,    11,    12,    13,    14,    38,
      39,    62,    66,    67,    71,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     9,    10,    11,    12,    13,    14,
      38,    39,    62,    66,    67,    71,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     9,    10,    11,    12,    13,
      14,    38,    39,    62,    66,    67,    71,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    57,     9,    10,    11,
      12,    13,    14,    38,    39,    62,    66,    67,    71,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    57,    58,
      87,    60,    62,    94,    60,    62,     9,    10,    11,    12,
      13,    14,    62,   101,   102,   103,   101,    94,   101,   101,
     101,    22,    23,    24,    25,    27,    28,    64,    65,    66,
      67,    68,    69,    70,    56,    60,    62,     9,    10,    11,
      12,    13,    14,    62,   101,   102,   103,   101,    94,   101,
     101,   101,    22,    23,    24,    25,    27,    28,    64,    65,
      66,    67,    68,    69,    70,    56,    60,    62,     9,    10,
      11,    12,    13,    14,    62,   101,   102,   103,   101,    94,
     101,   101,   101,    22,    23,    24,    25,    27,    28,    64,
      65,    66,    67,    68,    69,    70,    56,    58,    87,    60,
      62,     9,    10,    11,    12,    13,    14,    62,   101,   102,
     103,   101,    94,   101,   101,   101,    22,    23,    24,    25,
      27,    28,    64,    65,    66,    67,    68,    69,    70,    56,
      58,    87,    88,    94,    63,   104,    63,    94,    63,   104,
      60,    62,    94,    63,    96,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   101,    95,    94,    63,
     104,    60,    62,    94,    63,    96,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   101,    95,    94,
      63,   104,    60,    62,    94,    63,    96,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,    95,
      88,    94,    63,   104,    60,    62,    94,    63,    96,    97,
      98,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     101,    95,    88,    58,    61,    63,    61,    63,    94,    63,
     104,    63,    61,    63,    94,    63,   104,    63,    61,    63,
      94,    63,   104,    63,    58,    61,    63,    94,    63,   104,
      63,    58,    61,    63,    61,    63,    61,    63,    61,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    77,    78,    78,    80,    79,
      81,    79,    82,    79,    83,    79,    79,    84,    84,    85,
      85,    86,    87,    86,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     1,     1,
       3,     5,     6,     3,     2,     5,     1,     3,     0,     9,
       0,     9,     0,     8,     0,     8,     5,     1,     3,     2,
       4,     2,     0,     4,     1,     2,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     4,     5,     7,     5,     7,
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
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2758 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2764 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2770 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2776 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2782 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 65 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2788 "src/parser.c"
        break;

    case 73: /* declaration_list  */
#line 67 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2794 "src/parser.c"
        break;

    case 74: /* declaration  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2800 "src/parser.c"
        break;

    case 75: /* init_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2806 "src/parser.c"
        break;

    case 76: /* var_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2812 "src/parser.c"
        break;

    case 77: /* arr_declarator  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2818 "src/parser.c"
        break;

    case 78: /* initializer_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2824 "src/parser.c"
        break;

    case 79: /* function_definition  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2830 "src/parser.c"
        break;

    case 84: /* argument_list  */
#line 66 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2836 "src/parser.c"
        break;

    case 85: /* argument  */
#line 66 "src/language.y"
      { fprintf(stderr, "CALL AL DTOR\n"); al_free(&((*yyvaluep).al)); }
#line 2842 "src/parser.c"
        break;

    case 86: /* compound_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2848 "src/parser.c"
        break;

    case 88: /* statement_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2854 "src/parser.c"
        break;

    case 89: /* statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2860 "src/parser.c"
        break;

    case 91: /* conditional_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2866 "src/parser.c"
        break;

    case 92: /* iteration_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2872 "src/parser.c"
        break;

    case 93: /* return_statement  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2878 "src/parser.c"
        break;

    case 94: /* assignment_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2884 "src/parser.c"
        break;

    case 95: /* logical_or_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2890 "src/parser.c"
        break;

    case 96: /* logical_and_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2896 "src/parser.c"
        break;

    case 97: /* equality_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2902 "src/parser.c"
        break;

    case 98: /* relational_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2908 "src/parser.c"
        break;

    case 99: /* additive_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2914 "src/parser.c"
        break;

    case 100: /* multiplicative_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2920 "src/parser.c"
        break;

    case 101: /* unary_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2926 "src/parser.c"
        break;

    case 102: /* postfix_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2932 "src/parser.c"
        break;

    case 103: /* primary_expression  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2938 "src/parser.c"
        break;

    case 104: /* argument_call_list  */
#line 68 "src/language.y"
      { fprintf(stderr, "CALL NODE DTOR\n"); node_free_recursive(&((*yyvaluep).node)); }
#line 2944 "src/parser.c"
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
#line 3210 "src/parser.c"
    break;

  case 3:
#line 110 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3216 "src/parser.c"
    break;

  case 4:
#line 114 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3222 "src/parser.c"
    break;

  case 5:
#line 115 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3228 "src/parser.c"
    break;

  case 6:
#line 116 "src/language.y"
    { (yyval.node) = NULL; }
#line 3234 "src/parser.c"
    break;

  case 7:
#line 117 "src/language.y"
    { (yyval.node) = NULL; node_free_recursive(&(yyvsp[0].node)); }
#line 3240 "src/parser.c"
    break;

  case 8:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3246 "src/parser.c"
    break;

  case 9:
#line 122 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3252 "src/parser.c"
    break;

  case 10:
#line 123 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3258 "src/parser.c"
    break;

  case 11:
#line 124 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3264 "src/parser.c"
    break;

  case 12:
#line 125 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3270 "src/parser.c"
    break;

  case 13:
#line 126 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3276 "src/parser.c"
    break;

  case 14:
#line 130 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3282 "src/parser.c"
    break;

  case 15:
#line 134 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval), 0); free_label((yyvsp[-3].sval)); }
#line 3288 "src/parser.c"
    break;

  case 16:
#line 138 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3294 "src/parser.c"
    break;

  case 17:
#line 139 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3300 "src/parser.c"
    break;

  case 18:
#line 143 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3306 "src/parser.c"
    break;

  case 19:
#line 143 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3312 "src/parser.c"
    break;

  case 20:
#line 144 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3318 "src/parser.c"
    break;

  case 21:
#line 144 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-7].sval)); }
#line 3324 "src/parser.c"
    break;

  case 22:
#line 145 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3330 "src/parser.c"
    break;

  case 23:
#line 145 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3336 "src/parser.c"
    break;

  case 24:
#line 146 "src/language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3342 "src/parser.c"
    break;

  case 25:
#line 146 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish(); finish(); assign_context((yyval.node)); free_label((yyvsp[-6].sval)); }
#line 3348 "src/parser.c"
    break;

  case 26:
#line 147 "src/language.y"
    { (yyval.node) = NULL; free_label((yyvsp[-3].sval)); }
#line 3354 "src/parser.c"
    break;

  case 27:
#line 151 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3360 "src/parser.c"
    break;

  case 28:
#line 152 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3366 "src/parser.c"
    break;

  case 29:
#line 156 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3372 "src/parser.c"
    break;

  case 30:
#line 157 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3378 "src/parser.c"
    break;

  case 31:
#line 161 "src/language.y"
    { (yyval.node) = NULL; }
#line 3384 "src/parser.c"
    break;

  case 32:
#line 162 "src/language.y"
    { begin(NULL); }
#line 3390 "src/parser.c"
    break;

  case 33:
#line 162 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node)  ; finish(); }
#line 3396 "src/parser.c"
    break;

  case 34:
#line 166 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3402 "src/parser.c"
    break;

  case 35:
#line 167 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3408 "src/parser.c"
    break;

  case 36:
#line 171 "src/language.y"
    { (yyval.node) = NULL; }
#line 3414 "src/parser.c"
    break;

  case 37:
#line 172 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3420 "src/parser.c"
    break;

  case 38:
#line 173 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3426 "src/parser.c"
    break;

  case 39:
#line 174 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3432 "src/parser.c"
    break;

  case 40:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3438 "src/parser.c"
    break;

  case 41:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3444 "src/parser.c"
    break;

  case 42:
#line 177 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3450 "src/parser.c"
    break;

  case 43:
#line 178 "src/language.y"
    { (yyval.node) = NULL; }
#line 3456 "src/parser.c"
    break;

  case 44:
#line 179 "src/language.y"
    { (yyval.node) = NULL; }
#line 3462 "src/parser.c"
    break;

  case 45:
#line 183 "src/language.y"
    { printf("%s\n", (yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3468 "src/parser.c"
    break;

  case 46:
#line 186 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG); assign_context((yyval.node)); }
#line 3474 "src/parser.c"
    break;

  case 47:
#line 187 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3480 "src/parser.c"
    break;

  case 48:
#line 191 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3486 "src/parser.c"
    break;

  case 49:
#line 192 "src/language.y"
    { (yyval.node) = node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3492 "src/parser.c"
    break;

  case 50:
#line 196 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); }
#line 3498 "src/parser.c"
    break;

  case 51:
#line 197 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3504 "src/parser.c"
    break;

  case 52:
#line 201 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3510 "src/parser.c"
    break;

  case 53:
#line 202 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3516 "src/parser.c"
    break;

  case 54:
#line 206 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3522 "src/parser.c"
    break;

  case 55:
#line 207 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3528 "src/parser.c"
    break;

  case 56:
#line 211 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3534 "src/parser.c"
    break;

  case 57:
#line 212 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3540 "src/parser.c"
    break;

  case 58:
#line 216 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3546 "src/parser.c"
    break;

  case 59:
#line 217 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3552 "src/parser.c"
    break;

  case 60:
#line 218 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3558 "src/parser.c"
    break;

  case 61:
#line 222 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3564 "src/parser.c"
    break;

  case 62:
#line 223 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3570 "src/parser.c"
    break;

  case 63:
#line 224 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3576 "src/parser.c"
    break;

  case 64:
#line 225 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3582 "src/parser.c"
    break;

  case 65:
#line 226 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3588 "src/parser.c"
    break;

  case 66:
#line 230 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3594 "src/parser.c"
    break;

  case 67:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3600 "src/parser.c"
    break;

  case 68:
#line 232 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3606 "src/parser.c"
    break;

  case 69:
#line 236 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3612 "src/parser.c"
    break;

  case 70:
#line 237 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3618 "src/parser.c"
    break;

  case 71:
#line 238 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3624 "src/parser.c"
    break;

  case 72:
#line 239 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3630 "src/parser.c"
    break;

  case 73:
#line 243 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3636 "src/parser.c"
    break;

  case 74:
#line 244 "src/language.y"
    { (yyval.node) = node_init(OP_POS, "+",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3642 "src/parser.c"
    break;

  case 75:
#line 245 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3648 "src/parser.c"
    break;

  case 76:
#line 246 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3654 "src/parser.c"
    break;

  case 77:
#line 247 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3660 "src/parser.c"
    break;

  case 78:
#line 248 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3666 "src/parser.c"
    break;

  case 79:
#line 252 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3672 "src/parser.c"
    break;

  case 80:
#line 253 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY); free_label((yyvsp[-3].sval));}
#line 3678 "src/parser.c"
    break;

  case 81:
#line 254 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval));}
#line 3684 "src/parser.c"
    break;

  case 82:
#line 255 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval));}
#line 3690 "src/parser.c"
    break;

  case 83:
#line 259 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3696 "src/parser.c"
    break;

  case 84:
#line 260 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, STRING, NULL); set_symbol_str_sval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3702 "src/parser.c"
    break;

  case 85:
#line 261 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, FLOAT , NULL); set_symbol_str_fval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3708 "src/parser.c"
    break;

  case 86:
#line 262 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_ival((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3714 "src/parser.c"
    break;

  case 87:
#line 263 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, INT   , NULL); set_symbol_str_hval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3720 "src/parser.c"
    break;

  case 88:
#line 264 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol(CONSTANT, CHAR  , NULL); set_symbol_str_cval((yyval.node)->symbol, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3726 "src/parser.c"
    break;

  case 89:
#line 265 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3732 "src/parser.c"
    break;

  case 90:
#line 269 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3738 "src/parser.c"
    break;

  case 91:
#line 270 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3744 "src/parser.c"
    break;

  case 92:
#line 274 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3750 "src/parser.c"
    break;

  case 93:
#line 275 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3756 "src/parser.c"
    break;

  case 94:
#line 276 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3762 "src/parser.c"
    break;

  case 95:
#line 277 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3768 "src/parser.c"
    break;


#line 3772 "src/parser.c"

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
#line 280 "src/language.y"


void free_label(const char * str) {
	free((void*) str);
}
