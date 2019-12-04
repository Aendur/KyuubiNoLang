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
#line 89 "src/language.y"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7925

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  526

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
       0,   106,   106,   107,   111,   112,   113,   118,   119,   120,
     121,   122,   123,   127,   131,   132,   136,   137,   141,   142,
     146,   147,   148,   152,   153,   157,   158,   162,   163,   163,
     167,   168,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   184,   187,   188,   189,   190,   191,   192,   198,   198,
     198,   199,   203,   204,   208,   209,   213,   214,   218,   219,
     223,   224,   225,   229,   230,   231,   232,   233,   237,   238,
     239,   243,   244,   245,   246,   250,   251,   252,   253,   254,
     255,   259,   260,   261,   262,   266,   267,   268,   269,   270,
     271,   272,   276,   277,   281,   282,   283,   284
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
  "iteration_statement", "$@2", "$@3", "return_statement",
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
     305,   306,   307,   308,   309,   310,    59,    61,   123,   125,
      44,    91,    93,    40,    41,    60,    62,    43,    45,    42,
      47,    37,    33
};
# endif

#define YYPACT_NINF -271

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-271)))

#define YYTABLE_NINF -98

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     448,   -43,     6,    19,    21,    42,   479,   603,   -38,    93,
     217,   624,     1,    86,   716,  -271,   772,   821,  1444,    -1,
    1721,   353,  2609,   504,  1805,  4905,  4941,  4957,  1475,  1475,
    1828,  1475,  1475,  1475,    75,    11,   247,   193,  1187,    -3,
    6722,  6729,  4964,  5014,    96,  1981,    99,   101,   119,   129,
      31,   140,  1797,  2053,  1073,   139,  2856,  2887,  2974,   172,
    3005,  3075,   174,   192,   241,   200,   656,  2075,    95,  6745,
    6752,  6802,   196,  6809,  6825,  6832,  1475,  1475,  1475,  1475,
    1475,  1475,  1475,  1475,  1475,  1475,  1475,  1475,  1475,  1475,
      63,   296,  3106,  1828,   208,   275,   244,   310,  3176,  4287,
    3207,  1098,  3277,  3308,  3378,  3409,   272,   401,   270,   294,
      -4,    36,   132,   325,   323,  5021,   197,   326,  5037,   282,
     404,  1897,  1919,  1821,  2282,  2338,  2402,  6882,  6889,  6905,
    6912,  6962,    55,   332,   409,   329,  1828,   345,   331,  3479,
     431,   359,   381,   739,   392,   111,  5073,  2089,  5089,   375,
     560,   411,   395,  1828,   418,  3510,   341,   405,   351,  3580,
     436,   438,   373,   847,  3611,   447,   465,   472,  1406,  3681,
    3712,  3782,   481,  3813,  3883,  3914,  3984,  4015,  4085,  4116,
    4295,  6969,  6985,  6992,  7042,  7049,  1828,  7065,  2673,  5109,
    5125,  5140,  5190,  5205,  2162,  2162,  1828,  2162,  2162,  2162,
       4,    33,    90,   120,  1319,   518,  2140,  5221,  5271,  2500,
    1063,  1119,  4310,  4360,  4375,  2185,  2185,  1828,  2185,  2185,
    2185,   338,   242,   114,   917,  1251,  1644,  5284,  4425,  4440,
    4186,   993,  5299,  5335,  5350,  5366,  5386,  2316,  2316,  1828,
    2316,  2316,  2316,    24,    57,   229,  1373,  1468,  7100,  7115,
    5402,  5417,  2739,   771,  4490,  4505,  4521,  4571,  2477,  2477,
    1828,  2477,  2477,  2477,   105,   -12,    12,   271,   484,  5438,
    5453,  4586,  4602,  2075,   432,   459,  2075,   452,  4652,  3032,
    3133,  3234,  3335,  3436,  1828,  3537,  3638,  3739,  3840,   483,
    3941,  4042,  4143,  2162,  2162,  2162,  2162,  2162,  2162,  2162,
    2162,  2162,  2162,  2162,  2162,  2162,  2162,  2075,   554,   166,
    5467,  5517,  5530,  5543,  5593,  1828,  5606,  5619,  5669,  5682,
     489,  5695,  5745,  5758,  2185,  2185,  2185,  2185,  2185,  2185,
    2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,   545,  4287,
    2075,   742,  4663,  7125,  7136,  7151,  7187,  7201,  1828,  7211,
    7223,  7237,  7273,   532,  7287,  7297,  7309,  2316,  2316,  2316,
    2316,  2316,  2316,  2316,  2316,  2316,  2316,  2316,  2316,  2316,
    2316,  2075,   806,  2766,  5770,  5820,  5832,  5844,  5894,  1828,
    5906,  5918,  5968,  5980,   541,  5992,  6042,  6054,  2477,  2477,
    2477,  2477,  2477,  2477,  2477,  2477,  2477,  2477,  2477,  2477,
    2477,  2477,   549,  7359,   376,  7366,   569,  6069,   429,  2075,
     885,   584,  6119,    61,   183,  1655,  2271,  6738,  6818,  6898,
    6978,  4244,  7374,  7382,  7432,  7440,     9,   587,  4678,   437,
    2075,   985,   594,  4728,   340,   343,  1726,  2907,  1499,  7751,
    7761,  7771,  6132,  6145,  6195,  6208,  6221,   365,  4217,   621,
    6271,   458,  2075,  1292,   620,  6286,    70,   302,  2584,  2819,
    2558,  7843,  7850,  7857,  7450,  7460,  7510,  7520,  7530,    39,
     623,  4743,   530,  2075,  1365,   625,  4793,    -6,    66,   628,
     965,  2685,  7780,  7827,  7836,  6298,  6322,  6348,  6372,  6398,
     106,  7537,  7587,  6422,  6448,   629,  7595,   531,  7603,  4808,
    4824,   633,  6472,   550,  6498,   673,  6522,  6548,   650,  7613,
     617,  7623,  4874,  4889,   651,  6572,   622,  6584,  7673,  7681,
    6598,  6648,  7691,  7701,  6660,  6672
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,   709,    23,  -271,  -271,  -271,  -271,  -271,  -271,
     580,   -48,   494,   -93,   -54,  -271,  -271,  -271,  -271,  -271,
    -271,   696,  2508,  2345,  2125,  1943,  1608,  1255,   898,   -18,
     339,  -270,     8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    55,     9,    10,    90,    11,    12,   111,
     112,    56,    99,    57,    58,    59,    60,    61,    94,   165,
      62,    63,    35,    36,    37,    38,    39,    40,    41,    70,
     187,   117,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    95,    42,   102,   404,   -94,   139,   408,    13,    44,
     -56,   389,   207,    14,    13,   -94,   -57,   389,    17,   -63,
     -63,   -63,   -63,     8,   -63,   -63,   293,   228,   -95,     8,
     -96,   293,    42,    76,   -58,   -58,   390,   391,   429,    42,
      22,    23,    24,    25,    26,    27,   357,   250,   -56,   250,
     271,   -97,   -56,   -63,   -57,   -56,   294,    45,   -57,    20,
     142,   357,   -63,   -63,    84,    85,   164,   -54,   -54,    28,
      29,   451,   -58,   -55,   113,   207,   -58,    76,   174,   -56,
     358,    42,   178,   -57,   294,   102,   -54,   -52,   -59,   -59,
     390,   391,   -57,   358,    30,    21,   143,   -56,    31,    32,
     144,   -55,   472,    33,   252,   253,   254,   255,   256,   257,
     102,   -55,   -58,   -58,   295,   296,   228,   169,   207,   -56,
     102,    42,   133,   134,   102,   -57,   -59,   388,   388,   271,
     -59,    -9,   -57,   258,   259,   207,   -58,   -58,   326,   327,
     497,    42,   -60,   -60,   -60,   -60,    42,   297,   298,    -7,
      18,   113,   -12,    42,   -58,    92,    42,    42,   260,   115,
      42,   503,   261,   262,    93,   -54,   -55,   263,   207,   -54,
     -55,   -25,   157,   -58,   -58,   -25,   286,   286,   207,   286,
     286,   286,   -48,   510,   -60,   299,   300,   230,   -85,   -85,
     -85,   -85,   -23,   -85,   -85,   100,   -23,   317,   317,   207,
     317,   317,   317,    97,   516,   -59,   -59,   295,   296,   231,
     232,   233,   234,   235,   236,   -58,   -58,    78,    79,   350,
     350,   207,   350,   350,   350,   -85,   -85,   430,   103,   431,
     104,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   237,   238,
     381,   381,   207,   381,   381,   381,   448,   -59,   105,   -58,
     106,   -58,   -58,   359,   360,   250,   271,   -92,   250,   271,
     118,   -92,   107,   239,   -56,   325,   207,   240,   241,   -56,
      77,   136,   242,    -8,    19,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   250,
     271,   -58,   137,   -60,   -60,   -60,   -60,   207,   392,   393,
     -53,   -56,   -56,   -56,   -57,    77,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     138,    42,   250,   271,   -59,   -59,   359,   360,   -13,   -13,
     207,   -60,   140,    65,   145,   -60,   394,   395,   -57,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   250,   271,   -16,   -16,    43,   141,    43,
     324,   207,   -57,   325,   -59,   -59,   -59,   326,   327,   208,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   229,   146,   147,   324,   -10,    43,
     148,   250,   271,   151,   102,   154,    43,   -54,   -54,   -57,
     -57,   -24,   -59,   -59,   251,   -24,   251,   272,   153,   -13,
     -13,   -93,   250,   271,    65,   -93,    66,   -22,   209,   210,
     211,   212,   213,   214,   -55,   -55,   -59,   -59,    78,    79,
      42,   -11,   208,   -26,   250,   271,   147,   -26,    43,   -21,
     492,   252,   253,   254,   255,   256,   257,   215,   216,     1,
     -20,     2,     3,     4,     5,   250,   271,   -15,   -15,   160,
     -59,   252,   253,   254,   255,   256,   257,   162,   149,   159,
     258,   259,   217,   229,   -41,   208,   218,   219,    43,    15,
       1,   220,     2,     3,     4,     5,   272,   -14,   -14,   147,
     258,   259,   208,   494,   -49,   260,   403,   147,    43,   261,
     262,   500,   166,    43,   263,    53,   -63,   -63,   -63,   -63,
      43,   -63,   -63,    43,    43,   260,   407,    43,   147,   261,
     262,   170,   507,   405,   263,   208,   -86,   -86,   -86,   -86,
     171,   -86,   -86,   287,   287,   208,   287,   287,   287,   175,
     -68,   -68,   -68,   -68,   -63,   -68,   -68,   412,   -63,   -63,
     -63,   396,   397,   433,   318,   318,   208,   318,   318,   318,
     -86,   -86,   -27,   252,   253,   254,   255,   256,   257,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   351,   351,   208,   351,
     351,   351,   -68,   -68,   -68,   -68,   -68,   303,   304,   305,
     147,   147,   258,   259,   513,   519,   455,   382,   382,   208,
     382,   382,   382,    -2,    -2,   476,    -2,    -2,    -2,    -2,
     147,   491,   251,   272,   521,   251,   272,   260,   428,   -17,
     -17,   261,   262,   208,    -4,    -4,   263,    -4,    -4,    -4,
      -4,   493,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   251,   272,   498,   499,
     -61,   -61,   -61,   -61,   208,   392,   393,   109,   504,   110,
       3,     4,     5,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   147,    43,   251,
     272,   523,   147,   506,   511,   512,   525,   208,   -61,   517,
     -29,   518,   -61,   394,   395,   520,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     251,   272,   522,   524,    34,    16,    -6,    -6,   208,    -6,
      -6,    -6,    -6,   156,   339,     0,    72,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,    91,     2,     3,     4,     5,    96,     0,   251,   272,
       0,   252,   253,   254,   255,   256,   257,     0,     0,     0,
       0,   108,     0,   114,   116,     0,     0,     0,     0,   251,
     272,     0,    -3,    -3,     0,    -3,    -3,    -3,    -3,     0,
     258,   259,     0,     0,     0,     0,     0,    43,     0,   135,
       0,   251,   272,   -86,   -86,   -86,   -86,     0,   -86,   -86,
       0,     0,     0,     0,     0,   260,   450,     0,     0,   261,
     262,     0,   251,   272,   263,   252,   253,   254,   255,   256,
     257,    -5,    -5,     0,    -5,    -5,    -5,    -5,   -86,     0,
     150,   -86,   152,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   158,   258,   259,     0,     0,   -42,   161,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   167,   -42,   -42,   -42,   -42,     0,   260,
     471,     0,     0,   261,   262,     0,     0,     0,   263,     0,
       0,     0,   275,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   289,     0,   252,   253,   254,   255,   256,   257,
       0,     0,     0,   -42,     0,   -42,   -42,     0,     0,     0,
     -42,     0,     0,   320,   -42,   -42,     0,     0,     0,   -42,
       0,     0,     0,   258,   259,     0,    69,    71,   206,    73,
      74,    75,     0,     0,     0,   353,     0,     0,     0,   -60,
     -60,   -60,   -60,   227,   328,   329,     0,     0,   260,   496,
       0,     0,   261,   262,     0,     0,   384,   263,     0,     0,
       0,     0,     0,   249,     0,   249,   270,     0,     0,   402,
     116,     0,   406,   116,     0,     0,   -60,   -60,     0,     0,
     411,     0,   330,   331,   129,   130,   131,   -62,   -62,   -62,
     -62,   206,   392,   393,   252,   253,   254,   255,   256,   257,
       0,     0,     0,   427,   116,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   258,   259,   -62,     0,     0,     0,   -62,
     394,   395,   227,     0,   206,     0,   449,   116,     0,     0,
       0,     0,     0,     0,   454,   270,     0,     0,   260,   502,
     -85,   206,   261,   262,   340,   -85,   341,   263,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,   470,   116,     0,
       0,     0,     0,   -19,   -19,   475,   -19,   -19,   -19,   -19,
       0,     0,     0,     0,   206,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   285,   288,   206,   290,   291,   292,   -18,   -18,
       0,   -18,   -18,   -18,   -18,   495,   116,     0,     0,     0,
       0,     0,     0,   316,   319,   206,   321,   322,   323,     0,
     -86,     0,   -86,   -86,     0,     0,   501,   116,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   349,   352,   206,   354,   355,
     356,   -87,   -87,   -87,   -87,     0,   -87,   -87,   508,   116,
       0,     0,     0,     0,     0,     0,   380,   383,   206,   385,
     386,   387,     0,     0,     0,     0,     0,     0,     0,   514,
     116,   249,   270,     0,   249,   270,   -87,     0,   -87,   -87,
       0,     0,   206,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   423,   424,   425,   206,   249,   270,     0,     0,   -60,
     -60,   -60,   -60,   206,    80,    81,     0,     0,     0,     0,
       0,     0,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   444,   445,   446,   227,     0,     0,   249,   270,
       0,     0,     0,   -60,     0,     0,   206,     0,     0,     0,
       0,     0,    82,    83,     0,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   466,   467,   468,   249,   249,
     270,     0,     0,   -63,   -63,   -63,   -63,   206,   -63,   -63,
       0,     0,     0,     0,     0,   205,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   487,   488,   489,   270,
     226,   252,   253,   254,   255,   256,   257,   249,   270,     0,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   332,   333,
     248,     0,   248,   269,     0,     0,     0,     0,   249,   270,
     258,   259,     0,     0,     0,     0,     0,     0,     0,   127,
     128,   -63,   -63,   -63,   -63,     0,   -63,   -63,   205,     0,
     249,   270,     0,     0,     0,   260,   509,     0,     0,   261,
     262,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,   249,   270,     0,   252,   253,   254,   255,   256,   257,
       0,     0,     0,   -63,   -63,   -63,   301,   302,     0,   226,
       0,   205,     0,     0,     0,   -60,   -60,   -60,   -60,     0,
     361,   362,   269,   258,   259,     0,     0,   -43,   205,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   172,   -43,   -43,   -43,   -43,     0,   260,   515,
       0,     0,   261,   262,     0,   -60,     0,   263,   363,   364,
       0,   205,     0,     0,   -43,   -43,     0,     0,     0,     0,
       0,   205,     0,    22,    23,    24,    25,    26,    27,     0,
       0,     0,   -43,     0,   -43,   -43,     0,     0,     0,   -43,
       0,     0,   205,   -43,   -43,     0,     0,     0,   -43,     0,
       0,     0,    28,    29,   180,   181,   182,   183,   184,   185,
     -63,   -63,   -63,   -63,   205,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,    31,    32,    28,    29,   205,    33,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   248,   269,
     -63,   248,   269,   -63,   -63,   365,   366,     0,   186,   205,
       0,     0,    31,    32,     0,     0,     0,    33,   205,   205,
     205,   205,   205,   205,   205,   205,   421,   422,   -66,   -66,
       0,   205,   248,   269,   -66,   -66,   332,   333,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     226,   226,   226,   226,   226,   226,   226,   442,   443,     0,
       0,     0,   226,     0,     0,   248,   269,     0,     0,     0,
       0,     0,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   248,   248,   248,   248,   248,   248,   248,
     464,   465,     0,     0,     0,   248,   248,   269,     0,     0,
       0,     0,     0,     0,   205,     0,     0,     0,   204,     0,
       0,     0,     0,   269,   269,   269,   269,   269,   269,   269,
     269,   485,   486,   225,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,   248,   269,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   247,     0,   247,   268,   -61,   -61,   -61,
     -61,     0,   297,   298,     0,   248,   269,     0,   123,   124,
     125,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,   -68,   -68,     0,     0,   248,   269,   -68,
     -68,   -68,   -68,   334,   335,   336,     0,     0,     0,   -61,
     299,   300,    46,     0,     2,     3,     4,     5,   248,   269,
      22,    23,    24,    25,    26,    27,    47,     0,    48,    49,
      50,    51,   225,     0,   204,     0,     0,     0,   -61,   -61,
     -61,   -61,     0,   328,   329,   268,     0,     0,     0,    28,
      29,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,     0,     0,     0,    30,   -61,   -61,     0,    31,    32,
       0,   330,   331,    33,   204,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   204,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,   204,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,     0,   -32,   -32,   188,   189,   190,
     191,   192,   193,   -66,   -66,   -66,   -66,   204,   -66,   -66,
       0,     0,     0,   -32,     0,   -32,   -32,     0,     0,     0,
     -32,   -87,   -87,     0,   -32,   -32,   194,   195,   204,   -32,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -66,     0,     0,
       0,   247,   268,     0,   247,   268,   -66,   -66,    84,    85,
       0,   196,   204,     0,     0,   197,   198,     0,     0,     0,
     199,   204,   204,   204,   204,   417,   418,   419,   420,     0,
       0,     0,     0,     0,   204,   247,   268,     0,     0,   -61,
     -61,   -61,   -61,   204,    80,    81,     0,     0,     0,     0,
       0,     0,   225,   225,   225,   225,   438,   439,   440,   441,
       0,   -62,   -62,   -62,   -62,   225,    80,    81,   247,   268,
       0,     0,     0,   -61,     0,     0,   204,     0,     0,     0,
       0,     0,    82,    83,     0,   247,   247,   247,   247,   460,
     461,   462,   463,   203,     0,   -62,     0,     0,   247,   247,
     268,     0,     0,     0,    82,    83,     0,   204,   224,     0,
     209,   210,   211,   212,   213,   214,   268,   268,   268,   268,
     481,   482,   483,   484,     0,     0,     0,     0,   246,   268,
     246,   267,     0,     0,     0,     0,     0,   247,   268,   215,
     216,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,   247,   268,
       0,     0,     0,     0,   217,     0,     0,     0,   218,   219,
       0,     0,     0,   220,   -28,     0,   -28,   -28,   -28,   -28,
     247,   268,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,   224,     0,   203,
       0,   247,   268,     0,   231,   232,   233,   234,   235,   236,
     267,   -28,   -28,     0,     0,     0,   203,     0,   252,   253,
     254,   255,   256,   257,     0,     0,     0,     0,     0,   -28,
       0,   -28,    98,   237,   238,     0,   -28,     0,     0,     0,
     -28,   -28,     0,     0,     0,   -28,     0,   258,   259,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   203,
       0,     0,   240,   241,     0,     0,     0,   242,     0,     0,
       0,     0,   260,     0,     0,   202,   261,   262,     0,     0,
     203,   263,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
     223,   278,   279,   280,   281,   282,   283,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   245,   266,   309,   310,   311,   312,   313,   314,
     194,   195,   120,   203,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   246,   267,   202,   246,
     267,     0,     0,   215,   216,   284,     0,   203,     0,   197,
     198,     0,     0,     0,   199,     0,   203,   203,   415,   416,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   203,
     246,   267,   218,   219,     0,     0,     0,   220,   203,   223,
       0,   202,     0,     0,     0,     0,     0,   224,   224,   436,
     437,     0,   266,     0,     0,     0,     0,     0,   202,     0,
     224,     0,     0,   246,   267,     0,     0,     0,     0,     0,
       0,   203,     0,   -62,   -62,   -62,   -62,     0,   297,   298,
     246,   246,   458,   459,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   202,     0,   246,   246,   267,     0,     0,     0,     0,
       0,   202,   203,     0,     0,   342,   343,   344,   345,   346,
     347,   267,   267,   479,   480,   -62,   299,   300,   -67,     0,
       0,     0,   202,     0,   267,     0,     0,   -67,   -67,    84,
      85,     0,   246,   267,   237,   238,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   202,   -64,   -64,     0,     0,     0,
       0,     0,     0,   246,   267,   201,     0,     0,     0,   348,
       0,     0,     0,   240,   241,   202,     0,     0,   242,     0,
     222,     0,     0,     0,   -64,   246,   267,     0,   245,   266,
       0,   245,   266,   -64,   -64,    84,    85,     0,     0,   202,
     244,     0,   244,   265,     0,     0,   246,   267,   202,   414,
       0,   119,     0,     0,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   202,   245,   266,     0,     0,     0,     0,   201,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     435,     0,     0,     0,     0,     0,     0,     0,   -65,     0,
       0,     0,   223,     0,     0,   245,   266,   -65,   -65,    84,
      85,     0,     0,   202,     0,     0,     0,     0,     0,   222,
       0,   201,   245,   457,     0,     0,   373,   374,   375,   376,
     377,   378,   265,     0,     0,   245,   245,   266,   201,     0,
       0,     0,     0,     0,   202,     0,     0,     0,     0,     0,
       0,     0,     0,   266,   478,   258,   259,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   266,   -85,   -85,     0,
       0,   201,     0,     0,   245,   266,     0,     0,   200,     0,
     379,   201,     0,     0,   261,   262,     0,     0,     0,   263,
       0,     0,     0,   221,     0,   245,   266,   -85,     0,   -85,
     -85,   307,   201,   308,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   243,     0,   243,   264,   245,   266,     0,
     -66,   -66,   -66,   -66,   201,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,   245,   266,
       0,   200,     0,     0,     0,   201,   -61,   -61,   -61,   -61,
       0,   361,   362,     0,     0,     0,     0,     0,   244,   265,
     -66,   244,   265,   -66,   -66,   365,   366,     0,     0,   201,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   413,     0,
       0,     0,   221,     0,   200,     0,   -61,     0,     0,   363,
     364,   201,   244,   265,     0,   264,     0,     0,     0,     0,
     201,   200,     0,     0,     0,   -85,   -85,     0,     0,   434,
      67,     0,    68,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   222,     0,     0,   244,   265,     0,     0,     0,
       0,     0,     0,   201,   200,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   456,     0,   200,     0,     0,   -66,   -66,   -66,
     -66,     0,   -66,   -66,     0,   244,   244,   265,     0,     0,
       0,     0,     0,     0,   201,   200,     0,     0,     0,     0,
     -85,     0,     0,   477,   276,     0,   277,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -66,   265,   200,     0,   -66,
     -66,   -66,   396,   397,   244,   265,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   200,     0,
       0,     0,     0,     0,     0,   244,   265,     0,     0,     0,
       0,   243,   264,     0,   243,   264,     0,     0,   -85,   -85,
     -85,   -85,   200,   -85,   -85,     0,   -85,   244,   265,   -85,
     371,     0,   372,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   426,   243,   264,     0,   244,   265,
       0,     0,     0,   200,     0,     0,   -85,   473,     0,   474,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,   -62,   -62,   -62,   -62,   447,   361,   362,   243,   264,
       0,     0,     0,     0,     0,     0,   200,   -37,     0,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,   469,   243,
     264,   -62,     0,     0,   363,   364,     0,   200,    46,     0,
       2,     3,     4,     5,   -37,   -37,    22,    23,    24,    25,
      26,    27,    47,     0,    48,    49,    50,    51,     0,   490,
       0,     0,   -37,     0,   -37,   -37,     0,   243,   264,   -37,
       0,     0,     0,   -37,   -37,    28,    29,     0,   -37,   -62,
     -62,   -62,   -62,     0,   328,   329,     0,     0,   243,   264,
       0,     0,     0,    52,     0,    53,   101,     0,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,     0,    33,
     243,   264,     0,     0,     0,     0,   -62,   -62,     0,     0,
       0,     0,   330,   331,     0,   -30,     0,   -30,   -30,   -30,
     -30,   243,   264,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -30,   -30,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -30,     0,   -30,   -30,     0,     0,     0,   -30,     0,     0,
       0,   -30,   -30,   -35,   -35,     0,   -30,     0,     0,     0,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -35,     0,   -35,   -35,     0,     0,     0,   -35,     0,
       0,     0,   -35,   -35,     0,     0,   -36,   -35,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -36,   -36,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,   -36,     0,   -36,   -36,     0,     0,     0,   -36,     0,
       0,     0,   -36,   -36,   -40,   -40,     0,   -36,     0,     0,
       0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -40,     0,   -40,   -40,     0,     0,     0,   -40,
       0,     0,     0,   -40,   -40,     0,     0,   -27,   -40,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -27,   -27,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -27,     0,   -27,   -27,     0,     0,     0,   -27,
       0,     0,     0,   -27,   -27,   -33,   -33,     0,   -27,     0,
       0,     0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -33,     0,   -33,   -33,     0,     0,     0,
     -33,     0,     0,     0,   -33,   -33,     0,     0,   -31,   -33,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -31,   -31,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,   -31,     0,   -31,   -31,     0,     0,     0,
     -31,     0,     0,     0,   -31,   -31,   -39,   -39,     0,   -31,
       0,     0,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -39,     0,   -39,   -39,     0,     0,
       0,   -39,     0,     0,     0,   -39,   -39,     0,     0,   -38,
     -39,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -38,   -38,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,   -38,     0,   -38,   -38,     0,     0,
       0,   -38,     0,     0,     0,   -38,   -38,   -34,   -34,     0,
     -38,     0,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -34,     0,   -34,   -34,     0,
       0,     0,   -34,     0,     0,     0,   -34,   -34,     0,     0,
      46,   -34,     2,     3,     4,     5,     0,     0,    22,    23,
      24,    25,    26,    27,    47,     0,    48,    49,    50,    51,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,    28,    29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,    52,     0,    53,   155,     0,
       0,     0,    30,     0,     0,     0,    31,    32,   -29,   -29,
       0,    33,     0,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -29,     0,   -29,   -29,
       0,     0,     0,   -29,     0,     0,     0,   -29,   -29,     0,
       0,    46,   -29,     2,     3,     4,     5,     0,     0,    22,
      23,    24,    25,    26,    27,    47,     0,    48,    49,    50,
      51,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,    46,     0,     2,     3,     4,     5,    28,    29,
      22,    23,    24,    25,    26,    27,    47,     0,    48,    49,
      50,    51,     0,     0,     0,     0,    52,     0,    53,   163,
       0,     0,     0,    30,     0,     0,     0,    31,    32,    28,
      29,     0,    33,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,     0,   -75,   -75,    52,     0,    53,
     168,     0,     0,     0,    30,     0,     0,     0,    31,    32,
       0,     0,   -50,    33,   -50,   -50,   -50,   -50,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,   -51,     0,   -51,   -51,   -51,   -51,   -50,
     -50,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,     0,     0,     0,     0,   -50,     0,   -50,
     -50,     0,     0,     0,   -50,     0,     0,     0,   -50,   -50,
     -51,   -51,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -51,     0,
     -51,   -51,     0,     0,     0,   -51,     0,     0,     0,   -51,
     -51,     0,     0,    46,   -51,     2,     3,     4,     5,     0,
       0,    22,    23,    24,    25,    26,    27,    47,     0,    48,
      49,    50,    51,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,   -44,     0,   -44,   -44,   -44,   -44,
      28,    29,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,    52,     0,
      53,   173,     0,     0,     0,    30,     0,     0,     0,    31,
      32,   -44,   -44,     0,    33,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -44,
       0,   -44,   -44,     0,     0,     0,   -44,     0,     0,     0,
     -44,   -44,     0,     0,    46,   -44,     2,     3,     4,     5,
       0,     0,    22,    23,    24,    25,    26,    27,    47,     0,
      48,    49,    50,    51,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,    46,     0,     2,     3,     4,
       5,    28,    29,    22,    23,    24,    25,    26,    27,    47,
       0,    48,    49,    50,    51,     0,     0,     0,     0,    52,
       0,    53,   176,     0,     0,     0,    30,     0,     0,     0,
      31,    32,    28,    29,     0,    33,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
      52,     0,    53,   177,     0,     0,     0,    30,     0,     0,
       0,    31,    32,     0,     0,   -45,    33,   -45,   -45,   -45,
     -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -45,   -45,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
     -45,     0,   -45,   -45,     0,     0,     0,   -45,     0,     0,
       0,   -45,   -45,   -46,   -46,     0,   -45,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -46,     0,   -46,   -46,     0,     0,     0,   -46,     0,
       0,     0,   -46,   -46,     0,     0,    46,   -46,     2,     3,
       4,     5,     0,     0,    22,    23,    24,    25,    26,    27,
      47,     0,    48,    49,    50,    51,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,   -47,     0,   -47,
     -47,   -47,   -47,    28,    29,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,    52,     0,    53,   179,     0,     0,     0,    30,     0,
       0,     0,    31,    32,   -47,   -47,     0,    33,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -47,     0,   -47,   -47,     0,     0,     0,   -47,
       0,     0,     0,   -47,   -47,     0,     0,   -28,   -47,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,    46,     0,
       2,     3,     4,     5,   -28,   -28,    22,    23,    24,    25,
      26,    27,    47,     0,    48,    49,    50,    51,     0,     0,
       0,     0,   -28,     0,   -28,   338,     0,     0,     0,   -28,
       0,     0,     0,   -28,   -28,    28,    29,     0,   -28,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
       0,   -69,   -69,    52,     0,    53,   505,     0,     0,     0,
      30,     0,     0,     0,    31,    32,     0,     0,    46,    33,
       2,     3,     4,     5,     0,     0,    22,    23,    24,    25,
      26,    27,    47,     0,    48,    49,    50,    51,   -69,   -69,
     -69,   -69,   -69,   303,   304,   305,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,     0,    28,    29,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,
       0,     0,     0,    52,     0,    53,     0,     0,     0,     0,
      30,   -85,     0,     0,    31,    32,   273,     0,   274,    33,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -88,     0,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,     0,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -89,     0,   -89,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -90,     0,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -75,   -75,   -75,
     -75,     0,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,     0,   -75,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -81,     0,   -81,
     -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -87,   -89,   -89,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,     0,   -88,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -89,     0,
       0,   -89,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -90,   -81,
     -81,   -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   401,     0,     0,   -75,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -81,
       0,     0,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -85,   -85,   -85,   -85,     0,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,     0,
       0,     0,     0,   409,     0,   410,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   452,   -85,   453,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -83,     0,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -91,     0,   -91,   -91,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -83,     0,     0,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -91,   -91,   -91,   -91,     0,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -91,   -84,   -84,   -91,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -82,     0,   -82,   -82,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -84,     0,   -84,   -84,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -82,   -82,   -82,   -82,
       0,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -82,   -88,   -88,   -82,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -84,     0,     0,   -84,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -75,   -75,   -75,   -75,
       0,   -75,   -75,     0,     0,     0,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -90,   -90,     0,     0,     0,     0,     0,
     -75,    89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -83,   -83,   -83,   -83,     0,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,     0,   -91,   -91,     0,     0,     0,     0,
     -81,   -81,     0,     0,     0,     0,     0,   -83,   -83,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -91,   -91,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -84,   -84,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -88,   -88,   -88,   -88,   -86,   -88,   -88,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -87,     0,     0,     0,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,     0,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -89,   -75,   -75,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -90,     0,     0,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   306,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -81,   -81,   -81,   -81,     0,   -81,   -81,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -81,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -71,   -71,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -86,   -87,   -87,   -87,
     -87,   -86,   -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -87,   -89,   -89,     0,     0,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -90,   -90,
     -90,   -90,   -88,   -90,   -90,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -89,   -75,   -75,   -75,   -75,   -89,   -75,
     -75,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -81,
     -81,   -81,   -81,   -90,   -81,   -81,     0,     0,   -90,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   370,
     -68,   -68,   -68,   -68,   -75,   -68,   -68,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -81,   -71,   -71,   -71,   -71,   -81,
     -71,   -71,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -86,
     -86,   -86,   -86,     0,   -86,   -86,     0,     0,   -68,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   398,   399,   400,
       0,     0,     0,   -71,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -86,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,     0,   -87,   -87,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,     0,     0,     0,     0,   -87,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,     0,
     -90,   -90,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,
       0,     0,   -90,   -90,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -75,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,     0,   -76,   -76,     0,     0,     0,     0,   -81,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -76,   -76,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,
     -77,     0,   -77,   -77,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,     0,     0,     0,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -87,   -87,   -87,   -87,     0,   -87,   -87,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,     0,   -88,
     -88,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
     -87,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -88,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,
       0,   -90,   -90,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,     0,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -90,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -79,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -75,     0,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,     0,   -77,
     -77,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,     0,     0,
       0,     0,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,     0,   -70,   -70,     0,     0,   -91,     0,     0,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   334,   335,   336,   -70,   -70,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   334,   335,   336,   -72,   -72,   -72,
     -72,     0,   -72,   -72,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,     0,   -73,   -73,     0,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
       0,     0,     0,     0,   -72,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,   -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -83,   -83,   -83,   -83,     0,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,     0,   -83,     0,
       0,     0,     0,   -83,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -91,   -70,   -70,   -70,   -70,   -91,   -70,
     -70,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -69,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   398,   399,   400,
     -72,   -72,   -72,   -72,     0,   -72,   -72,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   398,   399,   400,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -74,   -74,   -74,   -74,     0,   -74,   -74,     0,     0,     0,
       0,     0,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,   -82,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,   -84,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,     0,
       0,   -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -82,   -82,   -82,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,   -91,   -91,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,   -82,
       0,     0,     0,     0,   -82,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,     0,     0,     0,   -84,   -91,   -91,   -91,   -91,
     -84,   -91,   -91,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -82,   -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,
       0,     0,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -91,     0,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -82,   -82,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -84,   -84,   -84,   -84,     0,   -84,   -84,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,
     -84,     0,     0,     0,     0,     0,     0,   -84,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -84,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -75,   -75,   -75,   -75,   -68,   -75,
     -75,     0,     0,     0,     0,   -71,     0,   -68,   -68,   -68,
     -68,    86,    87,    88,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -79,   -66,   -66,   -66,   301,   302,     0,   -75,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -76,   -76,   -76,   -76,     0,   -76,   -76,     0,     0,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -78,   -78,   -78,   -78,   -80,   -78,
     -78,     0,     0,     0,     0,   -76,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,   -67,   -67,   -67,   301,   302,     0,   -78,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,     0,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -73,   -73,   -73,   -73,   -69,   -73,
     -73,     0,     0,     0,     0,   -70,     0,   -69,   -69,   -69,
     -69,    86,    87,    88,   -70,   -70,   -70,   -70,    86,    87,
      88,   -72,   -64,   -64,   -64,   301,   302,     0,   -73,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -88,   -88,   -88,   -88,   -74,   -88,
     -88,     0,     0,     0,     0,   -86,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -87,   -65,   -65,   -65,   301,   302,     0,   -88,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,   -89,     0,
       0,     0,     0,     0,     0,   -90,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -81,   -68,   -68,   -68,   -68,     0,   -68,   -68,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -71,   -71,   -71,
     -71,     0,   -71,   -71,     0,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -68,   -87,   -87,   -68,   -68,   -68,   -68,   367,
     368,   369,     0,   -88,   -88,   -88,   -88,   -71,   -88,   -88,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -89,
     -89,   -89,   -89,   -88,   -89,   -89,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -89,
     -75,   -75,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -81,
     -81,   -81,   -81,   -90,   -81,   -81,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -79,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -80,   -80,   -80,   -80,   -81,
     -80,   -80,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -76,
     -76,   -76,   -76,     0,   -76,   -76,     0,     0,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -80,   -78,   -78,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,     0,   -72,   -72,   -72,   -72,     0,   -72,
     -72,     0,     0,     0,     0,   -83,     0,     0,     0,     0,
       0,     0,   -91,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -70,   -70,
     -70,   -70,   -70,   303,   304,   305,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -73,   -73,   -73,   -73,     0,   -73,
     -73,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,     0,
       0,     0,   -69,   -69,   -69,   -69,     0,   -69,   -69,     0,
       0,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -69,     0,     0,   -69,   -69,   -69,   -69,   367,
     368,   369,   -70,     0,     0,   -70,   -70,   -70,   -70,   367,
     368,   369,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,     0,
       0,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -82,
     -82,   -82,   -82,     0,   -82,   -82,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -74,   -82,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -84,
     -84,   -84,   -84,     0,   -84,   -84,     0,   -83,   -83,   -83,
     -83,     0,   -83,   -83,     0,   -91,   -91,   -91,   -91,     0,
     -91,   -91,     0,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,     0,   -84,     0,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -91,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -82,   -82,   -82,   -82,     0,
     -82,   -82,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,     0,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,
       0,     0,     0,   -65,   -65,   -65,   -65,     0,   -65,   -65,
       0,     0,   -67,   -67,   -67,   -67,     0,   -67,   -67,     0,
     -67,   -67,     0,     0,     0,     0,   -67,   -67,   332,   333,
     -64,   -64,     0,     0,     0,     0,   -64,   -64,   332,   333,
     -65,   -65,     0,     0,     0,     0,   -65,   -65,   332,   333,
     -67,     0,     0,     0,   -67,   -67,   -67,   396,   397,   -64,
     -64,   -64,   -64,     0,   -64,   -64,     0,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -65,
     -65,   -65,   -65,     0,   -65,   -65,     0,   -64,     0,     0,
       0,   -64,   -64,   -64,   396,   397,   -65,     0,     0,     0,
     -65,   -65,   -65,   396,   397,   -67,     0,     0,   -67,   -67,
     365,   366,   -64,     0,     0,   -64,   -64,   365,   366,   -65,
       0,     0,   -65,   -65,   365,   366
};

static const yytype_int16 yycheck[] =
{
      18,    49,    20,    57,   274,     9,    99,   277,     0,    10,
      22,    23,    30,    56,     6,     9,    22,    23,    56,    22,
      23,    24,    25,     0,    27,    28,    22,    45,     9,     6,
       9,    22,    50,    22,    22,    23,    24,    25,   308,    57,
       9,    10,    11,    12,    13,    14,    22,    65,    60,    67,
      68,     9,    64,    56,    60,    22,    23,    58,    64,    58,
      64,    22,    65,    66,    67,    68,   159,    56,    64,    38,
      39,   341,    60,    64,    66,    93,    64,    22,   171,    22,
      23,    99,   175,    22,    23,   139,    62,    56,    22,    23,
      24,    25,    22,    23,    63,     9,    60,    64,    67,    68,
      64,    62,   372,    72,     9,    10,    11,    12,    13,    14,
     164,    56,    22,    23,    24,    25,   134,   165,   136,    62,
     174,   139,    59,    60,   178,    64,    60,    22,    22,   147,
      64,    56,    62,    38,    39,   153,    22,    23,    24,    25,
     410,   159,    22,    23,    24,    25,   164,    27,    28,    56,
      57,   143,    56,   171,    64,    56,   174,   175,    63,    64,
     178,   431,    67,    68,    63,    60,    60,    72,   186,    64,
      64,    60,    61,    59,    60,    64,   194,   195,   196,   197,
     198,   199,    63,   453,    64,    65,    66,    58,    22,    23,
      24,    25,    60,    27,    28,    56,    64,   215,   216,   217,
     218,   219,   220,    63,   474,    22,    23,    24,    25,     9,
      10,    11,    12,    13,    14,    22,    23,    24,    25,   237,
     238,   239,   240,   241,   242,    59,    60,    61,    56,    63,
      56,    65,    66,    67,    68,    69,    70,    71,    38,    39,
     258,   259,   260,   261,   262,   263,   339,    64,    56,    56,
       9,    22,    23,    24,    25,   273,   274,    60,   276,   277,
      64,    64,    62,    63,    22,    23,   284,    67,    68,    22,
      23,    63,    72,    56,    57,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,    62,    17,    22,    23,    24,    25,   315,    27,    28,
      56,    59,    60,    56,    22,    23,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      10,   339,   340,   341,    22,    23,    24,    25,    56,    57,
     348,    60,    62,    61,     9,    64,    65,    66,    56,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,    59,    60,    18,    64,    20,
      22,   379,    22,    23,    62,    22,    23,    24,    25,    30,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,    45,    62,    60,    22,    56,    50,
      64,   409,   410,    64,   448,    64,    57,    59,    60,    59,
      60,    60,    59,    60,    65,    64,    67,    68,    63,    56,
      57,    60,   430,   431,    61,    64,    63,    58,     9,    10,
      11,    12,    13,    14,    59,    60,    22,    23,    24,    25,
     448,    56,    93,    60,   452,   453,    60,    64,    99,    58,
      64,     9,    10,    11,    12,    13,    14,    38,    39,     1,
      58,     3,     4,     5,     6,   473,   474,    56,    57,    64,
      56,     9,    10,    11,    12,    13,    14,    62,    59,    58,
      38,    39,    63,   134,    56,   136,    67,    68,   139,     0,
       1,    72,     3,     4,     5,     6,   147,    56,    57,    60,
      38,    39,   153,    64,    58,    63,    64,    60,   159,    67,
      68,    64,    64,   164,    72,    58,    22,    23,    24,    25,
     171,    27,    28,   174,   175,    63,    64,   178,    60,    67,
      68,    56,    64,    64,    72,   186,    22,    23,    24,    25,
      58,    27,    28,   194,   195,   196,   197,   198,   199,    58,
      22,    23,    24,    25,    60,    27,    28,    64,    64,    65,
      66,    67,    68,    64,   215,   216,   217,   218,   219,   220,
      56,    57,    17,     9,    10,    11,    12,    13,    14,    65,
      66,    67,    68,    69,    70,    71,   237,   238,   239,   240,
     241,   242,    64,    65,    66,    67,    68,    69,    70,    71,
      60,    60,    38,    39,    64,    64,    64,   258,   259,   260,
     261,   262,   263,     0,     1,    64,     3,     4,     5,     6,
      60,    62,   273,   274,    64,   276,   277,    63,    64,    59,
      60,    67,    68,   284,     0,     1,    72,     3,     4,     5,
       6,    62,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    64,    62,
      22,    23,    24,    25,   315,    27,    28,     1,    64,     3,
       4,     5,     6,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    60,   339,   340,
     341,    64,    60,    62,    64,    62,    64,   348,    60,    64,
      17,    62,    64,    65,    66,    62,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,    62,    62,    18,     6,     0,     1,   379,     3,
       4,     5,     6,   143,   230,    -1,    30,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,    45,     3,     4,     5,     6,    50,    -1,   409,   410,
      -1,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,   430,
     431,    -1,     0,     1,    -1,     3,     4,     5,     6,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,   448,    -1,    93,
      -1,   452,   453,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
      68,    -1,   473,   474,    72,     9,    10,    11,    12,    13,
      14,     0,     1,    -1,     3,     4,     5,     6,    57,    -1,
     134,    60,   136,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,   147,    38,    39,    -1,    -1,     1,   153,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    63,
      64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,   186,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,   196,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,   217,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    38,    39,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,   239,    -1,    -1,    -1,    22,
      23,    24,    25,    45,    27,    28,    -1,    -1,    63,    64,
      -1,    -1,    67,    68,    -1,    -1,   260,    72,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,   273,
     274,    -1,   276,   277,    -1,    -1,    59,    60,    -1,    -1,
     284,    -1,    65,    66,    86,    87,    88,    22,    23,    24,
      25,    93,    27,    28,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,   307,   308,    -1,    -1,    -1,    -1,    -1,
      -1,   315,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    38,    39,    60,    -1,    -1,    -1,    64,
      65,    66,   134,    -1,   136,    -1,   340,   341,    -1,    -1,
      -1,    -1,    -1,    -1,   348,   147,    -1,    -1,    63,    64,
      57,   153,    67,    68,    61,    62,    63,    72,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,   371,   372,    -1,
      -1,    -1,    -1,     0,     1,   379,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,   186,    22,    23,    24,    25,    -1,
      27,    28,   194,   195,   196,   197,   198,   199,     0,     1,
      -1,     3,     4,     5,     6,   409,   410,    -1,    -1,    -1,
      -1,    -1,    -1,   215,   216,   217,   218,   219,   220,    -1,
      57,    -1,    59,    60,    -1,    -1,   430,   431,    65,    66,
      67,    68,    69,    70,    71,   237,   238,   239,   240,   241,
     242,    22,    23,    24,    25,    -1,    27,    28,   452,   453,
      -1,    -1,    -1,    -1,    -1,    -1,   258,   259,   260,   261,
     262,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,
     474,   273,   274,    -1,   276,   277,    57,    -1,    59,    60,
      -1,    -1,   284,    -1,    65,    66,    67,    68,    69,    70,
      71,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,    -1,    -1,    22,
      23,    24,    25,   315,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,    -1,   340,   341,
      -1,    -1,    -1,    56,    -1,    -1,   348,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,    -1,    22,    23,    24,    25,   379,    27,    28,
      -1,    -1,    -1,    -1,    -1,    30,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
      45,     9,    10,    11,    12,    13,    14,   409,   410,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,   430,   431,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    22,    23,    24,    25,    -1,    27,    28,    93,    -1,
     452,   453,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,   473,   474,    -1,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,   134,
      -1,   136,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,   147,    38,    39,    -1,    -1,     1,   153,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    63,    64,
      -1,    -1,    67,    68,    -1,    62,    -1,    72,    65,    66,
      -1,   186,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,   196,    -1,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    63,
      -1,    -1,   217,    67,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    38,    39,     9,    10,    11,    12,    13,    14,
      22,    23,    24,    25,   239,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    38,    39,   260,    72,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,   273,   274,
      62,   276,   277,    65,    66,    67,    68,    -1,    63,   284,
      -1,    -1,    67,    68,    -1,    -1,    -1,    72,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    59,    60,
      -1,   306,   307,   308,    65,    66,    67,    68,    -1,    -1,
     315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,    -1,   337,    -1,    -1,   340,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,    -1,    -1,    -1,   370,   371,   372,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    45,    -1,    -1,   401,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   409,   410,    22,    23,    24,    25,
      -1,    27,    28,    65,    -1,    67,    68,    22,    23,    24,
      25,    -1,    27,    28,    -1,   430,   431,    -1,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    59,    60,    -1,    -1,   452,   453,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    64,
      65,    66,     1,    -1,     3,     4,     5,     6,   473,   474,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,   134,    -1,   136,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,   147,    -1,    -1,    -1,    38,
      39,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    63,    59,    60,    -1,    67,    68,
      -1,    65,    66,    72,   186,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,   196,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    38,    39,     9,    10,    11,
      12,    13,    14,    22,    23,    24,    25,   239,    27,    28,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      63,    56,    57,    -1,    67,    68,    38,    39,   260,    72,
      65,    66,    67,    68,    69,    70,    71,    56,    -1,    -1,
      -1,   273,   274,    -1,   276,   277,    65,    66,    67,    68,
      -1,    63,   284,    -1,    -1,    67,    68,    -1,    -1,    -1,
      72,   293,   294,   295,   296,   297,   298,   299,   300,    -1,
      -1,    -1,    -1,    -1,   306,   307,   308,    -1,    -1,    22,
      23,    24,    25,   315,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    22,    23,    24,    25,   337,    27,    28,   340,   341,
      -1,    -1,    -1,    56,    -1,    -1,   348,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,    30,    -1,    56,    -1,    -1,   370,   371,
     372,    -1,    -1,    -1,    65,    66,    -1,   379,    45,    -1,
       9,    10,    11,    12,    13,    14,   388,   389,   390,   391,
     392,   393,   394,   395,    -1,    -1,    -1,    -1,    65,   401,
      67,    68,    -1,    -1,    -1,    -1,    -1,   409,   410,    38,
      39,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,   430,   431,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,     1,    -1,     3,     4,     5,     6,
     452,   453,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,   134,    -1,   136,
      -1,   473,   474,    -1,     9,    10,    11,    12,    13,    14,
     147,    38,    39,    -1,    -1,    -1,   153,    -1,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    38,    39,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    -1,    38,    39,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,   196,
      -1,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    30,    67,    68,    -1,    -1,
     217,    72,    22,    23,    24,    25,    -1,    27,    28,    -1,
      45,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,   239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    68,     9,    10,    11,    12,    13,    14,
      38,    39,    77,   260,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,   273,   274,    93,   276,
     277,    -1,    -1,    38,    39,    63,    -1,   284,    -1,    67,
      68,    -1,    -1,    -1,    72,    -1,   293,   294,   295,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,   306,
     307,   308,    67,    68,    -1,    -1,    -1,    72,   315,   134,
      -1,   136,    -1,    -1,    -1,    -1,    -1,   324,   325,   326,
     327,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     337,    -1,    -1,   340,   341,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    22,    23,    24,    25,    -1,    27,    28,
     357,   358,   359,   360,    22,    23,    24,    25,    -1,    27,
      28,   186,    -1,   370,   371,   372,    -1,    -1,    -1,    -1,
      -1,   196,   379,    -1,    -1,     9,    10,    11,    12,    13,
      14,   388,   389,   390,   391,    64,    65,    66,    56,    -1,
      -1,    -1,   217,    -1,   401,    -1,    -1,    65,    66,    67,
      68,    -1,   409,   410,    38,    39,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,   239,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,   430,   431,    30,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,   260,    -1,    -1,    72,    -1,
      45,    -1,    -1,    -1,    56,   452,   453,    -1,   273,   274,
      -1,   276,   277,    65,    66,    67,    68,    -1,    -1,   284,
      65,    -1,    67,    68,    -1,    -1,   473,   474,   293,   294,
      -1,    76,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,   306,   307,   308,    -1,    -1,    -1,    -1,    93,    -1,
     315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
     325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,   337,    -1,    -1,   340,   341,    65,    66,    67,
      68,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,   134,
      -1,   136,   357,   358,    -1,    -1,     9,    10,    11,    12,
      13,    14,   147,    -1,    -1,   370,   371,   372,   153,    -1,
      -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,   389,    38,    39,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,   401,    27,    28,    -1,
      -1,   186,    -1,    -1,   409,   410,    -1,    -1,    30,    -1,
      63,   196,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    45,    -1,   430,   431,    57,    -1,    59,
      60,    61,   217,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    65,    -1,    67,    68,   452,   453,    -1,
      22,    23,    24,    25,   239,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,   473,   474,
      -1,    93,    -1,    -1,    -1,   260,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,   273,   274,
      62,   276,   277,    65,    66,    67,    68,    -1,    -1,   284,
      -1,    22,    23,    24,    25,    -1,    27,    28,   293,    -1,
      -1,    -1,   134,    -1,   136,    -1,    62,    -1,    -1,    65,
      66,   306,   307,   308,    -1,   147,    -1,    -1,    -1,    -1,
     315,   153,    -1,    -1,    -1,    56,    57,    -1,    -1,   324,
      61,    -1,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,   337,    -1,    -1,   340,   341,    -1,    -1,    -1,
      -1,    -1,    -1,   348,   186,    22,    23,    24,    25,    -1,
      27,    28,   357,    -1,   196,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,   370,   371,   372,    -1,    -1,
      -1,    -1,    -1,    -1,   379,   217,    -1,    -1,    -1,    -1,
      57,    -1,    -1,   388,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    60,   401,   239,    -1,    64,
      65,    66,    67,    68,   409,   410,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,   260,    -1,
      -1,    -1,    -1,    -1,    -1,   430,   431,    -1,    -1,    -1,
      -1,   273,   274,    -1,   276,   277,    -1,    -1,    22,    23,
      24,    25,   284,    27,    28,    -1,    57,   452,   453,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,   306,   307,   308,    -1,   473,   474,
      -1,    -1,    -1,   315,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    22,    23,    24,    25,   337,    27,    28,   340,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   348,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,   370,   371,
     372,    62,    -1,    -1,    65,    66,    -1,   379,     1,    -1,
       3,     4,     5,     6,    38,    39,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,   401,
      -1,    -1,    56,    -1,    58,    59,    -1,   409,   410,    63,
      -1,    -1,    -1,    67,    68,    38,    39,    -1,    72,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,   430,   431,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
     452,   453,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    -1,     1,    -1,     3,     4,     5,
       6,   473,   474,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
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
      66,    67,    68,    69,    70,    71,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    56,    -1,    -1,    67,    68,    61,    -1,    63,    72,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    57,    27,    28,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    57,    -1,
      -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    57,    27,
      28,    60,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    57,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    57,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      57,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      57,    27,    28,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    57,    27,    28,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    57,    -1,    -1,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    56,    57,    22,    23,    24,    25,    -1,    27,    28,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    56,    57,    -1,    -1,    -1,    -1,    -1,
      56,    57,    65,    66,    67,    68,    69,    70,    71,    65,
      66,    67,    68,    69,    70,    71,    22,    23,    24,    25,
      -1,    27,    28,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    56,    57,    65,
      66,    67,    68,    69,    70,    71,    65,    66,    67,    68,
      69,    70,    71,    56,    57,    22,    23,    24,    25,    -1,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    22,    23,    24,    25,    -1,    27,    28,    65,    66,
      67,    68,    69,    70,    71,    56,    57,    22,    23,    24,
      25,    -1,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    -1,    22,    23,    24,    25,    57,    27,    28,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    57,    27,    28,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    57,    22,    23,    24,
      25,    62,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    57,    27,    28,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    57,    22,    23,
      24,    25,    62,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    -1,    57,    22,    23,    24,    25,    62,    27,
      28,    65,    66,    67,    68,    69,    70,    71,    -1,    22,
      23,    24,    25,    57,    27,    28,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    57,
      22,    23,    24,    25,    62,    27,    28,    65,    66,    67,
      68,    69,    70,    71,    57,    22,    23,    24,    25,    62,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
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
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    57,    22,    23,    24,    25,    62,    27,
      28,    65,    66,    67,    68,    69,    70,    71,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    57,    22,    23,    24,    25,
      62,    27,    28,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    60,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    56,    27,
      28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    56,    64,    65,    66,    67,    68,    -1,    56,    -1,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    56,    27,
      28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    56,    64,    65,    66,    67,    68,    -1,    56,    -1,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    56,    27,
      28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    56,    64,    65,    66,    67,    68,    -1,    56,    -1,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    22,    23,    24,
      25,    -1,    27,    28,    22,    23,    24,    25,    56,    27,
      28,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    56,    64,    65,    66,    67,    68,    -1,    56,    -1,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    65,    66,    67,
      68,    69,    70,    71,    65,    66,    67,    68,    69,    70,
      71,    56,    22,    23,    24,    25,    -1,    27,    28,    -1,
      65,    66,    67,    68,    69,    70,    71,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    62,    27,    28,    65,    66,    67,    68,    69,
      70,    71,    -1,    22,    23,    24,    25,    62,    27,    28,
      65,    66,    67,    68,    69,    70,    71,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    22,
      23,    24,    25,    62,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    62,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    62,    27,    28,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    62,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    62,    27,    28,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    22,    23,    24,    25,    -1,    27,    28,    22,    23,
      24,    25,    -1,    27,    28,    -1,    22,    23,    24,    25,
      -1,    27,    28,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    64,    65,
      66,    67,    68,    69,    70,    71,    64,    65,    66,    67,
      68,    69,    70,    71,    22,    23,    24,    25,    -1,    27,
      28,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    64,    65,    66,    67,    68,    69,
      70,    71,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    62,    56,    -1,    65,    66,    67,    68,    69,
      70,    71,    65,    66,    67,    68,    69,    70,    71,    22,
      23,    24,    25,    -1,    27,    28,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    56,    -1,    22,    23,    24,    25,    -1,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    64,
      65,    66,    67,    68,    69,    70,    71,    64,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    22,    23,    24,    25,    -1,
      27,    28,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    64,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      60,    -1,    -1,    -1,    64,    65,    66,    67,    68,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    22,    23,    24,    25,    -1,
      27,    28,    22,    23,    24,    25,    -1,    27,    28,    22,
      23,    24,    25,    -1,    27,    28,    -1,    60,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    60,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    62,    -1,    -1,    65,    66,
      67,    68,    62,    -1,    -1,    65,    66,    67,    68,    62,
      -1,    -1,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    74,    75,    76,    77,
      78,    80,    81,   105,    56,     0,    75,    56,    57,    57,
      58,     9,     9,    10,    11,    12,    13,    14,    38,    39,
      63,    67,    68,    72,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    10,    58,     1,    15,    17,    18,
      19,    20,    56,    58,    59,    76,    84,    86,    87,    88,
      89,    90,    93,    94,   105,    61,    63,    61,    63,   101,
     102,   101,    94,   101,   101,   101,    22,    23,    24,    25,
      27,    28,    65,    66,    67,    68,    69,    70,    71,    57,
      79,    94,    56,    63,    91,    84,    94,    63,    59,    85,
      56,    59,    87,    56,    56,    56,     9,    62,    94,     1,
       3,    82,    83,   105,    94,    64,    94,   104,    64,    96,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     101,   101,    95,    59,    60,    94,    63,    17,    10,    86,
      62,    64,    64,    60,    64,     9,    62,    60,    64,    59,
      94,    64,    94,    63,    64,    59,    83,    61,    94,    58,
      64,    94,    62,    59,    86,    92,    64,    16,    59,    84,
      56,    58,    16,    59,    86,    58,    59,    59,    86,    59,
       9,    10,    11,    12,    13,    14,    63,   103,     9,    10,
      11,    12,    13,    14,    38,    39,    63,    67,    68,    72,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     9,
      10,    11,    12,    13,    14,    38,    39,    63,    67,    68,
      72,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      58,     9,    10,    11,    12,    13,    14,    38,    39,    63,
      67,    68,    72,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     9,    10,    11,    12,    13,    14,    38,    39,
      63,    67,    68,    72,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    61,    63,    94,    61,    63,     9,    10,
      11,    12,    13,    14,    63,   101,   102,   103,   101,    94,
     101,   101,   101,    22,    23,    24,    25,    27,    28,    65,
      66,    67,    68,    69,    70,    71,    57,    61,    63,     9,
      10,    11,    12,    13,    14,    63,   101,   102,   103,   101,
      94,   101,   101,   101,    22,    23,    24,    25,    27,    28,
      65,    66,    67,    68,    69,    70,    71,    57,    59,    85,
      61,    63,     9,    10,    11,    12,    13,    14,    63,   101,
     102,   103,   101,    94,   101,   101,   101,    22,    23,    24,
      25,    27,    28,    65,    66,    67,    68,    69,    70,    71,
      57,    61,    63,     9,    10,    11,    12,    13,    14,    63,
     101,   102,   103,   101,    94,   101,   101,   101,    22,    23,
      24,    25,    27,    28,    65,    66,    67,    68,    69,    70,
      71,    57,    94,    64,   104,    64,    94,    64,   104,    61,
      63,    94,    64,    96,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   101,   101,    95,    94,    64,   104,
      61,    63,    94,    64,    96,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   101,    95,    86,    94,
      64,   104,    61,    63,    94,    64,    96,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,    95,
      94,    64,   104,    61,    63,    94,    64,    96,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   101,
      95,    62,    64,    62,    64,    94,    64,   104,    64,    62,
      64,    94,    64,   104,    64,    59,    62,    64,    94,    64,
     104,    64,    62,    64,    94,    64,   104,    64,    62,    64,
      62,    64,    62,    64,    62,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    84,    85,    84,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    89,    89,    89,    89,    89,    89,    91,    92,
      90,    90,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     1,     3,
       5,     6,     3,     2,     5,     4,     1,     3,     4,     3,
       5,     5,     5,     1,     3,     2,     4,     2,     0,     4,
       1,     2,     1,     2,     2,     1,     1,     1,     2,     2,
       2,     4,     6,     7,     9,    10,    10,    11,     0,     0,
       7,     7,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     1,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1
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
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2726 "src/parser.c"
        break;

    case 10: /* STRING_LITERAL  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2732 "src/parser.c"
        break;

    case 11: /* CONSTANT_FLOAT  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2738 "src/parser.c"
        break;

    case 12: /* CONSTANT_INT  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2744 "src/parser.c"
        break;

    case 13: /* CONSTANT_HEX  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2750 "src/parser.c"
        break;

    case 14: /* CONSTANT_CHAR  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2756 "src/parser.c"
        break;

    case 74: /* declaration_list  */
#line 68 "src/language.y"
      { root = ((*yyvaluep).node); }
#line 2762 "src/parser.c"
        break;

    case 75: /* declaration  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2768 "src/parser.c"
        break;

    case 76: /* init_declarator  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2774 "src/parser.c"
        break;

    case 77: /* var_declarator  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2780 "src/parser.c"
        break;

    case 78: /* arr_declarator  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2786 "src/parser.c"
        break;

    case 79: /* initializer_list  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2792 "src/parser.c"
        break;

    case 80: /* function_definition  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2798 "src/parser.c"
        break;

    case 81: /* function_declarator  */
#line 70 "src/language.y"
      { free_label(((*yyvaluep).sval)); }
#line 2804 "src/parser.c"
        break;

    case 82: /* argument_list  */
#line 71 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2810 "src/parser.c"
        break;

    case 83: /* argument  */
#line 71 "src/language.y"
      { al_free(&((*yyvaluep).al)); }
#line 2816 "src/parser.c"
        break;

    case 84: /* compound_statement  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2822 "src/parser.c"
        break;

    case 86: /* statement_list  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2828 "src/parser.c"
        break;

    case 87: /* statement  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2834 "src/parser.c"
        break;

    case 89: /* conditional_statement  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2840 "src/parser.c"
        break;

    case 90: /* iteration_statement  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2846 "src/parser.c"
        break;

    case 93: /* return_statement  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2852 "src/parser.c"
        break;

    case 94: /* assignment_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2858 "src/parser.c"
        break;

    case 95: /* logical_or_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2864 "src/parser.c"
        break;

    case 96: /* logical_and_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2870 "src/parser.c"
        break;

    case 97: /* equality_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2876 "src/parser.c"
        break;

    case 98: /* relational_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2882 "src/parser.c"
        break;

    case 99: /* additive_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2888 "src/parser.c"
        break;

    case 100: /* multiplicative_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2894 "src/parser.c"
        break;

    case 101: /* unary_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2900 "src/parser.c"
        break;

    case 102: /* postfix_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2906 "src/parser.c"
        break;

    case 103: /* primary_expression  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2912 "src/parser.c"
        break;

    case 104: /* argument_call_list  */
#line 69 "src/language.y"
      { node_free_recursive(&((*yyvaluep).node)); }
#line 2918 "src/parser.c"
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
#line 3184 "src/parser.c"
    break;

  case 3:
#line 107 "src/language.y"
    { (yyval.node) = node_init(LIST, "declaration-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3190 "src/parser.c"
    break;

  case 4:
#line 111 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3196 "src/parser.c"
    break;

  case 5:
#line 112 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3202 "src/parser.c"
    break;

  case 6:
#line 113 "src/language.y"
    { (yyval.node) = NULL; }
#line 3208 "src/parser.c"
    break;

  case 7:
#line 118 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3214 "src/parser.c"
    break;

  case 8:
#line 119 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3220 "src/parser.c"
    break;

  case 9:
#line 120 "src/language.y"
    { (yyval.node) = node_init(VAR_INIT, "var-init", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3226 "src/parser.c"
    break;

  case 10:
#line 121 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-4].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3232 "src/parser.c"
    break;

  case 11:
#line 122 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-5].node), (yyvsp[-2].node), ENDARG); assign_context((yyval.node)); }
#line 3238 "src/parser.c"
    break;

  case 12:
#line 123 "src/language.y"
    { (yyval.node) = node_init(ARR_INIT, "arr-init", (yyvsp[-2].node),     ENDARG); assign_context((yyval.node)); free_label((yyvsp[0].sval)); }
#line 3244 "src/parser.c"
    break;

  case 13:
#line 127 "src/language.y"
    { (yyval.node) = node_init(VAR_DECL, "var-decl",     ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_var((yyvsp[-1].ival),(yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3250 "src/parser.c"
    break;

  case 14:
#line 131 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-4].ival),(yyvsp[-3].sval),-1); free_label((yyvsp[-3].sval)); tc_arr_decl((yyval.node)); }
#line 3256 "src/parser.c"
    break;

  case 15:
#line 132 "src/language.y"
    { (yyval.node) = node_init(ARR_DECL, "arr-decl", ENDARG); assign_context((yyval.node)); (yyval.node)->symbol=add_symbol_arr((yyvsp[-3].ival),(yyvsp[-2].sval),-1); free_label((yyvsp[-2].sval)); }
#line 3262 "src/parser.c"
    break;

  case 16:
#line 136 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3268 "src/parser.c"
    break;

  case 17:
#line 137 "src/language.y"
    { (yyval.node) = node_init(LIST, "initializer-list" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); /*typecheck_lazy($$);*/ }
#line 3274 "src/parser.c"
    break;

  case 18:
#line 141 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , (yyvsp[-1].node)  , ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-3].sval)); assign_context((yyval.node)); free_label((yyvsp[-3].sval)); }
#line 3280 "src/parser.c"
    break;

  case 19:
#line 142 "src/language.y"
    { (yyval.node) = node_init(FUNCTION, "function-body" , NULL, ENDARG); assign_body((yyval.node)); finish_fun((yyvsp[-2].sval)); assign_context((yyval.node)); free_label((yyvsp[-2].sval)); }
#line 3286 "src/parser.c"
    break;

  case 20:
#line 146 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-1].al));   }
#line 3292 "src/parser.c"
    break;

  case 21:
#line 147 "src/language.y"
    { (yyval.sval) = (yyvsp[-3].sval); begin_fun((yyvsp[-4].ival), (yyvsp[-3].sval), NULL); }
#line 3298 "src/parser.c"
    break;

  case 22:
#line 148 "src/language.y"
    { (yyval.sval) = NULL; free_label((yyvsp[-3].sval)); }
#line 3304 "src/parser.c"
    break;

  case 23:
#line 152 "src/language.y"
    { (yyval.al) = (yyvsp[0].al); }
#line 3310 "src/parser.c"
    break;

  case 24:
#line 153 "src/language.y"
    { (yyval.al) = al_link((yyvsp[-2].al), &(yyvsp[0].al)); }
#line 3316 "src/parser.c"
    break;

  case 25:
#line 157 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-1].ival), VARIABLE, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3322 "src/parser.c"
    break;

  case 26:
#line 158 "src/language.y"
    { (yyval.al) = al_init((yyvsp[-3].ival), ARRAY   , (yyvsp[-2].sval)); free_label((yyvsp[-2].sval)); }
#line 3328 "src/parser.c"
    break;

  case 27:
#line 162 "src/language.y"
    { (yyval.node) = NULL; }
#line 3334 "src/parser.c"
    break;

  case 28:
#line 163 "src/language.y"
    { begin(NULL); }
#line 3340 "src/parser.c"
    break;

  case 29:
#line 163 "src/language.y"
    { (yyval.node) = node_init(COMPOUND_STATEMENT, "compound-statement", (yyvsp[-1].node), ENDARG); (yyval.node)->symbol=finish(); assign_context((yyval.node)); }
#line 3346 "src/parser.c"
    break;

  case 30:
#line 167 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3352 "src/parser.c"
    break;

  case 31:
#line 168 "src/language.y"
    { (yyval.node) = node_init(LIST, "statement-list" , (yyvsp[-1].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3358 "src/parser.c"
    break;

  case 32:
#line 172 "src/language.y"
    { (yyval.node) = NULL; }
#line 3364 "src/parser.c"
    break;

  case 33:
#line 173 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3370 "src/parser.c"
    break;

  case 34:
#line 174 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3376 "src/parser.c"
    break;

  case 35:
#line 175 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3382 "src/parser.c"
    break;

  case 36:
#line 176 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3388 "src/parser.c"
    break;

  case 37:
#line 177 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3394 "src/parser.c"
    break;

  case 38:
#line 178 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3400 "src/parser.c"
    break;

  case 39:
#line 179 "src/language.y"
    { (yyval.node) = NULL; }
#line 3406 "src/parser.c"
    break;

  case 40:
#line 180 "src/language.y"
    { (yyval.node) = NULL; }
#line 3412 "src/parser.c"
    break;

  case 41:
#line 184 "src/language.y"
    { tc_asm((yyvsp[-1].sval)); free_label((yyvsp[-1].sval)); }
#line 3418 "src/parser.c"
    break;

  case 42:
#line 187 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-3].node),          ENDARG); assign_context((yyval.node)); }
#line 3424 "src/parser.c"
    break;

  case 43:
#line 188 "src/language.y"
    { (yyval.node) = node_init(IF  , "if-statement"      , (yyvsp[-4].node), (yyvsp[-1].node),      ENDARG); assign_context((yyval.node)); }
#line 3430 "src/parser.c"
    break;

  case 44:
#line 189 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-6].node),          ENDARG); assign_context((yyval.node)); }
#line 3436 "src/parser.c"
    break;

  case 45:
#line 190 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-7].node), (yyvsp[-1].node),      ENDARG); assign_context((yyval.node)); }
#line 3442 "src/parser.c"
    break;

  case 46:
#line 191 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-7].node), (yyvsp[-4].node),      ENDARG); assign_context((yyval.node)); }
#line 3448 "src/parser.c"
    break;

  case 47:
#line 192 "src/language.y"
    { (yyval.node) = node_init(ELSE, "if-else-statement" , (yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); }
#line 3454 "src/parser.c"
    break;

  case 48:
#line 198 "src/language.y"
    { reserve_label(); }
#line 3460 "src/parser.c"
    break;

  case 49:
#line 198 "src/language.y"
    {}
#line 3466 "src/parser.c"
    break;

  case 50:
#line 198 "src/language.y"
    { (yyval.node) = node_init(WHILE, "while-statement" , (yyvsp[-3].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); }
#line 3472 "src/parser.c"
    break;

  case 51:
#line 199 "src/language.y"
    { (yyval.node) = NULL; tc_gen_do((yyvsp[-5].node), (yyvsp[-2].node)); }
#line 3478 "src/parser.c"
    break;

  case 52:
#line 203 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement",     ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3484 "src/parser.c"
    break;

  case 53:
#line 204 "src/language.y"
    { (yyval.node) = node_init(RETURN, "return-statement", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3490 "src/parser.c"
    break;

  case 54:
#line 208 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3496 "src/parser.c"
    break;

  case 55:
#line 209 "src/language.y"
    { (yyval.node) = node_init(OP_ASSIGN, "=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3502 "src/parser.c"
    break;

  case 56:
#line 213 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3508 "src/parser.c"
    break;

  case 57:
#line 214 "src/language.y"
    { (yyval.node) = node_init(OP_OR, "||", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3514 "src/parser.c"
    break;

  case 58:
#line 218 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3520 "src/parser.c"
    break;

  case 59:
#line 219 "src/language.y"
    { (yyval.node) = node_init(OP_AND, "&&", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3526 "src/parser.c"
    break;

  case 60:
#line 223 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3532 "src/parser.c"
    break;

  case 61:
#line 224 "src/language.y"
    { (yyval.node) = node_init(OP_EQ, "==", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3538 "src/parser.c"
    break;

  case 62:
#line 225 "src/language.y"
    { (yyval.node) = node_init(OP_NE, "!=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node));  tc_evaluate((yyval.node)); }
#line 3544 "src/parser.c"
    break;

  case 63:
#line 229 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3550 "src/parser.c"
    break;

  case 64:
#line 230 "src/language.y"
    { (yyval.node) = node_init(OP_LT, "<" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3556 "src/parser.c"
    break;

  case 65:
#line 231 "src/language.y"
    { (yyval.node) = node_init(OP_GT, ">" , (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3562 "src/parser.c"
    break;

  case 66:
#line 232 "src/language.y"
    { (yyval.node) = node_init(OP_LE, "<=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3568 "src/parser.c"
    break;

  case 67:
#line 233 "src/language.y"
    { (yyval.node) = node_init(OP_GE, ">=", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3574 "src/parser.c"
    break;

  case 68:
#line 237 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3580 "src/parser.c"
    break;

  case 69:
#line 238 "src/language.y"
    { (yyval.node) = node_init(OP_ADD, "+", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3586 "src/parser.c"
    break;

  case 70:
#line 239 "src/language.y"
    { (yyval.node) = node_init(OP_SUB, "-", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3592 "src/parser.c"
    break;

  case 71:
#line 243 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3598 "src/parser.c"
    break;

  case 72:
#line 244 "src/language.y"
    { (yyval.node) = node_init(OP_MUL, "*", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3604 "src/parser.c"
    break;

  case 73:
#line 245 "src/language.y"
    { (yyval.node) = node_init(OP_DIV, "/", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3610 "src/parser.c"
    break;

  case 74:
#line 246 "src/language.y"
    { (yyval.node) = node_init(OP_MOD, "%", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3616 "src/parser.c"
    break;

  case 75:
#line 250 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3622 "src/parser.c"
    break;

  case 76:
#line 251 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3628 "src/parser.c"
    break;

  case 77:
#line 252 "src/language.y"
    { (yyval.node) = node_init(OP_NEG, "-",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3634 "src/parser.c"
    break;

  case 78:
#line 253 "src/language.y"
    { (yyval.node) = node_init(OP_NOT, "!",  (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3640 "src/parser.c"
    break;

  case 79:
#line 254 "src/language.y"
    { (yyval.node) = node_init(OP_INC, "++", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3646 "src/parser.c"
    break;

  case 80:
#line 255 "src/language.y"
    { (yyval.node) = node_init(OP_DEC, "--", (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_evaluate((yyval.node)); }
#line 3652 "src/parser.c"
    break;

  case 81:
#line 259 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3658 "src/parser.c"
    break;

  case 82:
#line 260 "src/language.y"
    { (yyval.node) = node_init(ARRAY_INDEX  , "array-index"  , (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), ARRAY)   ; free_label((yyvsp[-3].sval)); }
#line 3664 "src/parser.c"
    break;

  case 83:
#line 261 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call",     ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-2].sval), FUNCTION); free_label((yyvsp[-2].sval)); tc_fcall((yyval.node)); }
#line 3670 "src/parser.c"
    break;

  case 84:
#line 262 "src/language.y"
    { (yyval.node) = node_init(FUNCTION_CALL, "function-call", (yyvsp[-1].node), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyvsp[-3].sval), FUNCTION); free_label((yyvsp[-3].sval)); tc_fcall((yyval.node)); }
#line 3676 "src/parser.c"
    break;

  case 85:
#line 266 "src/language.y"
    { (yyval.node) = node_init(IDENTIFIER    , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); retrieve((yyval.node), (yyval.node)->name, VARIABLE); free_label((yyvsp[0].sval)); }
#line 3682 "src/parser.c"
    break;

  case 86:
#line 267 "src/language.y"
    { (yyval.node) = node_init(STRING_LITERAL, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(STRING_LITERAL, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3688 "src/parser.c"
    break;

  case 87:
#line 268 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_FLOAT, (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_FLOAT, (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3694 "src/parser.c"
    break;

  case 88:
#line 269 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_INT  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_INT  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3700 "src/parser.c"
    break;

  case 89:
#line 270 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_HEX  , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_HEX  , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3706 "src/parser.c"
    break;

  case 90:
#line 271 "src/language.y"
    { (yyval.node) = node_init(CONSTANT_CHAR , (yyvsp[0].sval), ENDARG); assign_context((yyval.node)); (yyval.node)->symbol = add_symbol_cte(CONSTANT_CHAR , (yyvsp[0].sval)); free_label((yyvsp[0].sval)); }
#line 3712 "src/parser.c"
    break;

  case 91:
#line 272 "src/language.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3718 "src/parser.c"
    break;

  case 92:
#line 276 "src/language.y"
    { (yyval.node) = (yyvsp[0].node); tc_fcall_args(NULL, (yyvsp[0].node)); }
#line 3724 "src/parser.c"
    break;

  case 93:
#line 277 "src/language.y"
    { (yyval.node) = node_init(LIST, "argument-list", (yyvsp[-2].node), (yyvsp[0].node), ENDARG); assign_context((yyval.node)); tc_fcall_args((yyvsp[-2].node), (yyvsp[0].node)); }
#line 3730 "src/parser.c"
    break;

  case 94:
#line 281 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3736 "src/parser.c"
    break;

  case 95:
#line 282 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3742 "src/parser.c"
    break;

  case 96:
#line 283 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3748 "src/parser.c"
    break;

  case 97:
#line 284 "src/language.y"
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3754 "src/parser.c"
    break;


#line 3758 "src/parser.c"

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
#line 287 "src/language.y"

void free_label(const char * str) {
	free((void*) str);
}
