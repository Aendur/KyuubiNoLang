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
#line 41 "language.y"

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
#define YYLAST   5390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

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
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
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
       0,    60,    60,    64,    65,    69,    70,    71,    72,    73,
      77,    78,    82,    83,    84,    88,    89,    90,    94,    95,
      99,   100,   101,   102,   106,   107,   111,   112,   116,   117,
     121,   122,   123,   124,   125,   126,   127,   131,   132,   136,
     137,   141,   142,   146,   147,   151,   152,   156,   157,   161,
     162,   163,   167,   168,   169,   170,   171,   175,   176,   177,
     181,   182,   183,   184,   188,   189,   190,   191,   192,   193,
     197,   198,   199,   200,   205,   206,   210,   211,   212,   213
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
  "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "start", "declaration_list", "declaration", "init_declarator",
  "declarator", "initializer", "initializer_list", "function_declarator",
  "parameter_list", "compound_statement", "statement_list", "statement",
  "conditional_statement", "iteration_statement", "return_statement",
  "assignment_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "postfix_expression",
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
     275,   276,   277,   278,   279,   280,    59,    61,    91,    93,
     123,   125,    44,    40,    41,    60,    62,    43,    45,    42,
      47,    37
};
# endif

#define YYPACT_NINF -213

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-213)))

#define YYTABLE_NINF -80

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     479,     8,    15,    41,    97,   104,    88,   984,  1158,   116,
     -12,    69,   128,  1233,   340,  1241,  -213,  1289,  1387,   574,
    1507,  1691,   430,   135,   136,   168,   146,   332,  2122,  2152,
    2182,   377,  1741,   745,   156,   408,   509,   567,   770,   195,
     214,   -10,   154,   955,  5258,  1106,  4754,  3412,  2212,   241,
     797,   268,   272,   570,    19,   803,   745,   745,   295,   282,
     247,   836,  1809,   869,  1002,  1041,   767,   767,   767,   767,
     767,   767,   767,   767,   767,   767,   767,   767,   767,  3442,
    3472,   800,   125,   767,   374,   121,   175,   220,   296,   301,
      49,    96,   153,   269,   325,   329,   307,  2242,   436,  3502,
     960,  5264,  5287,  1303,  1569,  1640,  5020,  4782,  4810,  3532,
    3562,  3592,   300,  3622,   290,   304,    39,   353,   588,   263,
     196,   215,   576,   236,   334,   355,   745,  3652,   828,  3682,
     390,   358,   338,    70,  1076,   393,   342,   355,   409,  1107,
    1304,  1344,  2272,  2302,  2332,   745,    25,    -7,    68,  5293,
    1688,  4823,  3712,  2362,   711,  1852,  1882,   797,   745,   364,
     255,   459,   261,  1245,   598,   433,  2392,  1912,  2422,  2452,
    2482,   745,   -11,   100,   533,   407,  5033,  4851,  3742,  2512,
     418,  3772,  3802,  3832,   745,  1942,  1972,  2002,   745,    28,
      22,    89,  5177,    14,  4670,  2542,  2032,  1375,  1570,   466,
    1610,   447,   831,   831,   831,   831,   831,   831,   831,   831,
     831,   831,   831,   831,   831,  3862,  3892,   800,   335,   831,
     400,   477,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,  2572,  2602,   800,   371,   861,
     483,   886,   886,   886,   886,   886,   886,   886,   886,   886,
     886,   886,   886,   886,  3922,  3952,   800,   503,   886,   143,
     487,   488,   926,   926,   926,   926,   926,   926,   926,   926,
     926,   926,   926,   926,   926,  2632,  2662,   800,   512,   926,
     129,  1641,  1763,  1797,   519,  2692,  3982,  4012,  4042,   745,
      75,  4072,   254,  5300,  5323,  4796,  5058,  5064,  5070,  4859,
    4887,  4102,  4132,  4162,   514,  4192,   412,    36,   428,   764,
    2062,  2722,  2752,  2782,   745,   529,  2812,   302,  5200,  5206,
    1022,  1512,  1699,  4956,  4681,  4709,  2842,  2872,  2902,   527,
    2932,   507,   265,  2962,  4222,  4252,  4282,   745,   149,  4312,
     702,  5331,  5354,  5095,  5120,  5145,  5170,  4900,  4928,  4342,
    4372,  4402,   536,  4432,   521,    91,   712,  4462,  2092,  2992,
    3022,  3052,   745,    79,  3082,   147,  5229,  5235,  1165,  4963,
    4988,  4995,  4719,  4747,  3112,  3142,  3172,   540,  3202,   525,
     122,   306,  1830,   541,  4492,  4522,   457,   550,  3232,  3262,
     551,  4552,  4582,   532,   568,   572,  3292,  3322,  4612,  3352,
    4642,   593,  3382
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,   594,    82,   -50,   -18,   445,  -213,  -213,
      -9,  -134,     2,  -213,  -213,  -213,   249,  1482,  1471,  1216,
    1205,   948,   687,   426,   -14,  -212,     3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    34,    10,    85,    86,    11,    93,
      15,    35,    36,    37,    38,    39,    40,   146,   147,   148,
     149,   150,   151,   152,    99,   115,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    51,    21,    12,    92,    48,   306,   200,   241,    66,
      12,   203,   -45,    48,   -10,    19,   -43,    58,   -43,   153,
      89,    48,    90,     3,     4,     5,   331,   -45,   -52,   -52,
     -52,   -52,   -52,   -52,    13,   -76,   167,    63,    14,   179,
     263,   -45,   153,   153,   202,   354,   -52,   262,   -52,   -52,
     -52,   270,   271,    91,   -45,   202,   -45,   180,    66,   -43,
     -43,   -77,   -43,   281,   283,   -44,   379,   179,   196,   -76,
     -44,   -37,   132,   -37,   -37,   -37,   -37,   -37,   137,   -37,
     -37,   -37,     9,   121,   204,   205,   -47,   -47,    16,     9,
     -37,   -37,   -37,   203,   -46,    20,   -37,   263,   -46,    14,
     131,   -37,   -47,   -37,   167,   264,   265,   -47,   -47,   -46,
     241,   -46,   153,   -46,   196,   133,   134,   -78,   242,   -45,
     -44,   -47,   -21,   -47,   -79,   180,   -21,    48,   139,   -45,
     -26,   153,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   262,    18,   167,   153,   185,   186,   187,    22,   -26,
     -26,   -26,   -18,   -18,   -44,   -26,   -44,   153,   188,   113,
     -26,    55,   -26,   264,   265,   -48,   -48,   242,   -46,    56,
     153,   356,    67,   -45,   153,   -12,   141,   -12,   -46,   -48,
     -45,   -48,    61,    48,    48,   -24,    48,   -24,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,    57,    63,   179,   196,   291,   117,   118,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,    64,   -23,   179,   196,   316,   -23,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
      65,   -22,   179,   196,   339,   -22,   -13,   -13,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,    84,   -20,   179,   196,   364,   -20,    48,    52,    48,
     204,   205,   -48,   -48,   222,   153,    59,   224,   225,   -47,
     -47,    97,    60,    63,   222,    63,   -43,   -43,   -48,   -14,
     -14,   131,   -47,   -47,   -11,   167,   -44,   -44,   -15,   159,
     153,   122,    88,   123,    96,    94,    95,   -27,   -42,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   224,   225,
     -48,   -48,   -74,   153,   -74,   119,   -27,   -27,   -27,   127,
     112,   114,   -27,   -48,   -48,   120,   128,   -27,   129,   -27,
     126,    23,   179,     2,     3,     4,     5,    24,   153,    25,
      26,    27,    28,    29,    30,   185,   186,   187,   -41,   124,
      28,    29,    30,   125,   197,    33,    31,   159,   188,   305,
     -25,    32,   -25,    33,   -75,   135,   -75,   136,   -30,   -16,
     -30,   -30,   -30,   -30,   -30,   198,   -30,   -30,   -30,   -19,
     -19,   185,   186,   187,   201,   -15,   -15,   -30,   -30,   -30,
     -12,   -12,    53,   -30,   188,   330,   159,   221,   -30,    23,
     -30,     2,     3,     4,     5,    24,   -17,    25,    26,    27,
     240,   245,   246,   -49,   -49,   -49,   -49,   138,    28,    29,
      30,   308,   309,   260,    31,   140,   -49,   261,   259,    62,
      47,    33,   247,   248,   128,    47,   385,   -57,   -57,   -57,
     -57,   -57,   -57,    47,    67,   -46,   -12,   -12,    53,   -16,
     -16,    47,   -46,    54,   -57,   -57,   304,   114,   -57,   -57,
     -57,   -57,   232,   233,   234,   -26,   166,   223,   -45,   178,
       1,   285,     2,     3,     4,     5,   329,   114,   -17,   -17,
     -45,   -45,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,   109,   110,   111,   352,   114,   178,   195,    47,
     -28,   310,   -28,   -28,   -28,   -28,   -28,   333,   -28,   -28,
     -28,   357,   358,   185,   186,   187,   377,   114,   -27,   -28,
     -28,   -28,   185,   186,   187,   -28,   188,   353,   383,   128,
     -28,   389,   -28,   384,   166,   188,   378,   223,   -46,   243,
     244,   -47,   -47,   128,   195,   392,   388,   128,   159,   397,
     -46,   -46,   -47,   387,   -13,   391,   -13,    47,   -33,   396,
     -33,   -33,   -33,   -33,   -33,   398,   -33,   -33,   -33,     2,
       3,     4,     5,   166,   399,   400,   390,   -33,   -33,   -33,
     168,   169,   170,   -33,    28,    29,    30,   401,   -33,    87,
     -33,    17,   220,   171,    50,   394,   402,    33,   154,   155,
     156,   395,   -52,   -52,   -52,   -52,   -52,   -52,   157,   130,
       0,   158,     0,    47,    47,   -14,    47,   -14,     0,   -52,
     -52,     0,     0,   -52,   -52,   230,   231,     0,   301,   302,
     303,     0,     0,   178,   195,     0,     0,     0,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   326,   327,
     328,     0,     0,   178,   195,   166,     0,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   349,   350,   351,
       0,     0,   178,   195,   178,     0,     0,     0,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   374,   375,
     376,    46,     0,   178,   195,   195,    46,    47,     0,    47,
       0,     0,     0,     0,    46,     0,     0,     0,   243,   244,
     -48,   -48,    46,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -48,   168,   169,   170,   166,     0,   165,   -70,   -70,
     177,   393,   -70,   -70,   -70,   171,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,    46,    46,    46,    46,    46,    46,    46,
      46,   107,   108,     0,     0,   142,   143,   144,   177,   194,
      46,   -34,     0,   -34,   -34,   -34,   -34,   -34,   145,   -34,
     -34,   -34,   178,     0,   154,   155,   156,   181,   182,   183,
     -34,   -34,   -34,     0,   157,   386,   -34,   158,     0,     0,
     184,   -34,     0,   -34,   -36,   165,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   194,     0,   154,   155,   156,
     168,   169,   170,   -36,   -36,   -36,     0,   157,    46,   -36,
     158,     0,     0,   171,   -36,     0,   -36,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   165,   -31,   -31,   -31,   185,   186,
     187,   286,   287,   288,     0,     0,   -31,   -31,   -31,     0,
       0,   188,   -31,     0,   289,     0,     0,   -31,     0,   -31,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   311,   312,   313,    46,    46,     0,    46,     0,   -29,
     -29,   -29,     0,     0,   314,   -29,     0,   299,   300,     0,
     -29,     0,   -29,     0,   177,   194,   334,   335,   336,   165,
     165,   165,   165,   165,   165,   165,   165,   324,   325,   337,
       0,     0,     0,     0,   177,   194,   165,     0,   177,   177,
     177,   177,   177,   177,   177,   177,   347,   348,     0,     0,
       0,     0,     0,   177,   194,   177,   359,   360,   361,   194,
     194,   194,   194,   194,   194,   194,   194,   372,   373,   362,
       0,     0,    45,     0,   177,   194,   194,    45,    46,     0,
      46,    68,    69,   -47,   -47,    45,    68,    69,   -48,   -48,
       0,   -47,     0,    45,    -2,     1,   -48,     2,     3,     4,
       5,     0,     0,     0,     0,     0,   165,     0,   164,     0,
       0,   176,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,    45,    45,    45,    45,   103,   104,
     105,   106,   -35,   -35,   -35,     0,     0,     0,   -35,   176,
     193,    45,     0,   -35,     0,   -35,   -56,   -56,   -56,   -56,
     -56,   -56,   -32,   177,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -56,   -56,     0,     0,   -56,   -56,   230,
     231,   -32,   -32,   -32,     0,     0,   164,   -32,     0,     0,
       0,     0,   -32,     0,   -32,     0,   193,   -39,     0,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,    45,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,     0,
       0,     0,   -39,     0,     0,   164,     0,   -39,   -38,   -39,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -38,   -38,   -38,
       0,     0,   -52,   -38,     0,     0,     0,     0,   -38,     0,
     -38,   -52,   -52,    74,    75,    45,    45,     0,    45,     0,
       0,     0,     0,     0,   295,   296,   297,   298,    -3,    -3,
       0,    -3,    -3,    -3,    -3,   176,   193,     0,     0,     0,
     164,   164,   164,   164,   320,   321,   322,   323,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   176,   193,   164,     0,   176,
     176,   176,   176,   343,   344,   345,   346,   -56,     0,   -56,
     -56,   -56,   270,   271,   176,   193,   176,     0,     0,     0,
     193,   193,   193,   193,   368,   369,   370,   371,     0,    44,
       0,     0,     0,     0,    44,   176,   193,   193,     0,    45,
      43,    45,    44,    -8,    -8,    43,    -8,    -8,    -8,    -8,
      44,    -9,    -9,    43,    -9,    -9,    -9,    -9,     0,     0,
       0,    43,     0,     0,     0,   163,     0,   164,   175,   226,
     227,   -49,   -49,   -49,   -49,     0,   162,     0,     0,   174,
       0,    44,    44,   101,   102,     0,   -49,   -49,     0,     0,
     228,   229,    43,   100,     0,     0,   175,   192,    44,    -4,
      -4,     0,    -4,    -4,    -4,    -4,     0,   174,   191,    43,
       0,     0,     0,     0,   176,   -40,     0,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   163,   -40,   -40,   -40,     0,     0,   -56,
     -40,     0,     0,   192,   162,   -40,     0,   -40,   -56,   -56,
      74,    75,     0,     0,   191,    23,    44,     2,     3,     4,
       5,    24,     0,    25,    26,    27,     0,    43,     0,     0,
       0,     0,   163,     0,    28,    29,    30,     0,     0,     0,
      31,     0,     0,   162,     0,   199,    23,    33,     2,     3,
       4,     5,    24,     0,    25,    26,    27,    -7,    -7,     0,
      -7,    -7,    -7,    -7,     0,    28,    29,    30,     0,     0,
       0,    31,    44,    44,     0,    44,   280,     0,    33,   293,
     294,     0,     0,    43,    43,     0,    43,     0,     0,   292,
       0,     0,   175,   192,     0,     0,     0,   163,   163,   318,
     319,     0,     0,   174,   191,     0,     0,     0,   162,   317,
       0,     0,   175,   192,   163,     0,   175,   175,   341,   342,
       0,     0,     0,   174,   191,   162,     0,   174,   340,     0,
       0,   175,   192,   175,     0,     0,     0,   192,   192,   366,
     367,     0,   174,   191,   174,     0,     0,     0,   191,   365,
       0,     0,   175,   192,   192,    42,    44,     0,    44,     0,
      42,     0,     0,   174,   191,   191,    41,    43,    42,    43,
       0,    41,     0,     0,     0,     0,    42,    -5,    -5,    41,
      -5,    -5,    -5,    -5,   163,     0,     0,    41,     0,     0,
       0,   161,     0,     0,   173,   162,   -55,   -55,   -55,   -55,
     -55,   -55,   160,     0,     0,   172,     0,    98,     0,     0,
       0,     0,     0,   -55,   -55,     0,     0,   -55,   -55,   230,
     231,     0,   173,   190,    42,     0,     0,     0,     0,     0,
       0,   175,     0,   172,   189,   116,     0,     0,     0,     0,
       0,    23,   174,     2,     3,     4,     5,    24,     0,    25,
      26,    27,     0,   -55,   -55,   -55,   -55,   -55,   -55,   161,
      28,    29,    30,     0,     0,   -55,    31,     0,     0,   190,
     160,   282,     0,    33,   -55,   -55,    74,    75,     0,     0,
     189,    23,    42,     2,     3,     4,     5,    24,     0,    25,
      26,    27,     0,    41,     0,     0,     0,     0,   161,     0,
      28,    29,    30,     0,     0,     0,    31,     0,     0,   160,
       0,   284,    23,    33,     2,     3,     4,     5,    24,     0,
      25,    26,    27,     0,   -53,   -53,   -53,   -53,   -53,   -53,
       0,    28,    29,    30,     0,     0,   -53,    31,    42,    42,
       0,    42,   381,   290,    33,   -53,   -53,    74,    75,    41,
      41,     0,    41,     0,     0,     0,     0,     0,   173,   190,
       0,    -6,    -6,   315,    -6,    -6,    -6,    -6,     0,   172,
     189,   307,   -52,   -52,   -52,   -52,   -52,   -52,   173,   190,
     161,     0,   338,   -53,   -53,   -53,   -53,   -53,   -53,   172,
     189,   332,   -52,   -52,   -52,   210,   211,   173,   190,   173,
     -53,   -53,     0,   363,   -53,   -53,   230,   231,   172,   189,
     355,   -26,   -26,     0,   -26,   -26,   -26,   -26,   173,   190,
     190,     0,    42,     0,    42,     0,     0,     0,     0,   172,
     189,   380,     0,    41,   -26,    41,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     161,     0,     0,   -26,   -26,   -26,     0,     0,     0,   -26,
       0,   160,     0,     0,   -26,     0,   -26,     0,    23,     0,
       2,     3,     4,     5,    24,     0,    25,    26,    27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,    28,    29,    30,
       0,     0,     0,    31,     0,     0,     0,   173,   382,     0,
      33,   -27,     0,   -27,   -27,   -27,   -27,   -27,   172,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,     0,   -27,     0,     0,     0,
       0,   -27,     0,   -27,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,   239,
     -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,   279,
     -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,     0,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,   -64,    83,
     -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,   219,
     -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   235,   236,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   -60,   -60,   238,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,   258,
     -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   275,   276,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,   -60,   278,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,     0,     0,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   235,   236,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   -61,   -61,   238,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   235,   236,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   -62,   -62,   238,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   235,   236,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,   -63,   -63,   238,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   275,   276,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,   -61,   278,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   275,   276,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,   -62,   278,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   275,   276,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,     0,     0,   -63,   278,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    79,    80,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -60,     0,
      81,     0,     0,     0,     0,    82,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,   -68,     0,
     -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,   -69,     0,
     -69,     0,     0,     0,     0,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,   -64,     0,
     -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,    79,    80,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,   -61,     0,
      81,     0,     0,     0,     0,    82,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,    79,    80,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,   -62,     0,
      81,     0,     0,     0,     0,    82,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    79,    80,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,   -63,     0,
      81,     0,     0,     0,     0,    82,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -66,     0,
     -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,   -65,     0,
     -65,     0,     0,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,   -67,     0,
     -67,     0,     0,     0,     0,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   215,   216,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,   218,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   254,   255,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   -60,     0,     0,     0,   257,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,   -70,     0,
     -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,   -72,     0,
     -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,   -71,     0,
     -71,     0,     0,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   215,   216,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,   218,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   215,   216,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,   218,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   215,   216,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,   218,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   254,   255,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   -61,     0,     0,     0,   257,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   254,   255,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   -62,     0,     0,     0,   257,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   254,   255,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   -63,     0,     0,     0,   257,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,   -73,     0,
     -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -73,   -73,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,     0,   -57,     0,   -57,   -57,   -57,   -57,   -57,   272,
     273,   274,   -58,   -58,     0,     0,   -58,   -58,   -58,   -58,
     232,   233,   234,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -59,   -59,     0,     0,   -59,   -59,   -59,   -59,   232,   233,
     234,   -58,     0,   -58,   -58,   -58,   -58,   -58,   272,   273,
     274,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,   -59,
     -57,   -59,   -59,   -59,   -59,   -59,   272,   273,   274,   -57,
     -57,   -57,   -57,    76,    77,    78,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,   -58,     0,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   -58,   -58,   -58,
     -58,    76,    77,    78,   -59,   -59,   -59,   -59,   -59,   -59,
     -56,   -56,   -56,   210,   211,     0,   -59,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,   -59,   -59,   -59,   -59,    76,
      77,    78,     0,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   212,   213,   214,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -57,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     251,   252,   253,   -58,   -58,   -58,   -58,   -58,   212,   213,
     214,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
       0,   -59,   -59,   -59,   -59,   -59,   212,   213,   214,   -58,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   251,
     252,   253,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   251,   252,   253,
     -54,   -54,   -54,   -54,   -54,   -54,     0,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,     0,   -54,   -54,     0,
       0,   -54,   -54,   230,   231,   -55,     0,   -55,   -55,   -55,
     270,   271,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,     0,
     -53,     0,   -53,   -53,   -53,   270,   271,   -54,     0,   -54,
     -54,   -54,   270,   271,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,   -54,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -54,   -54,    74,    75,     0,
       0,     0,   -52,     0,     0,     0,     0,     0,   -52,   -52,
     249,   250,   -55,   -55,   -55,   -55,   -55,   -55,   -53,   -53,
     -53,   -53,   -53,   -53,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,   -55,   -55,   -55,   210,   211,     0,   -53,   -53,
     -53,   210,   211,     0,   -54,   -54,   -54,   210,   211,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,     0,     0,
     -56,   -56,   249,   250,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -55,
       0,     0,     0,     0,     0,   -55,   -55,   249,   250,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -53,     0,     0,     0,     0,     0,
     -53,   -53,   249,   250,   -54,   -54,   -54,   -54,   -54,   -54,
       0,   266,   267,   -49,   -49,   -49,   -49,     0,     0,   -54,
       0,     0,     0,     0,     0,   -54,   -54,   249,   250,   -49,
       0,   -49,   268,   269,   226,   227,   -50,   -50,   -50,   -50,
     226,   227,   -51,   -51,   -51,   -51,     0,     0,     0,     0,
       0,   -50,   -50,     0,     0,   228,   229,   -51,   -51,     0,
       0,   228,   229,   266,   267,   -50,   -50,   -50,   -50,   266,
     267,   -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,   -50,     0,   -50,   268,   269,     0,   -51,     0,   -51,
     268,   269,    70,    71,   -49,   -49,   -49,   -49,    70,    71,
     -50,   -50,   -50,   -50,   -49,     0,     0,     0,     0,     0,
     -50,     0,     0,    72,    73,     0,     0,     0,     0,    72,
      73,    70,    71,   -51,   -51,   -51,   -51,   206,   207,   -49,
     -49,   -49,   -49,   -51,   206,   207,   -50,   -50,   -50,   -50,
       0,     0,    72,    73,     0,     0,     0,   -49,   208,   209,
       0,     0,     0,     0,   -50,   208,   209,   206,   207,   -51,
     -51,   -51,   -51,     0,     0,   245,   246,   -50,   -50,   -50,
     -50,     0,     0,     0,     0,     0,     0,   -51,   208,   209,
     -50,     0,     0,     0,     0,     0,   247,   248,   245,   246,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,     0,     0,     0,     0,     0,   247,
     248
};

static const yytype_int16 yycheck[] =
{
      14,    19,    11,     0,    54,    19,   218,   141,    19,    19,
       7,    18,    19,    27,    26,    27,    26,    26,    29,    33,
       1,    35,     3,     4,     5,     6,   238,    34,    14,    15,
      16,    17,    18,    19,    26,    20,    50,    35,    30,    53,
      18,    19,    56,    57,    19,   257,    32,    19,    34,    35,
      36,    37,    38,    34,    32,    19,    34,    54,    19,    34,
      32,    20,    34,   197,   198,    26,   278,    81,    82,    20,
      34,     1,   122,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     0,    34,    16,    17,    18,    19,     0,     7,
      20,    21,    22,    18,    19,    26,    26,    18,    19,    30,
     118,    31,    34,    33,   118,    16,    17,    18,    19,    34,
      19,    32,   126,    34,   128,   124,   125,    20,    18,    19,
      29,    32,    26,    34,    20,   122,    30,   141,   137,    29,
       1,   145,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    19,    26,   157,   158,    20,    21,    22,    20,    20,
      21,    22,    31,    32,    32,    26,    34,   171,    33,    34,
      31,    26,    33,    16,    17,    18,    19,    18,    19,    33,
     184,    28,    18,    19,   188,    32,    30,    34,    29,    32,
      26,    34,    26,   197,   198,    32,   200,    34,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    33,   200,   217,   218,   219,    31,    32,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    26,    26,   237,   238,   239,    30,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      26,    26,   256,   257,   258,    30,    26,    27,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,    20,    26,   277,   278,   279,    30,   281,    19,   283,
      16,    17,    18,    19,    19,   289,    27,    16,    17,    18,
      19,    34,    33,   281,    19,   283,    31,    32,    34,    26,
      27,   309,    31,    32,    26,   309,    31,    32,    26,    50,
     314,    32,    53,    34,     9,    56,    57,     1,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    16,    17,
      18,    19,    32,   337,    34,    29,    20,    21,    22,    29,
      81,    82,    26,    31,    32,    34,    32,    31,    34,    33,
      33,     1,   356,     3,     4,     5,     6,     7,   362,     9,
      10,    11,    20,    21,    22,    20,    21,    22,    26,    34,
      20,    21,    22,    34,    30,    33,    26,   118,    33,    34,
      32,    31,    34,    33,    32,   126,    34,   128,     1,    26,
       3,     4,     5,     6,     7,    30,     9,    10,    11,    31,
      32,    20,    21,    22,   145,    31,    32,    20,    21,    22,
      26,    27,    28,    26,    33,    34,   157,   158,    31,     1,
      33,     3,     4,     5,     6,     7,    26,     9,    10,    11,
     171,    14,    15,    16,    17,    18,    19,    34,    20,    21,
      22,    31,    32,   184,    26,    26,    29,   188,    20,    31,
      14,    33,    35,    36,    32,    19,    34,    14,    15,    16,
      17,    18,    19,    27,    18,    19,    26,    27,    28,    31,
      32,    35,    26,    33,    31,    32,   217,   218,    35,    36,
      37,    38,    39,    40,    41,     9,    50,    18,    19,    53,
       1,    34,     3,     4,     5,     6,   237,   238,    31,    32,
      31,    32,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,   256,   257,    81,    82,    83,
       1,    34,     3,     4,     5,     6,     7,    34,     9,    10,
      11,    34,    34,    20,    21,    22,   277,   278,     9,    20,
      21,    22,    20,    21,    22,    26,    33,    34,   289,    32,
      31,    34,    33,    29,   118,    33,    34,    18,    19,    16,
      17,    18,    19,    32,   128,    34,    29,    32,   309,    34,
      31,    32,    29,   314,    32,    29,    34,   141,     1,    29,
       3,     4,     5,     6,     7,    34,     9,    10,    11,     3,
       4,     5,     6,   157,    34,    34,   337,    20,    21,    22,
      20,    21,    22,    26,    20,    21,    22,    29,    31,    29,
      33,     7,   157,    33,    30,   356,    34,    33,    20,    21,
      22,   362,    14,    15,    16,    17,    18,    19,    30,    31,
      -1,    33,    -1,   197,   198,    32,   200,    34,    -1,    31,
      32,    -1,    -1,    35,    36,    37,    38,    -1,   212,   213,
     214,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,    -1,   256,   257,   258,    -1,    -1,    -1,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,    14,    -1,   277,   278,   279,    19,   281,    -1,   283,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    16,    17,
      18,    19,    35,    12,    13,    14,    15,    16,    17,    18,
      19,    29,    20,    21,    22,   309,    -1,    50,    27,    28,
      53,    29,    31,    32,    33,    33,    35,    36,    37,    38,
      39,    40,    41,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    20,    21,    22,    81,    82,
      83,     1,    -1,     3,     4,     5,     6,     7,    33,     9,
      10,    11,   356,    -1,    20,    21,    22,    20,    21,    22,
      20,    21,    22,    -1,    30,    31,    26,    33,    -1,    -1,
      33,    31,    -1,    33,     1,   118,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,   128,    -1,    20,    21,    22,
      20,    21,    22,    20,    21,    22,    -1,    30,   141,    26,
      33,    -1,    -1,    33,    31,    -1,    33,     1,    -1,     3,
       4,     5,     6,     7,   157,     9,    10,    11,    20,    21,
      22,    20,    21,    22,    -1,    -1,    20,    21,    22,    -1,
      -1,    33,    26,    -1,    33,    -1,    -1,    31,    -1,    33,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    20,    21,    22,   197,   198,    -1,   200,    -1,    20,
      21,    22,    -1,    -1,    33,    26,    -1,   210,   211,    -1,
      31,    -1,    33,    -1,   217,   218,    20,    21,    22,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,    33,
      -1,    -1,    -1,    -1,   237,   238,   239,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,    -1,    -1,   256,   257,   258,    20,    21,    22,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,    33,
      -1,    -1,    14,    -1,   277,   278,   279,    19,   281,    -1,
     283,    16,    17,    18,    19,    27,    16,    17,    18,    19,
      -1,    26,    -1,    35,     0,     1,    26,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,   309,    -1,    50,    -1,
      -1,    53,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    66,    67,    68,    69,    70,    71,
      72,    73,    20,    21,    22,    -1,    -1,    -1,    26,    81,
      82,    83,    -1,    31,    -1,    33,    14,    15,    16,    17,
      18,    19,     1,   356,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    31,    32,    -1,    -1,    35,    36,    37,
      38,    20,    21,    22,    -1,    -1,   118,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,   128,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    -1,   157,    -1,    31,     1,    33,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    -1,
      14,    15,    16,    17,    18,    19,    -1,    20,    21,    22,
      -1,    -1,    26,    26,    -1,    -1,    -1,    -1,    31,    -1,
      33,    35,    36,    37,    38,   197,   198,    -1,   200,    -1,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,     0,     1,
      -1,     3,     4,     5,     6,   217,   218,    -1,    -1,    -1,
     222,   223,   224,   225,   226,   227,   228,   229,    -1,    14,
      15,    16,    17,    18,    19,   237,   238,   239,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,    32,    -1,    34,
      35,    36,    37,    38,   256,   257,   258,    -1,    -1,    -1,
     262,   263,   264,   265,   266,   267,   268,   269,    -1,    14,
      -1,    -1,    -1,    -1,    19,   277,   278,   279,    -1,   281,
      14,   283,    27,     0,     1,    19,     3,     4,     5,     6,
      35,     0,     1,    27,     3,     4,     5,     6,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    50,    -1,   309,    53,    14,
      15,    16,    17,    18,    19,    -1,    50,    -1,    -1,    53,
      -1,    66,    67,    68,    69,    -1,    31,    32,    -1,    -1,
      35,    36,    66,    67,    -1,    -1,    81,    82,    83,     0,
       1,    -1,     3,     4,     5,     6,    -1,    81,    82,    83,
      -1,    -1,    -1,    -1,   356,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,    14,    15,    16,
      17,    18,    19,   118,    20,    21,    22,    -1,    -1,    26,
      26,    -1,    -1,   128,   118,    31,    -1,    33,    35,    36,
      37,    38,    -1,    -1,   128,     1,   141,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    -1,   141,    -1,    -1,
      -1,    -1,   157,    -1,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    -1,   157,    -1,    31,     1,    33,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,     0,     1,    -1,
       3,     4,     5,     6,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,   197,   198,    -1,   200,    31,    -1,    33,   204,
     205,    -1,    -1,   197,   198,    -1,   200,    -1,    -1,   203,
      -1,    -1,   217,   218,    -1,    -1,    -1,   222,   223,   224,
     225,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,   223,
      -1,    -1,   237,   238,   239,    -1,   241,   242,   243,   244,
      -1,    -1,    -1,   237,   238,   239,    -1,   241,   242,    -1,
      -1,   256,   257,   258,    -1,    -1,    -1,   262,   263,   264,
     265,    -1,   256,   257,   258,    -1,    -1,    -1,   262,   263,
      -1,    -1,   277,   278,   279,    14,   281,    -1,   283,    -1,
      19,    -1,    -1,   277,   278,   279,    14,   281,    27,   283,
      -1,    19,    -1,    -1,    -1,    -1,    35,     0,     1,    27,
       3,     4,     5,     6,   309,    -1,    -1,    35,    -1,    -1,
      -1,    50,    -1,    -1,    53,   309,    14,    15,    16,    17,
      18,    19,    50,    -1,    -1,    53,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,   356,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,     1,   356,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,    14,    15,    16,    17,    18,    19,   118,
      20,    21,    22,    -1,    -1,    26,    26,    -1,    -1,   128,
     118,    31,    -1,    33,    35,    36,    37,    38,    -1,    -1,
     128,     1,   141,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    -1,   141,    -1,    -1,    -1,    -1,   157,    -1,
      20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,   157,
      -1,    31,     1,    33,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    -1,    14,    15,    16,    17,    18,    19,
      -1,    20,    21,    22,    -1,    -1,    26,    26,   197,   198,
      -1,   200,    31,   202,    33,    35,    36,    37,    38,   197,
     198,    -1,   200,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,     0,     1,   222,     3,     4,     5,     6,    -1,   217,
     218,   219,    14,    15,    16,    17,    18,    19,   237,   238,
     239,    -1,   241,    14,    15,    16,    17,    18,    19,   237,
     238,   239,    34,    35,    36,    37,    38,   256,   257,   258,
      31,    32,    -1,   262,    35,    36,    37,    38,   256,   257,
     258,     0,     1,    -1,     3,     4,     5,     6,   277,   278,
     279,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,   277,
     278,   279,    -1,   281,     1,   283,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    26,
      -1,   309,    -1,    -1,    31,    -1,    33,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,     0,
       1,    -1,     3,     4,     5,     6,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,   356,    31,    -1,
      33,     1,    -1,     3,     4,     5,     6,     7,   356,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    31,    -1,    33,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    32,
      26,    34,    35,    36,    37,    38,    39,    40,    41,    35,
      36,    37,    38,    39,    40,    41,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      14,    15,    16,    17,    18,    19,    -1,    35,    36,    37,
      38,    39,    40,    41,    14,    15,    16,    17,    18,    19,
      34,    35,    36,    37,    38,    -1,    26,    14,    15,    16,
      17,    18,    19,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    14,    15,    16,    17,    18,
      19,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    34,    35,    36,    37,    38,    39,    40,
      41,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      14,    15,    16,    17,    18,    19,    -1,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    37,    38,    32,    -1,    34,    35,    36,
      37,    38,    14,    15,    16,    17,    18,    19,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    38,    32,    -1,    34,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    14,    15,    16,
      17,    18,    19,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    14,    15,    16,    17,    18,    19,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    34,    35,
      36,    37,    38,    -1,    34,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    14,    15,    16,    17,    18,    19,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    32,
      -1,    34,    35,    36,    14,    15,    16,    17,    18,    19,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    35,    36,    31,    32,    -1,
      -1,    35,    36,    14,    15,    16,    17,    18,    19,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    32,    -1,    34,
      35,    36,    14,    15,    16,    17,    18,    19,    14,    15,
      16,    17,    18,    19,    26,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    35,
      36,    14,    15,    16,    17,    18,    19,    14,    15,    16,
      17,    18,    19,    26,    14,    15,    16,    17,    18,    19,
      -1,    -1,    35,    36,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    34,    35,    36,    14,    15,    16,
      17,    18,    19,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    43,    44,    45,    46,
      47,    50,    68,    26,    30,    52,     0,    45,    26,    27,
      26,    52,    20,     1,     7,     9,    10,    11,    20,    21,
      22,    26,    31,    33,    46,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    68,
      30,    48,    58,    28,    33,    26,    33,    33,    52,    58,
      58,    26,    31,    54,    26,    26,    19,    18,    16,    17,
      14,    15,    35,    36,    37,    38,    39,    40,    41,    12,
      13,    28,    33,    27,    20,    48,    49,    29,    58,     1,
       3,    34,    47,    51,    58,    58,     9,    34,    60,    66,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    58,    34,    58,    67,    59,    31,    32,    29,
      34,    34,    32,    34,    34,    34,    33,    29,    32,    34,
      31,    48,    47,    52,    52,    58,    58,     8,    34,    52,
      26,    30,    20,    21,    22,    33,    59,    60,    61,    62,
      63,    64,    65,    66,    20,    21,    22,    30,    33,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    20,    21,
      22,    33,    59,    60,    61,    62,    63,    64,    65,    66,
      68,    20,    21,    22,    33,    20,    21,    22,    33,    59,
      60,    61,    62,    63,    64,    65,    66,    30,    30,    31,
      53,    58,    19,    18,    16,    17,    14,    15,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    28,    33,    27,
      49,    58,    19,    18,    16,    17,    14,    15,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    28,    33,    27,
      58,    19,    18,    16,    17,    14,    15,    35,    36,    37,
      38,    39,    40,    41,    12,    13,    28,    33,    27,    20,
      58,    58,    19,    18,    16,    17,    14,    15,    35,    36,
      37,    38,    39,    40,    41,    12,    13,    28,    33,    27,
      31,    53,    31,    53,    31,    34,    20,    21,    22,    33,
      60,    66,    61,    62,    62,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    58,    34,    67,    59,    31,    32,
      34,    20,    21,    22,    33,    60,    66,    61,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    58,
      34,    67,    59,    34,    20,    21,    22,    33,    60,    66,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    58,    34,    67,    59,    28,    34,    34,    20,
      21,    22,    33,    60,    66,    61,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    58,    34,    67,
      59,    31,    31,    58,    29,    34,    31,    58,    29,    34,
      58,    29,    34,    29,    58,    58,    29,    34,    34,    34,
      34,    29,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    46,    47,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    62,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    68,    68,    68,    68
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
       1,     3,     3,     3,     1,     4,     3,     4,     2,     2,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1
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
#line 60 "language.y"
    { root = (yyvsp[0].node); }
#line 2421 "src/parser.c"
    break;

  case 4:
#line 65 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "declaration-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2427 "src/parser.c"
    break;

  case 6:
#line 70 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-definition", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2433 "src/parser.c"
    break;

  case 8:
#line 72 "language.y"
    { }
#line 2439 "src/parser.c"
    break;

  case 9:
#line 73 "language.y"
    { }
#line 2445 "src/parser.c"
    break;

  case 11:
#line 78 "language.y"
    { (yyval.node) = node_init(node_list, '=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2451 "src/parser.c"
    break;

  case 12:
#line 82 "language.y"
    { (yyval.node) = node_init(node_list, 'D', "declarator-variable", (yyvsp[-1].node), (yyvsp[0].node)    , NULL); /*add_symbol_var($$);*/ }
#line 2457 "src/parser.c"
    break;

  case 13:
#line 83 "language.y"
    { (yyval.node) = node_init(node_list, 'E', "declarator-array"   , (yyvsp[-3].node), (yyvsp[-2].node)    , NULL); /*add_symbol_var($$);*/ }
#line 2463 "src/parser.c"
    break;

  case 14:
#line 84 "language.y"
    { (yyval.node) = node_init(node_list, 'E', "declarator-array"   , (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); /*add_symbol_var($$);*/ }
#line 2469 "src/parser.c"
    break;

  case 16:
#line 89 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2475 "src/parser.c"
    break;

  case 17:
#line 90 "language.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2481 "src/parser.c"
    break;

  case 19:
#line 95 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "initializer-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2487 "src/parser.c"
    break;

  case 20:
#line 99 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node), NULL); /*add_symbol_fun($$);*/ }
#line 2493 "src/parser.c"
    break;

  case 21:
#line 100 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-3].node), (yyvsp[-2].node),     NULL); /*add_symbol_fun($$);*/ }
#line 2499 "src/parser.c"
    break;

  case 22:
#line 101 "language.y"
    { (yyval.node) = node_init(node_list, 'F', "function-declarator", (yyvsp[-4].node), (yyvsp[-3].node),     NULL); /*add_symbol_fun($$);*/ }
#line 2505 "src/parser.c"
    break;

  case 23:
#line 102 "language.y"
    { }
#line 2511 "src/parser.c"
    break;

  case 25:
#line 107 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "parameter-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2517 "src/parser.c"
    break;

  case 26:
#line 111 "language.y"
    { }
#line 2523 "src/parser.c"
    break;

  case 27:
#line 112 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2529 "src/parser.c"
    break;

  case 29:
#line 117 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "statement-list", (yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 2535 "src/parser.c"
    break;

  case 30:
#line 121 "language.y"
    { }
#line 2541 "src/parser.c"
    break;

  case 36:
#line 127 "language.y"
    { }
#line 2547 "src/parser.c"
    break;

  case 37:
#line 131 "language.y"
    { (yyval.node) = node_init(node_list, IF  , "if"     , (yyvsp[-2].node), (yyvsp[0].node),     NULL); }
#line 2553 "src/parser.c"
    break;

  case 38:
#line 132 "language.y"
    { (yyval.node) = node_init(node_list, ELSE, "if-else", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2559 "src/parser.c"
    break;

  case 39:
#line 136 "language.y"
    { (yyval.node) = node_init(node_list, WHILE, "while"   , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2565 "src/parser.c"
    break;

  case 40:
#line 137 "language.y"
    { (yyval.node) = node_init(node_list, DO   , "do-while", (yyvsp[-5].node), (yyvsp[-2].node), NULL); }
#line 2571 "src/parser.c"
    break;

  case 41:
#line 141 "language.y"
    { (yyval.node) = node_init(node_list, RETURN, "return",     NULL); }
#line 2577 "src/parser.c"
    break;

  case 42:
#line 142 "language.y"
    { (yyval.node) = node_init(node_list, RETURN, "return", (yyvsp[0].node), NULL); }
#line 2583 "src/parser.c"
    break;

  case 44:
#line 147 "language.y"
    { (yyval.node) = node_init(node_list, '=', "'='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2589 "src/parser.c"
    break;

  case 46:
#line 152 "language.y"
    { (yyval.node) = node_init(node_list, OP_OR, "'||'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2595 "src/parser.c"
    break;

  case 48:
#line 157 "language.y"
    { (yyval.node) = node_init(node_list, OP_AND, "'&&'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2601 "src/parser.c"
    break;

  case 50:
#line 162 "language.y"
    { (yyval.node) = node_init(node_list, OP_EQ, "'=='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2607 "src/parser.c"
    break;

  case 51:
#line 163 "language.y"
    { (yyval.node) = node_init(node_list, OP_NE, "'!='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2613 "src/parser.c"
    break;

  case 53:
#line 168 "language.y"
    { (yyval.node) = node_init(node_list, '<'  , "'<'" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2619 "src/parser.c"
    break;

  case 54:
#line 169 "language.y"
    { (yyval.node) = node_init(node_list, '>'  , "'>'" , (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2625 "src/parser.c"
    break;

  case 55:
#line 170 "language.y"
    { (yyval.node) = node_init(node_list, OP_LE, "'<='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2631 "src/parser.c"
    break;

  case 56:
#line 171 "language.y"
    { (yyval.node) = node_init(node_list, OP_GE, "'>='", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2637 "src/parser.c"
    break;

  case 58:
#line 176 "language.y"
    { (yyval.node) = node_init(node_list, '+', "'+'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2643 "src/parser.c"
    break;

  case 59:
#line 177 "language.y"
    { (yyval.node) = node_init(node_list, '-', "'-'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2649 "src/parser.c"
    break;

  case 61:
#line 182 "language.y"
    { (yyval.node) = node_init(node_list, '*', "'*'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2655 "src/parser.c"
    break;

  case 62:
#line 183 "language.y"
    { (yyval.node) = node_init(node_list, '/', "'/'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2661 "src/parser.c"
    break;

  case 63:
#line 184 "language.y"
    { (yyval.node) = node_init(node_list, '%', "'%'", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2667 "src/parser.c"
    break;

  case 65:
#line 189 "language.y"
    { (yyval.node) = node_init(node_list, 'V'   , "vector-index" , (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2673 "src/parser.c"
    break;

  case 66:
#line 190 "language.y"
    { (yyval.node) = node_init(node_list, 'C'   , "function-call", (yyvsp[-2].node)    , NULL); }
#line 2679 "src/parser.c"
    break;

  case 67:
#line 191 "language.y"
    { (yyval.node) = node_init(node_list, 'C'   , "function-call", (yyvsp[-3].node), (yyvsp[-1].node), NULL); }
#line 2685 "src/parser.c"
    break;

  case 68:
#line 192 "language.y"
    { (yyval.node) = node_init(node_list, OP_INC, "'++'"         , (yyvsp[-1].node)    , NULL); }
#line 2691 "src/parser.c"
    break;

  case 69:
#line 193 "language.y"
    { (yyval.node) = node_init(node_list, OP_DEC, "'--'"         , (yyvsp[-1].node)    , NULL); }
#line 2697 "src/parser.c"
    break;

  case 73:
#line 200 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2703 "src/parser.c"
    break;

  case 75:
#line 206 "language.y"
    { (yyval.node) = node_init(node_list, 'L', "argument-list", (yyvsp[-2].node), (yyvsp[0].node), NULL); }
#line 2709 "src/parser.c"
    break;


#line 2713 "src/parser.c"

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
#line 216 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

