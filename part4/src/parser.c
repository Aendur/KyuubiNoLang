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
#line 75 "language.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "arg-list.h"
#include "actions.h"
int yylex (void);
extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Tablestack * context_stack;

#line 112 "src/parser.c"


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
#define YYLAST   8529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  523

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
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   100,   101,   105,   106,   107,   108,   112,
     113,   114,   115,   116,   117,   121,   122,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     133,   137,   138,   142,   143,   147,   148,   148,   152,   153,
     157,   158,   159,   160,   161,   162,   163,   164,   168,   169,
     173,   174,   178,   179,   183,   184,   188,   189,   193,   194,
     198,   199,   200,   204,   205,   206,   207,   208,   212,   213,
     214,   218,   219,   220,   221,   225,   226,   227,   228,   229,
     233,   234,   235,   236,   240,   241,   242,   243,   244,   245,
     246,   250,   251,   255,   256,   257,   258
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
  "function_definition", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6",
  "parameter_list", "parameter", "compound_statement", "$@7",
  "statement_list", "statement", "conditional_statement",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    59,    61,    91,    93,   123,
     125,    44,    40,    41,    60,    62,    43,    45,    42,    47,
      37,    33
};
# endif

#define YYPACT_NINF -226

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-226)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     990,   151,     2,    15,    26,    42,     6,   465,   735,   -31,
     877,    43,  1057,   849,  1291,  -226,  1403,  1462,    30,  1575,
     998,    50,   760,    35,    85,    55,  2464,  4155,  4187,  4219,
    4251,  4283,    53,    69,    78,   200,  1759,  1759,   912,  1853,
    1759,  1759,   133,  1020,  1374,  1433,  1497,  1516,   142,   179,
      -6,   251,   580,   509,  1812,  7605,  7637,  4315,  4347,   213,
    1596,   203,   212,   211,   209,     3,   214,   -28,    79,   273,
    2525,  1853,  1853,   268,   242,  7644,  6011,  7676,   260,  7683,
    7715,  2586,  1660,  2663,  2684,  2743,  1759,  1759,  1759,  1759,
    1759,  1759,  1759,  1759,  1759,  1759,  1759,  1759,  1759,  1759,
    2024,   400,   208,    -1,   284,  1736,   297,  2762,   390,   304,
     407,   305,   306,   327,  4379,   405,   793,   920,  1093,  2297,
    8291,  8320,  8326,  7722,  7754,  7761,  7793,  7800,    89,   338,
    4411,   191,   235,   357,  2045,  2821,   998,   363,   398,  2840,
     387,   406,   410,  1853,  4443,  2080,  4475,    93,   147,   998,
     386,  2899,  1786,   998,   414,   422,    54,  2918,   403,   423,
     433,   380,  2977,  1818,  2012,  2996,  2130,   410,   452,   458,
     181,  2213,  2227,  3055,  3074,  3133,  4507,  4539,  4571,  4603,
    4635,  4667,  2109,  2109,  1853,  2109,  2109,   113,    76,   383,
    2246,  8355,  7832,  7845,  4699,  4731,  3152,  6043,  6075,  6107,
    6139,  6171,  6203,  1853,  6235,  4763,  4795,  4827,  4859,  4891,
    4923,  2136,  2136,  1853,  2136,  2136,   -17,    45,   207,  1086,
     294,   261,   643,  4955,  4987,  2024,   548,  2423,  3419,  3451,
    3483,  3515,  3547,  2168,  2168,  1853,  2168,  2168,    75,   -21,
      86,   126,   611,  7141,  7173,  3579,  3611,  3643,  3675,  3707,
    3739,  3771,  3803,  2193,  2193,  1853,  2193,  2193,   102,    51,
     468,   196,  2342,  7184,  7216,  3835,  3867,  3211,  3230,   998,
    6267,  6299,  6331,  6363,  6395,  6427,  1853,  7877,  6459,  6491,
    7890,   456,  7922,  7935,  2109,  2109,  2109,  2109,  2109,  2109,
    2109,  2109,  2109,  2109,  2109,  2109,  2109,  2109,  2024,   571,
     425,   998,   463,  6523,  6555,  6587,  6619,  6651,  6683,  1853,
    1196,  6715,  6747,  1229,   464,  7967,  7975,  2136,  2136,  2136,
    2136,  2136,  2136,  2136,  2136,  2136,  2136,  2136,  2136,  2136,
    2136,  2024,   929,   487,  6779,   453,  5019,  5051,  5083,  5115,
    5147,  5179,  1853,  7226,  5211,  5243,  7258,   500,  7268,  7300,
    2168,  2168,  2168,  2168,  2168,  2168,  2168,  2168,  2168,  2168,
    2168,  2168,  2168,  2168,  2024,  1092,  2594,  5275,  5307,  5339,
    5371,  5403,  1853,  7311,  5435,  5467,  7343,   508,  7354,  7386,
    2193,  2193,  2193,  2193,  2193,  2193,  2193,  2193,  2193,  2193,
    2193,  2193,  2193,  2193,  2024,  1160,   476,   998,  3289,   532,
    2024,  1307,  5499,   395,   560,  2382,  2530,  8365,  8394,  8404,
    8433,  8007,  8020,  8052,  8065,  8097,   140,   514,  5531,   457,
    3308,  6811,   549,  2024,  1344,  5563,    60,   323,  1820,  8474,
     676,  2434,  8439,  8445,  8105,  8137,  8145,  8153,  8185,   -13,
     523,  5595,   461,  6843,  6875,   550,  2024,  1576,  3899,   -16,
     170,   391,  1165,  2392,  8195,  8202,  8231,  7396,  7428,  7438,
    7470,  7480,   118,   556,  3931,   469,   553,  2024,  1745,  3963,
     134,   518,   841,  1425,  8239,  8247,  8276,  8284,  7512,  7523,
    7555,  7566,  7598,   139,   559,  3995,   478,  3367,  3386,  6907,
     562,  6939,   479,  5627,  5659,   605,  6971,   573,  7003,   483,
    5691,  5723,  5755,   574,  5787,   519,  4027,  4059,  5819,   578,
    5851,   533,  4091,  4123,   787,  7035,  7067,  7099,  7131,  5883,
    5915,  5947,  5979
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,   620,   175,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,   521,     7,  -170,  -115,   -15,  -226,
    -226,  -226,   742,  2216,  2038,  1939,  1600,  1604,  1327,   948,
     -20,   362,  -225,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    42,   147,    10,   153,   149,   136,
     154,   150,   137,    67,    68,    43,    20,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      76,   204,   132,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   335,    57,   194,    11,   269,    15,   133,    14,   -93,
     -93,    11,   -56,   351,    17,    57,   317,   -57,   351,   223,
     317,   151,   -94,   108,    57,   109,   301,    86,    69,    83,
     -56,    21,   -56,   -95,   162,   -57,   -54,   -57,   165,   -54,
     -55,    73,   176,   177,   178,   179,   180,   181,   134,   -96,
      18,   223,   223,   182,   183,   -48,   106,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   167,   -48,
     -48,   -48,   -48,   -48,   419,    -9,    22,    23,   -56,   318,
     194,   245,    24,    62,   -56,   381,    64,   184,    65,     3,
       4,     5,   185,   -57,   318,    60,   186,   397,   -56,   -48,
      70,   -56,   -56,   -48,   -48,    71,   -48,   442,   350,   -56,
     285,   -48,    69,   -57,   265,   -48,    57,   352,   353,   -58,
     -58,    72,    86,   223,   -56,   245,   -54,   196,   -54,    57,
     -31,    57,   -31,    57,   -55,   380,    83,   -58,    66,   -58,
     465,   265,    57,   160,   161,    57,   284,    83,   156,   157,
      83,   350,   -54,   -54,   398,   354,   355,   -60,   -60,   -60,
     -60,   -54,   278,   278,   223,   278,   278,   -57,   381,   -55,
     486,   -55,   380,   284,   173,     9,   492,   -60,    81,   -60,
     356,   357,     9,   223,   -57,   -57,   420,    84,   -55,   -55,
     -55,   311,   311,   223,   311,   311,    12,   -15,   -15,   499,
      13,   352,   353,   -59,   -59,   194,   245,    26,    27,    28,
      29,    30,    31,   344,   344,   223,   344,   344,    36,    37,
     102,   -59,   505,   -59,    85,   384,   385,   -60,   -60,   -60,
     -60,   -16,   -16,   374,   374,   223,   374,   374,   319,   320,
     -58,   -58,   -91,   511,   -91,   -52,   -60,   -60,   -10,    57,
     386,   387,    39,    -9,    22,    23,   223,    40,   103,   104,
     -58,    41,   105,   107,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   194,   245,
     110,    57,   487,   113,   -56,    87,   145,   -53,   146,   223,
     -68,   -68,   -68,   -68,   -68,   -68,   -56,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   194,   245,   114,   -68,   -68,   -68,   -68,   -68,   327,
     328,   329,   223,   -63,   -63,   -63,   -63,   -63,   -63,   -11,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   194,   245,   135,   -63,   -63,   -63,
     325,   326,   223,   139,   319,   320,   -59,   -59,   141,   142,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   194,   245,   -59,    57,    57,   143,
     194,   245,    58,    83,    58,   195,   144,   247,   248,   249,
     250,   251,   252,     2,     3,     4,     5,    58,   253,   254,
      57,   224,   -14,   194,   245,    83,    58,   227,   228,   229,
     230,   231,   232,   152,   286,   287,   -58,   -58,   233,   234,
     354,   355,   -61,   -61,   -61,   -61,   194,   245,   -57,   285,
     169,   -58,   255,   224,   224,   155,   163,   256,   -57,    87,
     -35,   257,   -61,   -57,   -61,   356,   357,   194,   245,   -32,
     -57,   -32,   235,   130,   140,   267,   168,   236,   -33,   175,
     -33,   237,   195,   246,   166,    -2,     1,    57,     2,     3,
       4,     5,    83,   -34,   -92,   -34,   -92,   -35,   -12,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   266,   174,    58,   382,
     383,   -58,   -58,   -13,   145,   224,   444,   246,   145,   402,
     494,    58,   145,    58,   501,    58,   421,   425,   -58,   -58,
     145,   -35,   507,   266,    58,   -35,   -35,    58,   -35,   145,
     145,   513,   516,   -35,   145,   443,   518,   -35,    90,    91,
     -60,   -60,   -60,   -60,   279,   279,   224,   279,   279,   382,
     383,   -59,   -59,   448,   -60,   227,   228,   229,   230,   231,
     232,   469,   493,    92,    93,   224,   233,   234,   -59,   -59,
     145,   500,   520,   312,   312,   224,   312,   312,   227,   228,
     229,   230,   231,   232,   145,   489,   522,   195,   246,   233,
     234,   286,   287,   -59,   -59,   345,   345,   224,   345,   345,
     235,   334,   496,   502,   506,   236,   508,   512,   -59,   237,
     515,    88,    89,   -58,   -58,   375,   375,   224,   375,   375,
     -37,   517,   519,   235,   418,   -58,   521,    16,   236,   138,
       0,    58,   237,     0,     0,     0,     0,     0,   224,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     195,   246,   -63,    58,   -63,   -63,   -63,   358,   359,     0,
       0,   224,   -71,   -71,   -71,   -71,   -71,   -71,     0,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   195,   246,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   224,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   195,   246,     0,   -66,
     -66,   -66,   325,   326,   224,    -3,    -3,     0,    -3,    -3,
      -3,    -3,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   195,   246,     0,    58,
      58,     0,   195,   246,    61,    63,     0,    26,    27,    28,
      29,    30,    31,     0,     0,     0,     0,    74,    36,    37,
       0,    78,    58,     0,     0,   195,   246,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   195,   246,
       0,     0,    39,   111,   112,     0,     0,    40,     0,     0,
       0,    41,     0,     0,    88,    89,   -59,   -59,     0,   195,
     246,     0,   -37,     0,     0,     0,   -37,   -37,   -59,   -37,
       0,     0,   129,   131,   -37,     0,     0,     0,   -37,    58,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
     384,   385,   -61,   -61,   -61,   -61,   148,    -5,    -5,     0,
      -5,    -5,    -5,    -5,     0,   158,     0,   159,     0,     0,
       0,   -61,   -61,     0,   -36,   386,   387,     0,   -36,    19,
       0,   -36,     0,   170,     0,     0,   -36,     0,     0,     0,
     -36,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   281,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   227,   228,   229,   230,
     231,   232,     0,     0,     0,   302,     0,   233,   234,    90,
      91,   -61,   -61,   -61,   -61,   314,     0,   -40,     0,     0,
       0,   -40,   -40,     0,   -40,   -61,     0,   333,   131,   -40,
       0,   193,     0,   -40,    92,    93,     0,   347,     0,     0,
       0,   235,   441,     0,    75,    77,   236,   222,    79,    80,
     237,     1,     0,     2,     3,     4,     5,   377,     0,    25,
       0,     2,     3,     4,     5,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,   399,   222,
     222,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     417,   131,     0,    38,   125,   126,   127,   175,   193,   244,
      39,   422,     0,     0,     0,    40,     0,    -7,    -7,    41,
      -7,    -7,    -7,    -7,     0,   -45,     0,     0,     0,   -45,
     -45,     0,   -45,   440,   131,     0,     0,   -45,     0,     0,
       0,   -45,   264,     0,   445,     0,     0,     0,     0,     0,
       0,   222,     0,   244,     0,     0,     0,     0,     0,   227,
     228,   229,   230,   231,   232,     0,   463,   131,     0,   264,
     233,   234,     0,     0,   466,   321,   322,   -60,   -60,   -60,
     -60,     0,    90,    91,   -62,   -62,   -62,   -62,     0,     0,
     277,   280,   222,   282,   283,     0,   484,   131,   -62,   -60,
     323,   324,   490,   131,   235,   464,     0,    92,    93,   236,
       0,   222,     0,   237,     0,     0,     0,     0,     0,   310,
     313,   222,   315,   316,     0,   497,   131,   227,   228,   229,
     230,   231,   232,   193,   244,     0,     0,     0,   233,   234,
       0,   343,   346,   222,   348,   349,     0,     0,   503,   131,
       0,     0,     0,     0,   354,   355,   -62,   -62,   -62,   -62,
       0,   373,   376,   222,   378,   379,     0,     0,     0,   509,
     131,     0,   235,   485,     0,     0,   -62,   236,   -62,   356,
     357,   237,     0,     0,   222,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   413,   414,   415,   193,   193,   244,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   222,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   436,   437,   438,   222,   193,
     244,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     222,    -8,    -8,     0,    -8,    -8,    -8,    -8,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   459,   460,
     461,   244,   193,   244,   227,   228,   229,   230,   231,   232,
     222,     0,     0,     0,     0,   233,   234,     0,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   480,   481,
     482,   264,   193,   244,     0,     0,     0,     0,   193,   244,
     192,   227,   228,   229,   230,   231,   232,     0,     0,   235,
     491,     0,   233,   234,   236,     0,   221,     0,   237,     0,
       0,   193,   244,     0,     0,    25,     0,     2,     3,     4,
       5,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,   193,   244,   235,   498,   221,   221,
       0,   236,     0,    -4,    -4,   237,    -4,    -4,    -4,    -4,
       0,     0,     0,     0,     0,   193,   244,     0,     0,    38,
       0,   123,   124,   175,    82,     0,    39,   192,   243,     0,
       0,    40,     0,     0,   -38,    41,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   384,   385,   -62,   -62,   -62,   -62,
       0,   263,    -6,    -6,     0,    -6,    -6,    -6,    -6,     0,
     221,     0,   243,     0,     0,   -62,   -62,     0,   -38,   386,
     387,     0,   -38,   -38,     0,   -38,     0,     0,   263,     0,
     -38,     0,     0,     0,   -38,     0,     0,     0,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   221,   -43,   -43,   -43,   -43,   -43,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     221,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
     221,     0,   -43,     0,     0,     0,   -43,   -43,     0,   -43,
       0,     0,   192,   243,   -43,     0,     0,     0,   -43,     0,
       0,   -44,   221,     0,     0,   -44,   -44,     0,   -44,     0,
       0,     0,     0,   -44,     0,   -35,   -35,   -44,   -35,   -35,
     -35,   -35,   221,   227,   228,   229,   230,   231,   232,     0,
       0,     0,     0,     0,   233,   234,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   221,     0,     0,     0,     0,     0,     0,
       0,   192,   192,   192,   192,   192,   192,   192,   192,   411,
     412,     0,     0,   190,   192,   192,   243,   191,   235,   504,
       0,     0,     0,   236,     0,     0,   221,   237,     0,   219,
       0,     0,     0,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   434,   435,     0,     0,     0,   221,   192,   243,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,   221,
       0,   219,   219,     0,     0,   220,   220,   243,   243,   243,
     243,   243,   243,   243,   243,   457,   458,     0,   117,   118,
     243,   192,   243,     0,   119,   120,   121,   122,     0,   221,
     190,   241,     0,     0,   191,   242,     0,   263,   263,   263,
     263,   263,   263,   263,   263,   478,   479,     0,     0,     0,
     263,   192,   243,     0,     0,     0,     0,   192,   243,     0,
       0,     0,     0,     0,   261,     0,   -29,   -29,   262,   -29,
     -29,   -29,   -29,   219,     0,   241,     0,   220,     0,   242,
     192,   243,   227,   228,   229,   230,   231,   232,     0,     0,
       0,   261,     0,   233,   234,   262,   197,   198,   199,   200,
     201,   202,     0,   192,   243,     0,     0,    36,    37,     0,
       0,     0,     0,     0,   219,     0,   -28,   -28,   220,   -28,
     -28,   -28,   -28,     0,   192,   243,     0,   235,   510,     0,
       0,     0,   236,   219,     0,     0,   237,   220,     0,     0,
       0,   203,     0,   219,     0,     0,    40,   220,   -26,   -26,
      41,   -26,   -26,   -26,   -26,   190,   241,     0,     0,   191,
     242,     0,     0,     0,     0,   219,     0,     0,     0,   220,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   321,
     322,   -61,   -61,   -61,   -61,   219,     0,   -63,     0,   220,
     205,   206,   207,   208,   209,   210,   -63,   -63,    94,    95,
       0,   211,   212,   -61,   323,   324,   219,     0,     0,     0,
     220,     0,     0,     0,   190,   190,   405,   406,   191,   191,
     191,   191,   407,   408,   409,   410,     0,   190,   190,   241,
       0,   191,   191,   242,     0,   213,     0,     0,     0,   219,
     214,     0,     0,   220,   215,     0,     0,   219,   219,   428,
     429,   220,   220,   220,   220,   430,   431,   432,   433,     0,
     219,   190,   241,     0,   220,   191,   242,     0,     0,     0,
       0,     0,   219,     0,     0,     0,   220,     0,     0,     0,
     241,   241,   451,   452,   242,   242,   242,   242,   453,   454,
     455,   456,   189,   241,   190,   241,     0,   242,   191,   242,
       0,     0,   219,     0,     0,     0,   220,     0,   218,     0,
     261,   261,   472,   473,   262,   262,   262,   262,   474,   475,
     476,   477,     0,   261,   190,   241,     0,   262,   191,   242,
     190,   241,     0,     0,   191,   242,     0,     0,     0,     0,
     218,   218,   -22,   -22,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,   190,   241,     0,   116,   191,   242,     0,
       0,   176,   177,   178,   179,   180,   181,     0,     0,   189,
     240,     0,   182,   183,     0,     0,   190,   241,     0,     0,
     191,   242,   247,   248,   249,   250,   251,   252,     0,     0,
       0,   188,     0,   253,   254,     0,     0,   190,   241,     0,
       0,   191,   242,   260,     0,     0,   184,   217,     0,     0,
       0,   185,   218,     0,   240,   186,     0,   227,   228,   229,
     230,   231,   232,     0,     0,     0,     0,   255,   233,   234,
     260,     0,   256,     0,     0,     0,   257,     0,     0,   217,
     217,     0,     0,     0,     0,     0,   270,   271,   272,   273,
     274,   275,     0,   218,   115,     0,     0,   182,   183,     0,
     -24,   -24,   235,   -24,   -24,   -24,   -24,   236,   188,   239,
       0,   237,   218,   303,   304,   305,   306,   307,   308,     0,
       0,     0,   218,     0,   211,   212,     0,     0,     0,     0,
       0,   276,     0,     0,   189,   240,   185,     0,     0,     0,
     186,     0,   259,     0,   218,   336,   337,   338,   339,   340,
     341,   217,     0,   239,     0,     0,   233,   234,   309,     0,
       0,     0,     0,   214,   218,     0,     0,   215,     0,   259,
     366,   367,   368,   369,   370,   371,     0,     0,     0,     0,
       0,   253,   254,   -20,   -20,   218,   -20,   -20,   -20,   -20,
     342,     0,   217,   189,   404,   236,     0,   -18,   -18,   237,
     -18,   -18,   -18,   -18,     0,     0,   189,   189,   240,   187,
       0,   217,     0,     0,     0,   372,     0,     0,   218,     0,
     256,   217,     0,     0,   257,   216,   218,   427,     0,     0,
       0,     0,     0,   188,   239,     0,     0,     0,     0,   218,
     189,   240,     0,   217,     0,   288,   289,   -60,   -60,   -60,
     -60,   218,     0,     0,     0,     0,     0,   216,   216,   240,
     450,     0,     0,   217,   -60,     0,     0,     0,     0,     0,
     290,   291,   240,   189,   240,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   217,   128,   187,   238,     0,   260,
     471,     0,   403,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   260,   189,   240,   188,   188,   239,     0,   189,
     240,     0,   -66,     0,     0,     0,     0,   217,     0,     0,
     258,   -66,   -66,    94,    95,   426,     0,     0,     0,   216,
       0,   238,   189,   240,     0,     0,     0,     0,   217,   188,
     239,   -63,   -63,   -63,   -63,   -63,   -63,   258,     0,     0,
     217,     0,     0,     0,     0,   189,   240,     0,   449,     0,
       0,     0,   -63,   -63,     0,     0,   -63,   -63,   388,   389,
     216,   239,   188,   239,     0,     0,   189,   240,     0,     0,
     217,   288,   289,   -61,   -61,   -61,   -61,     0,   470,   216,
       0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   216,
     -61,   259,   188,   239,     0,     0,   290,   291,   188,   239,
       0,   187,   238,   -66,     0,   -66,   -66,   -66,   358,   359,
       0,   216,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,   188,   239,   -67,   -67,   -67,   -67,   -67,   -67,   -84,
     -84,   216,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   188,   239,     0,   -67,   -67,   -67,
     325,   326,   216,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,   188,   239,     0,     0,   -84,
     -84,   -84,     0,   416,   187,   238,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   216,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,     0,   439,   187,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   288,
     289,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
     -47,     0,     0,     0,   -47,   -47,     0,   -47,   -62,   462,
     187,   238,   -47,     0,   290,   291,   -47,   -41,   216,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,   483,
     187,   238,     0,     0,     0,     0,   187,   238,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -41,     0,     0,     0,   -41,   -41,     0,   -41,   187,
     238,   -84,     0,   -41,   -84,   -84,   -84,   -41,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   187,   238,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   187,   238,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,   -39,     0,
       0,     0,   -39,   -39,     0,   -39,     0,     0,     0,     0,
     -39,     0,     0,     0,   -39,     0,     0,     0,     0,   -46,
       0,     0,     0,   -46,   -46,     0,   -46,     0,     0,     0,
       0,   -46,     0,     0,   -42,   -46,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,     0,     0,   -42,     0,
       0,     0,   -42,   -42,     0,   -42,     0,     0,     0,     0,
     -42,     0,     0,     0,   -42,     0,     0,   -21,     0,     0,
       0,   -21,   -27,     0,   -21,     0,     0,     0,     0,   -21,
       0,     0,   -19,   -21,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,     0,     0,   -19,     0,     0,     0,
     -19,   -25,     0,   -19,     0,     0,     0,     0,   -19,     0,
       0,     0,   -19,     0,     0,   -17,     0,     0,     0,   -17,
     -23,     0,   -17,     0,     0,     0,     0,   -17,     0,     0,
      25,   -17,     2,     3,     4,     5,    26,    27,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   175,   164,
       0,    39,     0,     0,     0,     0,    40,     0,     0,     0,
      41,     0,     0,   -50,     0,     0,     0,   -50,   -50,     0,
     -50,     0,     0,     0,     0,   -50,     0,     0,    25,   -50,
       2,     3,     4,     5,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    25,     0,     2,
       3,     4,     5,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,   175,   171,     0,    39,
       0,     0,     0,     0,    40,     0,     0,     0,    41,     0,
       0,    38,     0,     0,     0,   175,   172,     0,    39,     0,
       0,     0,     0,    40,     0,     0,   -49,    41,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
     -49,     0,     0,     0,   -49,   -49,     0,   -49,     0,     0,
       0,     0,   -49,     0,     0,     0,   -49,     0,     0,   -51,
       0,     0,     0,   -51,   -51,     0,   -51,     0,     0,     0,
       0,   -51,     0,     0,   -36,   -51,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,     0,
       0,     0,   -36,   268,     0,   -36,     0,     0,     0,     0,
     -36,     0,     0,     0,   -36,     0,     0,   -36,     0,     0,
       0,   -36,   300,     0,   -36,     0,     0,     0,     0,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -36,     0,     0,     0,
     -36,   396,     0,   -36,     0,     0,     0,     0,   -36,     0,
       0,     0,   -36,     0,     0,   -35,     0,     0,     0,   -35,
     -35,     0,   -35,     0,     0,     0,     0,   -35,     0,     0,
      25,   -35,     2,     3,     4,     5,    26,    27,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,    25,
       0,     2,     3,     4,     5,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   175,   488,
       0,    39,     0,     0,     0,     0,    40,     0,     0,     0,
      41,     0,     0,    38,     0,     0,     0,   175,   495,     0,
      39,     0,     0,     0,     0,    40,     0,     0,    25,    41,
       2,     3,     4,     5,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,   175,   514,     0,    39,
       0,     0,     0,     0,    40,     0,     0,     0,    41,     0,
       0,   -37,     0,     0,     0,   -37,   -37,     0,   -37,     0,
       0,     0,     0,   -37,     0,     0,     0,   -37,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   363,   364,     0,     0,     0,
     -75,   365,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,     0,     0,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,     0,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,     0,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,   394,     0,     0,   -75,   -75,   395,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,   -80,     0,     0,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -90,   -90,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,     0,     0,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,     0,     0,     0,     0,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,   -86,   -86,     0,     0,     0,     0,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,     0,     0,     0,
       0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,     0,
       0,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,     0,     0,     0,     0,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,    99,   100,     0,     0,     0,     0,   101,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,     0,     0,     0,     0,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,   -90,     0,     0,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,     0,
       0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,     0,     0,     0,     0,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,     0,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,     0,     0,     0,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,     0,     0,
       0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,     0,     0,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,     0,     0,     0,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,     0,     0,     0,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,   298,   -75,     0,     0,
       0,   299,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
       0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   330,   331,     0,     0,     0,     0,   332,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -80,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,   -75,   447,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   467,     0,     0,   -75,   -75,   468,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -90,   -90,   -90,     0,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
       0,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,     0,     0,     0,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,     0,     0,
       0,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -90,     0,     0,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,     0,   225,     0,
       0,     0,     0,   226,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -84,     0,
     -84,     0,     0,     0,     0,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -85,     0,   -85,     0,     0,     0,     0,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,   -86,     0,     0,     0,     0,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,     0,   -87,     0,     0,     0,
       0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -88,     0,   -88,     0,
       0,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,     0,
     -89,     0,     0,     0,     0,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,   -80,     0,     0,     0,     0,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   -84,     0,     0,     0,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,     0,     0,
       0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -86,   -86,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,     0,     0,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,     0,     0,     0,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -89,   -89,     0,     0,     0,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   -75,     0,     0,
       0,   401,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
       0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   423,     0,     0,     0,     0,   424,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,   -82,     0,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -90,     0,   -90,     0,
       0,     0,     0,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,     0,     0,     0,     0,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,     0,   -83,     0,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,     0,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
       0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,     0,     0,     0,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -68,     0,   -68,   -68,   -68,   -68,   -68,   360,
     361,   362,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -68,   -68,     0,     0,   -68,   -68,
     -68,   -68,   390,   391,   392,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   360,   361,   362,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   360,   361,   362,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,
     390,   391,   392,   -70,   -70,     0,     0,   -70,   -70,   -70,
     -70,   390,   391,   392,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -72,   -72,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   -74,   -74,
     -68,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -68,
     -68,   -68,   -68,    96,    97,    98,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -71,     0,     0,     0,     0,     0,     0,   -78,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,   -79,     0,     0,     0,     0,     0,     0,   -77,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,   -69,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,
      96,    97,    98,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -70,
       0,     0,     0,     0,     0,     0,   -72,     0,   -70,   -70,
     -70,   -70,    96,    97,    98,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -73,     0,
       0,     0,     0,     0,     0,   -74,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     294,   295,   296,   -71,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -77,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -76,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -69,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   294,   295,   296,   -70,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   294,   295,
     296,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -72,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -73,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -69,   -69,
     -69,   -69,   -69,   327,   328,   329,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -70,   -70,   -70,   -70,   -70,   327,   328,   329,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -67,     0,   -67,   -67,
     -67,   358,   359,   -64,     0,   -64,   -64,   -64,   358,   359,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -65,     0,   -65,   -65,   -65,   358,   359,   -66,
     -66,     0,     0,   -66,   -66,   388,   389,   -67,   -67,     0,
       0,   -67,   -67,   388,   389,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -64,   -64,     0,     0,
     -64,   -64,   388,   389,   -65,   -65,   -67,     0,   -65,   -65,
     388,   389,     0,     0,     0,   -67,   -67,    94,    95,   -64,
     -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -64,     0,     0,     0,     0,
       0,   -65,     0,     0,   -64,   -64,    94,    95,     0,     0,
     -65,   -65,    94,    95,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -63,     0,     0,     0,     0,     0,   -63,
     -63,   292,   293,   -66,     0,     0,     0,     0,     0,   -66,
     -66,   292,   293,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,   -67,     0,     0,     0,     0,     0,   -67,   -67,
     292,   293,   -64,     0,     0,     0,     0,     0,   -64,   -64,
     292,   293,   -65,   -65,   -65,   -65,   -65,   -65,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,     0,     0,     0,     0,     0,   -65,   -65,   292,
     293,     0,   -64,   -64,   -64,   325,   326,     0,   -65,   -65,
     -65,   325,   326,   321,   322,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -62,   323,   324
};

static const yytype_int16 yycheck[] =
{
      20,   226,    22,    23,     0,   175,     0,     8,     1,     7,
       7,     7,    33,    34,    45,    35,    33,    33,    34,    39,
      33,   136,     7,    51,    44,    53,   196,    33,    24,    44,
      51,     1,    53,     7,   149,    51,    53,    53,   153,    45,
      53,    34,     7,     8,     9,    10,    11,    12,    49,     7,
       7,    71,    72,    18,    19,     1,    53,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   299,    45,    46,    47,    33,    34,
     100,   101,    52,    48,    33,    34,     1,    52,     3,     4,
       5,     6,    57,    33,    34,    45,    61,   267,    53,    45,
      45,    50,    51,    49,    50,    52,    52,   332,    33,    33,
      34,    57,   108,    53,   134,    61,   136,    31,    32,    33,
      34,    52,    33,   143,    48,   145,    51,    49,    53,   149,
      51,   151,    53,   153,    45,    33,   151,    51,    53,    53,
     365,   161,   162,    50,    51,   165,    33,   162,   141,   142,
     165,    33,    50,    51,   269,    29,    30,    31,    32,    33,
      34,    48,   182,   183,   184,   185,   186,    33,    34,    51,
     395,    53,    33,    33,   167,     0,   401,    51,    45,    53,
      54,    55,     7,   203,    50,    51,   301,    45,    48,    50,
      51,   211,   212,   213,   214,   215,    45,    50,    51,   424,
      49,    31,    32,    33,    34,   225,   226,     7,     8,     9,
      10,    11,    12,   233,   234,   235,   236,   237,    18,    19,
       7,    51,   447,    53,    45,    29,    30,    31,    32,    33,
      34,    50,    51,   253,   254,   255,   256,   257,    31,    32,
      33,    34,    51,   468,    53,    45,    50,    51,    45,   269,
      54,    55,    52,    45,    46,    47,   276,    57,    46,    48,
      53,    61,    53,    49,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
       7,   301,   397,    15,    33,    34,    51,    45,    53,   309,
      29,    30,    31,    32,    33,    34,    45,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    53,    53,    54,    55,    56,    57,    58,
      59,    60,   342,    29,    30,    31,    32,    33,    34,    45,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    49,    53,    54,    55,
      56,    57,   372,    49,    31,    32,    33,    34,    53,    53,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,    53,   397,   398,    52,
     400,   401,    20,   398,    22,    23,    48,     7,     8,     9,
      10,    11,    12,     3,     4,     5,     6,    35,    18,    19,
     420,    39,    45,   423,   424,   420,    44,     7,     8,     9,
      10,    11,    12,    50,    31,    32,    33,    34,    18,    19,
      29,    30,    31,    32,    33,    34,   446,   447,    33,    34,
      50,    48,    52,    71,    72,    48,    50,    57,    33,    34,
      15,    61,    51,    48,    53,    54,    55,   467,   468,    51,
      45,    53,    52,    53,    47,    49,    53,    57,    51,    49,
      53,    61,   100,   101,    50,     0,     1,   487,     3,     4,
       5,     6,   487,    51,    51,    53,    53,     1,    45,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   134,    45,   136,    31,
      32,    33,    34,    45,    51,   143,    53,   145,    51,    53,
      53,   149,    51,   151,    53,   153,    53,    53,    50,    51,
      51,    45,    53,   161,   162,    49,    50,   165,    52,    51,
      51,    53,    53,    57,    51,    48,    53,    61,    29,    30,
      31,    32,    33,    34,   182,   183,   184,   185,   186,    31,
      32,    33,    34,    53,    45,     7,     8,     9,    10,    11,
      12,    53,    48,    54,    55,   203,    18,    19,    50,    51,
      51,    48,    53,   211,   212,   213,   214,   215,     7,     8,
       9,    10,    11,    12,    51,    53,    53,   225,   226,    18,
      19,    31,    32,    33,    34,   233,   234,   235,   236,   237,
      52,    53,    53,    53,    48,    57,    53,    48,    48,    61,
      48,    31,    32,    33,    34,   253,   254,   255,   256,   257,
      15,    48,    48,    52,    53,    45,    48,     7,    57,   108,
      -1,   269,    61,    -1,    -1,    -1,    -1,    -1,   276,    -1,
      29,    30,    31,    32,    33,    34,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,    51,   301,    53,    54,    55,    56,    57,    -1,
      -1,   309,    29,    30,    31,    32,    33,    34,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,   342,    29,    30,    31,    32,    33,
      34,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    -1,    53,
      54,    55,    56,    57,   372,     0,     1,    -1,     3,     4,
       5,     6,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,    -1,   397,
     398,    -1,   400,   401,    22,    23,    -1,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    35,    18,    19,
      -1,    39,   420,    -1,    -1,   423,   424,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,   446,   447,
      -1,    -1,    52,    71,    72,    -1,    -1,    57,    -1,    -1,
      -1,    61,    -1,    -1,    31,    32,    33,    34,    -1,   467,
     468,    -1,    45,    -1,    -1,    -1,    49,    50,    45,    52,
      -1,    -1,   100,   101,    57,    -1,    -1,    -1,    61,   487,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      29,    30,    31,    32,    33,    34,   134,     0,     1,    -1,
       3,     4,     5,     6,    -1,   143,    -1,   145,    -1,    -1,
      -1,    50,    51,    -1,    45,    54,    55,    -1,    49,    50,
      -1,    52,    -1,   161,    -1,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,   184,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,   203,    -1,    18,    19,    29,
      30,    31,    32,    33,    34,   213,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    45,    -1,   225,   226,    57,
      -1,    23,    -1,    61,    54,    55,    -1,   235,    -1,    -1,
      -1,    52,    53,    -1,    36,    37,    57,    39,    40,    41,
      61,     1,    -1,     3,     4,     5,     6,   255,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,   276,    71,
      72,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
     298,   299,    -1,    45,    96,    97,    98,    49,   100,   101,
      52,   309,    -1,    -1,    -1,    57,    -1,     0,     1,    61,
       3,     4,     5,     6,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,   331,   332,    -1,    -1,    57,    -1,    -1,
      -1,    61,   134,    -1,   342,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    -1,   364,   365,    -1,   161,
      18,    19,    -1,    -1,   372,    29,    30,    31,    32,    33,
      34,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
     182,   183,   184,   185,   186,    -1,   394,   395,    45,    53,
      54,    55,   400,   401,    52,    53,    -1,    54,    55,    57,
      -1,   203,    -1,    61,    -1,    -1,    -1,    -1,    -1,   211,
     212,   213,   214,   215,    -1,   423,   424,     7,     8,     9,
      10,    11,    12,   225,   226,    -1,    -1,    -1,    18,    19,
      -1,   233,   234,   235,   236,   237,    -1,    -1,   446,   447,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,   253,   254,   255,   256,   257,    -1,    -1,    -1,   467,
     468,    -1,    52,    53,    -1,    -1,    51,    57,    53,    54,
      55,    61,    -1,    -1,   276,    29,    30,    31,    32,    33,
      34,    -1,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,   309,    29,    30,
      31,    32,    33,    34,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
     342,     0,     1,    -1,     3,     4,     5,     6,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,     7,     8,     9,    10,    11,    12,
     372,    -1,    -1,    -1,    -1,    18,    19,    -1,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,    -1,    -1,    -1,    -1,   400,   401,
      23,     7,     8,     9,    10,    11,    12,    -1,    -1,    52,
      53,    -1,    18,    19,    57,    -1,    39,    -1,    61,    -1,
      -1,   423,   424,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,   446,   447,    52,    53,    71,    72,
      -1,    57,    -1,     0,     1,    61,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,   467,   468,    -1,    -1,    45,
      -1,    94,    95,    49,    50,    -1,    52,   100,   101,    -1,
      -1,    57,    -1,    -1,     1,    61,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    29,    30,    31,    32,    33,    34,
      -1,   134,     0,     1,    -1,     3,     4,     5,     6,    -1,
     143,    -1,   145,    -1,    -1,    50,    51,    -1,    45,    54,
      55,    -1,    49,    50,    -1,    52,    -1,    -1,   161,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   184,    15,    16,    17,    18,    19,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     203,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
     213,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,   225,   226,    57,    -1,    -1,    -1,    61,    -1,
      -1,    45,   235,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,     0,     1,    61,     3,     4,
       5,     6,   255,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    18,    19,     0,     1,    -1,     3,
       4,     5,     6,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,    -1,    23,   297,   298,   299,    23,    52,    53,
      -1,    -1,    -1,    57,    -1,    -1,   309,    61,    -1,    39,
      -1,    -1,    -1,    39,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,    -1,    -1,    -1,   330,   331,   332,
       0,     1,    -1,     3,     4,     5,     6,    -1,    -1,   342,
      -1,    71,    72,    -1,    -1,    71,    72,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,    -1,    88,    89,
     363,   364,   365,    -1,    90,    91,    92,    93,    -1,   372,
     100,   101,    -1,    -1,   100,   101,    -1,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,    -1,    -1,    -1,
     393,   394,   395,    -1,    -1,    -1,    -1,   400,   401,    -1,
      -1,    -1,    -1,    -1,   134,    -1,     0,     1,   134,     3,
       4,     5,     6,   143,    -1,   145,    -1,   143,    -1,   145,
     423,   424,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,   161,    -1,    18,    19,   161,     7,     8,     9,    10,
      11,    12,    -1,   446,   447,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,   184,    -1,     0,     1,   184,     3,
       4,     5,     6,    -1,   467,   468,    -1,    52,    53,    -1,
      -1,    -1,    57,   203,    -1,    -1,    61,   203,    -1,    -1,
      -1,    52,    -1,   213,    -1,    -1,    57,   213,     0,     1,
      61,     3,     4,     5,     6,   225,   226,    -1,    -1,   225,
     226,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   235,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    29,
      30,    31,    32,    33,    34,   255,    -1,    45,    -1,   255,
       7,     8,     9,    10,    11,    12,    54,    55,    56,    57,
      -1,    18,    19,    53,    54,    55,   276,    -1,    -1,    -1,
     276,    -1,    -1,    -1,   284,   285,   286,   287,   284,   285,
     286,   287,   288,   289,   290,   291,    -1,   297,   298,   299,
      -1,   297,   298,   299,    -1,    52,    -1,    -1,    -1,   309,
      57,    -1,    -1,   309,    61,    -1,    -1,   317,   318,   319,
     320,   317,   318,   319,   320,   321,   322,   323,   324,    -1,
     330,   331,   332,    -1,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    -1,   342,    -1,    -1,    -1,
     350,   351,   352,   353,   350,   351,   352,   353,   354,   355,
     356,   357,    23,   363,   364,   365,    -1,   363,   364,   365,
      -1,    -1,   372,    -1,    -1,    -1,   372,    -1,    39,    -1,
     380,   381,   382,   383,   380,   381,   382,   383,   384,   385,
     386,   387,    -1,   393,   394,   395,    -1,   393,   394,   395,
     400,   401,    -1,    -1,   400,   401,    -1,    -1,    -1,    -1,
      71,    72,     0,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,   423,   424,    -1,    87,   423,   424,    -1,
      -1,     7,     8,     9,    10,    11,    12,    -1,    -1,   100,
     101,    -1,    18,    19,    -1,    -1,   446,   447,    -1,    -1,
     446,   447,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    23,    -1,    18,    19,    -1,    -1,   467,   468,    -1,
      -1,   467,   468,   134,    -1,    -1,    52,    39,    -1,    -1,
      -1,    57,   143,    -1,   145,    61,    -1,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    52,    18,    19,
     161,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    -1,   184,    86,    -1,    -1,    18,    19,    -1,
       0,     1,    52,     3,     4,     5,     6,    57,   100,   101,
      -1,    61,   203,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,   213,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,   225,   226,    57,    -1,    -1,    -1,
      61,    -1,   134,    -1,   235,     7,     8,     9,    10,    11,
      12,   143,    -1,   145,    -1,    -1,    18,    19,    52,    -1,
      -1,    -1,    -1,    57,   255,    -1,    -1,    61,    -1,   161,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    18,    19,     0,     1,   276,     3,     4,     5,     6,
      52,    -1,   184,   284,   285,    57,    -1,     0,     1,    61,
       3,     4,     5,     6,    -1,    -1,   297,   298,   299,    23,
      -1,   203,    -1,    -1,    -1,    52,    -1,    -1,   309,    -1,
      57,   213,    -1,    -1,    61,    39,   317,   318,    -1,    -1,
      -1,    -1,    -1,   225,   226,    -1,    -1,    -1,    -1,   330,
     331,   332,    -1,   235,    -1,    29,    30,    31,    32,    33,
      34,   342,    -1,    -1,    -1,    -1,    -1,    71,    72,   350,
     351,    -1,    -1,   255,    48,    -1,    -1,    -1,    -1,    -1,
      54,    55,   363,   364,   365,    -1,    -1,    -1,    -1,    -1,
      -1,   372,    -1,    -1,   276,    99,   100,   101,    -1,   380,
     381,    -1,   284,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,   393,   394,   395,   297,   298,   299,    -1,   400,
     401,    -1,    45,    -1,    -1,    -1,    -1,   309,    -1,    -1,
     134,    54,    55,    56,    57,   317,    -1,    -1,    -1,   143,
      -1,   145,   423,   424,    -1,    -1,    -1,    -1,   330,   331,
     332,    29,    30,    31,    32,    33,    34,   161,    -1,    -1,
     342,    -1,    -1,    -1,    -1,   446,   447,    -1,   350,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    55,    56,    57,
     184,   363,   364,   365,    -1,    -1,   467,   468,    -1,    -1,
     372,    29,    30,    31,    32,    33,    34,    -1,   380,   203,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,   213,
      48,   393,   394,   395,    -1,    -1,    54,    55,   400,   401,
      -1,   225,   226,    51,    -1,    53,    54,    55,    56,    57,
      -1,   235,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,   423,   424,    29,    30,    31,    32,    33,    34,    46,
      47,   255,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   446,   447,    -1,    53,    54,    55,
      56,    57,   276,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,   467,   468,    -1,    -1,    45,
      46,    47,    -1,   297,   298,   299,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,   309,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,   330,   331,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    -1,    52,    48,   363,
     364,   365,    57,    -1,    54,    55,    61,     1,   372,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,   393,
     394,   395,    -1,    -1,    -1,    -1,   400,   401,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,   423,
     424,    47,    -1,    57,    50,    51,    52,    61,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   446,   447,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,   467,   468,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,     1,    61,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,     1,    61,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
       1,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,     1,    61,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,     1,    61,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,     1,    61,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,     1,    61,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
       1,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,     1,    61,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    50,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    50,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    50,    51,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    50,    51,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    50,    51,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    29,    30,    31,
      32,    33,    34,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      45,    -1,    54,    55,    56,    57,    58,    59,    60,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    54,    55,    56,    57,    58,    59,    60,    54,    55,
      56,    57,    58,    59,    60,    29,    30,    31,    32,    33,
      34,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      54,    55,    56,    57,    58,    59,    60,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    54,
      55,    56,    57,    58,    59,    60,    54,    55,    56,    57,
      58,    59,    60,    29,    30,    31,    32,    33,    34,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    54,    55,
      56,    57,    58,    59,    60,    54,    55,    56,    57,    58,
      59,    60,    29,    30,    31,    32,    33,    34,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    54,    55,    56,
      57,    58,    59,    60,    54,    55,    56,    57,    58,    59,
      60,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    48,    -1,    -1,    -1,    -1,    -1,    54,
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
      33,    34,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    53,    54,
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
      33,    34,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    30,    31,    32,
      33,    34,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    53,    54,
      55,    56,    57,    58,    59,    60,    53,    54,    55,    56,
      57,    58,    59,    60,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    29,    30,    31,    32,    33,    34,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    51,    -1,    53,    54,
      55,    56,    57,    51,    -1,    53,    54,    55,    56,    57,
      29,    30,    31,    32,    33,    34,    -1,    -1,    29,    30,
      31,    32,    33,    34,    -1,    -1,    29,    30,    31,    32,
      33,    34,    51,    -1,    53,    54,    55,    56,    57,    50,
      51,    -1,    -1,    54,    55,    56,    57,    50,    51,    -1,
      -1,    54,    55,    56,    57,    29,    30,    31,    32,    33,
      34,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      29,    30,    31,    32,    33,    34,    50,    51,    -1,    -1,
      54,    55,    56,    57,    50,    51,    45,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    54,    55,    56,    57,    29,
      30,    31,    32,    33,    34,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      54,    55,    56,    57,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    29,    30,    31,    32,    33,    34,    29,    30,
      31,    32,    33,    34,    29,    30,    31,    32,    33,    34,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    53,    54,    55,    56,    57,    -1,    53,    54,
      55,    56,    57,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    63,    64,    65,    66,
      68,    95,    45,    49,    77,     0,    65,    45,     7,    50,
      78,     1,    46,    47,    52,     1,     7,     8,     9,    10,
      11,    12,    13,    15,    16,    17,    18,    19,    45,    52,
      57,    61,    66,    77,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    95,
      45,    84,    48,    84,     1,     3,    53,    75,    76,    95,
      45,    52,    52,    77,    84,    91,    92,    91,    84,    91,
      91,    45,    50,    80,    45,    45,    33,    34,    31,    32,
      29,    30,    54,    55,    56,    57,    58,    59,    60,    46,
      47,    52,     7,    46,    48,    53,    53,    49,    51,    53,
       7,    84,    84,    15,    53,    86,    87,    88,    88,    89,
      89,    89,    89,    90,    90,    91,    91,    91,    85,    84,
      53,    84,    94,     8,    49,    49,    71,    74,    76,    49,
      47,    53,    53,    52,    48,    51,    53,    67,    84,    70,
      73,    79,    50,    69,    72,    48,    77,    77,    84,    84,
      50,    51,    79,    50,    50,    79,    50,    14,    53,    50,
      84,    50,    50,    77,    45,    49,     7,     8,     9,    10,
      11,    12,    18,    19,    52,    57,    61,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    49,     7,     8,     9,
      10,    11,    12,    52,    93,     7,     8,     9,    10,    11,
      12,    18,    19,    52,    57,    61,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    47,    52,     7,     8,     9,
      10,    11,    12,    18,    19,    52,    57,    61,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     7,     8,     9,
      10,    11,    12,    18,    19,    52,    57,    61,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    49,    50,    78,
       7,     8,     9,    10,    11,    12,    52,    91,    92,    93,
      91,    84,    91,    91,    33,    34,    31,    32,    29,    30,
      54,    55,    56,    57,    58,    59,    60,    46,    47,    52,
      50,    78,    84,     7,     8,     9,    10,    11,    12,    52,
      91,    92,    93,    91,    84,    91,    91,    33,    34,    31,
      32,    29,    30,    54,    55,    56,    57,    58,    59,    60,
      46,    47,    52,    84,    53,    94,     7,     8,     9,    10,
      11,    12,    52,    91,    92,    93,    91,    84,    91,    91,
      33,    34,    31,    32,    29,    30,    54,    55,    56,    57,
      58,    59,    60,    46,    47,    52,     7,     8,     9,    10,
      11,    12,    52,    91,    92,    93,    91,    84,    91,    91,
      33,    34,    31,    32,    29,    30,    54,    55,    56,    57,
      58,    59,    60,    46,    47,    52,    50,    78,    79,    84,
      47,    52,    53,    86,    87,    88,    88,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    85,    84,    53,    94,
      79,    53,    84,    47,    52,    53,    86,    87,    88,    88,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    85,
      84,    53,    94,    48,    53,    84,    47,    52,    53,    86,
      87,    88,    88,    89,    89,    89,    89,    90,    90,    91,
      91,    91,    85,    84,    53,    94,    84,    47,    52,    53,
      86,    87,    88,    88,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    85,    84,    53,    94,    79,    50,    53,
      84,    53,    94,    48,    53,    50,    53,    84,    53,    94,
      48,    53,    53,    84,    53,    94,    48,    53,    53,    84,
      53,    94,    48,    53,    50,    48,    53,    48,    53,    48,
      53,    48,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    67,    69,    68,    70,
      68,    71,    68,    72,    68,    73,    68,    74,    68,    68,
      68,    75,    75,    76,    76,    77,    78,    77,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     2,     2,
       4,     5,     8,     9,     6,     1,     3,     0,     9,     0,
       9,     0,     8,     0,     8,     0,     8,     0,     7,     5,
       4,     1,     3,     2,     4,     2,     0,     4,     1,     2,
       1,     2,     2,     1,     1,     1,     2,     2,     5,     7,
       5,     7,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
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
#line 96 "language.y"
    { root = (yyvsp[0].node); }
#line 3101 "src/parser.c"
    break;

  case 3:
#line 100 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3107 "src/parser.c"
    break;

  case 4:
#line 101 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3113 "src/parser.c"
    break;

  case 5:
#line 105 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3119 "src/parser.c"
    break;

  case 6:
#line 106 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3125 "src/parser.c"
    break;

  case 7:
#line 107 "language.y"
    { (yyval.node) = NULL; }
#line 3131 "src/parser.c"
    break;

  case 8:
#line 108 "language.y"
    { (yyval.node) = NULL; }
#line 3137 "src/parser.c"
    break;

  case 9:
#line 112 "language.y"
    { add_symbol_var((yyvsp[-1].ival), (yyvsp[0].sval)); (yyval.node) = NULL; }
#line 3143 "src/parser.c"
    break;

  case 10:
#line 113 "language.y"
    { add_symbol_var((yyvsp[-3].ival), (yyvsp[-2].sval)); (yyval.node) = NULL; }
#line 3149 "src/parser.c"
    break;

  case 11:
#line 114 "language.y"
    { add_symbol_arr((yyvsp[-4].ival), (yyvsp[-3].sval)); (yyval.node) = NULL; }
#line 3155 "src/parser.c"
    break;

  case 12:
#line 115 "language.y"
    { add_symbol_arr((yyvsp[-7].ival), (yyvsp[-6].sval)); (yyval.node) = NULL; }
#line 3161 "src/parser.c"
    break;

  case 13:
#line 116 "language.y"
    { add_symbol_arr((yyvsp[-8].ival), (yyvsp[-7].sval)); (yyval.node) = NULL; }
#line 3167 "src/parser.c"
    break;

  case 14:
#line 117 "language.y"
    { add_symbol_arr((yyvsp[-5].ival), (yyvsp[-4].sval)); (yyval.node) = NULL; }
#line 3173 "src/parser.c"
    break;

  case 15:
#line 121 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3179 "src/parser.c"
    break;

  case 16:
#line 122 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3185 "src/parser.c"
    break;

  case 17:
#line 126 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3191 "src/parser.c"
    break;

  case 18:
#line 126 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3197 "src/parser.c"
    break;

  case 19:
#line 127 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3203 "src/parser.c"
    break;

  case 20:
#line 127 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3209 "src/parser.c"
    break;

  case 21:
#line 128 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3215 "src/parser.c"
    break;

  case 22:
#line 128 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3221 "src/parser.c"
    break;

  case 23:
#line 129 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), (yyvsp[-2].al));   }
#line 3227 "src/parser.c"
    break;

  case 24:
#line 129 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3233 "src/parser.c"
    break;

  case 25:
#line 130 "language.y"
    { begin_fun((yyvsp[-5].ival), (yyvsp[-4].sval), NULL); }
#line 3239 "src/parser.c"
    break;

  case 26:
#line 130 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3245 "src/parser.c"
    break;

  case 27:
#line 131 "language.y"
    { begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3251 "src/parser.c"
    break;

  case 28:
#line 131 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION, "function-body" , NULL, ENDARG)); assign((yyval.node)); finish(); finish(); }
#line 3257 "src/parser.c"
    break;

  case 29:
#line 132 "language.y"
    { (yyval.node) = NULL; }
#line 3263 "src/parser.c"
    break;

  case 30:
#line 133 "language.y"
    { (yyval.node) = NULL; }
#line 3269 "src/parser.c"
    break;

  case 31:
#line 137 "language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3275 "src/parser.c"
    break;

  case 32:
#line 138 "language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3281 "src/parser.c"
    break;

  case 33:
#line 142 "language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); }
#line 3287 "src/parser.c"
    break;

  case 34:
#line 143 "language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); }
#line 3293 "src/parser.c"
    break;

  case 35:
#line 147 "language.y"
    { (yyval.node) = NULL; }
#line 3299 "src/parser.c"
    break;

  case 36:
#line 148 "language.y"
    { begin(NULL); }
#line 3305 "src/parser.c"
    break;

  case 37:
#line 148 "language.y"
    { finish(); (yyval.node) = (yyvsp[-1].node); }
#line 3311 "src/parser.c"
    break;

  case 38:
#line 152 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3317 "src/parser.c"
    break;

  case 39:
#line 153 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3323 "src/parser.c"
    break;

  case 40:
#line 157 "language.y"
    { (yyval.node) = NULL; }
#line 3329 "src/parser.c"
    break;

  case 41:
#line 158 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3335 "src/parser.c"
    break;

  case 42:
#line 159 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3341 "src/parser.c"
    break;

  case 43:
#line 160 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3347 "src/parser.c"
    break;

  case 44:
#line 161 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3353 "src/parser.c"
    break;

  case 45:
#line 162 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3359 "src/parser.c"
    break;

  case 46:
#line 163 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3365 "src/parser.c"
    break;

  case 47:
#line 164 "language.y"
    { (yyval.node) = NULL; }
#line 3371 "src/parser.c"
    break;

  case 48:
#line 168 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IF  , "if-statement"      , (yyvsp[-2].node), (yyvsp[0].node),     ENDARG)); assign((yyval.node)); }
#line 3377 "src/parser.c"
    break;

  case 49:
#line 169 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ELSE, "if-else-statement" , (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3383 "src/parser.c"
    break;

  case 50:
#line 173 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(WHILE, "while-statement" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3389 "src/parser.c"
    break;

  case 51:
#line 174 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(DO   , "do-statement"    , (yyvsp[-5].node), (yyvsp[-2].node), ENDARG)); assign((yyval.node)); }
#line 3395 "src/parser.c"
    break;

  case 52:
#line 178 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement",     ENDARG)); assign((yyval.node)); }
#line 3401 "src/parser.c"
    break;

  case 53:
#line 179 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3407 "src/parser.c"
    break;

  case 54:
#line 183 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3413 "src/parser.c"
    break;

  case 55:
#line 184 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3419 "src/parser.c"
    break;

  case 56:
#line 188 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3425 "src/parser.c"
    break;

  case 57:
#line 189 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3431 "src/parser.c"
    break;

  case 58:
#line 193 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3437 "src/parser.c"
    break;

  case 59:
#line 194 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3443 "src/parser.c"
    break;

  case 60:
#line 198 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3449 "src/parser.c"
    break;

  case 61:
#line 199 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3455 "src/parser.c"
    break;

  case 62:
#line 200 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3461 "src/parser.c"
    break;

  case 63:
#line 204 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3467 "src/parser.c"
    break;

  case 64:
#line 205 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3473 "src/parser.c"
    break;

  case 65:
#line 206 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3479 "src/parser.c"
    break;

  case 66:
#line 207 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3485 "src/parser.c"
    break;

  case 67:
#line 208 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3491 "src/parser.c"
    break;

  case 68:
#line 212 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3497 "src/parser.c"
    break;

  case 69:
#line 213 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3503 "src/parser.c"
    break;

  case 70:
#line 214 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3509 "src/parser.c"
    break;

  case 71:
#line 218 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3515 "src/parser.c"
    break;

  case 72:
#line 219 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3521 "src/parser.c"
    break;

  case 73:
#line 220 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3527 "src/parser.c"
    break;

  case 74:
#line 221 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3533 "src/parser.c"
    break;

  case 75:
#line 225 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3539 "src/parser.c"
    break;

  case 76:
#line 226 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3545 "src/parser.c"
    break;

  case 77:
#line 227 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3551 "src/parser.c"
    break;

  case 78:
#line 228 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_INC, "++", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3557 "src/parser.c"
    break;

  case 79:
#line 229 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3563 "src/parser.c"
    break;

  case 80:
#line 233 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3569 "src/parser.c"
    break;

  case 81:
#line 234 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign((yyval.node)); }
#line 3575 "src/parser.c"
    break;

  case 82:
#line 235 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-2].node),     ENDARG)); assign((yyval.node)); }
#line 3581 "src/parser.c"
    break;

  case 83:
#line 236 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(FUNCTION_CALL, "function-call", (yyvsp[-3].node), (yyvsp[-1].node), ENDARG)); assign((yyval.node)); }
#line 3587 "src/parser.c"
    break;

  case 84:
#line 240 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3593 "src/parser.c"
    break;

  case 85:
#line 241 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3599 "src/parser.c"
    break;

  case 86:
#line 242 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3605 "src/parser.c"
    break;

  case 87:
#line 243 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3611 "src/parser.c"
    break;

  case 88:
#line 244 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3617 "src/parser.c"
    break;

  case 89:
#line 245 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG)); assign((yyval.node)); free((void*) (yyvsp[0].sval)); }
#line 3623 "src/parser.c"
    break;

  case 90:
#line 246 "language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3629 "src/parser.c"
    break;

  case 91:
#line 250 "language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3635 "src/parser.c"
    break;

  case 92:
#line 251 "language.y"
    { (yyval.node) = nl_push(node_list, node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG)); assign((yyval.node)); }
#line 3641 "src/parser.c"
    break;

  case 93:
#line 255 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3647 "src/parser.c"
    break;

  case 94:
#line 256 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3653 "src/parser.c"
    break;

  case 95:
#line 257 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3659 "src/parser.c"
    break;

  case 96:
#line 258 "language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3665 "src/parser.c"
    break;


#line 3669 "src/parser.c"

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
#line 261 "language.y"

void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}


#include "actions.c"
