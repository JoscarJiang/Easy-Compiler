/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "yacc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOWER_THAN_ELSE = 258,
    ELSE = 259,
    IDENTIFIER = 260,
    CONSTANT = 261,
    STRING_LITERAL = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    INLINE = 291,
    RESTRICT = 292,
    CHAR = 293,
    SHORT = 294,
    INT = 295,
    LONG = 296,
    SIGNED = 297,
    UNSIGNED = 298,
    FLOAT = 299,
    DOUBLE = 300,
    CONST = 301,
    VOLATILE = 302,
    VOID = 303,
    BOOL = 304,
    COMPLEX = 305,
    IMAGINARY = 306,
    STRUCT = 307,
    UNION = 308,
    ENUM = 309,
    ELLIPSIS = 310,
    CASE = 311,
    DEFAULT = 312,
    IF = 313,
    SWITCH = 314,
    WHILE = 315,
    DO = 316,
    FOR = 317,
    GOTO = 318,
    CONTINUE = 319,
    BREAK = 320,
    RETURN = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 182 "yacc.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  400

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    82,    75,     2,
      67,    68,    76,    77,    74,    78,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    90,
      83,    89,    84,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    86,    73,    79,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    23,    24,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    41,    42,    46,    47,
      48,    49,    50,    51,    55,    56,    57,    58,    59,    60,
      64,    65,    69,    70,    71,    72,    76,    77,    78,    82,
      83,    84,    88,    89,    90,    91,    92,    96,    97,    98,
     102,   103,   107,   108,   112,   113,   117,   118,   122,   123,
     127,   128,   132,   133,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   151,   152,   156,   160,   161,
     165,   166,   167,   168,   169,   170,   171,   172,   176,   177,
     181,   182,   186,   187,   188,   189,   190,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   212,   213,   214,   218,   219,   223,   224,   228,
     232,   233,   234,   235,   239,   240,   244,   245,   246,   250,
     251,   252,   253,   254,   258,   259,   263,   264,   268,   269,
     270,   274,   278,   279,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   300,   301,   302,
     303,   307,   308,   313,   314,   318,   319,   323,   324,   325,
     329,   330,   334,   335,   339,   340,   341,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   359,   360,
     361,   365,   366,   367,   368,   372,   376,   377,   381,   382,
     386,   387,   388,   389,   390,   391,   395,   396,   397,   401,
     402,   406,   407,   411,   412,   416,   417,   421,   422,   423,
     427,   428,   429,   430,   431,   432,   436,   437,   438,   439,
     440,   444,   445,   449,   450,   454,   455,   459,   460
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOWER_THAN_ELSE", "ELSE", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "BOOL", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "'{'",
  "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,   123,   125,    44,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59
};
# endif

#define YYPACT_NINF -309

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-309)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1459,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,    31,  -309,    25,  1459,  1459,
    -309,    50,  -309,  1459,  1459,  1231,  -309,  -309,   -46,    41,
    -309,    57,    93,  -309,    -8,  -309,  1171,   106,    18,  -309,
    -309,   -15,  1484,  -309,  -309,  -309,  -309,    41,   -24,   124,
    -309,    16,  -309,  -309,    93,    57,  -309,   392,   883,  -309,
      25,  -309,  1377,  1132,   725,   106,  1484,  1484,  1296,  -309,
      14,  1484,   147,  1017,  -309,    20,  -309,  -309,  -309,  -309,
      28,   -28,  -309,  -309,  1024,  1031,  1031,  1017,     1,    40,
      67,    70,   594,    74,   172,    62,    99,   272,   675,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   229,   206,
    1017,  -309,    83,    71,   239,    36,   247,   118,   156,   158,
     230,    42,  -309,  -309,    -7,  -309,  -309,  -309,  -309,   468,
    -309,  -309,  -309,  -309,  -309,  -309,   806,  -309,  -309,  -309,
    -309,  -309,  -309,    49,   187,   194,  -309,    89,   109,  -309,
     191,   211,   773,  1333,  -309,  -309,  -309,  1017,    61,  -309,
     201,  -309,  -309,    59,  -309,  -309,  -309,  -309,  -309,   594,
     675,  -309,   675,  -309,  -309,   213,   594,  1017,  1017,  1017,
     243,   544,   218,  -309,  -309,  -309,    64,   100,    91,   251,
     321,  -309,  -309,   897,  1017,   324,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  1017,  -309,  1017,
    1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,
    1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  -309,
    -309,  -309,  1017,   325,  -309,   193,   883,    -1,  -309,  1082,
     562,  -309,    75,  -309,   127,  -309,  1027,  -309,   327,   850,
    -309,  -309,  1017,  -309,   263,   264,  -309,  -309,    14,  -309,
    1017,  -309,  -309,   267,   269,   594,  -309,   102,   114,   117,
     271,   620,   620,  -309,  -309,  -309,  1256,   178,  -309,   913,
    -309,  -309,   150,  -309,   -18,  -309,  -309,  -309,  -309,  -309,
      83,    83,    71,    71,   239,   239,   239,   239,    36,    36,
     247,   118,   156,   158,   230,   -29,  -309,   270,  -309,  -309,
     310,  -309,  -309,  -309,  -309,   274,   275,  -309,   276,   283,
     127,  1420,   927,  -309,  -309,  -309,   284,   285,  -309,  -309,
    -309,  -309,   273,   273,  -309,   594,   594,   594,  1017,   941,
     976,   806,  -309,  -309,  1017,  -309,  1017,  -309,  -309,  -309,
     883,  -309,  -309,  -309,  -309,  -309,   288,  -309,   287,   289,
    -309,  -309,   340,  -309,  -309,   151,   594,   168,   594,   169,
     197,  -309,  -309,  -309,  -309,  -309,  -309,   594,   268,  -309,
     594,  -309,   594,  -309,   758,  -309,  -309,  -309,  -309,  -309
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   111,    92,    93,    94,    95,    96,   141,   139,    98,
      99,   100,   101,   104,   105,   102,   103,   138,   140,    97,
     106,   107,   108,   115,   116,     0,   234,     0,    80,    82,
     109,     0,   110,    84,    86,     0,   231,   233,   133,     0,
     144,     0,   157,    78,     0,    88,    90,   143,     0,    81,
      83,   114,     0,    85,    87,     1,   232,     0,   136,     0,
     134,     0,   161,   159,   158,     0,    79,     0,     0,   237,
       0,   236,     0,     0,     0,   142,     0,   121,     0,   117,
       0,   123,     0,     0,   129,     0,   145,   162,   160,    89,
      90,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
      24,    25,    26,    27,    28,    29,   215,     6,    18,    30,
       0,    32,    36,    39,    42,    47,    50,    52,    54,    56,
      58,    60,    62,    75,     0,   213,   214,   200,   201,     0,
     211,   202,   203,   204,   205,     2,     0,   188,    91,   238,
     235,   170,   156,   169,     0,   163,   165,     0,     0,   153,
      25,     0,     0,     0,   120,   113,   118,     0,     0,   124,
     126,   122,   130,     0,    30,    77,   137,   131,   135,     0,
       0,    22,     0,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   228,   229,     0,     0,   172,     0,
       0,    12,    13,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    64,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     210,   212,     0,     0,   191,     0,     0,     0,   196,     0,
       0,   167,   174,   168,   175,   154,     0,   155,     0,     0,
     152,   148,     0,   147,    25,     0,   112,   127,     0,   119,
       0,   132,   206,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,   226,   230,     5,     0,   174,   173,     0,
      11,     8,     0,    16,     0,    10,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,    59,     0,    76,     0,   199,   189,
       0,   192,   195,   197,   184,     0,     0,   178,    25,     0,
     176,     0,     0,   164,   166,   171,     0,     0,   151,   146,
     125,   128,    23,     0,   207,     0,     0,     0,     0,     0,
       0,     0,    31,     9,     0,     7,     0,   198,   190,   193,
       0,   185,   177,   182,   179,   186,     0,   180,    25,     0,
     149,   150,   217,   219,   220,     0,     0,     0,     0,     0,
       0,    17,    61,   194,   187,   183,   181,     0,     0,   224,
       0,   222,     0,    14,     0,   218,   221,   225,   223,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,  -309,   -20,  -309,  -111,    69,    81,    96,
      82,   128,   130,   131,   126,   132,  -309,   -80,   -67,  -309,
     -76,   -89,   -25,     0,  -309,   299,  -309,   -37,  -309,  -309,
     290,   -58,   -59,  -309,   101,  -309,   313,   -74,   233,  -309,
     -22,   -35,   -26,   -64,   -69,  -309,   111,  -309,     4,  -129,
    -215,   -66,    21,  -308,  -309,   129,   -88,  -309,   -19,  -309,
     232,  -185,  -309,  -309,  -309,  -309,   338,  -309,  -309
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   117,   118,   292,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   217,
     134,   176,    26,    70,    44,    45,    28,    29,    30,    31,
      78,    79,    80,   168,   169,    32,    59,    60,    33,    34,
      61,    47,    48,    64,   325,   155,   156,   157,   199,   326,
     254,   244,   245,   246,   247,   248,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    35,    36,    37,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      27,   147,   148,   175,   154,    46,   282,   161,   185,   218,
     162,   178,   360,    75,   190,    77,    63,   175,   164,    40,
     166,    69,   171,    40,   253,    58,    57,    71,    49,    50,
      40,   196,   197,    53,    54,    27,    38,   330,    88,    77,
      77,    77,   135,    90,    77,   238,    58,   149,    90,   198,
     226,   227,   355,   150,    40,    51,   238,    76,   170,   356,
     179,   236,    40,   174,    58,    83,    65,   238,   242,   288,
     243,    77,   330,   153,   181,   183,   184,   174,   267,   147,
      40,    41,    66,   239,    86,    41,   360,   175,   322,   186,
      42,   272,    41,   177,   259,   265,   349,   350,   276,   178,
     174,    42,   167,    39,   197,   166,   197,   187,   297,   298,
     299,   277,   278,   279,   135,    43,   249,    68,   250,   228,
     229,   198,    52,   198,    41,    42,    77,   252,   294,   237,
       8,   251,   271,    42,   188,   268,   293,   189,   238,    17,
      18,   191,   249,    77,   250,    77,     8,   174,   222,   223,
     296,   269,   193,   317,   284,    17,    18,   257,   286,   219,
     250,   315,   175,   258,   220,   221,   281,    42,   285,    42,
     345,   316,   287,    73,   238,    74,   238,   192,   352,   147,
     321,   341,   346,   329,   273,   347,   274,   344,   238,   194,
     175,   238,   336,   232,   331,   337,   332,    84,    85,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,    75,   353,   388,
     172,   173,   174,   252,   354,   238,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   390,   392,   200,   201,
     202,   233,   238,   238,   234,   286,   170,   250,   235,   153,
     174,   224,   225,   147,   359,   255,   153,   372,   373,   374,
     287,   260,   366,   230,   231,   369,   319,   320,   256,   174,
     393,   394,   375,   377,   379,    62,   382,   145,    92,    93,
      94,   261,    95,    96,   147,    81,   153,   381,   389,   270,
     391,   300,   301,   147,   383,   216,   203,    87,   204,   395,
     205,   275,   397,   280,   398,   302,   303,    62,   283,    81,
      81,    81,   308,   309,    81,   145,    92,    93,    94,   289,
      95,    96,   304,   305,   306,   307,   290,   147,   359,   295,
     318,   153,   335,   338,   339,   342,   174,   343,   348,   108,
     357,    81,   361,   362,   387,   351,   363,   110,   111,   112,
     113,   114,   115,   364,   370,   371,   384,   385,   396,   386,
     310,   313,   195,   311,    89,   312,   163,   334,   314,   340,
      82,   241,   380,    56,     0,     0,   323,   108,     0,   242,
       0,   243,   146,   358,     0,   110,   111,   112,   113,   114,
     115,    62,     0,     0,     0,    87,    81,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,    81,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,    67,   109,     0,   110,   111,   112,
     113,   114,   115,    91,    92,    93,    94,     0,    95,    96,
       0,     0,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
      67,   240,     0,   110,   111,   112,   113,   114,   115,   145,
      92,    93,    94,     0,    95,    96,     0,     0,   116,     0,
       0,     0,     0,     0,     0,     0,     0,   145,    92,    93,
      94,     0,    95,    96,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    91,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   145,    92,    93,    94,   108,
      95,    96,   327,     0,   116,     0,     0,   110,   328,   112,
     113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,    67,     0,     0,   110,
     111,   112,   113,   114,   115,     0,     0,     0,     0,     0,
     145,    92,    93,    94,   116,    95,    96,   108,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,     0,     0,     0,     1,     0,     0,     0,     0,
     116,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     145,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,     0,     0,   158,     0,
       0,     0,     8,   145,    92,    93,    94,     0,    95,    96,
       0,    17,    18,     0,     0,     0,     0,     0,   145,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,   159,     0,     0,     0,     0,
     110,   160,   112,   113,   114,   115,   262,     0,     0,     0,
       8,   145,    92,    93,    94,     0,    95,    96,     0,    17,
      18,     0,     0,     0,     0,   108,     0,   242,     0,   243,
     146,   399,     0,   110,   111,   112,   113,   114,   115,     0,
     108,     0,     0,   263,     0,     0,     0,     0,   110,   264,
     112,   113,   114,   115,     0,   145,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   242,     0,   243,   146,     0,
       0,   110,   111,   112,   113,   114,   115,     8,   145,    92,
      93,    94,     0,    95,    96,     0,    17,    18,     0,     0,
       0,     0,   145,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   145,    92,
      93,    94,     0,    95,    96,   110,   111,   112,   113,   114,
     115,     0,   145,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,   145,    92,    93,    94,
     108,    95,    96,     0,     0,   146,     0,     0,   110,   111,
     112,   113,   114,   115,   108,   291,     0,     0,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,     0,     0,
     108,   145,    92,    93,    94,   351,    95,    96,   110,   111,
     112,   113,   114,   115,   108,     0,     0,   367,     0,     0,
       0,     0,   110,   368,   112,   113,   114,   115,   108,   376,
       0,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   145,    92,    93,    94,     0,    95,    96,   145,
      92,    93,    94,     0,    95,    96,   145,    92,    93,    94,
       0,    95,    96,   108,   378,     0,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   333,     0,   108,     0,     0,    40,     0,     0,
       0,   180,   110,   111,   112,   113,   114,   115,   182,   110,
     111,   112,   113,   114,   115,     0,   110,   111,   112,   113,
     114,   115,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
     324,   250,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   324,   250,     1,     0,     0,     0,
       0,     0,    42,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,   165,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   365,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     1,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       0,    68,    68,    83,    73,    27,   191,    74,    97,   120,
      74,    85,   320,    48,   102,    52,    42,    97,    77,     5,
      78,    46,    81,     5,   153,     5,    72,    46,    28,    29,
       5,   107,   108,    33,    34,    35,     5,   252,    64,    76,
      77,    78,    67,    65,    81,    74,     5,    72,    70,   108,
      14,    15,    70,    72,     5,     5,    74,    72,    80,    88,
      88,    19,     5,    83,     5,    89,    74,    74,    69,   198,
      71,   108,   287,    73,    94,    95,    96,    97,   167,   146,
       5,    67,    90,    90,    68,    67,   394,   167,    89,    88,
      76,   179,    67,    73,   158,   162,   281,   282,   186,   173,
     120,    76,    88,    72,   180,   163,   182,    67,   219,   220,
     221,   187,   188,   189,   139,    90,    67,    89,    69,    83,
      84,   180,    72,   182,    67,    76,   163,   153,   204,    87,
      37,   153,    73,    76,    67,    74,   203,    67,    74,    46,
      47,    67,    67,   180,    69,   182,    37,   167,    77,    78,
     217,    90,    90,   242,    90,    46,    47,    68,    67,    76,
      69,   237,   242,    74,    81,    82,   191,    76,    68,    76,
      68,   238,   198,    67,    74,    69,    74,     5,   289,   246,
     246,   270,    68,   250,   180,    68,   182,   275,    74,    90,
     270,    74,   259,    75,    67,   262,    69,    73,    74,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   252,    68,    68,
      73,    74,   242,   249,    74,    74,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    68,    68,     9,    10,
      11,    85,    74,    74,    86,    67,   268,    69,    18,   249,
     270,    12,    13,   320,   320,    68,   256,   345,   346,   347,
     286,    70,   331,    16,    17,   332,    73,    74,    74,   289,
      73,    74,   348,   349,   350,    42,   356,     5,     6,     7,
       8,    70,    10,    11,   351,    52,   286,   354,   376,    88,
     378,   222,   223,   360,   360,    89,    67,    64,    69,   387,
      71,    88,   390,    60,   392,   224,   225,    74,    90,    76,
      77,    78,   230,   231,    81,     5,     6,     7,     8,    68,
      10,    11,   226,   227,   228,   229,     5,   394,   394,     5,
       5,   331,     5,    70,    70,    68,   356,    68,    67,    67,
      70,   108,    68,    68,     4,    72,    70,    75,    76,    77,
      78,    79,    80,    70,    70,    70,    68,    70,    90,    70,
     232,   235,    90,   233,    65,   234,    76,   256,   236,   268,
      57,   139,   351,    35,    -1,    -1,   247,    67,    -1,    69,
      -1,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,   158,    -1,    -1,    -1,   162,   163,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   180,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,    10,    11,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,     5,     6,     7,     8,    67,
      10,    11,    70,    -1,    90,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,    90,    10,    11,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      90,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    33,    -1,
      -1,    -1,    37,     5,     6,     7,     8,    -1,    10,    11,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    33,    -1,    -1,    -1,
      37,     5,     6,     7,     8,    -1,    10,    11,    -1,    46,
      47,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    -1,
      67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    37,     5,     6,
       7,     8,    -1,    10,    11,    -1,    46,    47,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,     5,     6,
       7,     8,    -1,    10,    11,    75,    76,    77,    78,    79,
      80,    -1,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
      67,    10,    11,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      67,     5,     6,     7,     8,    72,    10,    11,    75,    76,
      77,    78,    79,    80,    67,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,     5,     6,     7,     8,    -1,    10,    11,     5,
       6,     7,     8,    -1,    10,    11,     5,     6,     7,     8,
      -1,    10,    11,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    67,    -1,    -1,     5,    -1,    -1,
      -1,    67,    75,    76,    77,    78,    79,    80,    67,    75,
      76,    77,    78,    79,    80,    -1,    75,    76,    77,    78,
      79,    80,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    30,    -1,    -1,    -1,
      -1,    -1,    76,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    73,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   113,   114,   117,   118,
     119,   120,   126,   129,   130,   156,   157,   158,     5,    72,
       5,    67,    76,    90,   115,   116,   131,   132,   133,   114,
     114,     5,    72,   114,   114,     0,   157,    72,     5,   127,
     128,   131,   129,   133,   134,    74,    90,    72,    89,   113,
     114,   149,   159,    67,    69,   132,    72,   118,   121,   122,
     123,   129,   127,    89,    73,    74,    68,   129,   133,   116,
     131,     5,     6,     7,     8,    10,    11,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    73,
      75,    76,    77,    78,    79,    80,    90,    92,    93,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   111,   113,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     5,    72,   109,   142,   113,
     149,     5,    68,   114,   135,   136,   137,   138,    33,    70,
      76,   109,   134,   121,   123,    73,   122,    88,   124,   125,
     131,   123,    73,    74,    95,   108,   112,    73,   128,    88,
      67,    95,    67,    95,    95,   112,    88,    67,    67,    67,
     147,    67,     5,    90,    90,    90,   111,   111,   123,   139,
       9,    10,    11,    67,    69,    71,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    89,   110,    97,    76,
      81,    82,    77,    78,    12,    13,    14,    15,    83,    84,
      16,    17,    75,    85,    86,    18,    19,    87,    74,    90,
      73,   151,    69,    71,   142,   143,   144,   145,   146,    67,
      69,   131,   133,   140,   141,    68,    74,    68,    74,   134,
      70,    70,    33,    70,    76,   109,    73,   112,    74,    90,
      88,    73,   147,   139,   139,    88,   147,   111,   111,   111,
      60,   113,   152,    90,    90,    68,    67,   133,   140,    68,
       5,    68,    94,   109,   111,     5,   109,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   103,   104,   105,   106,   111,   109,   112,     5,    73,
      74,   142,    89,   146,    68,   135,   140,    70,    76,   109,
     141,    67,    69,    55,   137,     5,   109,   109,    70,    70,
     125,   112,    68,    68,   147,    68,    68,    68,    67,   152,
     152,    72,    97,    68,    74,    70,    88,    70,    73,   142,
     144,    68,    68,    70,    70,    68,   135,    70,    76,   109,
      70,    70,   147,   147,   147,   111,    68,   111,    68,   111,
     143,   109,   108,   142,    68,    70,    70,     4,    68,   147,
      68,   147,    68,    73,    74,   147,    90,   147,   147,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   120,   121,   121,   122,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   144,   145,   145,   146,   146,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   154,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     5,     6,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
| yyreduce -- Do a reduction.  |
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
      
#line 1799 "yacc.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 464 "yacc.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

