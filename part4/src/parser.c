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
#line 45 "language.y"

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
#define YYLAST   6363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

#define YYUNDEFTOK  2
#define YYMAXUTOK   287

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
       2,     2,     2,    49,     2,     2,     2,    48,     2,     2,
      40,    41,    46,    44,    39,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      42,    34,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    68,    69,    73,    74,    75,    76,    80,
      81,    85,    86,    87,    91,    92,    93,    97,    98,   102,
     102,   103,   103,   104,   104,   105,   106,   107,   108,   112,
     113,   117,   118,   119,   123,   124,   124,   128,   129,   133,
     134,   135,   136,   137,   138,   139,   140,   144,   145,   149,
     150,   154,   155,   159,   160,   164,   165,   169,   170,   174,
     175,   176,   180,   181,   182,   183,   184,   188,   189,   190,
     194,   195,   196,   197,   201,   202,   203,   204,   205,   209,
     210,   211,   212,   216,   217,   218,   219,   224,   225,   229,
     230,   231,   232
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
  "INVALID_CHAR_CONST", "TYPE", "LIST", "FUN_DEF", "FUN_CALL", "DECL_VAR",
  "DECL_VEC", "VEC_INDEX", "';'", "'='", "'['", "']'", "'{'", "'}'", "','",
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "$accept", "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_definition",
  "$@1", "$@2", "$@3", "parameter_list", "parameter", "compound_statement",
  "$@4", "statement_list", "statement", "conditional_statement",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    59,    61,    91,    93,   123,   125,    44,
      40,    41,    60,    62,    43,    45,    42,    47,    37,    33
};
# endif

#define YYPACT_NINF -268

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-268)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     862,   -25,    -1,    38,    41,    79,    32,   608,   664,    15,
      72,   956,    89,   991,   788,  1200,  -268,  1252,  1494,   182,
     373,  1546,  3155,   617,   617,  3447,  3482,  3517,   544,   909,
     617,   617,   110,   115,   149,   187,   207,  1905,  6096,  5591,
    5626,  4373,  3552,   422,    35,   137,    87,   113,   129,    71,
     849,   145,  1116,  1177,  1226,  1279,  1471,   156,   160,    95,
    5633,  4408,  5668,   281,   318,   172,  5675,  5710,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   953,   124,   617,   327,   165,   195,    40,   227,    85,
      94,   241,  1520,   909,   909,   304,   316,  1573,  1652,  1747,
    1801,  2187,   250,   341,     5,  3587,   413,   329,  3939,  3988,
    6102,  6134,  6140,  6147,  5717,  5752,  5759,  5794,  5801,   333,
    4443,   193,   301,   202,   330,  1773,   300,  2311,   628,   374,
     224,   392,   416,   430,   381,   350,  4478,  1119,  4513,  2403,
    1855,  3155,   424,  2450,   791,   423,   427,   909,   437,  1973,
    3155,  2497,  2009,  3155,   452,   454,   372,  2544,   453,  2591,
    2052,  2638,   469,   427,   478,  2133,  2162,  2685,  2732,  2779,
    4548,  4583,  4618,   909,  1229,  1229,  2026,  3167,  3202,   544,
     909,  1229,  1229,   363,    75,   120,   380,   169,   273,  1951,
    5129,  3622,  3237,  1282,  1282,  3637,  3672,  3707,   909,  1282,
    1282,    12,     3,   411,  1423,  1321,  3216,  3251,  4653,  3742,
    1285,  1285,  3777,  3812,  3847,   909,  1285,  1285,    37,   111,
     336,  1894,  6179,  5814,  5849,  4667,  3882,  2826,  1523,  1523,
    2245,  3272,  3307,   909,  1523,  1523,    -4,    10,    49,  1582,
     800,  5139,  5174,  3896,  3342,  2873,  2920,  3155,   471,  3931,
    3945,  3980,   909,  5185,  3994,  5220,   402,   474,  5231,  5266,
    1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,  1229,
    1229,  1229,  1229,   953,   217,  1229,  4702,  4716,  4751,   909,
    3286,  4765,  3321,   482,  3356,  3391,  1282,  1282,  1282,  1282,
    1282,  1282,  1282,  1282,  1282,  1282,  1282,  1282,  1282,   953,
     346,  1282,  4800,  4814,  4849,   909,  5862,  4863,  5897,   486,
    5910,  5945,  1285,  1285,  1285,  1285,  1285,  1285,  1285,  1285,
    1285,  1285,  1285,  1285,  1285,   953,   661,  1285,   508,  3155,
    4029,  4043,  4078,   909,  5276,  4092,  5311,   494,  5321,  5356,
    1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,
    1523,  1523,  1523,   953,   863,  1523,   476,  3155,  2967,  4898,
     513,   412,    58,  3377,   133,   514,  1373,  1810,   717,   899,
     992,  1045,  5367,  5402,  5413,  5448,  5459,   525,  4127,   483,
     138,   522,  4142,    28,   420,  6282,  6312,  1444,  3826,  3861,
    6185,  3426,  3686,  3721,  3756,  3791,   531,  4933,   487,    36,
     527,  4177,   181,   456,  2235,  6320,  6195,  6227,  6237,  6269,
    5958,  5993,  6006,  6041,  6054,   534,  4947,   495,    53,  3014,
     532,  3412,    82,   406,  2360,  6276,  1128,  1987,  2320,  6089,
    5494,  5504,  5539,  5549,  5584,   541,  4191,   499,    78,  3061,
    3108,  4226,   461,  4240,  4275,  4982,  4996,  5031,  5045,  5080,
    5094,   570,  4289,  4324,  4338,   538
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,  -268,   573,    16,  -268,   -18,   403,  -268,  -268,
    -268,  -268,  -268,   457,     4,  -163,  -139,   -49,  -268,  -268,
    -268,   322,  2067,  1943,  1802,  1602,  1375,  1081,   425,   753,
     -19,  -267,    13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    51,    10,    63,    64,    11,   153,
     150,   141,    89,    90,    52,    22,    53,    54,    55,    56,
      57,    58,    34,    35,    36,    37,    38,    39,    40,    41,
      61,   122,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    32,   151,    42,    99,    15,   247,   379,    13,   192,
     209,   159,    14,    12,   161,   340,     9,   174,   175,   -89,
      12,   287,   -55,     9,   226,   176,   177,   178,   341,   -55,
      42,   286,    16,   398,    42,   -53,    86,   -53,    87,     3,
       4,     5,   179,   134,   -55,   180,   287,   -56,    18,   -55,
     181,   -55,    95,   -53,   182,   286,   312,    91,   -90,   417,
     -89,   -91,   226,   244,   329,   342,   343,   -57,   -57,   -56,
     174,   175,   312,   -53,   209,   209,    88,   -54,   176,   177,
     178,   126,   357,    23,    24,   192,   135,   437,   -57,   -54,
     -57,    25,    26,    27,   260,   179,   442,   340,   180,   -92,
     341,   -56,    99,   181,   -51,    -9,    19,   182,   358,    20,
      99,    29,    99,   -53,   -53,   102,    30,   -54,   244,   -54,
      31,   -56,    42,   -56,   128,   226,   129,    93,   209,   313,
     -55,    42,    42,   -29,    42,   -29,   228,   229,   261,   -55,
      42,    91,    42,   -10,   230,   231,   232,   -55,   -14,   156,
     157,   261,   -56,    94,   209,   254,   254,   260,   -55,   -55,
     192,   209,   254,   254,   233,   120,   227,   167,    68,   234,
      92,   -56,   -56,   235,   281,   281,   -54,   -54,    97,   209,
     281,   281,   -53,   264,   265,   -59,   -59,   -59,   -59,   100,
     419,   307,   307,   101,    23,    24,   209,   307,   307,   313,
     -56,   124,    25,    26,    27,    69,   -55,   -59,   -59,   335,
     335,   266,   267,   105,   209,   335,   335,   -56,   439,    28,
     -55,    68,    29,    70,    71,   -57,   -57,    30,    42,   228,
     229,    31,   -87,   209,   -87,   -54,   125,   230,   231,   232,
     -57,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   226,   244,   254,   233,   378,   144,
     209,   130,   234,   -31,   127,   -31,   235,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     226,   244,   281,   -11,   -11,    43,   209,   -62,   -62,   -62,
     -62,   -62,   -62,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   226,   244,   307,    99,
      42,   -62,   -62,   133,   209,   -62,   -62,   268,   269,   -17,
     -17,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   226,   244,   335,   139,    42,    42,
     137,    33,   138,   192,   135,    70,    71,   -58,   -58,   -52,
     183,    65,   314,   315,   -57,   -57,   103,   104,   228,   229,
     -12,   -12,   -58,   -13,   -13,    85,   230,   231,   232,   136,
      99,    96,   -57,   -47,   -15,   -47,   -47,   -47,   -47,   -47,
     163,   -47,   -47,   -47,   -47,   -47,   233,   397,   -18,   -18,
      99,   234,   -47,   -47,   -47,   235,   262,   263,   -57,   -57,
      42,   -14,   -14,   119,   121,   -47,   -11,   -11,    43,   -47,
     -47,   143,   -47,    44,   -16,   131,   132,   -47,   -57,   -57,
      42,   -47,   342,   343,   -58,   -58,   183,   288,   289,   -57,
     -57,    69,   -56,   145,   210,   211,   288,   289,   -58,   -58,
     361,   362,   212,   213,   214,   -58,   -56,   -58,    60,    62,
     -15,   -15,   -57,   190,   207,    66,    67,   146,    84,   148,
     245,   -58,   215,   -30,   169,   -30,   155,   216,   224,   158,
     147,   217,   314,   315,   -58,   -58,   -88,   -34,   -88,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     162,   -32,   -58,   -32,   164,   248,   -34,   -34,   -34,   -16,
     -16,   183,   257,   116,   117,   118,   224,   242,   -33,   -34,
     -33,   168,   359,   -34,   -34,   363,   -34,   -34,   207,   207,
     283,   -34,   137,   382,   444,   -34,   137,   401,   447,   190,
     262,   263,   -58,   -58,   137,   421,   450,   309,   137,   -36,
     454,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -58,   -58,   441,   337,   174,   175,   -36,   -36,
     -36,   443,   242,   445,   176,   177,   178,   446,   448,   224,
     449,   -36,   207,   452,   360,   -36,   -36,   453,   -36,   -36,
      17,   179,   256,   -36,   180,   142,     0,   -36,     0,   181,
       0,     0,     0,   182,     0,   377,   121,     0,   207,   253,
     255,   381,     0,     0,   190,   207,   258,   259,    -2,     1,
       0,     2,     3,     4,     5,     0,     0,     0,   280,   282,
       0,   396,   121,   207,   284,   285,     0,   400,     0,    23,
      24,     2,     3,     4,     5,   306,   308,   170,   171,   172,
     207,   310,   311,     0,     0,     0,     0,   415,   121,     0,
       0,     0,     0,   334,   336,   420,     0,   173,   207,   338,
     339,     0,    30,     0,    -3,    -3,    31,    -3,    -3,    -3,
      -3,     0,     0,   228,   229,   435,   121,   207,     0,     0,
       0,   230,   231,   232,   183,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   374,   375,   376,   224,   242,
     190,   233,   416,     0,   207,     0,   234,     0,     0,     0,
     235,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   393,   394,   395,   224,   242,   207,     0,     0,     0,
     207,   -66,   -66,   -66,   -66,   -66,   -66,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   412,   413,   414,
     224,   242,   224,     0,     0,   -66,   -66,     0,   207,   -66,
     -66,   268,   269,     0,     0,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   432,   433,   434,   224,   242,
     242,   191,   208,     0,     0,     0,     0,   190,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   225,   -35,   -35,   -35,
     -35,   -35,     0,   210,   211,     0,     0,     0,   -35,   -35,
     -35,   212,   213,   214,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -35,     0,     0,     0,   -35,    21,   154,   -35,     0,
       0,   215,     0,   -35,   225,   243,   216,   -35,     0,   -62,
     217,   -62,   -62,   -62,   348,   349,   208,   208,     0,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   191,   -39,   -39,
     -39,   -39,   -39,     1,     0,     2,     3,     4,     5,   -39,
     -39,   -39,     0,     0,     0,   228,   229,     0,     0,     0,
       0,     0,   -39,   230,   231,   232,   -39,   -39,     0,   -39,
     243,     0,     0,     0,   -39,     0,     0,   225,   -39,     0,
     208,     0,     0,   233,   436,     0,     0,     0,   234,     0,
       0,     0,   235,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   193,   194,     0,     0,     0,   208,   191,   191,   195,
     196,   197,   191,   208,   191,   191,     0,   -65,   -65,     0,
       0,   -65,   -65,   268,   269,     0,   208,   208,     0,   198,
       0,   208,   208,   208,   199,     0,    -5,    -5,   200,    -5,
      -5,    -5,    -5,   225,   225,   210,   211,     0,   208,   225,
     225,     0,     0,   212,   213,   214,     0,     0,     0,     0,
       0,   243,   243,     0,     0,     0,   208,   243,   243,     0,
       0,    -7,    -7,   215,    -7,    -7,    -7,    -7,   216,     0,
       0,     0,   217,     0,     0,   208,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   225,   243,   191,     0,
     -63,   -63,   208,     0,   -63,   -63,   268,   269,     0,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   225,   243,   208,     0,     0,     0,   208,   -64,
     -64,   -64,   -64,   -64,   -64,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   243,
     225,     0,     0,   -64,   -64,     0,   208,   -64,   -64,   268,
     269,     0,     0,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   225,   243,   243,   189,
     206,     0,     0,     0,     0,   191,     0,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   223,   -44,   -44,   -44,   -44,   -44,
       0,   228,   229,     0,     0,     0,   -44,   -44,   -44,   230,
     231,   232,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -44,
       0,     0,     0,   -44,   -44,     0,   -44,   114,   115,   233,
       0,   -44,   223,   241,   234,   -44,     0,   -66,   235,   -66,
     -66,   -66,   348,   349,   206,   206,     0,     0,    45,     0,
       2,     3,     4,     5,    46,   189,    47,    48,    49,    23,
      24,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,
      50,     0,     0,     0,   169,    98,     0,    29,   241,     0,
       0,     0,    30,     0,     0,   223,    31,   -37,   206,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,   174,   175,     0,     0,     0,   -37,   -37,   -37,   249,
     250,   251,    -4,    -4,   206,    -4,    -4,    -4,    -4,   -37,
     189,   206,     0,   -37,   -37,     0,   -37,     0,     0,   252,
       0,   -37,     0,     0,   181,   -37,     0,     0,   182,   206,
     -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,     0,   193,   194,   206,   210,   211,   -42,
     -42,   -42,   276,   277,   278,   302,   303,   304,     0,     0,
       0,     0,   -42,     0,   206,     0,   -42,   -42,     0,   -42,
       0,     0,   279,     0,   -42,   305,     0,   199,   -42,     0,
     216,   200,     0,   206,   217,   -62,   -62,   -62,   -62,   -62,
     -62,   189,   189,   189,   189,   189,   189,   189,   189,   372,
     373,     0,     0,     0,   223,   241,   189,     0,     0,     0,
     206,     0,   -62,   -62,   -62,   294,   295,   206,   206,   206,
     206,   206,   206,   206,   206,   391,   392,     0,     0,     0,
     223,   241,   206,     0,     0,     0,   206,   264,   265,   -60,
     -60,   -60,   -60,   223,   223,   223,   223,   223,   223,   223,
     223,   410,   411,   188,   205,     0,   223,   241,   223,     0,
       0,   -60,   -60,     0,   206,   266,   267,     0,   222,     0,
       0,   241,   241,   241,   241,   241,   241,   241,   241,   430,
     431,     0,     0,     0,   223,   241,   241,   290,   291,   -59,
     -59,   -59,   -59,   189,     0,     0,     0,   110,   111,   112,
     113,     0,     0,     0,     0,     0,   222,   240,   -66,   -66,
     -66,   -66,   -66,   -66,   -59,   292,   293,     0,   205,   205,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   188,
     -43,   -43,   -43,   -43,   -43,   -66,   -66,   -66,   294,   295,
       0,   -43,   -43,   -43,    -6,    -6,     0,    -6,    -6,    -6,
      -6,     0,     0,     0,   -43,     0,     0,     0,   -43,   -43,
       0,   -43,   240,     0,     0,     0,   -43,     0,     0,   222,
     -43,   -46,   205,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,   228,   229,     0,     0,     0,
     -46,   -46,   -46,   330,   331,   332,   -34,   -34,   205,   -34,
     -34,   -34,   -34,   -46,   188,   205,     0,   -46,   -46,     0,
     -46,     0,     0,   333,     0,   -46,     0,     0,   234,   -46,
       0,     0,   235,   205,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
     205,     0,     0,   -40,   -40,   -40,   344,   345,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,   -40,     0,   205,     0,
     -40,   -40,     0,   -40,     0,     0,     0,     0,   -40,     0,
       0,   -59,   -40,   -59,   346,   347,     0,   205,     0,     0,
     187,   204,     0,     0,     0,   188,   188,   188,   188,   368,
     369,   370,   371,     0,     0,   221,     0,     0,   222,   240,
     188,     0,   -36,   -36,   205,   -36,   -36,   -36,   -36,     0,
       0,   205,   205,   205,   205,   387,   388,   389,   390,     0,
       0,     0,   108,   109,   222,   240,   205,     0,     0,     0,
     205,     0,     0,   221,   239,     0,     0,   222,   222,   222,
     222,   406,   407,   408,   409,   204,   204,     0,     0,     0,
     222,   240,   222,     0,     0,     0,   187,     0,   205,     0,
       0,     0,     0,     0,     0,   240,   240,   240,   240,   426,
     427,   428,   429,     0,     0,     0,     0,     0,   222,   240,
     240,     0,     0,     0,     0,     0,     0,   188,     0,   239,
       0,     0,     0,     0,     0,     0,   221,     0,   -38,   204,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
       0,     0,     0,   -28,   -28,   204,   -28,   -28,   -28,   -28,
     -38,   187,   204,     0,   -38,   -38,     0,   -38,     0,     0,
       0,     0,   -38,     0,     0,     0,   -38,     0,     0,     0,
     204,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,     0,   204,     0,     0,
       0,   -45,   -45,   -45,   264,   265,   -61,   -61,   -61,   -61,
     186,   203,     0,     0,   -45,   204,     0,     0,   -45,   -45,
       0,   -45,     0,     0,     0,   220,   -45,     0,   -61,   -61,
     -45,     0,   266,   267,   204,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   187,   187,   366,   367,     0,     0,     0,     0,
       0,   107,     0,     0,     0,   221,   239,   187,     0,     0,
       0,   204,     0,   220,   238,     0,     0,     0,   204,   204,
     385,   386,     0,     0,     0,   203,   203,     0,     0,     0,
       0,   221,   239,   204,     0,     0,   186,   204,   316,   317,
     -59,   -59,   -59,   -59,   221,   221,   404,   405,     0,    72,
      73,   -59,   -59,   -59,   -59,     0,     0,   221,   239,   221,
     -59,     0,     0,     0,     0,   204,   318,   319,   -59,   238,
       0,     0,   239,   239,   424,   425,   220,    74,    75,   203,
       0,     0,     0,     0,     0,   221,   239,   239,     0,     0,
       0,     0,     0,     0,   187,   -67,   -67,   -67,   -67,   -67,
     -67,   185,   202,   -26,   -26,   203,   -26,   -26,   -26,   -26,
       0,   186,   203,     0,     0,     0,   219,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,   270,   271,   272,
     203,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -25,
     -25,   106,   -25,   -25,   -25,   -25,     0,   203,     0,     0,
       0,     0,     0,     0,   219,   237,   -65,     0,   -65,   -65,
     -65,   348,   349,     0,     0,   203,   202,   202,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   185,     0,     0,
       0,     0,   -24,   -24,   203,   -24,   -24,   -24,   -24,     0,
     -83,   -83,   186,   365,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   220,   238,   186,     0,     0,
     237,   203,     0,     0,     0,     0,     0,   219,   203,   384,
     202,     0,     0,     0,     0,   184,   201,     0,     0,     0,
       0,   220,   238,   203,     0,     0,     0,   203,     0,     0,
     218,     0,     0,     0,   220,   403,   202,     0,     0,     0,
       0,     0,   185,   202,     0,     0,     0,   220,   238,   220,
       0,     0,     0,   -22,   -22,   203,   -22,   -22,   -22,   -22,
       0,   202,   238,   423,     0,     0,     0,     0,   218,   236,
     123,     0,     0,     0,     0,   220,   238,   238,   202,     0,
     201,   201,   -20,   -20,   186,   -20,   -20,   -20,   -20,     0,
       0,   184,     0,     0,     0,     0,   202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   202,   -41,   -41,   -41,   -41,
     -41,     0,     0,   364,   236,     0,     0,   -41,   -41,   -41,
       0,   218,     0,     0,   201,     0,   219,   237,   185,     0,
     -41,     0,   202,     0,   -41,   -41,     0,   -41,     0,   383,
       0,     0,   -41,     0,     0,     0,   -41,     0,     0,     0,
     201,     0,   219,   237,   202,     0,   184,   201,   202,   316,
     317,   -60,   -60,   -60,   -60,   402,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   201,     0,     0,   219,   237,
     219,   -60,     0,     0,     0,     0,   202,   318,   319,   -83,
     -83,     0,   201,   422,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   219,   237,   237,     0,
     201,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   201,
     -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,   -63,   -63,   -63,   -63,   -63,   -63,
     218,   236,   380,     0,   -23,     0,   201,     0,   -23,   140,
       0,   -23,     0,     0,     0,     0,   -23,     0,     0,   -63,
     -23,   -63,   -63,   -63,   348,   349,   218,   236,   399,     0,
       0,     0,   201,     0,   344,   345,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   236,   418,     0,     0,     0,     0,   -60,
     201,   -60,   346,   347,   -21,     0,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,
     218,   236,   438,   -21,   -21,   -21,     0,     0,     0,   184,
       0,     0,     0,     0,     0,     0,   -21,     0,     0,     0,
     -21,   149,     0,   -21,     0,     0,     0,     0,   -21,     0,
       0,   -19,   -21,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,     0,
     -19,   -19,   -19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -19,     0,     0,     0,   -19,   152,     0,
     -19,     0,     0,     0,     0,   -19,     0,     0,    45,   -19,
       2,     3,     4,     5,    46,     0,    47,    48,    49,    23,
      24,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,   169,   160,     0,    29,     0,     0,
       0,     0,    30,     0,     0,   -49,    31,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -49,     0,     0,
       0,   -49,   -49,     0,   -49,     0,     0,     0,     0,   -49,
       0,     0,    45,   -49,     2,     3,     4,     5,    46,     0,
      47,    48,    49,    23,    24,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,   169,   165,
       0,    29,     0,     0,     0,     0,    30,     0,     0,    45,
      31,     2,     3,     4,     5,    46,     0,    47,    48,    49,
      23,    24,     0,     0,     0,     0,     0,     0,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,   169,   166,     0,    29,     0,
       0,     0,     0,    30,     0,     0,   -48,    31,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,     0,     0,     0,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -48,     0,
       0,     0,   -48,   -48,     0,   -48,     0,     0,     0,     0,
     -48,     0,     0,   -50,   -48,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,     0,     0,     0,   -50,
     -50,     0,   -50,     0,     0,     0,     0,   -50,     0,     0,
     -35,   -50,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,     0,     0,     0,   -35,   246,     0,   -35,
       0,     0,     0,     0,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
       0,     0,     0,   -35,   328,     0,   -35,     0,     0,     0,
       0,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,     0,     0,     0,
     -35,   356,     0,   -35,     0,     0,     0,     0,   -35,     0,
       0,   -34,   -35,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,     0,     0,     0,   -34,   -34,     0,
     -34,     0,     0,     0,     0,   -34,     0,     0,    45,   -34,
       2,     3,     4,     5,    46,     0,    47,    48,    49,    23,
      24,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,   169,   440,     0,    29,     0,     0,
       0,     0,    30,     0,     0,    45,    31,     2,     3,     4,
       5,    46,     0,    47,    48,    49,    23,    24,     0,     0,
       0,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,   169,   451,     0,    29,     0,     0,     0,     0,    30,
       0,     0,    45,    31,     2,     3,     4,     5,    46,     0,
      47,    48,    49,    23,    24,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,   169,   455,
       0,    29,     0,     0,     0,     0,    30,     0,     0,   -36,
      31,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,     0,     0,     0,   -36,   -36,     0,   -36,     0,
       0,     0,     0,   -36,     0,     0,    45,   -36,     2,     3,
       4,     5,    46,     0,    47,    48,    49,    23,    24,     0,
       0,     0,     0,     0,     0,    25,    26,    27,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,     0,    50,     0,
       0,     0,   169,     0,     0,    29,     0,     0,     0,     0,
      30,   -85,   -85,     0,    31,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -84,   -84,     0,     0,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -79,   -79,   -79,   -79,   -79,   -79,   -67,   -67,   -67,
     -67,   -67,   296,   297,   298,   -70,   -70,   -70,   -70,   -70,
     -70,   275,   -79,     0,     0,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -85,   -85,   -85,   -85,
     -85,   -85,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -77,   -77,   -77,   -77,   -77,   -77,   -85,   -85,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -84,   -84,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,   -79,   -79,
     -79,   -79,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -76,   -76,   -76,   -76,   -76,   -76,   355,   -79,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -86,   -86,   -86,   -86,   -86,   -86,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -75,   -75,   -75,   -75,   -75,
     -75,   -86,   -86,     0,     0,   -86,   -86,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -68,   -68,   -68,   -68,   -68,   -68,   -86,   -86,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -83,   -83,   -83,   -83,   -83,   -83,   -68,   -68,   -68,
     -68,   -68,   296,   297,   298,     0,     0,     0,     0,     0,
     -83,   -83,   -83,     0,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,     0,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,    83,   -79,     0,     0,
       0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,     0,     0,     0,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   273,     0,     0,
     -74,   -74,   274,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -85,   -85,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,   -69,   -69,   -69,
     -69,   -69,   296,   297,   298,   -71,   -71,   -71,   -71,   -71,
     -71,   -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,   -79,   -79,
     -79,   -79,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,   -72,   -72,   -72,   301,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -83,   -83,   -83,   -83,   -83,   -83,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,
     -73,   -83,   -83,   -83,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,
     -85,   -85,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -65,   -65,   -65,   -65,   -65,   -65,   -85,   -85,   -85,     0,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -84,   -84,   -84,   -84,   -84,   -84,   -65,   -65,   -65,
     294,   295,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -84,   -84,   -84,     0,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,   -79,   -79,
     -79,   -79,   -63,   -63,   -63,   294,   295,     0,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   327,   -79,   -79,     0,
       0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   353,     0,     0,     0,   -74,   354,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,    72,    73,   -60,   -60,   -60,   -60,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -83,     0,     0,   -83,
     -83,   -83,   -60,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -85,    74,    75,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,    72,    73,   -61,   -61,   -61,   -61,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -84,     0,     0,   -84,   -84,
     -84,   -61,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -79,
      74,    75,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -83,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -84,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -79,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -81,     0,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -86,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -86,   -86,   -86,     0,     0,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -81,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -86,     0,     0,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -80,     0,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -82,     0,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -86,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -82,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,    81,     0,
       0,     0,     0,    82,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,     0,   -79,     0,     0,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,     0,   -81,     0,
       0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,   -80,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,     0,   -82,     0,
       0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,   -83,     0,     0,     0,     0,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,   -85,     0,
       0,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,   -84,     0,     0,     0,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,   299,     0,
       0,     0,     0,   300,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   325,   -74,     0,     0,     0,   326,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -83,   -83,     0,     0,     0,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -85,
     -85,     0,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -84,   -84,     0,     0,     0,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -79,   -79,
       0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,   -86,     0,     0,     0,     0,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -86,   -86,     0,     0,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -80,   -80,     0,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,
     -82,     0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,   -70,   -70,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   350,   351,   352,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -77,   -77,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -68,   -68,     0,     0,   -68,
     -68,   -68,   -68,   270,   271,   272,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   270,   271,
     272,   -71,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     350,   351,   352,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     350,   351,   352,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -67,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -67,   -67,   -67,   -67,    78,    79,    80,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,     0,     0,     0,     0,   -77,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,     0,     0,   -76,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,     0,     0,
     -68,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -68,
     -68,   -68,   -68,    78,    79,    80,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -69,     0,     0,     0,     0,
       0,     0,   -71,     0,   -69,   -69,   -69,   -69,    78,    79,
      80,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,   -72,   -67,   -67,
     -67,   -67,   -67,   -67,   -73,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -67,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     322,   323,   324,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,   -70,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -77,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,   -78,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -76,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -68,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   322,   323,   324,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -69,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   322,
     323,   324,   -71,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -64,   -62,
     -64,   -64,   -64,   348,   349,   -66,     0,     0,   -62,   -62,
      76,    77,     0,     0,   -66,   -66,    76,    77,   -65,   -65,
     -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,     0,
       0,     0,     0,   -63,     0,     0,   -65,   -65,    76,    77,
     -64,     0,   -63,   -63,    76,    77,     0,     0,     0,   -64,
     -64,    76,    77,   -62,   -62,   -62,   -62,   -62,   -62,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -62,     0,     0,     0,     0,
       0,   -62,   -62,   320,   321,     0,   -64,   -64,   -64,   294,
     295,   -66,     0,     0,     0,     0,     0,   -66,   -66,   320,
     321,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,   -65,     0,     0,     0,     0,     0,   -65,
     -65,   320,   321,   -63,     0,     0,     0,     0,     0,   -63,
     -63,   320,   321,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     344,   345,   -61,   -61,   -61,   -61,   290,   291,   -60,   -60,
     -60,   -60,     0,     0,     0,   -64,     0,     0,     0,     0,
       0,   -64,   -64,   320,   321,   -61,     0,   -61,   346,   347,
       0,     0,     0,   -60,   292,   293,   290,   291,   -61,   -61,
     -61,   -61,     0,     0,   316,   317,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   292,   293,   -61,     0,     0,     0,
       0,     0,   318,   319
};

static const yytype_int16 yycheck[] =
{
      19,    19,   141,    22,    53,     1,   169,   274,    33,    28,
      29,   150,    37,     0,   153,    19,     0,    12,    13,    20,
       7,    18,    19,     7,    43,    20,    21,    22,    18,    19,
      49,    19,     0,   300,    53,    39,     1,    41,     3,     4,
       5,     6,    37,    38,    41,    40,    18,    19,    33,    39,
      45,    41,    48,    41,    49,    19,    19,    44,    20,   326,
      20,    20,    81,    82,   227,    16,    17,    18,    19,    41,
      12,    13,    19,    36,    93,    94,    41,    41,    20,    21,
      22,    41,   245,    12,    13,   104,   104,   354,    39,    36,
      41,    20,    21,    22,    19,    37,    38,    19,    40,    20,
      18,    19,   151,    45,    33,    33,    34,    49,   247,    20,
     159,    40,   161,    38,    39,    20,    45,    39,   137,    41,
      49,    39,   141,    41,    39,   144,    41,    40,   147,    18,
      19,   150,   151,    39,   153,    41,    12,    13,    18,    19,
     159,   128,   161,    33,    20,    21,    22,    36,    33,   145,
     146,    18,    19,    40,   173,   174,   175,    19,    38,    39,
     179,   180,   181,   182,    40,    41,    37,   163,    19,    45,
      33,    38,    39,    49,   193,   194,    38,    39,    33,   198,
     199,   200,    33,    14,    15,    16,    17,    18,    19,    33,
     329,   210,   211,    33,    12,    13,   215,   216,   217,    18,
      19,    36,    20,    21,    22,    18,    19,    38,    39,   228,
     229,    42,    43,    41,   233,   234,   235,    36,   357,    37,
      33,    19,    40,    16,    17,    18,    19,    45,   247,    12,
      13,    49,    39,   252,    41,    33,    41,    20,    21,    22,
      33,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,    40,    41,    35,
     279,    20,    45,    39,    37,    41,    49,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,    33,    34,    35,   305,    14,    15,    16,
      17,    18,    19,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   358,
     329,    38,    39,     9,   333,    42,    43,    44,    45,    38,
      39,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    37,   357,   358,
      39,    19,    41,   362,   362,    16,    17,    18,    19,    33,
      28,    29,    16,    17,    18,    19,    38,    39,    12,    13,
      33,    34,    33,    33,    34,    43,    20,    21,    22,    36,
     419,    49,    36,     1,    33,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    40,    41,    38,    39,
     439,    45,    20,    21,    22,    49,    16,    17,    18,    19,
     419,    38,    39,    81,    82,    33,    33,    34,    35,    37,
      38,    37,    40,    40,    33,    93,    94,    45,    38,    39,
     439,    49,    16,    17,    18,    19,   104,    16,    17,    18,
      19,    18,    19,    41,    12,    13,    16,    17,    18,    19,
      38,    39,    20,    21,    22,    39,    33,    41,    23,    24,
      38,    39,    41,    28,    29,    30,    31,    41,    36,   137,
      37,    41,    40,    39,    37,    41,   144,    45,    43,   147,
      40,    49,    16,    17,    18,    19,    39,     1,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      36,    39,    36,    41,    41,   173,    20,    21,    22,    38,
      39,   179,   180,    78,    79,    80,    81,    82,    39,    33,
      41,    33,    41,    37,    38,    41,    40,     9,    93,    94,
     198,    45,    39,    41,    41,    49,    39,    41,    41,   104,
      16,    17,    18,    19,    39,    41,    41,   215,    39,     1,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    38,    39,    41,   233,    12,    13,    20,    21,
      22,    36,   137,    41,    20,    21,    22,    36,    41,   144,
      36,    33,   147,    41,   252,    37,    38,    36,    40,     9,
       7,    37,   179,    45,    40,   128,    -1,    49,    -1,    45,
      -1,    -1,    -1,    49,    -1,   273,   274,    -1,   173,   174,
     175,   279,    -1,    -1,   179,   180,   181,   182,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   193,   194,
      -1,   299,   300,   198,   199,   200,    -1,   305,    -1,    12,
      13,     3,     4,     5,     6,   210,   211,    20,    21,    22,
     215,   216,   217,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    -1,   228,   229,   333,    -1,    40,   233,   234,
     235,    -1,    45,    -1,     0,     1,    49,     3,     4,     5,
       6,    -1,    -1,    12,    13,   353,   354,   252,    -1,    -1,
      -1,    20,    21,    22,   362,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    40,    41,    -1,   279,    -1,    45,    -1,    -1,    -1,
      49,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    -1,    -1,    -1,
     305,    14,    15,    16,    17,    18,    19,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    -1,    -1,    38,    39,    -1,   333,    42,
      43,    44,    45,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    28,    29,    -1,    -1,    -1,    -1,   362,    -1,     1,
      -1,     3,     4,     5,     6,     7,    43,     9,    10,    11,
      12,    13,    -1,    12,    13,    -1,    -1,    -1,    20,    21,
      22,    20,    21,    22,    14,    15,    16,    17,    18,    19,
      -1,    33,    -1,    -1,    -1,    37,    38,    36,    40,    -1,
      -1,    40,    -1,    45,    81,    82,    45,    49,    -1,    39,
      49,    41,    42,    43,    44,    45,    93,    94,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,   104,     9,    10,
      11,    12,    13,     1,    -1,     3,     4,     5,     6,    20,
      21,    22,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    33,    20,    21,    22,    37,    38,    -1,    40,
     137,    -1,    -1,    -1,    45,    -1,    -1,   144,    49,    -1,
     147,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    14,    15,    16,    17,    18,    19,    -1,
      -1,    12,    13,    -1,    -1,    -1,   173,   174,   175,    20,
      21,    22,   179,   180,   181,   182,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    -1,   193,   194,    -1,    40,
      -1,   198,   199,   200,    45,    -1,     0,     1,    49,     3,
       4,     5,     6,   210,   211,    12,    13,    -1,   215,   216,
     217,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,   228,   229,    -1,    -1,    -1,   233,   234,   235,    -1,
      -1,     0,     1,    40,     3,     4,     5,     6,    45,    -1,
      -1,    -1,    49,    -1,    -1,   252,    14,    15,    16,    17,
      18,    19,    -1,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
      38,    39,   279,    -1,    42,    43,    44,    45,    -1,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,    -1,    -1,    -1,   305,    14,
      15,    16,    17,    18,    19,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    -1,    -1,    38,    39,    -1,   333,    42,    43,    44,
      45,    -1,    -1,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    28,
      29,    -1,    -1,    -1,    -1,   362,    -1,     1,    -1,     3,
       4,     5,     6,     7,    43,     9,    10,    11,    12,    13,
      -1,    12,    13,    -1,    -1,    -1,    20,    21,    22,    20,
      21,    22,    14,    15,    16,    17,    18,    19,    -1,    33,
      -1,    -1,    -1,    37,    38,    -1,    40,    76,    77,    40,
      -1,    45,    81,    82,    45,    49,    -1,    39,    49,    41,
      42,    43,    44,    45,    93,    94,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,   104,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    40,   137,    -1,
      -1,    -1,    45,    -1,    -1,   144,    49,     1,   147,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    12,    13,    -1,    -1,    -1,    20,    21,    22,    20,
      21,    22,     0,     1,   173,     3,     4,     5,     6,    33,
     179,   180,    -1,    37,    38,    -1,    40,    -1,    -1,    40,
      -1,    45,    -1,    -1,    45,    49,    -1,    -1,    49,   198,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    12,    13,   215,    12,    13,    20,
      21,    22,    20,    21,    22,    20,    21,    22,    -1,    -1,
      -1,    -1,    33,    -1,   233,    -1,    37,    38,    -1,    40,
      -1,    -1,    40,    -1,    45,    40,    -1,    45,    49,    -1,
      45,    49,    -1,   252,    49,    14,    15,    16,    17,    18,
      19,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    -1,    -1,    -1,   273,   274,   275,    -1,    -1,    -1,
     279,    -1,    41,    42,    43,    44,    45,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,    -1,    -1,    -1,
     299,   300,   301,    -1,    -1,    -1,   305,    14,    15,    16,
      17,    18,    19,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,    28,    29,    -1,   325,   326,   327,    -1,
      -1,    38,    39,    -1,   333,    42,    43,    -1,    43,    -1,
      -1,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,    -1,    -1,   353,   354,   355,    14,    15,    16,
      17,    18,    19,   362,    -1,    -1,    -1,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    14,    15,
      16,    17,    18,    19,    41,    42,    43,    -1,    93,    94,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   104,
       9,    10,    11,    12,    13,    41,    42,    43,    44,    45,
      -1,    20,    21,    22,     0,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      -1,    40,   137,    -1,    -1,    -1,    45,    -1,    -1,   144,
      49,     1,   147,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    12,    13,    -1,    -1,    -1,
      20,    21,    22,    20,    21,    22,     0,     1,   173,     3,
       4,     5,     6,    33,   179,   180,    -1,    37,    38,    -1,
      40,    -1,    -1,    40,    -1,    45,    -1,    -1,    45,    49,
      -1,    -1,    49,   198,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
     215,    -1,    -1,    20,    21,    22,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    33,    -1,   233,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    39,    49,    41,    42,    43,    -1,   252,    -1,    -1,
      28,    29,    -1,    -1,    -1,   260,   261,   262,   263,   264,
     265,   266,   267,    -1,    -1,    43,    -1,    -1,   273,   274,
     275,    -1,     0,     1,   279,     3,     4,     5,     6,    -1,
      -1,   286,   287,   288,   289,   290,   291,   292,   293,    -1,
      -1,    -1,    70,    71,   299,   300,   301,    -1,    -1,    -1,
     305,    -1,    -1,    81,    82,    -1,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,    93,    94,    -1,    -1,    -1,
     325,   326,   327,    -1,    -1,    -1,   104,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,   353,   354,
     355,    -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,     1,   147,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,     0,     1,   173,     3,     4,     5,     6,
      33,   179,   180,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,
     198,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,   215,    -1,    -1,
      -1,    20,    21,    22,    14,    15,    16,    17,    18,    19,
      28,    29,    -1,    -1,    33,   233,    -1,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    43,    45,    -1,    38,    39,
      49,    -1,    42,    43,   252,     0,     1,    -1,     3,     4,
       5,     6,   260,   261,   262,   263,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,   273,   274,   275,    -1,    -1,
      -1,   279,    -1,    81,    82,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,   299,   300,   301,    -1,    -1,   104,   305,    14,    15,
      16,    17,    18,    19,   312,   313,   314,   315,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,   325,   326,   327,
      36,    -1,    -1,    -1,    -1,   333,    42,    43,    33,   137,
      -1,    -1,   340,   341,   342,   343,   144,    42,    43,   147,
      -1,    -1,    -1,    -1,    -1,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,   362,    14,    15,    16,    17,    18,
      19,    28,    29,     0,     1,   173,     3,     4,     5,     6,
      -1,   179,   180,    -1,    -1,    -1,    43,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
     198,    14,    15,    16,    17,    18,    19,    -1,    -1,     0,
       1,    68,     3,     4,     5,     6,    -1,   215,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,   233,    93,    94,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,   104,    -1,    -1,
      -1,    -1,     0,     1,   252,     3,     4,     5,     6,    -1,
      34,    35,   260,   261,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,   273,   274,   275,    -1,    -1,
     137,   279,    -1,    -1,    -1,    -1,    -1,   144,   286,   287,
     147,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,   299,   300,   301,    -1,    -1,    -1,   305,    -1,    -1,
      43,    -1,    -1,    -1,   312,   313,   173,    -1,    -1,    -1,
      -1,    -1,   179,   180,    -1,    -1,    -1,   325,   326,   327,
      -1,    -1,    -1,     0,     1,   333,     3,     4,     5,     6,
      -1,   198,   340,   341,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,   353,   354,   355,   215,    -1,
      93,    94,     0,     1,   362,     3,     4,     5,     6,    -1,
      -1,   104,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,   252,     9,    10,    11,    12,
      13,    -1,    -1,   260,   137,    -1,    -1,    20,    21,    22,
      -1,   144,    -1,    -1,   147,    -1,   273,   274,   275,    -1,
      33,    -1,   279,    -1,    37,    38,    -1,    40,    -1,   286,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,
     173,    -1,   299,   300,   301,    -1,   179,   180,   305,    14,
      15,    16,    17,    18,    19,   312,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,   198,    -1,    -1,   325,   326,
     327,    36,    -1,    -1,    -1,    -1,   333,    42,    43,    34,
      35,    -1,   215,   340,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,   353,   354,   355,    -1,
     233,    -1,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   252,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    14,    15,    16,    17,    18,    19,
     273,   274,   275,    -1,    33,    -1,   279,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    39,
      49,    41,    42,    43,    44,    45,   299,   300,   301,    -1,
      -1,    -1,   305,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,    -1,    -1,    -1,    -1,    39,
     333,    41,    42,    43,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
     353,   354,   355,    20,    21,    22,    -1,    -1,    -1,   362,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,     1,    49,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,     1,    49,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,
      49,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      45,    -1,    -1,     1,    49,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
       1,    49,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,     1,    49,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,     1,    49,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,    49,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    45,
      -1,    -1,     1,    49,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,     1,
      49,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    -1,     1,    49,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    33,    -1,
      -1,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      45,    34,    35,    -1,    49,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    34,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    34,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    34,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    34,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    34,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    35,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    -1,    35,    -1,    -1,    38,
      39,    40,    33,    42,    43,    44,    45,    46,    47,    48,
      35,    42,    43,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    -1,    35,    -1,    -1,    38,    39,
      40,    33,    42,    43,    44,    45,    46,    47,    48,    35,
      42,    43,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    34,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    35,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    35,    -1,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    35,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      35,    -1,    -1,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    35,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    35,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    35,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      35,    36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    35,    36,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    35,
      36,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    38,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    38,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    33,    41,    42,    43,    44,    45,
      46,    47,    48,    42,    43,    44,    45,    46,    47,    48,
      14,    15,    16,    17,    18,    19,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    42,    43,
      44,    45,    46,    47,    48,    42,    43,    44,    45,    46,
      47,    48,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      42,    43,    44,    45,    46,    47,    48,    42,    43,    44,
      45,    46,    47,    48,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    42,    43,    44,    45,    46,    47,    48,    42,
      43,    44,    45,    46,    47,    48,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    42,    43,    44,    45,    46,    47,
      48,    42,    43,    44,    45,    46,    47,    48,    14,    15,
      16,    17,    18,    19,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    33,    14,    15,
      16,    17,    18,    19,    33,    -1,    42,    43,    44,    45,
      46,    47,    48,    42,    43,    44,    45,    46,    47,    48,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    18,    19,    -1,
      14,    15,    16,    17,    18,    19,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    39,    33,
      41,    42,    43,    44,    45,    33,    -1,    -1,    42,    43,
      44,    45,    -1,    -1,    42,    43,    44,    45,    14,    15,
      16,    17,    18,    19,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    33,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    42,    43,    44,    45,
      33,    -1,    42,    43,    44,    45,    -1,    -1,    -1,    42,
      43,    44,    45,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    -1,    41,    42,    43,    44,
      45,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    14,    15,    16,    17,    18,    19,    -1,
      14,    15,    16,    17,    18,    19,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    41,    42,    43,    14,    15,    16,    17,
      18,    19,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    51,    52,    53,    54,
      55,    58,    82,    33,    37,    64,     0,    53,    33,    34,
      20,    38,    65,    12,    13,    20,    21,    22,    37,    40,
      45,    49,    56,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    35,    40,     1,     7,     9,    10,    11,
      33,    54,    64,    66,    67,    68,    69,    70,    71,    82,
      78,    80,    78,    56,    57,    71,    78,    78,    19,    18,
      16,    17,    14,    15,    42,    43,    44,    45,    46,    47,
      48,    35,    40,    34,    36,    71,     1,     3,    41,    62,
      63,    82,    33,    40,    40,    64,    71,    33,    38,    67,
      33,    33,    20,    38,    39,    41,    73,    74,    75,    75,
      76,    76,    76,    76,    77,    77,    78,    78,    78,    71,
      41,    71,    81,    72,    36,    41,    41,    37,    39,    41,
      20,    71,    71,     9,    38,    56,    36,    39,    41,    37,
      38,    61,    63,    37,    35,    41,    41,    40,    71,    38,
      60,    66,    38,    59,    36,    71,    64,    64,    71,    66,
      38,    66,    36,     8,    41,    38,    38,    64,    33,    37,
      20,    21,    22,    40,    12,    13,    20,    21,    22,    37,
      40,    45,    49,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    12,    13,    20,    21,    22,    40,    45,
      49,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      12,    13,    20,    21,    22,    40,    45,    49,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    37,    12,    13,
      20,    21,    22,    40,    45,    49,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    37,    38,    65,    71,    20,
      21,    22,    40,    78,    80,    78,    57,    71,    78,    78,
      19,    18,    16,    17,    14,    15,    42,    43,    44,    45,
      46,    47,    48,    35,    40,    34,    20,    21,    22,    40,
      78,    80,    78,    71,    78,    78,    19,    18,    16,    17,
      14,    15,    42,    43,    44,    45,    46,    47,    48,    35,
      40,    34,    20,    21,    22,    40,    78,    80,    78,    71,
      78,    78,    19,    18,    16,    17,    14,    15,    42,    43,
      44,    45,    46,    47,    48,    35,    40,    34,    38,    65,
      20,    21,    22,    40,    78,    80,    78,    71,    78,    78,
      19,    18,    16,    17,    14,    15,    42,    43,    44,    45,
      46,    47,    48,    35,    40,    34,    38,    65,    66,    41,
      71,    38,    39,    41,    73,    74,    75,    75,    76,    76,
      76,    76,    77,    77,    78,    78,    78,    71,    41,    81,
      72,    71,    41,    73,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    71,    41,    81,    72,
      71,    41,    73,    74,    75,    75,    76,    76,    76,    76,
      77,    77,    78,    78,    78,    71,    41,    81,    72,    66,
      71,    41,    73,    74,    75,    75,    76,    76,    76,    76,
      77,    77,    78,    78,    78,    71,    41,    81,    72,    66,
      38,    41,    38,    36,    41,    41,    36,    41,    41,    36,
      41,    38,    41,    36,    41,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    56,    56,    56,    57,    57,    59,
      58,    60,    58,    61,    58,    58,    58,    58,    58,    62,
      62,    63,    63,    63,    64,    65,    64,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    75,    75,    75,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    82,
      82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     2,     1,
       3,     2,     4,     5,     1,     3,     4,     1,     3,     0,
       9,     0,     9,     0,     8,     7,     7,     6,     5,     1,
       3,     2,     4,     5,     2,     0,     4,     1,     2,     1,
       2,     2,     1,     1,     1,     2,     2,     5,     7,     5,
       7,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     1,
       4,     3,     4,     1,     1,     1,     3,     1,     3,     1,
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
#line 64 "language.y"
    { root = (yyvsp[0].node); }
#line 2640 "src/parser.c"
    break;

  case 4:
#line 69 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2646 "src/parser.c"
    break;

  case 7:
#line 75 "language.y"
    { }
#line 2652 "src/parser.c"
    break;

  case 8:
#line 76 "language.y"
    { }
#line 2658 "src/parser.c"
    break;

  case 10:
#line 81 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2664 "src/parser.c"
    break;

  case 11:
#line 85 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); assign((yyval.node)); add_symbol_var((yyval.node)); }
#line 2670 "src/parser.c"
    break;

  case 12:
#line 86 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2676 "src/parser.c"
    break;

  case 13:
#line 87 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); add_symbol_arr((yyval.node)); }
#line 2682 "src/parser.c"
    break;

  case 15:
#line 92 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2688 "src/parser.c"
    break;

  case 16:
#line 93 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2694 "src/parser.c"
    break;

  case 18:
#line 98 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2700 "src/parser.c"
    break;

  case 19:
#line 102 "language.y"
    {begin((yyvsp[-4].node)->name);}
#line 2706 "src/parser.c"
    break;

  case 20:
#line 102 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-8].node), (yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2712 "src/parser.c"
    break;

  case 21:
#line 103 "language.y"
    {begin((yyvsp[-4].node)->name);}
#line 2718 "src/parser.c"
    break;

  case 22:
#line 103 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-8].node), (yyvsp[-7].node),     (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2724 "src/parser.c"
    break;

  case 23:
#line 104 "language.y"
    {begin((yyvsp[-3].node)->name);}
#line 2730 "src/parser.c"
    break;

  case 24:
#line 104 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-7].node), (yyvsp[-6].node),     (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2736 "src/parser.c"
    break;

  case 25:
#line 105 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-3].node),     NULL)); assign((yyval.node)); }
#line 2742 "src/parser.c"
    break;

  case 26:
#line 106 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-6].node), (yyvsp[-5].node),         NULL)); assign((yyval.node)); }
#line 2748 "src/parser.c"
    break;

  case 27:
#line 107 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_DEF, "function-definition", (yyvsp[-5].node), (yyvsp[-4].node),         NULL)); assign((yyval.node)); }
#line 2754 "src/parser.c"
    break;

  case 28:
#line 108 "language.y"
    { }
#line 2760 "src/parser.c"
    break;

  case 30:
#line 113 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2766 "src/parser.c"
    break;

  case 31:
#line 117 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VAR, "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL)); assign((yyval.node)); }
#line 2772 "src/parser.c"
    break;

  case 32:
#line 118 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL)); assign((yyval.node)); }
#line 2778 "src/parser.c"
    break;

  case 33:
#line 119 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DECL_VEC, "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2784 "src/parser.c"
    break;

  case 34:
#line 123 "language.y"
    { }
#line 2790 "src/parser.c"
    break;

  case 35:
#line 124 "language.y"
    {begin(NULL);}
#line 2796 "src/parser.c"
    break;

  case 36:
#line 124 "language.y"
    { (yyval.node) = (yyvsp[-1].node); finish(); }
#line 2802 "src/parser.c"
    break;

  case 38:
#line 129 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2808 "src/parser.c"
    break;

  case 39:
#line 133 "language.y"
    { }
#line 2814 "src/parser.c"
    break;

  case 44:
#line 138 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2820 "src/parser.c"
    break;

  case 46:
#line 140 "language.y"
    { }
#line 2826 "src/parser.c"
    break;

  case 47:
#line 144 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL)); assign((yyval.node)); }
#line 2832 "src/parser.c"
    break;

  case 48:
#line 145 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2838 "src/parser.c"
    break;

  case 49:
#line 149 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2844 "src/parser.c"
    break;

  case 50:
#line 150 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL)); assign((yyval.node)); }
#line 2850 "src/parser.c"
    break;

  case 51:
#line 154 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return",     NULL)); assign((yyval.node)); }
#line 2856 "src/parser.c"
    break;

  case 52:
#line 155 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2862 "src/parser.c"
    break;

  case 54:
#line 160 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2868 "src/parser.c"
    break;

  case 56:
#line 165 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2874 "src/parser.c"
    break;

  case 58:
#line 170 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2880 "src/parser.c"
    break;

  case 60:
#line 175 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2886 "src/parser.c"
    break;

  case 61:
#line 176 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2892 "src/parser.c"
    break;

  case 63:
#line 181 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2898 "src/parser.c"
    break;

  case 64:
#line 182 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2904 "src/parser.c"
    break;

  case 65:
#line 183 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2910 "src/parser.c"
    break;

  case 66:
#line 184 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2916 "src/parser.c"
    break;

  case 68:
#line 189 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2922 "src/parser.c"
    break;

  case 69:
#line 190 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2928 "src/parser.c"
    break;

  case 71:
#line 195 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2934 "src/parser.c"
    break;

  case 72:
#line 196 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2940 "src/parser.c"
    break;

  case 73:
#line 197 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2946 "src/parser.c"
    break;

  case 75:
#line 202 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('!'   , "'!'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2952 "src/parser.c"
    break;

  case 76:
#line 203 "language.y"
    { (yyval.node) = nl_push(node_list, node_init('-'   , "'-'" , (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2958 "src/parser.c"
    break;

  case 77:
#line 204 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "'++'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2964 "src/parser.c"
    break;

  case 78:
#line 205 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "'--'", (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 2970 "src/parser.c"
    break;

  case 80:
#line 210 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(VEC_INDEX, "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2976 "src/parser.c"
    break;

  case 81:
#line 211 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_CALL , "function-call", (yyvsp[-2].node)    , NULL)); assign((yyval.node)); }
#line 2982 "src/parser.c"
    break;

  case 82:
#line 212 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUN_CALL , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL)); assign((yyval.node)); }
#line 2988 "src/parser.c"
    break;

  case 86:
#line 219 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2994 "src/parser.c"
    break;

  case 88:
#line 225 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL)); assign((yyval.node)); }
#line 3000 "src/parser.c"
    break;


#line 3004 "src/parser.c"

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
#line 235 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
