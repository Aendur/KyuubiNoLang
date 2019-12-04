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
#include <string.h>

int yylex (void);
void free_label(const char * str);
extern Node * root;

#line 109 "src/parser.c"


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
#define YYLAST   6442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  435

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
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
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
       0,   109,   109,   110,   114,   115,   116,   121,   122,   123,
     132,   141,   156,   157,   161,   162,   163,   167,   168,   172,
     173,   177,   178,   178,   182,   183,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   199,   202,   206,   206,   210,
     210,   211,   215,   215,   215,   216,   216,   220,   221,   225,
     226,   230,   231,   235,   236,   240,   241,   242,   246,   247,
     248,   249,   250,   254,   255,   256,   260,   261,   262,   263,
     267,   268,   269,   270,   271,   272,   276,   277,   278,   279,
     283,   284,   285,   286,   287,   288,   289,   293,   294,   298,
     299,   300,   301
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
  "ARR_DECL", "ARR_INIT", "GENERIC_NODE", "';'", "'='", "'['", "']'",
  "','", "'{'", "'}'", "'('", "')'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "$accept", "declaration_list", "declaration",
  "init_declarator", "var_declarator", "arr_declarator",
  "function_definition", "function_declarator", "argument_list",
  "argument", "compound_statement", "$@1", "statement_list", "statement",
  "inline_asm", "conditional_statement", "if_statement", "$@2",
  "else_statement", "$@3", "iteration_statement", "$@4", "$@5", "$@6",
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
     305,   306,   307,   308,   309,   310,    59,    61,    91,    93,
      44,   123,   125,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -237

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-237)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     440,   -32,    29,    50,   138,   203,   449,   496,    58,   531,
      99,   205,   582,  -237,   679,   758,  1624,    34,   165,  3239,
     126,   403,  3626,  3633,  3649,   166,   178,   198,    70,   226,
    1328,  1328,  1948,  2027,   834,  1414,  1328,  1328,  1328,   183,
     280,   239,  2058,  2128,  2159,   213,  2229,   395,  2260,   245,
     262,   176,    90,   212,   954,     6,  2290,  2391,  3685,  3701,
     316,   608,  2330,  1550,   106,  1414,   265,   293,   317,   377,
    2492,  2593,  2694,  2361,  3169,   329,  2795,  2896,  2997,  2431,
    1711,   387,  1074,  2462,  2532,   341,  2563,  2633,  2664,  1328,
    1328,  1328,  1328,  1328,  1328,  1328,  1328,  1328,  1328,  1328,
    1328,  1328,  1328,    46,   339,     2,   111,   151,   407,   360,
    3708,   160,   206,   353,  1414,   412,   356,  2734,  3758,   376,
     386,   405,   157,   335,  1216,  1365,   134,   454,  1145,  1488,
    3098,  4963,  5013,  5020,  5036,   216,   389,   419,   430,   535,
     431,    65,  3765,  1726,  3781,   434,   439,   448,   460,  2765,
    2835,   466,   207,   465,   230,   472,   483,  1414,   263,   733,
     405,   484,  2866,   493,  2936,   275,  5043,  5093,  5100,  5116,
    5123,  1414,  5173,  1790,  3817,  3832,  3848,  3898,  3913,  1860,
    1860,  1414,  1860,  1860,  1860,    13,   -14,    21,   358,   940,
    5181,  5189,  3929,  3979,  3254,  3994,  4010,  4060,  4075,  4125,
    1985,  1985,  1414,  1985,  1985,  1985,    48,    71,    -2,  2057,
    6231,  5203,  5253,  4140,  4190,  3189,   490,  3304,  3319,  3335,
    3385,  2142,  2142,  1414,  2142,  2142,  2142,    -4,   112,    -9,
     641,   751,  4202,  4214,  3400,  3416,  2967,  3037,  1550,   426,
     487,  1550,   609,  3466,  5261,  5269,  5277,  5286,  5336,  1414,
    5344,  5352,  5360,  5368,   488,  5418,  5426,  5434,  1860,  1860,
    1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,  1860,
    1860,  1860,  1550,   718,  3480,  5447,  5497,  5510,  5523,  5573,
    1414,  5586,  5599,  5649,  5662,   514,  5675,  5725,  5738,  1985,
    1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,  1985,
    1985,  1985,  1985,  1550,   866,  1263,  4264,  4276,  4288,  4338,
    4350,  1414,  4362,  4412,  4424,  4436,   515,  4486,  4498,  4510,
    2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,
    2142,  2142,  2142,  2142,   563,  3169,   983,  3169,   522,  5745,
     288,  5795,   530,  4560,   289,  1550,  1004,   526,  4575,     3,
     194,  6369,  6376,  5029,  5109,  6278,  6285,  5803,  5811,  5819,
    5830,  5880,    14,   532,  4591,   301,  1550,  1094,   528,  4641,
     181,    17,  2228,  3168,  6295,  6305,  6352,  6362,  5893,  5906,
    5956,  5969,  5982,    77,   551,  3495,   302,  1550,  1212,   552,
    3545,   117,    64,  1629,  1953,  1124,  1880,  6210,  6219,  4653,
    4665,  4715,  4727,  4739,    32,  3068,  3138,  5989,  6039,  4789,
    4804,   558,  6047,   310,  6055,  4820,  4870,   579,  6069,   315,
    6119,  3560,  3576,   583,  4882,   328,  4894,   626,  1297,  6127,
    6135,  6148,  6198,  4944,  4956
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,   638,  -237,   105,  -237,  -237,  -237,  -237,   506,
     -60,  -115,   -72,   -42,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  1639,   -11,  1530,  1440,  1203,
    1113,   793,   624,   -16,   304,  -236,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    39,    40,    41,     9,    10,   106,   107,
      42,    74,    43,    44,    45,    46,    47,   155,    86,   121,
      48,    66,   160,    67,    49,    50,   185,   186,   187,   188,
     189,   190,   191,    71,   172,   112,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    83,   117,   340,    11,    51,   344,   115,   -51,   259,
      11,   -89,    58,   -53,   -53,   322,   323,    51,   320,   192,
     -53,   -53,   291,   292,    12,   -52,   259,    58,   -58,   -58,
     -58,   -58,    51,   -58,   -58,   258,   258,   365,   -89,   -54,
     -54,   291,   292,   -53,   -53,   260,   261,   213,   234,   192,
     -51,   -53,   206,   227,   320,   -53,   -49,   -53,    58,   -90,
     -49,   150,   -58,    51,    58,   108,   138,   -52,   386,    51,
     289,   -58,   -58,    97,    98,    83,   -54,   -49,   -50,    19,
      20,    21,    22,    23,    24,   -53,   -54,   -54,   322,   323,
     -10,   135,   -50,   -51,   290,   159,   -50,    61,   192,   289,
     162,    58,   -10,   -10,   136,     8,    51,   -49,    30,    31,
     413,     8,   -51,    90,    15,   215,   216,   217,   218,   219,
     220,   335,   337,   153,   -54,   -19,   -47,   234,   -54,   -19,
     -51,   419,   227,    35,   -51,   321,   -50,    36,    37,   -52,
     321,   192,    38,   108,   221,   222,   -51,   -91,   -81,   -81,
     -81,   -81,   425,   -81,   -81,   192,   -61,   -61,   -61,   -61,
      16,   -61,   -61,   251,   251,   192,   251,   251,   251,   223,
     110,   139,   -51,   224,   225,   140,   -51,   -52,   226,   -52,
      90,   -52,   -81,   -81,   282,   282,   192,   282,   282,   282,
     -61,   -81,   -81,   -81,   -81,   -81,   -81,   -81,    89,   -61,
     -61,    97,    98,   -52,   290,   313,   313,   192,   313,   313,
     313,   -17,   -92,   -52,    17,   -17,   -54,   -54,   260,   261,
     -87,    62,   213,   234,   -87,   213,   234,   206,   227,    65,
     206,   227,   -49,   192,   -53,   -53,    91,    92,    89,    79,
     -52,   -42,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   213,   234,   -54,   -45,
     362,   206,   227,   405,   192,   406,   143,   -18,   -53,    84,
     144,   -18,   -50,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   213,   234,    69,
     -88,   383,   206,   227,   -88,   192,    81,   -80,   -80,   -80,
     -80,    87,   -80,   -80,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,    88,    58,
      59,    58,   404,   -20,    51,   103,    51,   -20,   114,   213,
     234,   -80,    59,   238,   206,   227,    -7,    80,   239,   193,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,    59,   143,   143,
     213,   234,   408,   410,   236,   206,   227,   -54,   -54,    91,
      92,   143,   143,    83,    83,   416,   422,   214,   235,   193,
     143,   213,   234,   -48,   430,   143,   206,   227,    59,   432,
     -55,   -55,   -55,   -55,    59,   262,   263,   116,   143,    58,
      58,   -54,   434,   118,    51,    51,   -41,   120,   -41,   -41,
     -41,   -41,   -39,   137,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,    85,   -41,   -41,   -41,   -41,   141,   145,   193,   142,
     148,    59,   -55,   264,   265,   -82,   -82,   -82,   -82,   147,
     -82,   -82,    -8,   -41,   -41,   215,   216,   217,   218,   219,
     220,     1,    -9,     2,     3,     4,     5,   235,   151,    13,
       1,   -41,     2,     3,     4,     5,   -41,   -41,   -41,   -82,
     -82,   193,   -41,   -41,   221,   222,    33,   -41,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   193,   -62,   -62,   -62,   -62,
     -16,   -62,   -62,   252,   252,   193,   252,   252,   252,   223,
     339,   -15,   -14,   224,   225,   -37,    -2,    -2,   226,    -2,
      -2,    -2,    -2,   156,   283,   283,   193,   283,   283,   283,
     -62,   157,   -81,   -81,   -81,   -81,   -35,   -81,   -81,   -62,
     -62,    97,    98,   -11,   158,   314,   314,   193,   314,   314,
     314,    -4,    -4,   237,    -4,    -4,    -4,    -4,     2,     3,
       4,     5,   214,   235,   -43,   214,   235,   -81,   163,   164,
     -81,   341,   348,   193,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   214,   235,   369,   390,
     -21,   407,    -6,    -6,   193,    -6,    -6,    -6,    -6,   409,
     414,   415,   420,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   214,   235,   104,
     421,   105,     3,     4,     5,   193,   426,   429,   215,   216,
     217,   218,   219,   220,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   431,    59,
      57,    59,   433,   -23,    14,   152,     0,   221,   222,   214,
     235,     0,    57,     0,    70,    72,     0,     0,     0,     0,
      76,    77,    78,   -55,   -55,   -55,   -55,    57,   324,   325,
     214,   235,   223,   343,     0,     0,   224,   225,     0,    -3,
      -3,   226,    -3,    -3,    -3,    -3,     0,   212,   233,     0,
       0,   214,   235,     0,     0,     0,     0,     0,    57,     0,
       0,   -55,     0,     0,    57,   -55,   326,   327,     0,    59,
      59,     0,     0,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,   132,   133,   134,    57,   215,   216,   217,
     218,   219,   220,     0,   -38,     0,   -38,   -38,   -38,   -38,
       0,    57,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   221,   222,    -5,    -5,
       0,    -5,    -5,    -5,    -5,     0,     0,   233,     0,     0,
       0,   -38,   -38,   -58,   -58,   -58,   -58,     0,   -58,   -58,
       0,   223,   364,     0,     0,   224,   225,     0,     0,   -38,
     226,     0,     0,     0,   -38,   -38,   -38,     0,     0,     0,
     -38,   -38,     0,   250,   253,   -38,   255,   256,   257,    56,
       0,   -58,     0,     0,     0,   -58,   -58,   -58,   328,   329,
       0,    56,     0,     0,   281,   284,     0,   286,   287,   288,
       0,     0,     0,     0,   -13,   -13,    56,   -13,   -13,   -13,
     -13,     0,     0,     0,     0,   312,   315,     0,   317,   318,
     319,     0,     0,     0,     0,     0,   211,   232,     0,     0,
       0,     0,   212,   233,     0,   212,   233,    56,     0,     0,
       0,     0,     0,    56,     0,   215,   216,   217,   218,   219,
     220,     0,    56,    56,    56,    56,    56,    56,    56,    56,
     130,   131,   359,   360,   361,    56,   212,   233,     0,     0,
       0,     0,     0,     0,   221,   222,     0,     0,     0,     0,
      56,     0,     0,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   380,   381,   382,   212,   212,   233,   223,
     385,     0,     0,   224,   225,     0,   232,     0,   226,     0,
       0,     0,     0,     0,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   401,   402,   403,   233,     0,    57,
       0,    57,   -58,   -58,   -58,   -58,     0,   -58,   -58,   212,
     233,     0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
       0,    93,    94,     0,   -21,     0,   -21,   -21,   -21,   -21,
     212,   233,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -58,   -58,   -58,   266,   267,     0,
     -55,   212,   233,   215,   216,   217,   218,   219,   220,    95,
      96,   -21,   -21,     0,     0,     0,     0,     0,     0,    57,
      57,   211,   232,     0,   211,   232,     0,     0,     0,   -21,
       0,     0,   221,   222,   -21,   -21,   -21,     0,     0,     0,
     -21,   -21,     0,     0,     0,   -21,     0,     0,     0,   357,
     358,     0,     0,     0,     0,   211,   232,   223,   412,     0,
       0,   224,   225,     0,   -12,   -12,   226,   -12,   -12,   -12,
     -12,     0,   211,   211,   211,   211,   211,   211,   211,   211,
     378,   379,     0,     0,     0,   211,   211,   232,     0,     0,
       0,     0,     0,   215,   216,   217,   218,   219,   220,     0,
       0,     0,     0,   232,   232,   232,   232,   232,   232,   232,
     232,   399,   400,     0,     0,     0,   232,     0,    56,    55,
      56,     0,   221,   222,     0,     0,     0,     0,   211,   232,
       0,    55,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,    55,   223,   418,   211,
     232,   224,   225,     0,     0,     0,   226,   -59,   -59,   -59,
     -59,     0,   -59,   -59,     0,     0,   210,   231,     0,     0,
     211,   232,     0,     0,   -61,     0,     0,    55,   -61,   -61,
     -61,   328,   329,    55,     0,     0,     0,     0,    56,    56,
       0,   -59,    55,    55,    55,    55,   126,   127,   128,   129,
     -59,   -59,    97,    98,     0,    55,     0,     0,     0,    54,
       0,   215,   216,   217,   218,   219,   220,     0,     0,     0,
      55,    54,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,     0,    93,    94,     0,    54,     0,     0,     0,
     221,   222,     0,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,   230,     0,     0,
       0,     0,   -56,     0,     0,   223,   424,    54,     0,   224,
     225,    95,    96,    54,   226,   -80,   -80,   -80,   -80,     0,
     -80,   -80,    54,    54,   124,   125,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,     0,    54,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
      54,   387,     0,   -80,     0,     0,   388,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -23,   -23,   165,   166,   167,
     168,   169,   170,     0,     0,     0,   230,     0,     0,     0,
       0,   210,   231,   -23,   210,   231,     0,     0,   -23,   -23,
     -23,     0,     0,     0,   -23,   -23,    30,    31,     0,   -23,
       0,     0,     0,     0,     0,   353,   354,   355,   356,     0,
       0,     0,     0,     0,     0,   210,   231,   -57,   -57,   -57,
     -57,   171,    93,    94,     0,    36,    37,     0,     0,     0,
      38,     0,   210,   210,   210,   210,   374,   375,   376,   377,
       0,     0,     0,     0,     0,   210,   210,   231,     0,     0,
       0,   -57,     0,   173,   174,   175,   176,   177,   178,     0,
      95,    96,     0,   231,   231,   231,   231,   395,   396,   397,
     398,   209,   230,     0,   209,   230,   231,     0,    55,     0,
      55,     0,   179,   180,     0,     0,    53,     0,   210,   231,
       0,     0,     0,   351,   352,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,   209,   230,   181,     0,   210,
     231,   182,   183,    53,     0,     0,   184,     0,     0,     0,
       0,     0,   209,   209,   372,   373,     0,     0,     0,     0,
     210,   231,     0,   208,   229,   209,   209,   230,     0,     0,
     -60,   -60,   -60,   -60,    53,   -60,   -60,     0,    55,    55,
      53,     0,     0,   230,   230,   393,   394,     0,     0,    53,
     123,     0,     0,     0,     0,     0,   230,     0,    54,     0,
      54,     0,    53,     0,   -60,     0,    52,     0,   209,   230,
       0,     0,     0,   -60,   -60,    97,    98,    53,    52,   194,
     195,   196,   197,   198,   199,     0,     0,     0,     0,   209,
     230,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,     0,   200,   201,
     209,   230,     0,   207,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    54,    54,
      52,     0,     0,   202,     0,     0,     0,   203,   204,   122,
       0,     0,   205,     0,     0,    18,     0,     2,     3,     4,
       5,     0,    52,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,    52,     0,     0,
       0,   -56,   -56,   -56,   -56,     0,   324,   325,     0,     0,
       0,     0,    30,    31,     0,     0,     0,    68,     0,     0,
       0,     0,     0,   228,    75,     0,     0,     0,   208,   229,
      32,   208,   229,     0,     0,    33,    34,    35,     0,   -56,
       0,    36,    37,   -56,   326,   327,    38,     0,     0,   350,
       0,     0,   109,   111,   113,     0,     0,     0,     0,     0,
       0,     0,   208,   229,     0,     0,     0,     0,     0,   119,
      19,    20,    21,    22,    23,    24,     0,     0,     0,   208,
     371,     0,     0,     0,     0,   215,   216,   217,   218,   219,
     220,     0,   208,   208,   229,     0,     0,     0,     0,    30,
      31,     0,     0,   146,     0,     0,     0,     0,     0,     0,
     229,   392,     0,     0,   221,   222,     0,     0,   207,   228,
       0,   207,   228,   229,    35,    53,     0,    53,    36,    37,
       0,     0,   154,    38,     0,   208,   229,     0,   349,   223,
       0,     0,     0,   224,   225,     0,   161,     0,   226,     0,
       0,     0,   207,   228,     0,     0,   208,   229,     0,     0,
     240,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   370,
     254,     0,     0,     0,     0,     0,     0,   208,   229,     0,
       0,     0,   207,   207,   228,     0,     0,     0,     0,     0,
       0,   285,     0,     0,     0,    53,    53,   -80,   241,     0,
     391,     0,     0,   242,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   316,   228,     0,    52,     0,    52,     0,   243,
     244,   245,   246,   247,   248,   207,   228,   338,   111,     0,
     342,   111,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,   207,   228,   179,   180,
       0,     0,   -62,   -62,   -62,   -62,     0,   -62,   -62,     0,
       0,   363,   111,     0,     0,     0,     0,   207,   228,   368,
       0,     0,     0,   249,     0,     0,     0,   182,   183,     0,
       0,     0,   184,     0,     0,    52,    52,     0,     0,     0,
     -62,     0,   384,   111,   -62,   -62,   -62,   328,   329,   -26,
     389,   -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,     0,
     324,   325,     0,     0,   411,   111,   -26,   -26,     0,     0,
       0,     0,     0,     0,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   -26,   417,   111,     0,     0,   -26,
     -26,   -26,     0,   -57,     0,   -26,   -26,   -57,   326,   327,
     -26,     0,     0,   200,   201,     0,   423,   111,   -22,     0,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   280,     0,
       0,     0,   203,   204,     0,     0,     0,   205,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -22,   -22,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -55,
     -55,   -55,   -55,   -22,   293,   294,     0,     0,   -22,    73,
     -22,     0,     0,     0,   -22,   -22,   -31,   -31,     0,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,     0,   -55,     0,     0,   -31,
     -31,   -31,   295,   296,     0,   -31,   -31,     0,     0,    18,
     -31,     2,     3,     4,     5,     0,     0,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,   305,   306,   307,   308,   309,   310,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,   -24,    30,    31,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     221,   222,     0,     0,    32,     0,     0,     0,     0,    33,
      82,    35,     0,     0,     0,    36,    37,   -24,   -24,     0,
      38,     0,     0,     0,     0,   311,     0,     0,     0,   224,
     225,     0,     0,     0,   226,   -24,     0,     0,     0,     0,
     -24,   -24,   -24,     0,     0,     0,   -24,   -24,     0,     0,
     -29,   -24,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -56,   -56,   -56,   -56,     0,   293,   294,     0,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -29,   -29,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   -29,     0,   -56,     0,     0,
     -29,   -29,   -29,   295,   296,     0,   -29,   -29,   -30,   -30,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -30,   -63,   -63,     0,
       0,   -30,   -30,   -30,     0,     0,     0,   -30,   -30,     0,
       0,   -34,   -30,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -63,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -63,   -63,   -63,   -63,    99,
     100,   101,   -21,     0,   -21,   -21,   -21,   -21,   -34,   -34,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -34,     0,     0,     0,
       0,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -21,
     -21,     0,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -21,   -66,   -66,
       0,     0,   -21,   -21,   -21,     0,     0,     0,   -21,   -21,
       0,     0,   -27,   -21,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -66,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -25,     0,   -25,   -25,   -25,   -25,   -27,
     -27,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,
     -25,   -25,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -25,   -74,
     -74,     0,     0,   -25,   -25,   -25,     0,     0,     0,   -25,
     -25,     0,     0,   -33,   -25,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -74,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -36,     0,   -36,   -36,   -36,   -36,
     -33,   -33,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -33,     0,
       0,     0,     0,   -33,   -33,   -33,     0,     0,     0,   -33,
     -33,   -36,   -36,     0,   -33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -36,
     -70,   -70,     0,     0,   -36,   -36,   -36,     0,     0,     0,
     -36,   -36,     0,     0,   -32,   -36,   -32,   -32,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -70,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -28,     0,   -28,   -28,   -28,
     -28,   -32,   -32,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -32,
       0,     0,     0,     0,   -32,   -32,   -32,     0,     0,     0,
     -32,   -32,   -28,   -28,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -28,   -75,   -75,     0,     0,   -28,   -28,   -28,     0,     0,
       0,   -28,   -28,     0,     0,    18,   -28,     2,     3,     4,
       5,     0,     0,    19,    20,    21,    22,    23,    24,    25,
     -75,    26,    27,    28,    29,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -23,     0,   -23,   -23,
     -23,   -23,    30,    31,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
      32,     0,     0,     0,     0,    33,   149,    35,     0,     0,
       0,    36,    37,   -23,   -23,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -23,   -71,   -71,     0,     0,   -23,   -23,   -23,     0,
       0,     0,   -23,   -23,     0,     0,   -40,   -23,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -71,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -44,     0,   -44,
     -44,   -44,   -44,   -40,   -40,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,   -40,     0,     0,     0,     0,   -40,   -40,   -40,     0,
       0,     0,   -40,   -40,   -44,   -44,     0,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -44,   -72,   -72,     0,     0,   -44,   -44,   -44,
       0,     0,     0,   -44,   -44,     0,     0,   -46,   -44,   -46,
     -46,   -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -72,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -22,     0,
     -22,   -22,   -22,   -22,   -46,   -46,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -46,     0,     0,     0,     0,   -46,   -46,   -46,
       0,     0,     0,   -46,   -46,   -22,   -22,     0,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -22,   -73,   -73,     0,     0,   -22,   334,
     -22,     0,     0,     0,   -22,   -22,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -73,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,    18,
       0,     2,     3,     4,     5,   -22,   -22,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,   -22,     0,     0,     0,     0,   -22,   336,
     -22,     0,     0,     0,   -22,   -22,    30,    31,     0,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,    32,   -64,   -64,     0,     0,    33,
     427,    35,     0,     0,     0,    36,    37,     0,     0,    18,
      38,     2,     3,     4,     5,     0,     0,    19,    20,    21,
      22,    23,    24,    25,   -64,    26,    27,    28,    29,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,    99,   100,   101,
      18,     0,     2,     3,     4,     5,    30,    31,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
     -57,   -57,   -57,   -57,    32,   293,   294,     0,     0,    33,
     428,    35,     0,     0,     0,    36,    37,    30,    31,     0,
      38,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,    32,     0,   -57,     0,     0,
      33,     0,    35,   295,   296,     0,    36,    37,     0,     0,
       0,    38,     0,     0,     0,     0,   -80,   303,     0,   -80,
       0,     0,   304,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,    63,     0,     0,
       0,     0,    64,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   272,   -80,     0,     0,     0,   273,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -82,   -84,   -84,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,     0,   -83,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -84,     0,     0,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -85,   -76,   -76,   -85,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   333,     0,     0,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -76,     0,     0,   -76,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -80,   -80,
     -80,   -80,     0,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   345,     0,     0,     0,     0,   346,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   366,   -80,
       0,     0,     0,   367,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -78,     0,     0,   -78,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -86,   -79,   -79,   -86,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -77,     0,     0,
     -77,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -79,     0,     0,   -79,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -84,   -84,   -84,   -84,     0,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,     0,
       0,     0,   -83,   -83,     0,     0,     0,     0,     0,   -84,
     -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
       0,   -70,   102,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -76,   -76,     0,
       0,     0,     0,     0,   -78,   -78,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,   -86,   -86,     0,     0,     0,     0,
       0,   -77,   -77,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -79,   -79,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -81,   -83,   -83,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -83,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -84,   -70,   -70,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   271,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -76,   -82,   -82,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -81,     0,   -81,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -82,     0,   -82,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,   -83,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,     0,   -84,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,   -85,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   302,     0,   -70,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,     0,   -63,
     -63,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
       0,   -66,   -66,     0,     0,     0,     0,   -76,     0,   -76,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   330,   331,   332,   -66,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,     0,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,   -84,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
       0,   -76,   -76,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -76,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -75,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -71,   -71,
     -71,   -71,     0,   -71,   -71,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -71,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -78,   -78,   -78,   -78,     0,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -86,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -78,     0,
     -78,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,
     -64,   -64,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,     0,   -65,   -65,     0,     0,     0,     0,   -86,     0,
     -86,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -64,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   330,   331,   332,   -65,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   330,   331,   332,   -67,   -67,   -67,
     -67,     0,   -67,   -67,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -79,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -77,     0,   -77,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,
     -78,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,     0,     0,     0,   -79,     0,   -79,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -86,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -77,   -77,   -77,   -77,
       0,   -77,   -77,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -65,   -65,   -65,   -65,     0,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -79,     0,     0,   -65,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -65,   -65,
     -65,   -65,    99,   100,   101,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,
       0,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -81,   -81,   -81,   -81,   -67,
     -81,   -81,     0,     0,     0,     0,   -68,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -69,   -61,   -61,   -61,   266,   267,     0,   -81,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -85,   -85,   -85,   -85,   -82,
     -85,   -85,     0,     0,     0,     0,   -83,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -62,   -62,   -62,   266,   267,     0,   -85,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -76,   -76,   -76,   -76,     0,
     -76,   -76,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -76,
     -63,   -63,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -63,   -63,   -63,   -63,   -63,
     268,   269,   270,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -63,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   299,   300,   301,   -66,   -66,   -66,   -66,     0,
     -66,   -66,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,   -83,
     -83,   -83,   -83,     0,   -83,   -83,     0,     0,   -84,   -84,
     -84,   -84,   -66,   -84,   -84,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -85,   -85,
     -85,   -85,     0,   -85,   -85,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,
     -75,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -71,   -71,   -71,   -71,     0,   -71,   -71,     0,   -72,   -72,
     -72,   -72,     0,   -72,   -72,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,     0,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -81,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -83,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,     0,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,     0,   -74,   -74,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -74,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -70,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,     0,   -75,
     -75,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,     0,   -71,   -71,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -75,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -71,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,
     -72,     0,   -72,   -72,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -78,   -78,   -78,
     -78,     0,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,   -78,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,   -64,   -64,   -64,   -64,     0,
     -64,   -64,     0,   -65,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,     0,
       0,   -86,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -64,   -64,   -64,
     -64,   -64,   268,   269,   270,   -65,   -65,   -65,   -65,   -65,
     268,   269,   270,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,
     -64,   -64,     0,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -64,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   299,   300,   301,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   299,   300,   301,   -67,   -67,
     -67,   -67,     0,   -67,   -67,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -77,   -77,   -77,   -77,   -67,   -77,   -77,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -69,     0,     0,     0,   -77,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -79,   -79,   -79,   -79,     0,   -79,   -79,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -79,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -78,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,     0,   -86,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -79,   -79,   -79,   -79,     0,   -79,   -79,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,
       0,   -60,   -60,   -60,   -60,     0,   -60,   -60,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -79,   -58,   -58,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -59,     0,     0,     0,   -59,   -59,   -59,   328,   329,   -60,
       0,     0,     0,   -60,   -60,   -60,   328,   329,     0,     0,
     -58,     0,     0,     0,     0,     0,   -58,   -58,   297,   298,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -60,   -60,   -60,
     -60,     0,   -60,   -60,     0,     0,     0,   -61,   -61,   -61,
     -61,     0,   -61,   -61,     0,     0,     0,   -62,   -62,   -62,
     -62,     0,   -62,   -62,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   266,   267,     0,     0,   -60,
     -60,   -60,   266,   267,   -61,     0,     0,     0,     0,     0,
     -61,   -61,   297,   298,   -62,     0,     0,     0,     0,     0,
     -62,   -62,   297,   298,   -59,   -59,   -59,   -59,     0,   -59,
     -59,     0,     0,     0,   -60,   -60,   -60,   -60,     0,   -60,
     -60,   -56,   -56,   -56,   -56,     0,   262,   263,   -57,   -57,
     -57,   -57,     0,   262,   263,     0,     0,     0,     0,     0,
       0,   -59,     0,     0,     0,     0,     0,   -59,   -59,   297,
     298,   -60,     0,     0,     0,     0,     0,   -60,   -60,   297,
     298,     0,     0,   -56,   264,   265,     0,     0,     0,     0,
     -57,   264,   265
};

static const yytype_int16 yycheck[] =
{
      16,    43,    74,   239,     0,    16,   242,    67,    22,    23,
       6,     9,    28,    22,    23,    24,    25,    28,    22,    35,
      22,    23,    24,    25,    56,    22,    23,    43,    22,    23,
      24,    25,    43,    27,    28,    22,    22,   273,     9,    22,
      23,    24,    25,    22,    23,    24,    25,    63,    64,    65,
      64,    60,    63,    64,    22,    64,    60,    59,    74,     9,
      64,   121,    56,    74,    80,    61,    64,    64,   304,    80,
      22,    65,    66,    67,    68,   117,    59,    64,    64,     9,
      10,    11,    12,    13,    14,    64,    22,    23,    24,    25,
      56,   102,    60,    22,    23,   155,    64,    63,   114,    22,
     160,   117,    56,    57,    58,     0,   117,    59,    38,    39,
     346,     6,    22,    23,    56,     9,    10,    11,    12,    13,
      14,   236,   237,    58,    60,    60,    56,   143,    64,    64,
      59,   367,   143,    63,    22,    23,    59,    67,    68,    22,
      23,   157,    72,   139,    38,    39,    56,     9,    22,    23,
      24,    25,   388,    27,    28,   171,    22,    23,    24,    25,
      61,    27,    28,   179,   180,   181,   182,   183,   184,    63,
      64,    60,    60,    67,    68,    64,    64,    60,    72,    22,
      23,    64,    56,    57,   200,   201,   202,   203,   204,   205,
      56,    65,    66,    67,    68,    69,    70,    71,    22,    65,
      66,    67,    68,    22,    23,   221,   222,   223,   224,   225,
     226,    60,     9,    56,     9,    64,    22,    23,    24,    25,
      60,    56,   238,   239,    64,   241,   242,   238,   239,    63,
     241,   242,    56,   249,    22,    23,    24,    25,    22,    56,
      59,    63,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    64,    61,
     271,   272,   273,   335,   280,   337,    60,    60,    56,    56,
      64,    64,    56,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,    63,
      60,   302,   303,   304,    64,   311,    57,    22,    23,    24,
      25,    56,    27,    28,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    56,   335,
      16,   337,   333,    60,   335,     9,   337,    64,    63,   345,
     346,    56,    28,    58,   345,   346,    56,    57,    63,    35,
      65,    66,    67,    68,    69,    70,    71,    43,    60,    60,
     366,   367,    64,    64,    61,   366,   367,    22,    23,    24,
      25,    60,    60,   405,   406,    64,    64,    63,    64,    65,
      60,   387,   388,    56,    64,    60,   387,   388,    74,    64,
      22,    23,    24,    25,    80,    27,    28,    10,    60,   405,
     406,    56,    64,    64,   405,   406,     1,    10,     3,     4,
       5,     6,    61,    64,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     9,    64,   114,    59,
      64,   117,    64,    65,    66,    22,    23,    24,    25,    17,
      27,    28,    56,    38,    39,     9,    10,    11,    12,    13,
      14,     1,    56,     3,     4,     5,     6,   143,    59,     0,
       1,    56,     3,     4,     5,     6,    61,    62,    63,    56,
      57,   157,    67,    68,    38,    39,    61,    72,    65,    66,
      67,    68,    69,    70,    71,   171,    22,    23,    24,    25,
      61,    27,    28,   179,   180,   181,   182,   183,   184,    63,
      64,    61,    61,    67,    68,    61,     0,     1,    72,     3,
       4,     5,     6,    64,   200,   201,   202,   203,   204,   205,
      56,    63,    22,    23,    24,    25,    56,    27,    28,    65,
      66,    67,    68,    57,    59,   221,   222,   223,   224,   225,
     226,     0,     1,    61,     3,     4,     5,     6,     3,     4,
       5,     6,   238,   239,    61,   241,   242,    57,    64,    56,
      60,    64,    64,   249,    64,    65,    66,    67,    68,    69,
      70,    71,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    64,    64,
      17,    59,     0,     1,   280,     3,     4,     5,     6,    59,
      64,    59,    64,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     1,
      59,     3,     4,     5,     6,   311,    64,    59,     9,    10,
      11,    12,    13,    14,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    59,   335,
      16,   337,    59,    17,     6,   139,    -1,    38,    39,   345,
     346,    -1,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    38,    22,    23,    24,    25,    43,    27,    28,
     366,   367,    63,    64,    -1,    -1,    67,    68,    -1,     0,
       1,    72,     3,     4,     5,     6,    -1,    63,    64,    -1,
      -1,   387,   388,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    60,    -1,    -1,    80,    64,    65,    66,    -1,   405,
     406,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     9,    10,    11,
      12,    13,    14,    -1,     1,    -1,     3,     4,     5,     6,
      -1,   117,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    38,    39,     0,     1,
      -1,     3,     4,     5,     6,    -1,    -1,   143,    -1,    -1,
      -1,    38,    39,    22,    23,    24,    25,    -1,    27,    28,
      -1,    63,    64,    -1,    -1,    67,    68,    -1,    -1,    56,
      72,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    -1,   179,   180,    72,   182,   183,   184,    16,
      -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      -1,    28,    -1,    -1,   200,   201,    -1,   203,   204,   205,
      -1,    -1,    -1,    -1,     0,     1,    43,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   221,   222,    -1,   224,   225,
     226,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,   238,   239,    -1,   241,   242,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,     9,    10,    11,    12,    13,
      14,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   268,   269,   270,   102,   272,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
     117,    -1,    -1,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,    63,
      64,    -1,    -1,    67,    68,    -1,   143,    -1,    72,    -1,
      -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    -1,   335,
      -1,   337,    22,    23,    24,    25,    -1,    27,    28,   345,
     346,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,     1,    -1,     3,     4,     5,     6,
     366,   367,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    64,    65,    66,    67,    68,    -1,
      56,   387,   388,     9,    10,    11,    12,    13,    14,    65,
      66,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,   405,
     406,   238,   239,    -1,   241,   242,    -1,    -1,    -1,    56,
      -1,    -1,    38,    39,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,   266,
     267,    -1,    -1,    -1,    -1,   272,   273,    63,    64,    -1,
      -1,    67,    68,    -1,     0,     1,    72,     3,     4,     5,
       6,    -1,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,    -1,    -1,    -1,   302,   303,   304,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,    -1,    -1,    -1,   333,    -1,   335,    16,
     337,    -1,    38,    39,    -1,    -1,    -1,    -1,   345,   346,
      -1,    28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    43,    63,    64,   366,
     367,    67,    68,    -1,    -1,    -1,    72,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    63,    64,    -1,    -1,
     387,   388,    -1,    -1,    60,    -1,    -1,    74,    64,    65,
      66,    67,    68,    80,    -1,    -1,    -1,    -1,   405,   406,
      -1,    56,    89,    90,    91,    92,    93,    94,    95,    96,
      65,    66,    67,    68,    -1,   102,    -1,    -1,    -1,    16,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
     117,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    43,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    63,    64,    74,    -1,    67,
      68,    65,    66,    80,    72,    22,    23,    24,    25,    -1,
      27,    28,    89,    90,    91,    92,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,   102,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
     117,    58,    -1,    60,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    38,    39,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,   143,    -1,    -1,    -1,
      -1,   238,   239,    56,   241,   242,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,
      -1,    -1,    -1,    -1,    -1,   262,   263,   264,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,   273,    22,    23,    24,
      25,    63,    27,    28,    -1,    67,    68,    -1,    -1,    -1,
      72,    -1,   289,   290,   291,   292,   293,   294,   295,   296,
      -1,    -1,    -1,    -1,    -1,   302,   303,   304,    -1,    -1,
      -1,    56,    -1,     9,    10,    11,    12,    13,    14,    -1,
      65,    66,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   238,   239,    -1,   241,   242,   333,    -1,   335,    -1,
     337,    -1,    38,    39,    -1,    -1,    16,    -1,   345,   346,
      -1,    -1,    -1,   260,   261,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,   272,   273,    63,    -1,   366,
     367,    67,    68,    43,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,   289,   290,   291,   292,    -1,    -1,    -1,    -1,
     387,   388,    -1,    63,    64,   302,   303,   304,    -1,    -1,
      22,    23,    24,    25,    74,    27,    28,    -1,   405,   406,
      80,    -1,    -1,   320,   321,   322,   323,    -1,    -1,    89,
      90,    -1,    -1,    -1,    -1,    -1,   333,    -1,   335,    -1,
     337,    -1,   102,    -1,    56,    -1,    16,    -1,   345,   346,
      -1,    -1,    -1,    65,    66,    67,    68,   117,    28,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,   366,
     367,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    38,    39,
     387,   388,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,   405,   406,
      80,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    89,
      -1,    -1,    72,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,   102,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,   117,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,   143,    35,    -1,    -1,    -1,   238,   239,
      56,   241,   242,    -1,    -1,    61,    62,    63,    -1,    60,
      -1,    67,    68,    64,    65,    66,    72,    -1,    -1,   259,
      -1,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,   273,    -1,    -1,    -1,    -1,    -1,    80,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,   289,
     290,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,   302,   303,   304,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    38,    39,    -1,    -1,   238,   239,
      -1,   241,   242,   333,    63,   335,    -1,   337,    67,    68,
      -1,    -1,   143,    72,    -1,   345,   346,    -1,   258,    63,
      -1,    -1,    -1,    67,    68,    -1,   157,    -1,    72,    -1,
      -1,    -1,   272,   273,    -1,    -1,   366,   367,    -1,    -1,
     171,    -1,    22,    23,    24,    25,    -1,    27,    28,   289,
     181,    -1,    -1,    -1,    -1,    -1,    -1,   387,   388,    -1,
      -1,    -1,   302,   303,   304,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,   405,   406,    57,    58,    -1,
     320,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   223,   333,    -1,   335,    -1,   337,    -1,     9,
      10,    11,    12,    13,    14,   345,   346,   238,   239,    -1,
     241,   242,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   366,   367,    38,    39,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,   272,   273,    -1,    -1,    -1,    -1,   387,   388,   280,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,   405,   406,    -1,    -1,    -1,
      60,    -1,   303,   304,    64,    65,    66,    67,    68,     1,
     311,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,   345,   346,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    56,   366,   367,    -1,    -1,    61,
      62,    63,    -1,    60,    -1,    67,    68,    64,    65,    66,
      72,    -1,    -1,    38,    39,    -1,   387,   388,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    63,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,     1,
      -1,     3,     4,     5,     6,    38,    39,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    22,
      23,    24,    25,    56,    27,    28,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    59,    -1,    -1,    61,
      62,    63,    65,    66,    -1,    67,    68,    -1,    -1,     1,
      72,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    38,    39,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      38,    39,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,
      72,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    56,    -1,    -1,    -1,    -1,
      61,    62,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
       1,    72,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    38,    39,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    56,    -1,    59,    -1,    -1,
      61,    62,    63,    65,    66,    -1,    67,    68,    38,    39,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    56,    27,    28,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,     1,    72,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    56,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,     1,    -1,     3,     4,     5,     6,    38,    39,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    68,    38,
      39,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    56,    27,    28,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,     1,    72,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    56,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,     1,    -1,     3,     4,     5,     6,    38,
      39,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    68,
      38,    39,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    56,    27,
      28,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,     1,    72,     3,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    56,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,     1,    -1,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    38,    39,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    56,
      27,    28,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,     1,    72,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    56,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,     1,    -1,     3,     4,     5,
       6,    38,    39,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    38,    39,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      56,    27,    28,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,     1,    72,     3,     4,     5,
       6,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      56,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,     1,    -1,     3,     4,
       5,     6,    38,    39,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,    68,    38,    39,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    56,    27,    28,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    -1,    -1,     1,    72,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    56,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,     1,    -1,     3,
       4,     5,     6,    38,    39,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    38,    39,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    56,    27,    28,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    56,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    56,    27,    28,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    -1,    -1,     1,    72,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    56,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,     1,
      -1,     3,     4,     5,     6,    38,    39,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,     1,
      72,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    56,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
       1,    -1,     3,     4,     5,     6,    38,    39,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      22,    23,    24,    25,    56,    27,    28,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    68,    38,    39,    -1,
      72,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    59,    -1,    -1,
      61,    -1,    63,    65,    66,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,
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
      70,    71,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    58,    59,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    56,
      57,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    56,    57,    22,    23,    24,
      25,    -1,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    56,    57,    -1,
      -1,    -1,    -1,    -1,    56,    57,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    56,    57,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    56,    57,    22,
      23,    24,    25,    -1,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    57,    27,    28,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    57,    27,    28,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    57,    27,    28,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    57,    27,    28,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    57,    27,    28,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    60,    -1,    -1,    56,
      64,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    56,
      27,    28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,
      67,    68,    69,    70,    71,    65,    66,    67,    68,    69,
      70,    71,    56,    64,    65,    66,    67,    68,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    56,
      27,    28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,
      67,    68,    69,    70,    71,    65,    66,    67,    68,    69,
      70,    71,    56,    64,    65,    66,    67,    68,    -1,    56,
      -1,    65,    66,    67,    68,    69,    70,    71,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    56,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    22,    23,
      24,    25,    59,    27,    28,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    64,    65,    66,    67,    68,    69,    70,
      71,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    64,    65,
      66,    67,    68,    69,    70,    71,    64,    65,    66,    67,
      68,    69,    70,    71,    64,    65,    66,    67,    68,    69,
      70,    71,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      64,    65,    66,    67,    68,    69,    70,    71,    64,    65,
      66,    67,    68,    69,    70,    71,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    59,    -1,    -1,
      -1,    56,    -1,    65,    66,    67,    68,    69,    70,    71,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    56,    22,    23,    24,    25,    -1,    27,    28,    -1,
      65,    66,    67,    68,    69,    70,    71,    64,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    59,    27,    28,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    59,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    56,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    64,    65,    66,    67,    68,    69,    70,    71,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    64,    65,    66,    67,    68,    69,    70,    71,    64,
      65,    66,    67,    68,    69,    70,    71,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    59,    27,    28,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    -1,    -1,    64,
      65,    66,    67,    68,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      64,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    74,    75,    77,    79,
      80,   109,    56,     0,    75,    56,    61,     9,     1,     9,
      10,    11,    12,    13,    14,    15,    17,    18,    19,    20,
      38,    39,    56,    61,    62,    63,    67,    68,    72,    76,
      77,    78,    83,    85,    86,    87,    88,    89,    93,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,    63,    56,    58,    63,    63,    94,    96,    98,    63,
     105,   106,   105,    62,    84,    98,   105,   105,   105,    56,
      57,    57,    62,    86,    56,    16,    91,    56,    56,    22,
      23,    24,    25,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    57,     9,     1,     3,    81,    82,   109,    98,
      64,    98,   108,    98,    63,    83,    10,    85,    64,    98,
      10,    92,   100,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   105,   105,    99,    58,    64,    64,    60,
      64,     9,    59,    60,    64,    64,    98,    17,    64,    62,
      83,    59,    82,    58,    98,    90,    64,    63,    59,    83,
      95,    98,    83,    64,    56,     9,    10,    11,    12,    13,
      14,    63,   107,     9,    10,    11,    12,    13,    14,    38,
      39,    63,    67,    68,    72,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     9,    10,    11,    12,    13,    14,
      38,    39,    63,    67,    68,    72,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     9,    10,    11,    12,    13,
      14,    38,    39,    63,    67,    68,    72,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    61,    61,    58,    63,
      98,    58,    63,     9,    10,    11,    12,    13,    14,    63,
     105,   106,   107,   105,    98,   105,   105,   105,    22,    23,
      24,    25,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    57,    58,    63,     9,    10,    11,    12,    13,    14,
      63,   105,   106,   107,   105,    98,   105,   105,   105,    22,
      23,    24,    25,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    57,    58,    63,     9,    10,    11,    12,    13,
      14,    63,   105,   106,   107,   105,    98,   105,   105,   105,
      22,    23,    24,    25,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    57,    62,    84,    62,    84,    98,    64,
     108,    64,    98,    64,   108,    58,    63,    98,    64,   100,
     101,   102,   102,   103,   103,   103,   103,   104,   104,   105,
     105,   105,    99,    98,    64,   108,    58,    63,    98,    64,
     100,   101,   102,   102,   103,   103,   103,   103,   104,   104,
     105,   105,   105,    99,    98,    64,   108,    58,    63,    98,
      64,   100,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   105,   105,   105,    99,    85,    85,    59,    64,    59,
      64,    98,    64,   108,    64,    59,    64,    98,    64,   108,
      64,    59,    64,    98,    64,   108,    64,    62,    62,    59,
      64,    59,    64,    59,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    78,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    84,    83,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    88,    90,    89,    92,
      91,    91,    94,    95,    93,    96,    93,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     109,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     3,     3,
       2,     4,     4,     3,     5,     5,     5,     1,     3,     2,
       4,     2,     0,     4,     1,     2,     1,     2,     2,     1,
       1,     1,     2,     2,     2,     4,     2,     0,     6,     0,
       3,     0,     0,     0,     7,     0,     8,     1,     2,     1,
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
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2404 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2410 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2416 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2422 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2428 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2434 "src/parser.c"
        break;

    case 74: /* declaration_list  */
#line 70 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2440 "src/parser.c"
        break;

    case 75: /* declaration  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2446 "src/parser.c"
        break;

    case 76: /* init_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2452 "src/parser.c"
        break;

    case 77: /* var_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2458 "src/parser.c"
        break;

    case 78: /* arr_declarator  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2464 "src/parser.c"
        break;

    case 79: /* function_definition  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2470 "src/parser.c"
        break;

    case 80: /* function_declarator  */
#line 72 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2476 "src/parser.c"
        break;

    case 81: /* argument_list  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2482 "src/parser.c"
        break;

    case 82: /* argument  */
#line 73 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2488 "src/parser.c"
        break;

    case 83: /* compound_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2494 "src/parser.c"
        break;

    case 85: /* statement_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2500 "src/parser.c"
        break;

    case 86: /* statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2506 "src/parser.c"
        break;

    case 88: /* conditional_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2512 "src/parser.c"
        break;

    case 93: /* iteration_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2518 "src/parser.c"
        break;

    case 97: /* return_statement  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2524 "src/parser.c"
        break;

    case 98: /* assignment_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2530 "src/parser.c"
        break;

    case 99: /* logical_or_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2536 "src/parser.c"
        break;

    case 100: /* logical_and_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2542 "src/parser.c"
        break;

    case 101: /* equality_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2548 "src/parser.c"
        break;

    case 102: /* relational_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2554 "src/parser.c"
        break;

    case 103: /* additive_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2560 "src/parser.c"
        break;

    case 104: /* multiplicative_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2566 "src/parser.c"
        break;

    case 105: /* unary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2572 "src/parser.c"
        break;

    case 106: /* postfix_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2578 "src/parser.c"
        break;

    case 107: /* primary_expression  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2584 "src/parser.c"
        break;

    case 108: /* argument_call_list  */
#line 71 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2590 "src/parser.c"
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
#line 2856 "src/parser.c"
    break;

  case 3:
#line 110 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 2862 "src/parser.c"
    break;

  case 4:
#line 114 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2868 "src/parser.c"
    break;

  case 5:
#line 115 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2874 "src/parser.c"
    break;

  case 6:
#line 116 "src/language.y"
    { (yyval.node) = NULL; }
#line 2880 "src/parser.c"
    break;

  case 7:
#line 121 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2886 "src/parser.c"
    break;

  case 8:
#line 122 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 2892 "src/parser.c"
    break;

  case 9:
#line 123 "src/language.y"
    {
															(yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node), ENDARG);
															assign_context((yyval.node));
															tc_arr_init((yyval.node), add_symbol_arr(CHAR, NULL, (void*) (yyvsp[0].sval)));
															free_label((yyvsp[0].sval));
														}
#line 2903 "src/parser.c"
    break;

  case 10:
#line 132 "src/language.y"
    {
										(yyval.node) = node_init(VAR_DECL, "var-decl", ENDARG);
										assign_context((yyval.node));
										(yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval),false);
										free_label((yyvsp[0].sval));
									}
#line 2914 "src/parser.c"
    break;

  case 11:
#line 141 "src/language.y"
    {
										(yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG);
										(yyval.node)->symbol=add_symbol_var((yyvsp[-3].ival),(yyvsp[-2].sval),false);
										(yyval.node)->symbol->attr->symbol_type=ARRAY;
										assign_context((yyval.node));
										free_label((yyvsp[-2].sval));
									}
#line 2926 "src/parser.c"
    break;

  case 12:
#line 156 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-3].sval)); assign_context((yyval.node)); free_label((yyvsp[-3].sval)); }
#line 2932 "src/parser.c"
    break;

  case 13:
#line 157 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-2].sval)); assign_context((yyval.node)); free_label((yyvsp[-2].sval)); }
#line 2938 "src/parser.c"
    break;

  case 14:
#line 161 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-1].al));   }
#line 2944 "src/parser.c"
    break;

  case 15:
#line 162 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 2950 "src/parser.c"
    break;

  case 16:
#line 163 "src/language.y"
    { (yyval.sval) = NULL; free_label((yyvsp[-3].sval)); }
#line 2956 "src/parser.c"
    break;

  case 17:
#line 167 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 2962 "src/parser.c"
    break;

  case 18:
#line 168 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 2968 "src/parser.c"
    break;

  case 19:
#line 172 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 2974 "src/parser.c"
    break;

  case 20:
#line 173 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 2980 "src/parser.c"
    break;

  case 21:
#line 177 "src/language.y"
    { (yyval.node) = NULL; }
#line 2986 "src/parser.c"
    break;

  case 22:
#line 178 "src/language.y"
    { begin(); }
#line 2992 "src/parser.c"
    break;

  case 23:
#line 178 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); finish(); }
#line 2998 "src/parser.c"
    break;

  case 24:
#line 182 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3004 "src/parser.c"
    break;

  case 25:
#line 183 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3010 "src/parser.c"
    break;

  case 26:
#line 187 "src/language.y"
    { (yyval.node) = NULL; }
#line 3016 "src/parser.c"
    break;

  case 27:
#line 188 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3022 "src/parser.c"
    break;

  case 28:
#line 189 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3028 "src/parser.c"
    break;

  case 29:
#line 190 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3034 "src/parser.c"
    break;

  case 30:
#line 191 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3040 "src/parser.c"
    break;

  case 31:
#line 192 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3046 "src/parser.c"
    break;

  case 32:
#line 193 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3052 "src/parser.c"
    break;

  case 33:
#line 194 "src/language.y"
    { (yyval.node) = NULL; }
#line 3058 "src/parser.c"
    break;

  case 34:
#line 195 "src/language.y"
    { (yyval.node) = NULL; }
#line 3064 "src/parser.c"
    break;

  case 35:
#line 199 "src/language.y"
    { tc_asm((yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3070 "src/parser.c"
    break;

  case 36:
#line 202 "src/language.y"
    { (yyval.node) = NULL; tc_free_if((yyvsp[0].ival)); }
#line 3076 "src/parser.c"
    break;

  case 37:
#line 206 "src/language.y"
    { tc_init_if((yyvsp[-1].node), "if_", NULL); }
#line 3082 "src/parser.c"
    break;

  case 38:
#line 206 "src/language.y"
    { node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3088 "src/parser.c"
    break;

  case 39:
#line 210 "src/language.y"
    { tc_init_else(); }
#line 3094 "src/parser.c"
    break;

  case 40:
#line 210 "src/language.y"
    { (yyval.ival) = true; node_free_recursive(&(yyvsp[0].node)); }
#line 3100 "src/parser.c"
    break;

  case 41:
#line 211 "src/language.y"
    { (yyval.ival) = false; }
#line 3106 "src/parser.c"
    break;

  case 42:
#line 215 "src/language.y"
    { tc_init_while("while_", NULL); }
#line 3112 "src/parser.c"
    break;

  case 43:
#line 215 "src/language.y"
    { tc_jump_while((yyvsp[-1].node)); }
#line 3118 "src/parser.c"
    break;

  case 44:
#line 215 "src/language.y"
    { (yyval.node) = NULL; tc_free_while(); node_free_recursive(&(yyvsp[-3].node)); node_free_recursive(&(yyvsp[0].node)); }
#line 3124 "src/parser.c"
    break;

  case 45:
#line 216 "src/language.y"
    { tc_init_while("do_", NULL)   ; }
#line 3130 "src/parser.c"
    break;

  case 46:
#line 216 "src/language.y"
    { (yyval.node) = NULL; tc_free_do((yyvsp[-2].node)) ; node_free_recursive(&(yyvsp[-5].node)); node_free_recursive(&(yyvsp[-2].node)); }
#line 3136 "src/parser.c"
    break;

  case 47:
#line 220 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3142 "src/parser.c"
    break;

  case 48:
#line 221 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3148 "src/parser.c"
    break;

  case 49:
#line 225 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3154 "src/parser.c"
    break;

  case 50:
#line 226 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3160 "src/parser.c"
    break;

  case 51:
#line 230 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3166 "src/parser.c"
    break;

  case 52:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3172 "src/parser.c"
    break;

  case 53:
#line 235 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3178 "src/parser.c"
    break;

  case 54:
#line 236 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3184 "src/parser.c"
    break;

  case 55:
#line 240 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3190 "src/parser.c"
    break;

  case 56:
#line 241 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3196 "src/parser.c"
    break;

  case 57:
#line 242 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3202 "src/parser.c"
    break;

  case 58:
#line 246 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3208 "src/parser.c"
    break;

  case 59:
#line 247 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3214 "src/parser.c"
    break;

  case 60:
#line 248 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3220 "src/parser.c"
    break;

  case 61:
#line 249 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3226 "src/parser.c"
    break;

  case 62:
#line 250 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3232 "src/parser.c"
    break;

  case 63:
#line 254 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3238 "src/parser.c"
    break;

  case 64:
#line 255 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3244 "src/parser.c"
    break;

  case 65:
#line 256 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3250 "src/parser.c"
    break;

  case 66:
#line 260 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3256 "src/parser.c"
    break;

  case 67:
#line 261 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3262 "src/parser.c"
    break;

  case 68:
#line 262 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3268 "src/parser.c"
    break;

  case 69:
#line 263 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3274 "src/parser.c"
    break;

  case 70:
#line 267 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3280 "src/parser.c"
    break;

  case 71:
#line 268 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3286 "src/parser.c"
    break;

  case 72:
#line 269 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3292 "src/parser.c"
    break;

  case 73:
#line 270 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3298 "src/parser.c"
    break;

  case 74:
#line 271 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3304 "src/parser.c"
    break;

  case 75:
#line 272 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3310 "src/parser.c"
    break;

  case 76:
#line 276 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3316 "src/parser.c"
    break;

  case 77:
#line 277 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY)   ; free_label((yyvsp[-3].sval)); }
#line 3322 "src/parser.c"
    break;

  case 78:
#line 278 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve_fun((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval)); tc_fcall((yyval.node), NULL); }
#line 3328 "src/parser.c"
    break;

  case 79:
#line 279 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve_fun((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval)); tc_fcall((yyval.node), (yyvsp[-1].node)); }
#line 3334 "src/parser.c"
    break;

  case 80:
#line 283 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3340 "src/parser.c"
    break;

  case 81:
#line 284 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_arr(CHAR, NULL, (void*) (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3346 "src/parser.c"
    break;

  case 82:
#line 285 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_FLOAT, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3352 "src/parser.c"
    break;

  case 83:
#line 286 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_INT  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3358 "src/parser.c"
    break;

  case 84:
#line 287 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_HEX  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3364 "src/parser.c"
    break;

  case 85:
#line 288 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_CHAR , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3370 "src/parser.c"
    break;

  case 86:
#line 289 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3376 "src/parser.c"
    break;

  case 87:
#line 293 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); tc_fcall_args(NULL, (yyvsp[0].node)); }
#line 3382 "src/parser.c"
    break;

  case 88:
#line 294 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_fcall_args((yyvsp[-2].node), (yyvsp[0].node)); }
#line 3388 "src/parser.c"
    break;

  case 89:
#line 298 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3394 "src/parser.c"
    break;

  case 90:
#line 299 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3400 "src/parser.c"
    break;

  case 91:
#line 300 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3406 "src/parser.c"
    break;

  case 92:
#line 301 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3412 "src/parser.c"
    break;


#line 3416 "src/parser.c"

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
#line 304 "src/language.y"

void free_label(const char * str) {
	free((void*) str);
}
