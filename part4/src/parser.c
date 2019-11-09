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
#line 42 "language.y"

#include <stdio.h>
#include <string.h>
#include "node.h"
#include "table.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Table * symbol_table;
void add_symbol_var(Node* node);
void add_symbol_fun(Node* node);

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
#define YYLAST   6196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

#define YYUNDEFTOK  2
#define YYMAXUTOK   280

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
       2,     2,     2,    42,     2,     2,     2,    41,     2,     2,
      33,    34,    39,    37,    32,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      35,    27,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    65,    66,    70,    71,    72,    73,    74,
      78,    79,    83,    84,    85,    89,    90,    91,    95,    96,
     100,   101,   102,   103,   107,   108,   112,   113,   117,   118,
     122,   123,   124,   125,   126,   127,   128,   132,   133,   137,
     138,   142,   143,   147,   148,   152,   153,   157,   158,   162,
     163,   164,   168,   169,   170,   171,   172,   176,   177,   178,
     182,   183,   184,   185,   189,   190,   191,   192,   193,   197,
     198,   199,   200,   206,   207,   208,   209,   214,   215,   219,
     220,   221,   222
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
  "INVALID_CHAR_CONST", "';'", "'='", "'['", "']'", "'{'", "'}'", "','",
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "$accept", "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_declarator",
  "parameter_list", "compound_statement", "statement_list", "statement",
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
     275,   276,   277,   278,   279,   280,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -248

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-248)))

#define YYTABLE_NINF -83

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     211,   171,    14,    23,    61,   117,    62,   378,   595,   134,
     -17,   217,   123,   621,  1060,   652,  -248,   894,   922,    16,
     948,  1021,   242,   139,    70,   138,   148,   146,   781,   781,
    2964,  2992,  3020,  1111,  1221,   849,   781,   781,   166,  1517,
    1564,  1835,  1880,   182,   219,    94,   151,   278,  1943,  1162,
    5036,  5064,  3888,  3048,   228,   438,   225,   248,   503,    11,
    2071,   849,   849,   294,   297,  5092,  3916,  5120,   292,  5148,
    5176,  2111,  1308,  2169,  2227,  2267,   781,   781,   781,   781,
     781,   781,   781,   781,   781,   781,   781,   781,   781,   863,
     534,   781,   401,    -1,    77,   304,   314,   323,   121,   220,
     268,   407,   342,   346,   352,  3076,   223,   532,  6101,  6124,
    1776,  5939,  5964,  5970,  5204,  5232,  5260,  5288,  5316,   377,
    3944,   415,   423,    99,   410,   325,   339,   246,   247,   525,
     295,   413,   426,   849,  3972,   968,  4000,   414,   338,   443,
      84,  2311,   430,   447,   426,   452,  2351,  2391,  2431,  4028,
    4056,  4084,   849,   974,   974,  3104,  3132,  3160,   849,   974,
     974,    46,     1,   317,  1017,  1497,   113,  5329,  4112,  3188,
    1063,  1063,  1303,  1450,  2740,   438,   849,  1063,  1063,   391,
     164,    42,   356,   188,   790,  1790,  4644,  3216,  2768,  1153,
    1153,  3244,  3272,  3300,   849,  1153,  1153,     3,   310,   482,
    1970,  5995,  5357,  5385,  4140,  3328,   449,  1181,  1181,  2796,
    2824,  2852,   849,  1181,  1181,    38,     8,    34,   478,  5802,
    4654,  4682,  3356,  2880,  2471,  2511,   473,  2551,   455,  4168,
    4196,  4224,   849,  5393,  4252,  5421,   500,  5429,  5457,   974,
     974,   974,   974,   974,   974,   974,   974,   974,   974,   974,
     974,   974,   863,   650,   974,  3384,  3412,  3440,   849,  4693,
    3468,  4721,   400,   505,  4732,  4760,  1063,  1063,  1063,  1063,
    1063,  1063,  1063,  1063,  1063,  1063,  1063,  1063,  1063,   863,
     669,  1063,  4280,  4308,  4336,   849,  5470,  4364,  5498,   509,
    5526,  5554,  1153,  1153,  1153,  1153,  1153,  1153,  1153,  1153,
    1153,  1153,  1153,  1153,  1153,   863,   734,  1153,   157,  3496,
    3524,  3552,   849,  4770,  3580,  4798,   523,  4808,  4836,  1181,
    1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,
    1181,  1181,   863,   758,  1181,   404,  2591,  2631,  2671,   477,
    4392,   526,  3608,     5,   343,  1233,  1260,  5078,  5106,  5134,
    5162,  5562,  5590,  5598,  5626,  5634,   493,  4420,   453,    48,
     536,   487,   432,  2908,   155,   402,  1598,  1911,  5810,  5835,
    5843,  5868,  4847,  4875,  4886,  4914,  4925,   545,  3636,   501,
     190,   543,  3664,   335,   488,  6137,  6160,  6020,  6045,  6070,
    6095,  5662,  5690,  5718,  5746,  5774,   549,  4448,   510,    83,
     830,   563,  2936,    37,    82,  1375,  1979,  5875,  5900,  5907,
    5932,  4953,  4963,  4991,  5001,  5029,   573,  3692,   527,    45,
     731,  2711,  4476,  4504,  4532,  3720,   521,  3748,  3776,  4560,
    4588,  4616,   537,   574,  3804,  3832,  3860,   541
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,   597,   135,   -51,   -18,   448,  -248,  -248,
      -8,  -141,   -37,  -248,  -248,  -248,  1913,  1728,  1685,  1416,
    1369,  1080,   965,   313,   640,   -14,  -247,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    38,    10,    93,    94,    11,   101,
      15,    39,    40,    41,    42,    43,    44,   161,   162,   163,
     164,   165,   166,   167,   168,    66,   122,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    56,    73,    21,    12,    53,   358,   227,   100,   -10,
      19,    12,    97,    53,    98,     3,     4,     5,    63,   240,
     -45,   169,   292,   240,   -46,    53,   320,   -45,    28,    29,
     -18,   -18,   -43,   379,   -79,   -45,    30,    31,    32,   -46,
     -45,   188,   -45,   -80,   205,    99,    55,   169,   169,    35,
     321,   322,   -47,   -47,    36,   320,   -46,   319,    37,   398,
     267,   -45,    16,   206,   319,   239,   -47,   239,   -47,   -46,
     -43,   -46,   -43,   -45,   -45,   205,   223,   -44,   139,   -44,
     -43,   -81,   -44,   336,   338,   -37,   418,   -37,   -37,   -37,
     -37,   -37,   144,   -37,   -37,   -37,   -37,   -37,   321,   322,
     -48,   -48,   292,    61,   -37,   -37,   -37,   138,   124,   125,
     -37,   188,   -44,    76,   -48,   -37,   -48,   -37,    76,   169,
     -43,   223,   -37,   140,   141,   -44,   -37,   -57,   -57,   -57,
     -57,   -57,   -57,   206,    53,     9,   146,   -82,   169,   234,
     234,   -79,     9,    22,   169,   234,   234,   -57,   -57,   -57,
     -57,   -57,   249,   250,   251,   128,   260,   260,    28,    29,
      18,   188,   169,   260,   260,    60,    30,    31,    32,    77,
     -45,    62,   -41,   267,   -46,   287,   287,   -45,   148,    35,
     169,   287,   287,   266,    36,   400,   -46,   -46,    37,   -12,
      73,   -12,    71,   314,   314,   -43,   -43,    13,   169,   314,
     314,    14,   270,   271,   -49,   -49,   -49,   -49,    74,   266,
      53,    53,     1,    53,     2,     3,     4,     5,   169,   -49,
     -49,   -44,   -44,   272,   273,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   205,   223,
     234,    77,   -46,    20,   169,    75,   -21,    14,    92,   -46,
     -21,   -11,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   205,   223,   260,   -12,   -12,
      58,   169,   -23,   -22,   -15,    59,   -23,   -22,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   205,   223,   287,    78,    79,   -47,   -47,   169,    73,
     -24,    73,   -24,   104,   -47,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   205,   223,
     314,   -20,    53,   -42,    53,   -20,   105,    51,   293,   -45,
     -13,   -13,    51,   241,   242,   -47,   -47,   170,   171,   -45,
      51,    65,    67,   126,   138,   172,   173,   174,   188,    69,
      70,   -47,    51,   293,   -46,   175,   137,   127,   176,   241,
     242,   -48,   -48,   177,   -46,   -14,   -14,   178,   186,   -19,
     -19,   203,   268,   269,   -47,   -47,   131,   -48,    -2,     1,
     132,     2,     3,     4,     5,   133,   205,   -47,   -47,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,   116,
     117,   118,   203,   221,    51,   -26,   134,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   268,   269,
     -48,   -48,   -15,   -15,   -26,   -26,   -26,   -12,   -12,    58,
     -26,   361,   362,   -48,   -48,   -26,   -16,   -26,   186,   129,
     -17,   130,   -26,   224,   170,   171,   -26,   -77,   221,   -77,
     170,   171,   172,   173,   174,   135,   225,   136,   172,   173,
     174,    51,   175,   426,   145,   176,   233,   235,   175,   308,
     177,   176,   237,   238,   178,   -25,   177,   -25,   147,   -78,
     178,   -78,   -26,   259,   261,   135,   -27,   424,   186,   340,
     264,   265,   323,   324,   -49,   -49,   -49,   -49,   294,   295,
     -47,   -47,   286,   288,   294,   295,   -48,   -48,   290,   291,
     -49,   -47,   -49,   325,   326,   189,   190,   -48,   -16,   -16,
     313,   315,   423,   191,   192,   193,   317,   318,     2,     3,
       4,     5,    95,   135,   342,   428,   194,    51,    51,   363,
      51,   195,   135,   382,   431,   196,   207,   208,    78,    79,
     -48,   -48,   -17,   -17,   209,   210,   211,   402,   -48,   135,
     422,   436,   353,   354,   355,   203,   221,   212,   120,   -13,
     425,   -13,   213,   -14,   427,   -14,   214,   429,   430,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   374,
     375,   376,   203,   221,   186,    -3,    -3,   434,    -3,    -3,
      -3,    -3,   435,   437,    17,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   393,   394,   395,   203,   221,
     203,    -8,    -8,   262,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   413,   414,   415,   203,   221,   221,     0,    51,
       0,    51,    -9,    -9,    52,    -9,    -9,    -9,    -9,    52,
       0,     0,   207,   208,     0,     0,     0,    52,    52,    52,
     209,   210,   211,     0,     0,   186,    52,    52,     0,    52,
       0,   207,   208,   212,   357,     0,     0,     0,   213,   209,
     210,   211,   214,     0,     0,   187,     0,     0,   204,     0,
       0,     0,   212,   378,     0,     0,     0,   213,     0,     0,
       0,   214,     0,   203,     0,     0,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,   204,
     222,    52,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   207,   208,     0,     0,
       0,   -27,   -27,   -27,   209,   210,   211,   -27,     0,     0,
       0,     0,   -27,     0,   -27,   187,     0,   212,   397,   -27,
     207,   208,   213,   -27,     0,   222,   214,     0,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,   212,   417,    28,    29,     0,   213,     0,     0,     0,
     214,   149,   150,   151,   -52,   -52,   -52,   -52,   -52,   -52,
     187,   187,     0,     0,   152,   187,     0,   187,   187,    36,
       0,   -52,   -52,    37,     0,   -52,   -52,   274,   275,   204,
     204,     0,     0,     0,     0,   204,   204,     0,     0,     0,
       0,     0,   189,   190,     0,     0,     0,   222,   222,     0,
     191,   192,   193,   222,   222,     0,     0,     0,     0,   432,
       0,   153,   154,   194,    52,    52,     0,    52,   195,   155,
     156,   157,   196,     0,     0,   189,   190,     0,     0,     0,
       0,     0,   158,   191,   192,   193,     0,   159,     0,     0,
       0,   160,   204,   222,    -4,    -4,   194,    -4,    -4,    -4,
      -4,   195,     0,     0,     0,   196,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   204,
     222,   187,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,
       0,     0,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   222,   204,    -5,    -5,
       0,    -5,    -5,    -5,    -5,     0,     0,     0,     0,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   204,   222,   222,     0,    52,     0,    52,    50,
     207,   208,     0,     0,    50,     0,   153,   154,   209,   210,
     211,     0,    50,     0,   229,   230,   231,     0,     0,     0,
       0,   212,   187,     0,    50,     0,   213,   232,     0,     0,
     214,     0,   159,     0,     0,     0,   160,     0,     0,     0,
     185,    -6,    -6,   202,    -6,    -6,    -6,    -6,     0,     0,
       0,   243,   244,   -49,   -49,   -49,   -49,     0,     0,     0,
     204,    50,    50,    50,    50,    50,    50,    50,    50,   114,
     115,   -49,   245,   246,   202,   220,    50,     0,     0,     0,
       0,    23,     0,     2,     3,     4,     5,    24,     0,    25,
      26,    27,    28,    29,     0,   170,   171,     0,     0,     0,
      30,    31,    32,   255,   256,   257,    33,     0,     0,     0,
     185,    34,     0,    35,    49,     0,   258,     0,    36,    49,
     220,   177,    37,     0,     0,   178,     0,    49,     0,     0,
       0,     0,   -30,    50,   -30,   -30,   -30,   -30,   -30,    49,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,   184,     0,   -30,   201,     0,
     185,     0,   -30,     0,   -30,     0,     0,     0,     0,   -30,
       0,     0,     0,   -30,     0,     0,    49,    49,    49,    49,
     110,   111,   112,   113,     0,   189,   190,     0,     0,   201,
     219,    49,     0,   282,   283,   284,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,     0,     0,   285,     0,   -52,    50,
      50,   195,    50,   207,   208,   196,     0,   -52,   -52,    84,
      85,   309,   310,   311,     0,   184,     0,     0,     0,     0,
       0,     0,   351,   352,   312,   219,     0,   202,   220,   213,
       0,   -26,   -26,   214,   -26,   -26,   -26,   -26,    49,     0,
       0,   185,   185,   185,   185,   185,   185,   185,   185,   372,
     373,     0,     0,     0,   202,   220,   185,   243,   244,   -50,
     -50,   -50,   -50,     0,     0,   184,     0,   202,   202,   202,
     202,   202,   202,   202,   202,   391,   392,   -50,   245,   246,
     202,   220,   202,     0,   243,   244,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,   220,   220,   220,   220,   220,   220,
     220,   220,   411,   412,   -51,   245,   246,   202,   220,   220,
       0,    50,     0,    50,    49,    49,     0,    49,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   347,   348,   349,   350,   185,     0,     0,
     -73,   -73,   201,   219,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   184,   184,   184,   184,
     368,   369,   370,   371,     0,     0,     0,     0,     0,   201,
     219,   184,     0,     0,     0,   202,     0,     0,     0,     0,
       0,     0,   201,   201,   201,   201,   387,   388,   389,   390,
       0,     0,     0,    48,     0,   201,   219,   201,    48,   323,
     324,   -50,   -50,   -50,   -50,     0,    48,     0,     0,   219,
     219,   219,   219,   407,   408,   409,   410,   -50,    48,   -50,
     325,   326,   201,   219,   219,     0,    49,     0,    49,     0,
       0,     0,     0,     0,   183,     0,     0,   200,     0,     0,
      47,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,   184,    47,     0,    48,    48,   108,   109,     0,
       0,     0,     0,     0,     0,    47,     0,     0,   200,   218,
      48,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   182,     0,     0,   199,     0,     0,   -75,   -75,     0,
     201,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,    47,   107,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   199,   217,    47,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,    48,    23,     0,
       2,     3,     4,     5,    24,     0,    25,    26,    27,    28,
      29,   -52,   -52,   -52,   247,   248,     0,    30,    31,    32,
       0,   182,     0,    33,   183,     0,     0,     0,    72,     0,
      35,   217,     0,     0,     0,    36,     0,     0,     0,    37,
       0,     0,     0,     0,    47,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,     0,     0,     0,
     -28,   182,     0,    48,    48,   -28,    48,   -28,     0,     0,
       0,     0,   -28,     0,     0,     0,   -28,     0,     0,     0,
     345,   346,   270,   271,   -50,   -50,   -50,   -50,     0,     0,
       0,   200,   218,     0,     0,     0,     0,     0,     0,   -50,
     -50,     0,     0,   272,   273,   183,   183,   366,   367,     0,
      47,    47,     0,    47,     0,     0,     0,     0,   200,   218,
     183,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,   200,   200,   385,   386,     0,     0,     0,   199,   217,
       0,     0,     0,     0,   200,   218,   200,     0,     0,     0,
       0,     0,   182,   365,     0,     0,     0,     0,   218,   218,
     405,   406,     0,     0,     0,   199,   217,   182,     0,    46,
       0,   200,   218,   218,    46,    48,     0,    48,   199,   384,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   217,   199,    46,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,   217,   404,     0,     0,     0,
     181,     0,    45,   198,     0,     0,     0,    45,   199,   217,
     217,     0,    47,     0,    47,    45,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,    45,     0,   200,
       0,     0,     0,     0,   198,   216,    46,     0,   182,     0,
       0,     0,     0,   180,     0,     0,   197,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,   -56,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     181,   -56,   -56,    84,    85,     0,   199,   197,   215,   123,
     216,   -57,   -57,     0,     0,   -57,   -57,   -57,   -57,   276,
     277,   278,     0,    46,     0,     0,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,   180,     0,   -33,   -33,   -33,     0,     0,
     181,   -33,     0,   215,     0,     0,   -33,     0,   -33,     0,
       0,     0,     0,   -33,     0,     0,    45,   -33,     0,     0,
       0,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   180,     0,     0,   -34,     0,     0,    46,
      46,   -34,    46,   -34,     0,     0,     0,     0,   -34,     0,
       0,     0,   -34,     0,   343,   270,   271,   -51,   -51,   -51,
     -51,     0,    57,     0,     0,     0,     0,   198,   216,     0,
      64,     0,   -51,   -51,     0,     0,   272,   273,    68,     0,
       0,   364,    45,    45,     0,    45,     0,    80,    81,   -49,
     -49,   -49,   -49,     0,   198,   216,   181,     0,   179,   -49,
       0,    96,     0,     0,   102,   103,     0,   383,    82,    83,
     197,   215,   359,     0,   296,   297,   -49,   -49,   -49,   -49,
     198,   216,   198,   323,   324,   -51,   -51,   -51,   -51,   -49,
       0,     0,   119,   121,   403,   298,   299,   197,   215,   380,
       0,   -51,     0,   -51,   325,   326,     0,   198,   216,   216,
       0,    46,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   215,   399,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,   142,   181,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,   215,   419,     0,    45,   228,    45,     0,     0,     0,
       0,   236,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   198,     0,     0,   179,   263,
     180,   -36,   -36,   -36,     0,     0,     0,   -36,     0,     0,
       0,     0,   -36,     0,   -36,     0,     0,   289,     0,   -36,
       0,     0,   -31,   -36,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   316,     0,     0,   197,     0,
       0,   -31,   -31,   -31,     0,     0,     0,   -31,     0,     0,
       0,     0,   -31,     0,   -31,   341,     0,     0,     0,   -31,
       0,     0,     0,   -31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,   121,     0,     0,     0,
     -29,   360,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   377,   121,     0,   -29,     0,     0,   381,     0,
     -29,     0,   -29,     0,     0,     0,     0,   -29,     0,     0,
       0,   -29,     0,     0,     0,     0,     0,     0,   396,   121,
       0,     0,     0,     0,     0,   401,     0,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   416,   121,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,     0,     0,     0,   -35,     0,
     -35,     0,     0,     0,     0,   -35,     0,     0,   -32,   -35,
     -32,   -32,   -32,   -32,   -32,   179,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,     0,     0,     0,   -32,     0,
     -32,     0,     0,     0,     0,   -32,     0,     0,     0,   -32,
       0,     0,   -39,   433,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,     0,     0,     0,   -39,     0,     0,
       0,     0,   -39,     0,   -39,     0,     0,     0,     0,   -39,
       0,     0,   -38,   -39,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,     0,     0,     0,   -38,     0,     0,
       0,     0,   -38,     0,   -38,     0,     0,     0,     0,   -38,
       0,     0,   -40,   -38,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,     0,     0,     0,   -40,     0,     0,
       0,     0,   -40,     0,   -40,     0,     0,     0,     0,   -40,
       0,     0,    23,   -40,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   226,     0,    35,     0,     0,     0,     0,    36,
       0,     0,    23,    37,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   335,     0,    35,     0,     0,     0,     0,    36,
       0,     0,    23,    37,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   337,     0,    35,     0,     0,     0,     0,    36,
       0,     0,    23,    37,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   339,     0,    35,     0,     0,     0,     0,    36,
       0,     0,    23,    37,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   420,     0,    35,     0,     0,     0,     0,    36,
       0,     0,   -26,    37,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,     0,     0,     0,   -26,     0,     0,
       0,     0,   -26,     0,   -26,     0,     0,     0,     0,   -26,
       0,     0,    23,   -26,     2,     3,     4,     5,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,     0,     0,
       0,     0,   421,     0,    35,     0,     0,     0,     0,    36,
       0,     0,   -27,    37,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,
       0,     0,   -27,     0,   -27,     0,     0,     0,     0,   -27,
       0,     0,     0,   -27,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   281,   -69,     0,     0,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,   334,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,   -76,   -76,     0,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,     0,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,     0,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,   -74,   -74,   -74,     0,
       0,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -69,    91,   -69,     0,     0,     0,
       0,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,     0,     0,     0,     0,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   254,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,   279,     0,     0,   -64,   -64,   280,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,     0,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,   -74,
       0,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   307,   -69,   -69,     0,     0,
       0,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,     0,     0,   -64,   333,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,     0,     0,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,     0,     0,     0,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,   -70,     0,     0,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,     0,    89,     0,     0,     0,
       0,    90,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,   -69,     0,   -69,     0,     0,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
     -71,     0,   -71,     0,     0,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,   -70,     0,
     -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -72,     0,   -72,     0,
       0,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,   -73,     0,   -73,     0,     0,     0,
       0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,   -75,     0,   -75,     0,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
     -74,     0,   -74,     0,     0,     0,     0,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,   253,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,   305,   -64,
       0,     0,     0,   306,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,     0,   -73,   -73,
       0,     0,     0,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,     0,     0,
       0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,   -69,     0,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,   -76,     0,
     -76,     0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,     0,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,   -76,
       0,     0,     0,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,   -70,   -70,     0,     0,
       0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,     0,     0,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -60,   -60,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   329,   330,   331,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -67,   -67,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -66,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -65,   -65,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -58,   -58,
       0,     0,   -58,   -58,   -58,   -58,   276,   277,   278,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -59,   -59,     0,     0,
     -59,   -59,   -59,   -59,   276,   277,   278,   -61,   -61,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -62,   -62,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -63,   -63,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   329,   330,   331,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   329,   330,   331,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,   -63,   -57,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -57,   -57,   -57,   -57,    86,    87,    88,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
     -60,     0,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -67,   -67,   -67,   -67,
     -67,   -67,   -56,   -56,   -56,   247,   248,     0,   -67,     0,
     -55,   -55,   -55,   -55,   -55,   -55,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,
     -55,   -55,   -55,   247,   248,     0,   -68,     0,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -66,   -66,   -66,   -66,   -66,   -66,   -53,   -53,
     -53,   247,   248,     0,   -66,     0,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -65,   -65,   -65,   -65,   -65,   -65,   -54,   -54,   -54,   247,
     248,     0,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,     0,     0,     0,     0,
     -58,     0,     0,     0,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,    86,    87,    88,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,    86,    87,    88,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,   -61,     0,     0,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,   -62,     0,     0,     0,     0,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,     0,   -63,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,   302,   303,   304,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -60,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -67,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -66,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -65,     0,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -58,   -58,   -58,   -58,
     -58,   249,   250,   251,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   249,
     250,   251,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -58,     0,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   302,   303,   304,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -59,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   302,
     303,   304,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -61,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -63,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,   -52,     0,   -52,   -52,   -52,   327,
     328,   -56,   -56,     0,     0,   -56,   -56,   274,   275,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,   -55,   -55,     0,     0,
     -55,   -55,   274,   275,   -53,   -53,     0,     0,   -53,   -53,
     274,   275,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,   -54,
     -54,     0,     0,   -54,   -54,   274,   275,   -56,     0,   -56,
     -56,   -56,   327,   328,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
       0,     0,   -55,     0,   -55,   -55,   -55,   327,   328,   -53,
       0,   -53,   -53,   -53,   327,   328,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,     0,     0,     0,   -54,   -55,   -54,   -54,   -54,   327,
     328,     0,     0,     0,   -55,   -55,    84,    85,   -53,   -53,
     -53,   -53,   -53,   -53,   -54,   -54,   -54,   -54,   -54,   -54,
     -53,     0,     0,     0,     0,     0,   -54,     0,     0,   -53,
     -53,    84,    85,     0,     0,   -54,   -54,    84,    85,   -52,
     -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -52,     0,     0,     0,     0,     0,
     -52,   -52,   300,   301,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -56,
       0,     0,     0,     0,     0,   -56,   -56,   300,   301,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -55,     0,     0,     0,     0,     0,
     -55,   -55,   300,   301,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -53,
       0,     0,     0,     0,     0,   -53,   -53,   300,   301,   -54,
     -54,   -54,   -54,   -54,   -54,    80,    81,   -50,   -50,   -50,
     -50,     0,     0,     0,   -54,     0,     0,   -50,     0,     0,
     -54,   -54,   300,   301,     0,     0,    82,    83,    80,    81,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
     -51,   296,   297,   -50,   -50,   -50,   -50,     0,     0,    82,
      83,     0,     0,     0,     0,     0,   -50,     0,     0,     0,
       0,     0,   298,   299,   296,   297,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -51,
       0,     0,     0,     0,     0,   298,   299
};

static const yytype_int16 yycheck[] =
{
      14,    19,    39,    11,     0,    19,   253,   148,    59,    26,
      27,     7,     1,    27,     3,     4,     5,     6,    26,    18,
      19,    35,    19,    18,    19,    39,    18,    19,    12,    13,
      31,    32,    29,   280,    20,    34,    20,    21,    22,    34,
      32,    55,    34,    20,    58,    34,    30,    61,    62,    33,
      16,    17,    18,    19,    38,    18,    19,    19,    42,   306,
      18,    19,     0,    59,    19,    19,    32,    19,    34,    32,
      32,    34,    34,    31,    32,    89,    90,    32,   129,    34,
      34,    20,    34,   224,   225,     1,   333,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    16,    17,
      18,    19,    19,    33,    20,    21,    22,   125,    31,    32,
      26,   125,    29,    19,    32,    31,    34,    33,    19,   133,
      26,   135,    38,   131,   132,    26,    42,    14,    15,    16,
      17,    18,    19,   129,   148,     0,   144,    20,   152,   153,
     154,    20,     7,    20,   158,   159,   160,    34,    35,    36,
      37,    38,    39,    40,    41,    34,   170,   171,    12,    13,
      26,   175,   176,   177,   178,    26,    20,    21,    22,    18,
      19,    33,    26,    18,    19,   189,   190,    26,    30,    33,
     194,   195,   196,    19,    38,    28,    31,    32,    42,    32,
     227,    34,    26,   207,   208,    31,    32,    26,   212,   213,
     214,    30,    14,    15,    16,    17,    18,    19,    26,    19,
     224,   225,     1,   227,     3,     4,     5,     6,   232,    31,
      32,    31,    32,    35,    36,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,    18,    19,    26,   258,    26,    26,    30,    20,    26,
      30,    26,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,    26,    27,
      28,   285,    26,    26,    26,    33,    30,    30,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    16,    17,    18,    19,   312,   336,
      32,   338,    34,     9,    26,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    26,   336,    26,   338,    30,    34,    14,    18,    19,
      26,    27,    19,    16,    17,    18,    19,    12,    13,    29,
      27,    28,    29,    29,   362,    20,    21,    22,   362,    36,
      37,    34,    39,    18,    19,    30,    31,    34,    33,    16,
      17,    18,    19,    38,    29,    26,    27,    42,    55,    31,
      32,    58,    16,    17,    18,    19,    34,    34,     0,     1,
      34,     3,     4,     5,     6,    33,   400,    31,    32,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    16,    17,
      18,    19,    31,    32,    20,    21,    22,    26,    27,    28,
      26,    31,    32,    31,    32,    31,    26,    33,   125,    32,
      26,    34,    38,    30,    12,    13,    42,    32,   135,    34,
      12,    13,    20,    21,    22,    32,    30,    34,    20,    21,
      22,   148,    30,    31,    34,    33,   153,   154,    30,    20,
      38,    33,   159,   160,    42,    32,    38,    34,    26,    32,
      42,    34,     9,   170,   171,    32,     9,    34,   175,    34,
     177,   178,    14,    15,    16,    17,    18,    19,    16,    17,
      18,    19,   189,   190,    16,    17,    18,    19,   195,   196,
      32,    29,    34,    35,    36,    12,    13,    29,    31,    32,
     207,   208,    29,    20,    21,    22,   213,   214,     3,     4,
       5,     6,    29,    32,    34,    34,    33,   224,   225,    34,
     227,    38,    32,    34,    34,    42,    12,    13,    16,    17,
      18,    19,    31,    32,    20,    21,    22,    34,    26,    32,
      34,    34,   249,   250,   251,   252,   253,    33,    34,    32,
      34,    34,    38,    32,    29,    34,    42,    34,    29,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,     0,     1,    34,     3,     4,
       5,     6,    29,    29,     7,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,     0,     1,   175,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,   336,
      -1,   338,     0,     1,    14,     3,     4,     5,     6,    19,
      -1,    -1,    12,    13,    -1,    -1,    -1,    27,    28,    29,
      20,    21,    22,    -1,    -1,   362,    36,    37,    -1,    39,
      -1,    12,    13,    33,    34,    -1,    -1,    -1,    38,    20,
      21,    22,    42,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,   400,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    12,    13,    -1,    -1,
      -1,    20,    21,    22,    20,    21,    22,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,   125,    -1,    33,    34,    38,
      12,    13,    38,    42,    -1,   135,    42,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    33,    34,    12,    13,    -1,    38,    -1,    -1,    -1,
      42,    20,    21,    22,    14,    15,    16,    17,    18,    19,
     170,   171,    -1,    -1,    33,   175,    -1,   177,   178,    38,
      -1,    31,    32,    42,    -1,    35,    36,    37,    38,   189,
     190,    -1,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,   207,   208,    -1,
      20,    21,    22,   213,   214,    -1,    -1,    -1,    -1,    29,
      -1,    12,    13,    33,   224,   225,    -1,   227,    38,    20,
      21,    22,    42,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    33,    20,    21,    22,    -1,    38,    -1,    -1,
      -1,    42,   252,   253,     0,     1,    33,     3,     4,     5,
       6,    38,    -1,    -1,    -1,    42,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     0,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,   336,    -1,   338,    14,
      12,    13,    -1,    -1,    19,    -1,    12,    13,    20,    21,
      22,    -1,    27,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    33,   362,    -1,    39,    -1,    38,    33,    -1,    -1,
      42,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      55,     0,     1,    58,     3,     4,     5,     6,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
     400,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    34,    35,    36,    89,    90,    91,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    12,    13,    -1,    -1,    -1,
      20,    21,    22,    20,    21,    22,    26,    -1,    -1,    -1,
     125,    31,    -1,    33,    14,    -1,    33,    -1,    38,    19,
     135,    38,    42,    -1,    -1,    42,    -1,    27,    -1,    -1,
      -1,    -1,     1,   148,     3,     4,     5,     6,     7,    39,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    55,    -1,    26,    58,    -1,
     175,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    12,    13,    -1,    -1,    89,
      90,    91,    -1,    20,    21,    22,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    33,    -1,    26,   224,
     225,    38,   227,    12,    13,    42,    -1,    35,    36,    37,
      38,    20,    21,    22,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,   247,   248,    33,   135,    -1,   252,   253,    38,
      -1,     0,     1,    42,     3,     4,     5,     6,   148,    -1,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    -1,    -1,    -1,   279,   280,   281,    14,    15,    16,
      17,    18,    19,    -1,    -1,   175,    -1,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    34,    35,    36,
     305,   306,   307,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    34,    35,    36,   332,   333,   334,
      -1,   336,    -1,   338,   224,   225,    -1,   227,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    14,    15,    16,
      17,    18,    19,   243,   244,   245,   246,   362,    -1,    -1,
      27,    28,   252,   253,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,    -1,    -1,    -1,   279,
     280,   281,    -1,    -1,    -1,   400,    -1,    -1,    -1,    -1,
      -1,    -1,   292,   293,   294,   295,   296,   297,   298,   299,
      -1,    -1,    -1,    14,    -1,   305,   306,   307,    19,    14,
      15,    16,    17,    18,    19,    -1,    27,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,    32,    39,    34,
      35,    36,   332,   333,   334,    -1,   336,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,   362,    27,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    89,    90,
      91,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    55,    -1,    -1,    58,    -1,    -1,    27,    28,    -1,
     400,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    76,    77,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    89,    90,    91,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,   148,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    34,    35,    36,    37,    38,    -1,    20,    21,    22,
      -1,   125,    -1,    26,   175,    -1,    -1,    -1,    31,    -1,
      33,   135,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,   148,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      26,   175,    -1,   224,   225,    31,   227,    33,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
     241,   242,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,   252,   253,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,   266,   267,   268,   269,    -1,
     224,   225,    -1,   227,    -1,    -1,    -1,    -1,   279,   280,
     281,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
      -1,   292,   293,   294,   295,    -1,    -1,    -1,   252,   253,
      -1,    -1,    -1,    -1,   305,   306,   307,    -1,    -1,    -1,
      -1,    -1,   266,   267,    -1,    -1,    -1,    -1,   319,   320,
     321,   322,    -1,    -1,    -1,   279,   280,   281,    -1,    14,
      -1,   332,   333,   334,    19,   336,    -1,   338,   292,   293,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,   306,   307,    39,    -1,    -1,    -1,    -1,    -1,
      -1,   362,    -1,    -1,    -1,   319,   320,    -1,    -1,    -1,
      55,    -1,    14,    58,    -1,    -1,    -1,    19,   332,   333,
     334,    -1,   336,    -1,   338,    27,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    39,    -1,   400,
      -1,    -1,    -1,    -1,    89,    90,    91,    -1,   362,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    14,    15,    16,    17,    18,    19,
     125,    35,    36,    37,    38,    -1,   400,    89,    90,    91,
     135,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,   148,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,   125,    -1,    20,    21,    22,    -1,    -1,
     175,    26,    -1,   135,    -1,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,   148,    42,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,   175,    -1,    -1,    26,    -1,    -1,   224,
     225,    31,   227,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,   239,    14,    15,    16,    17,    18,
      19,    -1,    19,    -1,    -1,    -1,    -1,   252,   253,    -1,
      27,    -1,    31,    32,    -1,    -1,    35,    36,    35,    -1,
      -1,   266,   224,   225,    -1,   227,    -1,    14,    15,    16,
      17,    18,    19,    -1,   279,   280,   281,    -1,    55,    26,
      -1,    58,    -1,    -1,    61,    62,    -1,   292,    35,    36,
     252,   253,   254,    -1,    14,    15,    16,    17,    18,    19,
     305,   306,   307,    14,    15,    16,    17,    18,    19,    29,
      -1,    -1,    89,    90,   319,    35,    36,   279,   280,   281,
      -1,    32,    -1,    34,    35,    36,    -1,   332,   333,   334,
      -1,   336,    -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,   306,   307,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   362,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     332,   333,   334,    -1,   336,   152,   338,    -1,    -1,    -1,
      -1,   158,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,   400,    -1,    -1,   175,   176,
     362,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,   194,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,   212,    -1,    -1,   400,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,   232,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   252,   253,    -1,    -1,    -1,
       1,   258,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,   279,   280,    -1,    26,    -1,    -1,   285,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,   305,   306,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,   332,   333,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,     1,    42,
       3,     4,     5,     6,     7,   362,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,     1,   400,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,     1,    42,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    32,    26,    34,    35,    36,    37,    38,    39,    40,
      41,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    14,    15,    16,    17,    18,    19,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    34,    35,    36,    37,    38,    -1,    26,    -1,
      14,    15,    16,    17,    18,    19,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      34,    35,    36,    37,    38,    -1,    26,    -1,    14,    15,
      16,    17,    18,    19,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    34,    35,
      36,    37,    38,    -1,    26,    -1,    14,    15,    16,    17,
      18,    19,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    34,    35,    36,    37,
      38,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    14,    15,    16,    17,    18,    19,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    14,
      15,    16,    17,    18,    19,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    34,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    34,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    34,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      38,    31,    32,    -1,    -1,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    31,    32,    -1,    -1,    35,    36,
      37,    38,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    37,    38,    32,    -1,    34,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    38,    32,
      -1,    34,    35,    36,    37,    38,    14,    15,    16,    17,
      18,    19,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    32,    26,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    35,    36,    37,    38,    14,    15,
      16,    17,    18,    19,    14,    15,    16,    17,    18,    19,
      26,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    29,    -1,    -1,    26,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    35,    36,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    14,    15,    16,    17,    18,    19,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    44,    45,    46,    47,
      48,    51,    70,    26,    30,    53,     0,    46,    26,    27,
      26,    53,    20,     1,     7,     9,    10,    11,    12,    13,
      20,    21,    22,    26,    31,    33,    38,    42,    47,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    70,    30,    49,    59,    28,    33,
      26,    33,    33,    53,    59,    66,    68,    66,    59,    66,
      66,    26,    31,    55,    26,    26,    19,    18,    16,    17,
      14,    15,    35,    36,    37,    38,    39,    40,    41,    28,
      33,    27,    20,    49,    50,    29,    59,     1,     3,    34,
      48,    52,    59,    59,     9,    34,    61,    62,    63,    63,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    59,
      34,    59,    69,    60,    31,    32,    29,    34,    34,    32,
      34,    34,    34,    33,    29,    32,    34,    31,    49,    48,
      53,    53,    59,    59,     8,    34,    53,    26,    30,    20,
      21,    22,    33,    12,    13,    20,    21,    22,    33,    38,
      42,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      12,    13,    20,    21,    22,    30,    33,    38,    42,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    12,
      13,    20,    21,    22,    33,    38,    42,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    12,    13,    20,
      21,    22,    33,    38,    42,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    30,    30,    31,    54,    59,    20,
      21,    22,    33,    66,    68,    66,    59,    66,    66,    19,
      18,    16,    17,    14,    15,    35,    36,    37,    38,    39,
      40,    41,    28,    33,    27,    20,    21,    22,    33,    66,
      68,    66,    50,    59,    66,    66,    19,    18,    16,    17,
      14,    15,    35,    36,    37,    38,    39,    40,    41,    28,
      33,    27,    20,    21,    22,    33,    66,    68,    66,    59,
      66,    66,    19,    18,    16,    17,    14,    15,    35,    36,
      37,    38,    39,    40,    41,    28,    33,    27,    20,    20,
      21,    22,    33,    66,    68,    66,    59,    66,    66,    19,
      18,    16,    17,    14,    15,    35,    36,    37,    38,    39,
      40,    41,    28,    33,    27,    31,    54,    31,    54,    31,
      34,    59,    34,    61,    62,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    59,    34,    69,    60,
      59,    31,    32,    34,    61,    62,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    59,    34,    69,
      60,    59,    34,    61,    62,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    59,    34,    69,    60,
      28,    59,    34,    61,    62,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    66,    59,    34,    69,    60,
      31,    31,    34,    29,    34,    34,    31,    29,    34,    34,
      29,    34,    29,    59,    34,    29,    34,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    63,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     4,     5,     1,     3,     4,     1,     3,
       5,     4,     5,     5,     1,     3,     2,     3,     1,     2,
       1,     2,     2,     1,     1,     2,     2,     5,     7,     5,
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
#line 61 "language.y"
    { root = (yyvsp[0].node); }
#line 2593 "src/parser.c"
    break;

  case 4:
#line 66 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2599 "src/parser.c"
    break;

  case 6:
#line 71 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-definition", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2605 "src/parser.c"
    break;

  case 8:
#line 73 "language.y"
    { }
#line 2611 "src/parser.c"
    break;

  case 9:
#line 74 "language.y"
    { }
#line 2617 "src/parser.c"
    break;

  case 11:
#line 79 "language.y"
    { (yyval.node) = node_init(node_list, '=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2623 "src/parser.c"
    break;

  case 12:
#line 83 "language.y"
    { (yyval.node) = node_init(node_list, 'D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL); /*add_symbol_var($$);*/ }
#line 2629 "src/parser.c"
    break;

  case 13:
#line 84 "language.y"
    { (yyval.node) = node_init(node_list, 'E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL); /*add_symbol_var($$);*/ }
#line 2635 "src/parser.c"
    break;

  case 14:
#line 85 "language.y"
    { (yyval.node) = node_init(node_list, 'E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); /*add_symbol_var($$);*/ }
#line 2641 "src/parser.c"
    break;

  case 16:
#line 90 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2647 "src/parser.c"
    break;

  case 17:
#line 91 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2653 "src/parser.c"
    break;

  case 19:
#line 96 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2659 "src/parser.c"
    break;

  case 20:
#line 100 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); /*add_symbol_fun($$);*/ }
#line 2665 "src/parser.c"
    break;

  case 21:
#line 101 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-3].node), (yyvsp[-2].node),     NULL); /*add_symbol_fun($$);*/ }
#line 2671 "src/parser.c"
    break;

  case 22:
#line 102 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node),     NULL); /*add_symbol_fun($$);*/ }
#line 2677 "src/parser.c"
    break;

  case 23:
#line 103 "language.y"
    { }
#line 2683 "src/parser.c"
    break;

  case 25:
#line 108 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2689 "src/parser.c"
    break;

  case 26:
#line 112 "language.y"
    { }
#line 2695 "src/parser.c"
    break;

  case 27:
#line 113 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2701 "src/parser.c"
    break;

  case 29:
#line 118 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2707 "src/parser.c"
    break;

  case 30:
#line 122 "language.y"
    { }
#line 2713 "src/parser.c"
    break;

  case 36:
#line 128 "language.y"
    { }
#line 2719 "src/parser.c"
    break;

  case 37:
#line 132 "language.y"
    { (yyval.node) = node_init(node_list, IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL); }
#line 2725 "src/parser.c"
    break;

  case 38:
#line 133 "language.y"
    { (yyval.node) = node_init(node_list, ELSE, "if-else", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2731 "src/parser.c"
    break;

  case 39:
#line 137 "language.y"
    { (yyval.node) = node_init(node_list, WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2737 "src/parser.c"
    break;

  case 40:
#line 138 "language.y"
    { (yyval.node) = node_init(node_list, DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL); }
#line 2743 "src/parser.c"
    break;

  case 41:
#line 142 "language.y"
    { (yyval.node) = node_init(node_list, RETURN, "return",     NULL); }
#line 2749 "src/parser.c"
    break;

  case 42:
#line 143 "language.y"
    { (yyval.node) = node_init(node_list, RETURN, "return", (yyvsp[0].node), NULL); }
#line 2755 "src/parser.c"
    break;

  case 44:
#line 148 "language.y"
    { (yyval.node) = node_init(node_list, '=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2761 "src/parser.c"
    break;

  case 46:
#line 153 "language.y"
    { (yyval.node) = node_init(node_list, OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2767 "src/parser.c"
    break;

  case 48:
#line 158 "language.y"
    { (yyval.node) = node_init(node_list, OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2773 "src/parser.c"
    break;

  case 50:
#line 163 "language.y"
    { (yyval.node) = node_init(node_list, OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2779 "src/parser.c"
    break;

  case 51:
#line 164 "language.y"
    { (yyval.node) = node_init(node_list, OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2785 "src/parser.c"
    break;

  case 53:
#line 169 "language.y"
    { (yyval.node) = node_init(node_list, '<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2791 "src/parser.c"
    break;

  case 54:
#line 170 "language.y"
    { (yyval.node) = node_init(node_list, '>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2797 "src/parser.c"
    break;

  case 55:
#line 171 "language.y"
    { (yyval.node) = node_init(node_list, OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2803 "src/parser.c"
    break;

  case 56:
#line 172 "language.y"
    { (yyval.node) = node_init(node_list, OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2809 "src/parser.c"
    break;

  case 58:
#line 177 "language.y"
    { (yyval.node) = node_init(node_list, '+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2815 "src/parser.c"
    break;

  case 59:
#line 178 "language.y"
    { (yyval.node) = node_init(node_list, '-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2821 "src/parser.c"
    break;

  case 61:
#line 183 "language.y"
    { (yyval.node) = node_init(node_list, '*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2827 "src/parser.c"
    break;

  case 62:
#line 184 "language.y"
    { (yyval.node) = node_init(node_list, '/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2833 "src/parser.c"
    break;

  case 63:
#line 185 "language.y"
    { (yyval.node) = node_init(node_list, '%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2839 "src/parser.c"
    break;

  case 65:
#line 190 "language.y"
    { (yyval.node) = node_init(node_list, '!'   , "'!'" , (yyvsp[0].node), NULL); }
#line 2845 "src/parser.c"
    break;

  case 66:
#line 191 "language.y"
    { (yyval.node) = node_init(node_list, '-'   , "'-'" , (yyvsp[0].node), NULL); }
#line 2851 "src/parser.c"
    break;

  case 67:
#line 192 "language.y"
    { (yyval.node) = node_init(node_list, OP_INC, "'++'", (yyvsp[0].node), NULL); }
#line 2857 "src/parser.c"
    break;

  case 68:
#line 193 "language.y"
    { (yyval.node) = node_init(node_list, OP_DEC, "'--'", (yyvsp[0].node), NULL); }
#line 2863 "src/parser.c"
    break;

  case 70:
#line 198 "language.y"
    { (yyval.node) = node_init(node_list, 'V'   , "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2869 "src/parser.c"
    break;

  case 71:
#line 199 "language.y"
    { (yyval.node) = node_init(node_list, 'C'   , "function-call", (yyvsp[-2].node)    , NULL); }
#line 2875 "src/parser.c"
    break;

  case 72:
#line 200 "language.y"
    { (yyval.node) = node_init(node_list, 'C'   , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2881 "src/parser.c"
    break;

  case 76:
#line 209 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2887 "src/parser.c"
    break;

  case 78:
#line 215 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2893 "src/parser.c"
    break;


#line 2897 "src/parser.c"

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
#line 225 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

